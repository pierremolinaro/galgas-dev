#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) :
mProperty_mEnumerationOrder (),
mProperty_mEnumeratedExpression (),
mProperty_mEnumeratorCppName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::~ GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2) :
mProperty_mEnumerationOrder (inOperand0),
mProperty_mEnumeratedExpression (inOperand1),
mProperty_mEnumeratorCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::constructor_new (const GALGAS_string & in_mEnumerationOrder,
                                                                                                                                                      const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                                      const GALGAS_string & in_mEnumeratorCppName,
                                                                                                                                                      Compiler * /* inCompiler */
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  if (in_mEnumerationOrder.isValid () && in_mEnumeratedExpression.isValid () && in_mEnumeratorCppName.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (in_mEnumerationOrder, in_mEnumeratedExpression, in_mEnumeratorCppName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumerationOrder.objectCompare (inOperand.mProperty_mEnumerationOrder) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumeratedExpression.objectCompare (inOperand.mProperty_mEnumeratedExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumeratorCppName.objectCompare (inOperand.mProperty_mEnumeratorCppName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::isValid (void) const {
  return mProperty_mEnumerationOrder.isValid () && mProperty_mEnumeratedExpression.isValid () && mProperty_mEnumeratorCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::drop (void) {
  mProperty_mEnumerationOrder.drop () ;
  mProperty_mEnumeratedExpression.drop () ;
  mProperty_mEnumeratorCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString += "<struct @forInstructionEnumeratedObjectListForGeneration-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ("forInstructionEnumeratedObjectListForGeneration-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element::GALGAS_optionalMethodActualArgumentList_2D_element (void) :
mProperty_mSelector (),
mProperty_mActualArgument () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element::~ GALGAS_optionalMethodActualArgumentList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element::GALGAS_optionalMethodActualArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_optionalMethodActualArgument & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mActualArgument (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element GALGAS_optionalMethodActualArgumentList_2D_element::constructor_new (const GALGAS_lstring & in_mSelector,
                                                                                                                        const GALGAS_optionalMethodActualArgument & in_mActualArgument,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList_2D_element result ;
  if (in_mSelector.isValid () && in_mActualArgument.isValid ()) {
    result = GALGAS_optionalMethodActualArgumentList_2D_element (in_mSelector, in_mActualArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionalMethodActualArgumentList_2D_element::objectCompare (const GALGAS_optionalMethodActualArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActualArgument.objectCompare (inOperand.mProperty_mActualArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgumentList_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mActualArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mActualArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString += "<struct @optionalMethodActualArgumentList-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionalMethodActualArgumentList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionalMethodActualArgumentList_2D_element ("optionalMethodActualArgumentList-element",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodActualArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodActualArgumentList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodActualArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodActualArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element GALGAS_optionalMethodActualArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList_2D_element result ;
  const GALGAS_optionalMethodActualArgumentList_2D_element * p = (const GALGAS_optionalMethodActualArgumentList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalMethodActualArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodActualArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element::~ GALGAS_logListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::constructor_new (const GALGAS_lstring & in_mLogMessage,
                                                                            const GALGAS_semanticExpressionAST & in_mLogExpression,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  if (in_mLogMessage.isValid () && in_mLogExpression.isValid ()) {
    result = GALGAS_logListAST_2D_element (in_mLogMessage, in_mLogExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_logListAST_2D_element::objectCompare (const GALGAS_logListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLogMessage.objectCompare (inOperand.mProperty_mLogMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLogExpression.objectCompare (inOperand.mProperty_mLogExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_logListAST_2D_element::isValid (void) const {
  return mProperty_mLogMessage.isValid () && mProperty_mLogExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST_2D_element::drop (void) {
  mProperty_mLogMessage.drop () ;
  mProperty_mLogExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST_2D_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString += "<struct @logListAST-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mLogMessage.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @logListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logListAST_2D_element ("logListAST-element",
                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  const GALGAS_logListAST_2D_element * p = (const GALGAS_logListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element::GALGAS_switchExtractedValuesListAST_2D_element (void) :
mProperty_mExtractedValueTypeName (),
mProperty_mExtractedValueName (),
mProperty_mMarkedAsUnused () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element::~ GALGAS_switchExtractedValuesListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element::GALGAS_switchExtractedValuesListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_bool & inOperand2) :
mProperty_mExtractedValueTypeName (inOperand0),
mProperty_mExtractedValueName (inOperand1),
mProperty_mMarkedAsUnused (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::constructor_new (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                                                                const GALGAS_lstring & in_mExtractedValueName,
                                                                                                                const GALGAS_bool & in_mMarkedAsUnused,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST_2D_element result ;
  if (in_mExtractedValueTypeName.isValid () && in_mExtractedValueName.isValid () && in_mMarkedAsUnused.isValid ()) {
    result = GALGAS_switchExtractedValuesListAST_2D_element (in_mExtractedValueTypeName, in_mExtractedValueName, in_mMarkedAsUnused) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_switchExtractedValuesListAST_2D_element::objectCompare (const GALGAS_switchExtractedValuesListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExtractedValueTypeName.objectCompare (inOperand.mProperty_mExtractedValueTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtractedValueName.objectCompare (inOperand.mProperty_mExtractedValueName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMarkedAsUnused.objectCompare (inOperand.mProperty_mMarkedAsUnused) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_switchExtractedValuesListAST_2D_element::isValid (void) const {
  return mProperty_mExtractedValueTypeName.isValid () && mProperty_mExtractedValueName.isValid () && mProperty_mMarkedAsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST_2D_element::drop (void) {
  mProperty_mExtractedValueTypeName.drop () ;
  mProperty_mExtractedValueName.drop () ;
  mProperty_mMarkedAsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString += "<struct @switchExtractedValuesListAST-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchExtractedValuesListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ("switchExtractedValuesListAST-element",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchExtractedValuesListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchExtractedValuesListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchExtractedValuesListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST_2D_element result ;
  const GALGAS_switchExtractedValuesListAST_2D_element * p = (const GALGAS_switchExtractedValuesListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchExtractedValuesListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mNonTerminalIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                                                const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  if (in_lkey.isValid () && in_mNonTerminalIndex.isValid ()) {
    result = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (in_lkey, in_mNonTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonTerminalIndex.objectCompare (inOperand.mProperty_mNonTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString += "<struct @unusedNonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unusedNonTerminalSymbolMapForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ("unusedNonTerminalSymbolMapForGrammarAnalysis-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element * p = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) :
mProperty_mNonTerminalSymbol (),
mProperty_mNonTerminalIndex (),
mProperty_mNonterminalSymbolParametersMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mProperty_mNonTerminalSymbol (inOperand0),
mProperty_mNonTerminalIndex (inOperand1),
mProperty_mNonterminalSymbolParametersMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                                                                                                  const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                                  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap,
                                                                                                                                                  Compiler * /* inCompiler */
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  if (in_mNonTerminalSymbol.isValid () && in_mNonTerminalIndex.isValid () && in_mNonterminalSymbolParametersMap.isValid ()) {
    result = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (in_mNonTerminalSymbol, in_mNonTerminalIndex, in_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mNonTerminalSymbol.objectCompare (inOperand.mProperty_mNonTerminalSymbol) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonTerminalIndex.objectCompare (inOperand.mProperty_mNonTerminalIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalSymbolParametersMap.objectCompare (inOperand.mProperty_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mNonTerminalSymbol.isValid () && mProperty_mNonTerminalIndex.isValid () && mProperty_mNonterminalSymbolParametersMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mNonTerminalSymbol.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
  mProperty_mNonterminalSymbolParametersMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString += "<struct @nonTerminalSymbolSortedListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mNonTerminalSymbol.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalSymbolSortedListForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ("nonTerminalSymbolSortedListForGrammarAnalysis-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element * p = (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) :
mProperty_mProductionRulesList (),
mProperty_mSyntaxComponentName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::~ GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1) :
mProperty_mProductionRulesList (inOperand0),
mProperty_mSyntaxComponentName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                                  const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                                                  Compiler * /* inCompiler */
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  if (in_mProductionRulesList.isValid () && in_mSyntaxComponentName.isValid ()) {
    result = GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (in_mProductionRulesList, in_mSyntaxComponentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProductionRulesList.objectCompare (inOperand.mProperty_mProductionRulesList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentName.objectCompare (inOperand.mProperty_mSyntaxComponentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mProductionRulesList.isValid () && mProperty_mSyntaxComponentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mProductionRulesList.drop () ;
  mProperty_mSyntaxComponentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString += "<struct @syntaxComponentListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mProductionRulesList.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxComponentListForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ("syntaxComponentListForGrammarAnalysis-element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element * p = (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mTerminalIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::~ GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTerminalIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                                const GALGAS_uint & in_mTerminalIndex,
                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  if (in_lkey.isValid () && in_mTerminalIndex.isValid ()) {
    result = GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (in_lkey, in_mTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalIndex.objectCompare (inOperand.mProperty_mTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminalIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminalIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString += "<struct @terminalSymbolsMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalSymbolsMapForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ("terminalSymbolsMapForGrammarAnalysis-element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element * p = (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::~ GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::GALGAS_extensionMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_extensionMethodMapForGlobalCheckings_2D_element (in_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForGlobalCheckings_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString += "<struct @extensionMethodMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForGlobalCheckings-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ("extensionMethodMapForGlobalCheckings-element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings_2D_element result ;
  const GALGAS_extensionMethodMapForGlobalCheckings_2D_element * p = (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionMethodMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::~ GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::GALGAS_extensionSetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_extensionSetterMapForGlobalCheckings_2D_element (in_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForGlobalCheckings_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString += "<struct @extensionSetterMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForGlobalCheckings-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ("extensionSetterMapForGlobalCheckings-element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings_2D_element result ;
  const GALGAS_extensionSetterMapForGlobalCheckings_2D_element * p = (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionSetterMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::~ GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::GALGAS_extensionGetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_extensionGetterMapForGlobalCheckings_2D_element (in_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForGlobalCheckings_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString += "<struct @extensionGetterMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForGlobalCheckings-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ("extensionGetterMapForGlobalCheckings-element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings_2D_element result ;
  const GALGAS_extensionGetterMapForGlobalCheckings_2D_element * p = (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionGetterMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) :
mProperty_mFeatureName (),
mProperty_mFeatureValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element::~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1) :
mProperty_mFeatureName (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::constructor_new (const GALGAS_lstring & in_mFeatureName,
                                                                                                                    const GALGAS_lstring & in_mFeatureValue,
                                                                                                                    Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  if (in_mFeatureName.isValid () && in_mFeatureValue.isValid ()) {
    result = GALGAS_galgas_33_QualifiedFeatureList_2D_element (in_mFeatureName, in_mFeatureValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_galgas_33_QualifiedFeatureList_2D_element::objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFeatureName.objectCompare (inOperand.mProperty_mFeatureName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFeatureValue.objectCompare (inOperand.mProperty_mFeatureValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_galgas_33_QualifiedFeatureList_2D_element::isValid (void) const {
  return mProperty_mFeatureName.isValid () && mProperty_mFeatureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::drop (void) {
  mProperty_mFeatureName.drop () ;
  mProperty_mFeatureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString += "<struct @galgas3QualifiedFeatureList-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mFeatureName.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @galgas3QualifiedFeatureList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ("galgas3QualifiedFeatureList-element",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  const GALGAS_galgas_33_QualifiedFeatureList_2D_element * p = (const GALGAS_galgas_33_QualifiedFeatureList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_QualifiedFeatureList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInclusion (),
mProperty_mHeaderString () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element::~ GALGAS_headerCompositionMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_stringset & inOperand1,
                                                                                const GALGAS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInclusion (inOperand1),
mProperty_mHeaderString (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                const GALGAS_stringset & in_mInclusion,
                                                                                                const GALGAS_string & in_mHeaderString,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  if (in_lkey.isValid () && in_mInclusion.isValid () && in_mHeaderString.isValid ()) {
    result = GALGAS_headerCompositionMap_2D_element (in_lkey, in_mInclusion, in_mHeaderString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_headerCompositionMap_2D_element::objectCompare (const GALGAS_headerCompositionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInclusion.objectCompare (inOperand.mProperty_mInclusion) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHeaderString.objectCompare (inOperand.mProperty_mHeaderString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_headerCompositionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInclusion.isValid () && mProperty_mHeaderString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInclusion.drop () ;
  mProperty_mHeaderString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString += "<struct @headerCompositionMap-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mInclusion.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mHeaderString.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @headerCompositionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ("headerCompositionMap-element",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerCompositionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerCompositionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerCompositionMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  const GALGAS_headerCompositionMap_2D_element * p = (const GALGAS_headerCompositionMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_headerCompositionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mHeaderFileName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element::~ GALGAS_headerRepartitionMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mHeaderFileName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                const GALGAS_string & in_mHeaderFileName,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  if (in_lkey.isValid () && in_mHeaderFileName.isValid ()) {
    result = GALGAS_headerRepartitionMap_2D_element (in_lkey, in_mHeaderFileName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_headerRepartitionMap_2D_element::objectCompare (const GALGAS_headerRepartitionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHeaderFileName.objectCompare (inOperand.mProperty_mHeaderFileName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_headerRepartitionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mHeaderFileName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mHeaderFileName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString += "<struct @headerRepartitionMap-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mHeaderFileName.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @headerRepartitionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ("headerRepartitionMap-element",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerRepartitionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerRepartitionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerRepartitionMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  const GALGAS_headerRepartitionMap_2D_element * p = (const GALGAS_headerRepartitionMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_headerRepartitionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (void) :
mProperty_lkey (),
mProperty_mFeatureValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element::~ GALGAS_projectQualifiedFeatureMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                            const GALGAS_lstring & in_mFeatureValue,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  if (in_lkey.isValid () && in_mFeatureValue.isValid ()) {
    result = GALGAS_projectQualifiedFeatureMap_2D_element (in_lkey, in_mFeatureValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_projectQualifiedFeatureMap_2D_element::objectCompare (const GALGAS_projectQualifiedFeatureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFeatureValue.objectCompare (inOperand.mProperty_mFeatureValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_projectQualifiedFeatureMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFeatureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFeatureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString += "<struct @projectQualifiedFeatureMap-element:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @projectQualifiedFeatureMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ("projectQualifiedFeatureMap-element",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_projectQualifiedFeatureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_projectQualifiedFeatureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectQualifiedFeatureMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  const GALGAS_projectQualifiedFeatureMap_2D_element * p = (const GALGAS_projectQualifiedFeatureMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_projectQualifiedFeatureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralUIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInt.printNonNullClassInstanceProperties ("mLiteralInt") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralUIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralUIntExpressionAST * p = (const cPtr_templateLiteralUIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInt.objectCompare (p->mProperty_mLiteralInt) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralUIntExpressionAST::objectCompare (const GALGAS_templateLiteralUIntExpressionAST & inOperand) const {
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

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mLiteralInt
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralUIntExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GALGAS_lbigint & in_mLiteralInt
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralInt (in_mLiteralInt) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString += "[@templateLiteralUIntExpressionAST:" ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralUIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mProperty_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateLiteralUIntExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  const GALGAS_templateLiteralUIntExpressionAST * p = (const GALGAS_templateLiteralUIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateLiteralUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralCharExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralChar.printNonNullClassInstanceProperties ("mLiteralChar") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralCharExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralCharExpressionAST * p = (const cPtr_templateLiteralCharExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralChar.objectCompare (p->mProperty_mLiteralChar) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralCharExpressionAST::objectCompare (const GALGAS_templateLiteralCharExpressionAST & inOperand) const {
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

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (const cPtr_templateLiteralCharExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralCharExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::constructor_new (const GALGAS_lchar & inAttribute_mLiteralChar
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST result ;
  if (inAttribute_mLiteralChar.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralCharExpressionAST (inAttribute_mLiteralChar COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_templateLiteralCharExpressionAST::readProperty_mLiteralChar (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_templateLiteralCharExpressionAST * p = (cPtr_templateLiteralCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
    return p->mProperty_mLiteralChar ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralCharExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (const GALGAS_lchar & in_mLiteralChar
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralChar (in_mLiteralChar) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

void cPtr_templateLiteralCharExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString += "[@templateLiteralCharExpressionAST:" ;
  mProperty_mLiteralChar.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralCharExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralCharExpressionAST (mProperty_mLiteralChar COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateLiteralCharExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ("templateLiteralCharExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralCharExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST result ;
  const GALGAS_templateLiteralCharExpressionAST * p = (const GALGAS_templateLiteralCharExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateLiteralCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralDouble.printNonNullClassInstanceProperties ("mLiteralDouble") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralDoubleExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralDoubleExpressionAST * p = (const cPtr_templateLiteralDoubleExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralDouble.objectCompare (p->mProperty_mLiteralDouble) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralDoubleExpressionAST::objectCompare (const GALGAS_templateLiteralDoubleExpressionAST & inOperand) const {
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

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::constructor_new (const GALGAS_ldouble & inAttribute_mLiteralDouble
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  if (inAttribute_mLiteralDouble.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralDoubleExpressionAST (inAttribute_mLiteralDouble COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_templateLiteralDoubleExpressionAST::readProperty_mLiteralDouble (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ldouble () ;
  }else{
    cPtr_templateLiteralDoubleExpressionAST * p = (cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
    return p->mProperty_mLiteralDouble ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (const GALGAS_ldouble & in_mLiteralDouble
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralDouble (in_mLiteralDouble) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

void cPtr_templateLiteralDoubleExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@templateLiteralDoubleExpressionAST:" ;
  mProperty_mLiteralDouble.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralDoubleExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralDoubleExpressionAST (mProperty_mLiteralDouble COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateLiteralDoubleExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ("templateLiteralDoubleExpressionAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  const GALGAS_templateLiteralDoubleExpressionAST * p = (const GALGAS_templateLiteralDoubleExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateLiteralDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_templateGrammar [51] = {
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
  "<select_templateSyntax_36>",// Index 49
  "<>"// Index 50
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int32_t gActionTable_templateGrammar [] = {
// State S0 (index = 0)
  C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (82)
, END
// State S1 (index = 17)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S2 (index = 42)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (22)
, END
// State S3 (index = 73)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (23)
, END
// State S4 (index = 104)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S5 (index = 129)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S6 (index = 154)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (32)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (33)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (90)
, END
// State S7 (index = 161)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S8 (index = 186)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (82)
, END
// State S9 (index = 203)
, C_Lexique_galgasTemplateScanner::kToken_, ACCEPT
, END
// State S10 (index = 206)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (26)
, END
// State S11 (index = 209)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S12 (index = 234)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (38)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (9)
, END
// State S13 (index = 315)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S14 (index = 340)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S15 (index = 365)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S16 (index = 390)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (11)
, END
// State S17 (index = 469)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (12)
, END
// State S18 (index = 548)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (13)
, END
// State S19 (index = 627)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (14)
, END
// State S20 (index = 706)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (15)
, END
// State S21 (index = 785)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (42)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (58)
, END
// State S22 (index = 866)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken_template, SHIFT (44)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (45)
, C_Lexique_galgasTemplateScanner::kToken_filewrapper, SHIFT (46)
, C_Lexique_galgasTemplateScanner::kToken_option, SHIFT (47)
, END
// State S23 (index = 899)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (21)
, END
// State S24 (index = 930)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (51)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (35)
, END
// State S25 (index = 977)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (38)
, END
// State S26 (index = 1026)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, SHIFT (55)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, SHIFT (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, SHIFT (57)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, SHIFT (58)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (59)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (60)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (40)
, END
// State S27 (index = 1087)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (63)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (64)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (47)
, END
// State S28 (index = 1156)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (69)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (52)
, END
// State S29 (index = 1231)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_is, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (56)
, END
// State S30 (index = 1310)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (74)
, END
// State S31 (index = 1313)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (75)
, END
// State S32 (index = 1316)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (92)
, END
// State S33 (index = 1319)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (91)
, END
// State S34 (index = 1322)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (76)
, END
// State S35 (index = 1325)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (109)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (78)
, END
// State S36 (index = 1330)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (83)
, END
// State S37 (index = 1333)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (6)
, END
// State S38 (index = 1408)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (80)
, END
// State S39 (index = 1415)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (7)
, END
// State S40 (index = 1490)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (8)
, END
// State S41 (index = 1565)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (83)
, END
// State S42 (index = 1568)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (42)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (58)
, END
// State S43 (index = 1649)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (16)
, END
// State S44 (index = 1728)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S45 (index = 1753)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (86)
, END
// State S46 (index = 1756)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (87)
, END
// State S47 (index = 1759)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (88)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (89)
, END
// State S48 (index = 1764)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (91)
, END
// State S49 (index = 1767)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (17)
, END
// State S50 (index = 1846)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S51 (index = 1871)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S52 (index = 1896)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (0)
, END
// State S53 (index = 1939)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S54 (index = 1964)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (1)
, END
// State S55 (index = 2011)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S56 (index = 2036)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S57 (index = 2061)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S58 (index = 2086)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S59 (index = 2111)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S60 (index = 2136)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S61 (index = 2161)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (2)
, END
// State S62 (index = 2210)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S63 (index = 2235)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S64 (index = 2260)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S65 (index = 2285)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S66 (index = 2310)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (3)
, END
// State S67 (index = 2371)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S68 (index = 2396)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S69 (index = 2421)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S70 (index = 2446)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (4)
, END
// State S71 (index = 2515)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (108)
, END
// State S72 (index = 2518)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, SHIFT (109)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, SHIFT (110)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (111)
, END
// State S73 (index = 2525)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (5)
, END
// State S74 (index = 2600)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (72)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S75 (index = 2617)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S76 (index = 2638)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (117)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (118)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (119)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (120)
, END
// State S77 (index = 2647)
, C_Lexique_galgasTemplateScanner::kToken_before, SHIFT (122)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (93)
, END
// State S78 (index = 2652)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (124)
, END
// State S79 (index = 2655)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (126)
, END
// State S80 (index = 2658)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S81 (index = 2683)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (128)
, END
// State S82 (index = 2686)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (20)
, END
// State S83 (index = 2691)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (10)
, END
// State S84 (index = 2770)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (59)
, END
// State S85 (index = 2849)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (129)
, END
// State S86 (index = 2852)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (80)
, END
// State S87 (index = 2859)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (131)
, END
// State S88 (index = 2862)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (132)
, END
// State S89 (index = 2865)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (133)
, END
// State S90 (index = 2868)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (134)
, END
// State S91 (index = 2871)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (80)
, END
// State S92 (index = 2878)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (51)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (35)
, END
// State S93 (index = 2925)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (51)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (35)
, END
// State S94 (index = 2972)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (38)
, END
// State S95 (index = 3021)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (41)
, END
// State S96 (index = 3070)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (42)
, END
// State S97 (index = 3119)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (43)
, END
// State S98 (index = 3168)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (44)
, END
// State S99 (index = 3217)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (45)
, END
// State S100 (index = 3266)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (46)
, END
// State S101 (index = 3315)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (63)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (64)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (47)
, END
// State S102 (index = 3384)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (63)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (64)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (47)
, END
// State S103 (index = 3453)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (63)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (64)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (47)
, END
// State S104 (index = 3522)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (63)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (64)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (47)
, END
// State S105 (index = 3591)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (69)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (52)
, END
// State S106 (index = 3666)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (69)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (52)
, END
// State S107 (index = 3741)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (69)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (52)
, END
// State S108 (index = 3816)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (56)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (56)
, END
// State S109 (index = 3893)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (67)
, END
// State S110 (index = 3896)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (68)
, END
// State S111 (index = 3899)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (69)
, END
// State S112 (index = 3902)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (147)
, END
// State S113 (index = 3905)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (72)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S114 (index = 3922)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (149)
, END
// State S115 (index = 3925)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S116 (index = 3946)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (74)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (151)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (74)
, END
// State S117 (index = 3953)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, REDUCE (28)
, END
// State S118 (index = 3962)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, REDUCE (29)
, END
// State S119 (index = 3971)
, C_Lexique_galgasTemplateScanner::kToken_in, SHIFT (153)
, END
// State S120 (index = 3974)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (154)
, END
// State S121 (index = 3977)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (117)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (118)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (86)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (120)
, END
// State S122 (index = 3986)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S123 (index = 4003)
, C_Lexique_galgasTemplateScanner::kToken_do, SHIFT (159)
, END
// State S124 (index = 4006)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (160)
, END
// State S125 (index = 4013)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (162)
, END
// State S126 (index = 4016)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (33)
, END
// State S127 (index = 4047)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (80)
, END
// State S128 (index = 4054)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (18)
, END
// State S129 (index = 4133)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (80)
, END
// State S130 (index = 4140)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (165)
, END
// State S131 (index = 4143)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (166)
, END
// State S132 (index = 4146)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (167)
, END
// State S133 (index = 4149)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (168)
, END
// State S134 (index = 4152)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (64)
, END
// State S135 (index = 4231)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (169)
, END
// State S136 (index = 4234)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (36)
, END
// State S137 (index = 4277)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (37)
, END
// State S138 (index = 4320)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (39)
, END
// State S139 (index = 4367)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (48)
, END
// State S140 (index = 4428)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (49)
, END
// State S141 (index = 4489)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (50)
, END
// State S142 (index = 4550)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (51)
, END
// State S143 (index = 4611)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (53)
, END
// State S144 (index = 4680)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (54)
, END
// State S145 (index = 4749)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (55)
, END
// State S146 (index = 4818)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (57)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (57)
, END
// State S147 (index = 4893)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (19)
, END
// State S148 (index = 4972)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (73)
, END
// State S149 (index = 4975)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (24)
, END
// State S150 (index = 5006)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (77)
, END
// State S151 (index = 5013)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S152 (index = 5038)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_else, SHIFT (171)
, END
// State S153 (index = 5043)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S154 (index = 5068)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, REDUCE (27)
, END
// State S155 (index = 5077)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (117)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (118)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (86)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (120)
, END
// State S156 (index = 5086)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (175)
, END
// State S157 (index = 5089)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (95)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S158 (index = 5106)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (94)
, END
// State S159 (index = 5109)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (177)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (97)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (97)
, END
// State S160 (index = 5132)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (179)
, END
// State S161 (index = 5135)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (180)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (115)
, END
// State S162 (index = 5140)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (111)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (111)
, END
// State S163 (index = 5159)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (71)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (71)
, END
// State S164 (index = 5164)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (184)
, END
// State S165 (index = 5167)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (61)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (61)
, END
// State S166 (index = 5246)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (80)
, END
// State S167 (index = 5253)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (65)
, END
// State S168 (index = 5256)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (186)
, END
// State S169 (index = 5259)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (63)
, END
// State S170 (index = 5338)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (187)
, END
// State S171 (index = 5341)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (80)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S172 (index = 5358)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (190)
, END
// State S173 (index = 5361)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (191)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (84)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (84)
, END
// State S174 (index = 5368)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (87)
, END
// State S175 (index = 5371)
, C_Lexique_galgasTemplateScanner::kToken_in, SHIFT (193)
, END
// State S176 (index = 5374)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (96)
, END
// State S177 (index = 5377)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (194)
, END
// State S178 (index = 5380)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S179 (index = 5401)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (113)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (160)
, END
// State S180 (index = 5408)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (198)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (199)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (200)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (123)
, END
// State S181 (index = 5419)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (34)
, END
// State S182 (index = 5422)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (111)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (111)
, END
// State S183 (index = 5441)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (109)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (78)
, END
// State S184 (index = 5446)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (60)
, END
// State S185 (index = 5525)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (205)
, END
// State S186 (index = 5528)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (66)
, END
// State S187 (index = 5531)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S188 (index = 5552)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (80)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S189 (index = 5569)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (79)
, END
// State S190 (index = 5572)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (25)
, END
// State S191 (index = 5603)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (208)
, END
// State S192 (index = 5606)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (30)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (30)
, END
// State S193 (index = 5611)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (22)
, END
// State S194 (index = 5636)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (210)
, END
// State S195 (index = 5639)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (99)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S196 (index = 5660)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_between, SHIFT (212)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (101)
, END
// State S197 (index = 5667)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (114)
, END
// State S198 (index = 5672)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (120)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (120)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (120)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, REDUCE (120)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (120)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (120)
, END
// State S199 (index = 5685)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (214)
, END
// State S200 (index = 5688)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (122)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (122)
, END
// State S201 (index = 5693)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (198)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (117)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (199)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (200)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (123)
, END
// State S202 (index = 5706)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (124)
, C_Lexique_galgasTemplateScanner::kToken_unused, SHIFT (217)
, END
// State S203 (index = 5711)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (112)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (112)
, END
// State S204 (index = 5716)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (110)
, END
// State S205 (index = 5719)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (62)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (62)
, END
// State S206 (index = 5798)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (74)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (151)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (74)
, END
// State S207 (index = 5805)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (81)
, END
// State S208 (index = 5808)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (85)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (85)
, END
// State S209 (index = 5813)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (220)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (88)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (88)
, END
// State S210 (index = 5820)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (98)
, END
// State S211 (index = 5841)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (100)
, END
// State S212 (index = 5848)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S213 (index = 5867)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (105)
, C_Lexique_galgasTemplateScanner::kToken_after, SHIFT (224)
, END
// State S214 (index = 5872)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (119)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (119)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (119)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, REDUCE (119)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (119)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (119)
, END
// State S215 (index = 5885)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (226)
, END
// State S216 (index = 5888)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (198)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (117)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, SHIFT (199)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (200)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (123)
, END
// State S217 (index = 5901)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (125)
, END
// State S218 (index = 5904)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (228)
, END
// State S219 (index = 5907)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (75)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (75)
, END
// State S220 (index = 5912)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (229)
, END
// State S221 (index = 5915)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (31)
, END
// State S222 (index = 5920)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S223 (index = 5939)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (102)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (102)
, END
// State S224 (index = 5944)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (107)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S225 (index = 5961)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (233)
, END
// State S226 (index = 5964)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (116)
, END
// State S227 (index = 5967)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (118)
, END
// State S228 (index = 5970)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (121)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (121)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (121)
, C_Lexique_galgasTemplateScanner::kToken_literalInt, REDUCE (121)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (121)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (121)
, END
// State S229 (index = 5983)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (89)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (89)
, END
// State S230 (index = 5988)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (104)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (104)
, END
// State S231 (index = 5993)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (107)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S232 (index = 6010)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (106)
, END
// State S233 (index = 6013)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (32)
, END
// State S234 (index = 6044)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (108)
, END} ;

static const uint32_t gActionTableIndex_templateGrammar [235] = {
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
, 315  // S13
, 340  // S14
, 365  // S15
, 390  // S16
, 469  // S17
, 548  // S18
, 627  // S19
, 706  // S20
, 785  // S21
, 866  // S22
, 899  // S23
, 930  // S24
, 977  // S25
, 1026  // S26
, 1087  // S27
, 1156  // S28
, 1231  // S29
, 1310  // S30
, 1313  // S31
, 1316  // S32
, 1319  // S33
, 1322  // S34
, 1325  // S35
, 1330  // S36
, 1333  // S37
, 1408  // S38
, 1415  // S39
, 1490  // S40
, 1565  // S41
, 1568  // S42
, 1649  // S43
, 1728  // S44
, 1753  // S45
, 1756  // S46
, 1759  // S47
, 1764  // S48
, 1767  // S49
, 1846  // S50
, 1871  // S51
, 1896  // S52
, 1939  // S53
, 1964  // S54
, 2011  // S55
, 2036  // S56
, 2061  // S57
, 2086  // S58
, 2111  // S59
, 2136  // S60
, 2161  // S61
, 2210  // S62
, 2235  // S63
, 2260  // S64
, 2285  // S65
, 2310  // S66
, 2371  // S67
, 2396  // S68
, 2421  // S69
, 2446  // S70
, 2515  // S71
, 2518  // S72
, 2525  // S73
, 2600  // S74
, 2617  // S75
, 2638  // S76
, 2647  // S77
, 2652  // S78
, 2655  // S79
, 2658  // S80
, 2683  // S81
, 2686  // S82
, 2691  // S83
, 2770  // S84
, 2849  // S85
, 2852  // S86
, 2859  // S87
, 2862  // S88
, 2865  // S89
, 2868  // S90
, 2871  // S91
, 2878  // S92
, 2925  // S93
, 2972  // S94
, 3021  // S95
, 3070  // S96
, 3119  // S97
, 3168  // S98
, 3217  // S99
, 3266  // S100
, 3315  // S101
, 3384  // S102
, 3453  // S103
, 3522  // S104
, 3591  // S105
, 3666  // S106
, 3741  // S107
, 3816  // S108
, 3893  // S109
, 3896  // S110
, 3899  // S111
, 3902  // S112
, 3905  // S113
, 3922  // S114
, 3925  // S115
, 3946  // S116
, 3953  // S117
, 3962  // S118
, 3971  // S119
, 3974  // S120
, 3977  // S121
, 3986  // S122
, 4003  // S123
, 4006  // S124
, 4013  // S125
, 4016  // S126
, 4047  // S127
, 4054  // S128
, 4133  // S129
, 4140  // S130
, 4143  // S131
, 4146  // S132
, 4149  // S133
, 4152  // S134
, 4231  // S135
, 4234  // S136
, 4277  // S137
, 4320  // S138
, 4367  // S139
, 4428  // S140
, 4489  // S141
, 4550  // S142
, 4611  // S143
, 4680  // S144
, 4749  // S145
, 4818  // S146
, 4893  // S147
, 4972  // S148
, 4975  // S149
, 5006  // S150
, 5013  // S151
, 5038  // S152
, 5043  // S153
, 5068  // S154
, 5077  // S155
, 5086  // S156
, 5089  // S157
, 5106  // S158
, 5109  // S159
, 5132  // S160
, 5135  // S161
, 5140  // S162
, 5159  // S163
, 5164  // S164
, 5167  // S165
, 5246  // S166
, 5253  // S167
, 5256  // S168
, 5259  // S169
, 5338  // S170
, 5341  // S171
, 5358  // S172
, 5361  // S173
, 5368  // S174
, 5371  // S175
, 5374  // S176
, 5377  // S177
, 5380  // S178
, 5401  // S179
, 5408  // S180
, 5419  // S181
, 5422  // S182
, 5441  // S183
, 5446  // S184
, 5525  // S185
, 5528  // S186
, 5531  // S187
, 5552  // S188
, 5569  // S189
, 5572  // S190
, 5603  // S191
, 5606  // S192
, 5611  // S193
, 5636  // S194
, 5639  // S195
, 5660  // S196
, 5667  // S197
, 5672  // S198
, 5685  // S199
, 5688  // S200
, 5693  // S201
, 5706  // S202
, 5711  // S203
, 5716  // S204
, 5719  // S205
, 5798  // S206
, 5805  // S207
, 5808  // S208
, 5813  // S209
, 5820  // S210
, 5841  // S211
, 5848  // S212
, 5867  // S213
, 5872  // S214
, 5885  // S215
, 5888  // S216
, 5901  // S217
, 5904  // S218
, 5907  // S219
, 5912  // S220
, 5915  // S221
, 5920  // S222
, 5939  // S223
, 5944  // S224
, 5961  // S225
, 5964  // S226
, 5967  // S227
, 5970  // S228
, 5983  // S229
, 5988  // S230
, 5993  // S231
, 6010  // S232
, 6013  // S233
, 6044  // S234
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

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

static const int32_t gSuccessorTable_templateGrammar_6 [3] = {33, 34, -1} ;

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

static const int32_t gSuccessorTable_templateGrammar_35 [3] = {42, 79, -1} ;

static const int32_t gSuccessorTable_templateGrammar_38 [5] = {7, 81,
  23, 82, -1} ;

static const int32_t gSuccessorTable_templateGrammar_42 [3] = {19, 84, -1} ;

static const int32_t gSuccessorTable_templateGrammar_44 [15] = {0, 85,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_47 [3] = {21, 90, -1} ;

static const int32_t gSuccessorTable_templateGrammar_50 [13] = {1, 92,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_51 [13] = {1, 93,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_53 [11] = {2, 94,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_55 [9] = {3, 95,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_56 [9] = {3, 96,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_57 [9] = {3, 97,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_58 [9] = {3, 98,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_59 [9] = {3, 99,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_60 [9] = {3, 100,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_62 [7] = {4, 101,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_63 [7] = {4, 102,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_64 [7] = {4, 103,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_65 [7] = {4, 104,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_67 [5] = {5, 105,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_68 [5] = {5, 106,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_69 [5] = {5, 107,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_72 [3] = {22, 112, -1} ;

static const int32_t gSuccessorTable_templateGrammar_74 [5] = {8, 113,
  24, 114, -1} ;

static const int32_t gSuccessorTable_templateGrammar_75 [5] = {8, 115,
  26, 116, -1} ;

static const int32_t gSuccessorTable_templateGrammar_76 [3] = {10, 121, -1} ;

static const int32_t gSuccessorTable_templateGrammar_77 [3] = {34, 123, -1} ;

static const int32_t gSuccessorTable_templateGrammar_78 [3] = {12, 125, -1} ;

static const int32_t gSuccessorTable_templateGrammar_80 [15] = {0, 127,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_86 [5] = {7, 130,
  23, 82, -1} ;

static const int32_t gSuccessorTable_templateGrammar_91 [5] = {7, 135,
  23, 82, -1} ;

static const int32_t gSuccessorTable_templateGrammar_92 [3] = {13, 136, -1} ;

static const int32_t gSuccessorTable_templateGrammar_93 [3] = {13, 137, -1} ;

static const int32_t gSuccessorTable_templateGrammar_94 [3] = {14, 138, -1} ;

static const int32_t gSuccessorTable_templateGrammar_101 [3] = {16, 139, -1} ;

static const int32_t gSuccessorTable_templateGrammar_102 [3] = {16, 140, -1} ;

static const int32_t gSuccessorTable_templateGrammar_103 [3] = {16, 141, -1} ;

static const int32_t gSuccessorTable_templateGrammar_104 [3] = {16, 142, -1} ;

static const int32_t gSuccessorTable_templateGrammar_105 [3] = {17, 143, -1} ;

static const int32_t gSuccessorTable_templateGrammar_106 [3] = {17, 144, -1} ;

static const int32_t gSuccessorTable_templateGrammar_107 [3] = {17, 145, -1} ;

static const int32_t gSuccessorTable_templateGrammar_108 [3] = {18, 146, -1} ;

static const int32_t gSuccessorTable_templateGrammar_113 [5] = {8, 113,
  24, 148, -1} ;

static const int32_t gSuccessorTable_templateGrammar_115 [5] = {8, 115,
  26, 150, -1} ;

static const int32_t gSuccessorTable_templateGrammar_116 [3] = {25, 152, -1} ;

static const int32_t gSuccessorTable_templateGrammar_121 [5] = {10, 155,
  31, 156, -1} ;

static const int32_t gSuccessorTable_templateGrammar_122 [5] = {8, 157,
  35, 158, -1} ;

static const int32_t gSuccessorTable_templateGrammar_124 [3] = {44, 161, -1} ;

static const int32_t gSuccessorTable_templateGrammar_127 [3] = {23, 163, -1} ;

static const int32_t gSuccessorTable_templateGrammar_129 [5] = {7, 164,
  23, 82, -1} ;

static const int32_t gSuccessorTable_templateGrammar_151 [15] = {0, 170,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_152 [3] = {27, 172, -1} ;

static const int32_t gSuccessorTable_templateGrammar_153 [15] = {0, 173,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_155 [5] = {10, 155,
  31, 174, -1} ;

static const int32_t gSuccessorTable_templateGrammar_157 [5] = {8, 157,
  35, 176, -1} ;

static const int32_t gSuccessorTable_templateGrammar_159 [3] = {36, 178, -1} ;

static const int32_t gSuccessorTable_templateGrammar_161 [3] = {45, 181, -1} ;

static const int32_t gSuccessorTable_templateGrammar_162 [5] = {8, 182,
  43, 183, -1} ;

static const int32_t gSuccessorTable_templateGrammar_166 [5] = {7, 185,
  23, 82, -1} ;

static const int32_t gSuccessorTable_templateGrammar_171 [5] = {8, 188,
  28, 189, -1} ;

static const int32_t gSuccessorTable_templateGrammar_173 [3] = {30, 192, -1} ;

static const int32_t gSuccessorTable_templateGrammar_178 [5] = {8, 195,
  37, 196, -1} ;

static const int32_t gSuccessorTable_templateGrammar_179 [3] = {44, 197, -1} ;

static const int32_t gSuccessorTable_templateGrammar_180 [5] = {47, 201,
  48, 202, -1} ;

static const int32_t gSuccessorTable_templateGrammar_182 [5] = {8, 182,
  43, 203, -1} ;

static const int32_t gSuccessorTable_templateGrammar_183 [3] = {42, 204, -1} ;

static const int32_t gSuccessorTable_templateGrammar_187 [5] = {8, 115,
  26, 206, -1} ;

static const int32_t gSuccessorTable_templateGrammar_188 [5] = {8, 188,
  28, 207, -1} ;

static const int32_t gSuccessorTable_templateGrammar_193 [15] = {0, 209,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_195 [5] = {8, 195,
  37, 211, -1} ;

static const int32_t gSuccessorTable_templateGrammar_196 [3] = {38, 213, -1} ;

static const int32_t gSuccessorTable_templateGrammar_201 [7] = {46, 215,
  47, 216,
  48, 202, -1} ;

static const int32_t gSuccessorTable_templateGrammar_202 [3] = {49, 218, -1} ;

static const int32_t gSuccessorTable_templateGrammar_206 [3] = {25, 219, -1} ;

static const int32_t gSuccessorTable_templateGrammar_209 [3] = {32, 221, -1} ;

static const int32_t gSuccessorTable_templateGrammar_212 [5] = {8, 222,
  39, 223, -1} ;

static const int32_t gSuccessorTable_templateGrammar_213 [3] = {40, 225, -1} ;

static const int32_t gSuccessorTable_templateGrammar_216 [7] = {46, 227,
  47, 216,
  48, 202, -1} ;

static const int32_t gSuccessorTable_templateGrammar_222 [5] = {8, 222,
  39, 230, -1} ;

static const int32_t gSuccessorTable_templateGrammar_224 [5] = {8, 231,
  41, 232, -1} ;

static const int32_t gSuccessorTable_templateGrammar_231 [5] = {8, 231,
  41, 234, -1} ;

static const int32_t * gSuccessorTable_templateGrammar [235] = {
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
  gSuccessorTable_templateGrammar_80, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_86, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_91, 
  gSuccessorTable_templateGrammar_92, gSuccessorTable_templateGrammar_93, gSuccessorTable_templateGrammar_94, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_101, gSuccessorTable_templateGrammar_102, gSuccessorTable_templateGrammar_103, 
  gSuccessorTable_templateGrammar_104, gSuccessorTable_templateGrammar_105, gSuccessorTable_templateGrammar_106, gSuccessorTable_templateGrammar_107, 
  gSuccessorTable_templateGrammar_108, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_113, nullptr, gSuccessorTable_templateGrammar_115, 
  gSuccessorTable_templateGrammar_116, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_121, gSuccessorTable_templateGrammar_122, nullptr, 
  gSuccessorTable_templateGrammar_124, nullptr, nullptr, gSuccessorTable_templateGrammar_127, 
  nullptr, gSuccessorTable_templateGrammar_129, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_151, 
  gSuccessorTable_templateGrammar_152, gSuccessorTable_templateGrammar_153, nullptr, gSuccessorTable_templateGrammar_155, 
  nullptr, gSuccessorTable_templateGrammar_157, nullptr, gSuccessorTable_templateGrammar_159, 
  nullptr, gSuccessorTable_templateGrammar_161, gSuccessorTable_templateGrammar_162, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_166, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_171, 
  nullptr, gSuccessorTable_templateGrammar_173, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_178, gSuccessorTable_templateGrammar_179, 
  gSuccessorTable_templateGrammar_180, nullptr, gSuccessorTable_templateGrammar_182, gSuccessorTable_templateGrammar_183, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_187, 
  gSuccessorTable_templateGrammar_188, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_193, nullptr, gSuccessorTable_templateGrammar_195, 
  gSuccessorTable_templateGrammar_196, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_201, gSuccessorTable_templateGrammar_202, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_206, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_209, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_212, gSuccessorTable_templateGrammar_213, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_216, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_222, nullptr, 
  gSuccessorTable_templateGrammar_224, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_231, 
  nullptr, nullptr, nullptr} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t gProductionsTable_templateGrammar [127 * 2] = {
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
  11, 5,
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
  32, 2,
  33, 0,
  33, 1,
  33, 1,
  34, 0,
  34, 2,
  35, 0,
  35, 2,
  36, 0,
  36, 3,
  37, 0,
  37, 2,
  38, 0,
  38, 2,
  39, 0,
  39, 2,
  40, 0,
  40, 2,
  41, 0,
  41, 2,
  42, 0,
  42, 5,
  43, 0,
  43, 2,
  44, 0,
  44, 3,
  45, 0,
  45, 4,
  46, 0,
  46, 2,
  47, 2,
  47, 1,
  47, 3,
  48, 1,
  48, 0,
  49, 0,
  49, 1,
  50, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'expression_tpl' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_expression_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_expression_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_expression_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'relation_term_tpl' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'relation_factor_tpl' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'simple_expression_tpl' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'term_tpl' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_term_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_term_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_term_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'factor_tpl' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_factor_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_5F_tpl_i5_parse(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_5F_tpl_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_5F_tpl_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_5F_tpl_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
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

void cGrammar_templateGrammar::nt_factor_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'primary_tpl' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_primary_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_5F_tpl_i9_parse(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_5F_tpl_i10_parse(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_5F_tpl_i11_parse(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_5F_tpl_i12_parse(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_5F_tpl_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_5F_tpl_i14_parse(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_5F_tpl_i15_parse(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_5F_tpl_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_5F_tpl_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_5F_tpl_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_5F_tpl_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
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

void cGrammar_templateGrammar::nt_primary_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'output_expression_list_tpl' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_ (GALGAS_templateExpressionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'template_instruction' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_template_5F_instruction_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_templateSyntax_template_5F_instruction_i21_parse(inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_template_5F_instruction_i22_parse(inLexique) ;
    break ;
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_parse(inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_parse(inLexique) ;
    break ;
  case 33 :
      rule_templateSyntax_template_5F_instruction_i33_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
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
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_indexing(inLexique) ;
    break ;
  case 33 :
      rule_templateSyntax_template_5F_instruction_i33_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
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
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_(parameter_1, inLexique) ;
    break ;
  case 33 :
      rule_templateSyntax_template_5F_instruction_i33_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'template_parser_start_symbol' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
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
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                     gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                     gProductionsTable_templateGrammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_galgasTemplateScanner * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, filePath COMMA_HERE)) ;
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
        message += "the '" ;
        message += filePath ;
        message += "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message += "the '" ;
      message += filePath ;
      message += "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    C_Lexique_galgasTemplateScanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'for_instruction_element' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_templateSyntax_for_5F_instruction_5F_element_i27_parse(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_for_5F_instruction_5F_element_i28_parse(inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_for_5F_instruction_5F_element_i29_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
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

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          'for_instruction_enumerated_object' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_templateInstructionForEnumerationAST &  parameter_1,
                                GALGAS_templateExpressionAST &  parameter_2,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'switch_case' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_switch_5F_case_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 34) {
  rule_templateSyntax_switch_5F_case_i34_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 34) {
  rule_templateSyntax_switch_5F_case_i34_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_ (GALGAS_lstringlist &  parameter_1,
                                GALGAS_switchExtractedValuesListAST &  parameter_2,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 34) {
  rule_templateSyntax_switch_5F_case_i34_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_0' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_0 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 35 36 37
  return inLexique->nextProductionIndex () - 34 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_1' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 38 39
  return inLexique->nextProductionIndex () - 37 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_2' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 40 41 42 43 44 45 46
  return inLexique->nextProductionIndex () - 39 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_3' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 47 48 49 50 51
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_4' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 52 53 54 55
  return inLexique->nextProductionIndex () - 51 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_5' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 56 57
  return inLexique->nextProductionIndex () - 55 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_6' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 58 59
  return inLexique->nextProductionIndex () - 57 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_7' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 60 61 62 63 64
  return inLexique->nextProductionIndex () - 59 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_8' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 65 66
  return inLexique->nextProductionIndex () - 64 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_9' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 67 68 69
  return inLexique->nextProductionIndex () - 66 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_10' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 70 71
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_11' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 72 73
  return inLexique->nextProductionIndex () - 71 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_12' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 74 75
  return inLexique->nextProductionIndex () - 73 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_13' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 76 77
  return inLexique->nextProductionIndex () - 75 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_14' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 78 79
  return inLexique->nextProductionIndex () - 77 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_15' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 80 81
  return inLexique->nextProductionIndex () - 79 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_16' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 82 83
  return inLexique->nextProductionIndex () - 81 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_17' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 84 85
  return inLexique->nextProductionIndex () - 83 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_18' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 86 87
  return inLexique->nextProductionIndex () - 85 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_19' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 88 89
  return inLexique->nextProductionIndex () - 87 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_20' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 90 91 92
  return inLexique->nextProductionIndex () - 89 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_21' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_22' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_23' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_24' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_25' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_26' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_27' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_28' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 107 108
  return inLexique->nextProductionIndex () - 106 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_29' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_29 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 109 110
  return inLexique->nextProductionIndex () - 108 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_30' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_30 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 111 112
  return inLexique->nextProductionIndex () - 110 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_31' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_31 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 113 114
  return inLexique->nextProductionIndex () - 112 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_32' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_32 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 115 116
  return inLexique->nextProductionIndex () - 114 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_33' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_33 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 117 118
  return inLexique->nextProductionIndex () - 116 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_34' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_34 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 119 120 121
  return inLexique->nextProductionIndex () - 118 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_35' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_35 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_36' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_36 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 124 125
  return inLexique->nextProductionIndex () - 123 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//--------------------------------------------------------------------------------------------------
// @templateInstructionExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionExpressionForGeneration * p = (const cPtr_templateInstructionExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionExpressionForGeneration::objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const {
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

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionForGeneration (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString += "[@templateInstructionExpressionForGeneration:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                   & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  const GALGAS_templateInstructionExpressionForGeneration * p = (const GALGAS_templateInstructionExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mTemplateVariableMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::~ GALGAS_templateAnalysisContext (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_templateVariableMap & inOperand2) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mTemplateVariableMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::constructor_new (const GALGAS_semanticContext & in_mSemanticContext,
                                                                                const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                                                                const GALGAS_templateVariableMap & in_mTemplateVariableMap,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  if (in_mSemanticContext.isValid () && in_mPredefinedTypes.isValid () && in_mTemplateVariableMap.isValid ()) {
    result = GALGAS_templateAnalysisContext (in_mSemanticContext, in_mPredefinedTypes, in_mTemplateVariableMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateAnalysisContext::objectCompare (const GALGAS_templateAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSemanticContext.objectCompare (inOperand.mProperty_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPredefinedTypes.objectCompare (inOperand.mProperty_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTemplateVariableMap.objectCompare (inOperand.mProperty_mTemplateVariableMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_templateAnalysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mTemplateVariableMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mTemplateVariableMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString += "<struct @templateAnalysisContext:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateAnalysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  const GALGAS_templateAnalysisContext * p = (const GALGAS_templateAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsPredefined.printNonNullClassInstanceProperties ("mIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mBoolOptionMap.printNonNullClassInstanceProperties ("mBoolOptionMap") ;
    mProperty_mUIntOptionMap.printNonNullClassInstanceProperties ("mUIntOptionMap") ;
    mProperty_mStringOptionMap.printNonNullClassInstanceProperties ("mStringOptionMap") ;
    mProperty_mStringListOptionMap.printNonNullClassInstanceProperties ("mStringListOptionMap") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_optionComponentForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBoolOptionMap.objectCompare (p->mProperty_mBoolOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUIntOptionMap.objectCompare (p->mProperty_mUIntOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringOptionMap.objectCompare (p->mProperty_mStringOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringListOptionMap.objectCompare (p->mProperty_mStringListOptionMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionComponentForGeneration::objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const {
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

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mOptionComponentName,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mBoolOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mUIntOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mStringOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mStringListOptionMap
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mBoolOptionMap.isValid () && inAttribute_mUIntOptionMap.isValid () && inAttribute_mStringOptionMap.isValid () && inAttribute_mStringListOptionMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionComponentForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mIsPredefined, inAttribute_mOptionComponentName, inAttribute_mBoolOptionMap, inAttribute_mUIntOptionMap, inAttribute_mStringOptionMap, inAttribute_mStringListOptionMap COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionComponentForGeneration::readProperty_mIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionComponentForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mBoolOptionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mBoolOptionMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mUIntOptionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mUIntOptionMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mStringOptionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringOptionMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mStringListOptionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringListOptionMap ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mOptionComponentName,
                                                                      const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mIsPredefined (in_mIsPredefined),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mBoolOptionMap (in_mBoolOptionMap),
mProperty_mUIntOptionMap (in_mUIntOptionMap),
mProperty_mStringOptionMap (in_mStringOptionMap),
mProperty_mStringListOptionMap (in_mStringListOptionMap) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

void cPtr_optionComponentForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString += "[@optionComponentForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mBoolOptionMap.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mUIntOptionMap.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStringOptionMap.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStringListOptionMap.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionMap, mProperty_mUIntOptionMap, mProperty_mStringOptionMap, mProperty_mStringListOptionMap COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionComponentForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentForGeneration ("optionComponentForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  const GALGAS_optionComponentForGeneration * p = (const GALGAS_optionComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionComponentForGeneration_2D_weak::objectCompare (const GALGAS_optionComponentForGeneration_2D_weak & inOperand) const {
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

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak & GALGAS_optionComponentForGeneration_2D_weak::operator = (const GALGAS_optionComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (const GALGAS_optionComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration_2D_weak::bang_optionComponentForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentForGeneration) ;
      result = GALGAS_optionComponentForGeneration ((cPtr_optionComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionComponentForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ("optionComponentForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration_2D_weak result ;
  const GALGAS_optionComponentForGeneration_2D_weak * p = (const GALGAS_optionComponentForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionComponentForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mDimension.printNonNullClassInstanceProperties ("mDimension") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayTypeForGeneration * p = (const cPtr_arrayTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeEntry.objectCompare (p->mProperty_mElementTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDimension.objectCompare (p->mProperty_mDimension) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayTypeForGeneration::objectCompare (const GALGAS_arrayTypeForGeneration & inOperand) const {
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

GALGAS_arrayTypeForGeneration::GALGAS_arrayTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration::GALGAS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                              const GALGAS_unifiedTypeMapEntry & inAttribute_mElementTypeEntry,
                                                                              const GALGAS_uint & inAttribute_mDimension
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mElementTypeEntry.isValid () && inAttribute_mDimension.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mElementTypeEntry, inAttribute_mDimension COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_arrayTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_arrayTypeForGeneration::readProperty_mDimension (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_mDimension ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                          const GALGAS_uint & in_mDimension
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (in_mElementTypeEntry),
mProperty_mDimension (in_mDimension) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

void cPtr_arrayTypeForGeneration::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString += "[@arrayTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mDimension.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDimension COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayTypeForGeneration ("arrayTypeForGeneration",
                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration result ;
  const GALGAS_arrayTypeForGeneration * p = (const GALGAS_arrayTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayTypeForGeneration_2D_weak::objectCompare (const GALGAS_arrayTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak & GALGAS_arrayTypeForGeneration_2D_weak::operator = (const GALGAS_arrayTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (const GALGAS_arrayTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak GALGAS_arrayTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration_2D_weak::bang_arrayTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayTypeForGeneration) ;
      result = GALGAS_arrayTypeForGeneration ((cPtr_arrayTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ("arrayTypeForGeneration-weak",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak GALGAS_arrayTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration_2D_weak result ;
  const GALGAS_arrayTypeForGeneration_2D_weak * p = (const GALGAS_arrayTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (GALGAS_localVarManager & ioObject,
                                                  const GALGAS_lstring constinArgument_inVarName,
                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GALGAS_string constinArgument_inCppName,
                                                  const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_none (SOURCE_FILE ("variable-manager.galgas", 29)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 24)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRule'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                  const GALGAS_string constinArgument_inSyntaxComponentName,
                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_currentNode_4930 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_1.addAssign_operation (var_currentNode_4930, GALGAS_string ("[firstPoint] {}")  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS_rowList var_rowArray_4969 = temp_0 ;
  GALGAS_string var_arrows_5031 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5057 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5087 = GALGAS_uint (uint32_t (1U)) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5110 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5152 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_5152.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5152.current_mInstruction (HERE).ptr (), var_rowArray_4969, GALGAS_uint (uint32_t (0U)), var_column_5087, var_currentNode_4930, var_arrowStyle_5057, var_arrows_5031, var_unusedMaxUsedRowIndex_5110, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 117)) ;
    enumerator_5152.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_5549 ;
  {
  extensionSetter_appendRow (var_rowArray_4969, GALGAS_string ("[lastPoint] {}"), GALGAS_uint (uint32_t (0U)), var_column_5087, var_lastNodeName_5549, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 129)) ;
  }
  var_arrows_5031.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_4930, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (var_lastNodeName_5549, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_5668 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)).add_operation (function_escapeForTex (var_loc_5668.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 135)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).add_operation (function_escapeForTex (var_loc_5668.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 138)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)) ;
  cEnumerator_rowList enumerator_6090 (var_rowArray_4969, kENUMERATION_DOWN) ;
  while (enumerator_6090.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)) ;
    cEnumerator__32_stringlist enumerator_6162 (enumerator_6090.current_columns (HERE), kENUMERATION_UP) ;
    while (enumerator_6162.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_6162.current (HERE).readProperty_mValue_30_ ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6162.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (enumerator_6162.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)) ;
      }
      enumerator_6162.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 150)) ;
    enumerator_6090.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5031, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 155)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 21)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 22)) ;
}


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ("galgas_cli_options",
                                         "checkEntityUsefulness",
                                         0,
                                         "check-usefulness",
                                         "Check Entity Usefulness") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ("galgas_cli_options",
                                         "check_big_int",
                                         0,
                                         "check-big-int",
                                         "Run bit integers checks") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ("galgas_cli_options",
                                         "displayUnicodeLexicalTestFunctions",
                                         0,
                                         "display-lexical-test-functions",
                                         "Display Unicode Lexical Test Functions") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ("galgas_cli_options",
                                         "emitClassGraph",
                                         0,
                                         "emit-class-graph",
                                         "Emit class graph in dot file") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ("galgas_cli_options",
                                         "emitSyntaxDiagrams",
                                         0,
                                         "emit-syntax-diagrams",
                                         "Emit grammar syntax diagrams in TEX files") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ("galgas_cli_options",
                                         "errorAnomynousForInstructionEnumeratedObject",
                                         0,
                                         "error-anonymous-for-instruction",
                                         "error on anonymous 'for' instruction enumerated object ('for () in ...')") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorClassDeclaration ("galgas_cli_options",
                                         "errorClassDeclaration",
                                         0,
                                         "error-class-declaration",
                                         "'class' declaration is obsolete use 'valueclass'") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ("galgas_cli_options",
                                         "errorEllipsisInEnumeratedObject",
                                         0,
                                         "error-ellipsis-in-for-instruction",
                                         "error on ellipsis in enumerated object ('for (x y ...) in xxx')") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall ("galgas_cli_options",
                                         "errorObsoleteGetterCall",
                                         0,
                                         "error-on-obsolete-getter-call",
                                         "error on call of an obsolete getter") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ("galgas_cli_options",
                                         "errorOldStyleCollectionInitializer",
                                         0,
                                         "error-old-syle-collection-initializer",
                                         "error on old style collection initializer") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ("galgas_cli_options",
                                         "errorOldStyleLocalVarDeclaration",
                                         0,
                                         "error-old-style-local-var-declaration",
                                         "error on old style local variable declaration") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ("galgas_cli_options",
                                         "errorOldStylePropertyDeclaration",
                                         0,
                                         "error-old-style-property-declaration",
                                         "error on old style property declaration") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument ("galgas_cli_options",
                                         "errorOnGetterCallWithNoArgument",
                                         0,
                                         "error-on-getter-call-with-no-argument",
                                         "Error on getter call; with no argument (GGS4, suppress parenthesis)") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOnUselessSelector ("galgas_cli_options",
                                         "errorOnUselessSelector",
                                         0,
                                         "error-on-useless-selector",
                                         "Error on useless selector (GGS4)") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ("galgas_cli_options",
                                         "errorPropertyGetterCall",
                                         0,
                                         "error-property-getter-call",
                                         "error on calling property getter (instead of dot notation)") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorValueClassDeclaration ("galgas_cli_options",
                                         "errorValueClassDeclaration",
                                         0,
                                         "error-value-class-declaration",
                                         "error on 'value class' declaration") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ("galgas_cli_options",
                                         "generateManyFiles",
                                         0,
                                         "generate-many-cpp-files",
                                         "Generate many C++ implementation files") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ("galgas_cli_options",
                                         "generateOneHeader",
                                         0,
                                         "generate-one-cpp-header",
                                         "Generate one C++ header file for all declarations") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ("galgas_cli_options",
                                         "outputHTMLTypeListFile",
                                         84,
                                         "output-html-type-dump-file",
                                         "Output a HTML file that contains all defined types") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ("galgas_cli_options",
                                         "outputHTMLgrammarFile",
                                         0,
                                         "output-html-grammar-file",
                                         "Output a HTML file for every grammar component") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ("galgas_cli_options",
                                         "printPredefinedLexicalActions",
                                         0,
                                         "print-predefined-lexical-actions",
                                         "Print the list of predefined lexical routines and functions") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ("galgas_cli_options",
                                         "propertyAccessRequiresSelf",
                                         0,
                                         "error-property-access-without-self",
                                         "'self' is required for accessing properties in getter, setter and methods") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ("galgas_cli_options",
                                         "warningNotGalgas4Feature",
                                         0,
                                         "warns-on-feature-not-handled-in-galgas4",
                                         "warns on feature not handled in galgas 4") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

C_UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ("galgas_cli_options",
                                         "macosxSDK",
                                         0,
                                         "macosx",
                                         "Generate an Xcode project for OS X",
                                         0) ;

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ("galgas_cli_options",
                                         "cppCompile",
                                         0,
                                         "compile",
                                         "Perform C++ compilation on 'string' target",
                                         "") ;

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ("galgas_cli_options",
                                         "create_project",
                                         0,
                                         "create-project",
                                         "Create a new GALGAS Project",
                                         "") ;

C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ("galgas_cli_options",
                                         "extractLIBPMOption",
                                         0,
                                         "extract-libpm",
                                         "Extract embedded LIBPM at given path",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "project (0:0:1) -> " ;
  result += in_PROJECT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue () ;
  result += " {\n#--- Targets\n  %makefile-unix\n  %makefile-macosx\n  %makefile-x86linux32-on-macosx\n  %makefile-x86linux64-on-macosx\n  %makefile-win32-on-macosx\n  %MacOS\n  %applicationBundleBase : \"fr.what\"\n  %codeblocks-windows\n  %codeblocks-linux32\n  %codeblocks-linux64\n\n#--- Source files\n  \"galgas-sources/" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "-lexique.galgas\"\n  \"galgas-sources/" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "-options.galgas\"\n  \"galgas-sources/" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "-semantics.galgas\"\n  \"galgas-sources/" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "-syntax.galgas\"\n  \"galgas-sources/" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "-grammar.galgas\"\n  \"galgas-sources/" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "-cocoa.galgas\"\n  \"galgas-sources/" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "-program.galgas\"\n}\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "gui cocoa {\n  with option " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_options\n\n  with lexique " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_lexique {\n    fileExtension: \"" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "\"\n    title: \"Source\"\n    blockComment : \"#\"\n  }\n\n}\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "grammar " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_grammar \"LL1\" {\n  syntax " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_syntax\n  <start_symbol>\n}\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "lexique " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_lexique {\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Identifiers and keywords                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString %errorMessage \"an identifier\"\n\n#--- This is the keyword list\nlist keyWordList style keywordsStyle %errorMessage \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send %codeFor tokenString in keyWordList default $identifier$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal decimal integers                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle %errorMessage \"a 32-bit unsigned decimal number\"\n\n%errorMessage decimalNumberTooLarge : \"decimal number too large\"\n%errorMessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal character strings                                                                    \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection %errorMessage \"a character string constant \\\"...\\\"\"\n\n\n%errorMessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Delimiters                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle %errorMessage \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Comments                                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection %errorMessage \"a comment\"\nrule '#' {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Separators                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "option " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_options {\n\n# ADD YOUR CODE\n\n}\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "#--- Prologue routine\nbefore {\n}\n\n#--- 'when' clauses\ncase . \"" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "\"\n%errorMessage \"a source text file with the ." ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += " extension\"\n%useGrammar " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_grammar\n\?sourceFilePath:@lstring inSourceFile {\n  grammar " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_grammar () in inSourceFile\n}\n\n#--- Epilogue routine\nafter {\n}\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "\n# ADD YOUR CODE\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (Compiler * /* inCompiler */,
                                                                                const GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "syntax " ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_syntax (" ;
  result += in_PROJECT_5F_NAME.stringValue () ;
  result += "_lexique) {\n\nrule <start_symbol> {\n  # ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n# ADD OTHER RULES\n\n}\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation (const GALGAS_string constinArgument_inProjectPath,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectName_2323 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 38)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2405 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 40)) ;
  var_galgas_5F_sources_5F_DIR_2405.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 41)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 42))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 43))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2405.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2405.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2405.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2405.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2405.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2405.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2323 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2405.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_2323, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  {
  routine_println (GALGAS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation (const GALGAS_string constinArgument_inProjectPath,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (GALGAS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 58)) ;
      }
      GALGAS_string var_projectName_4081 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 60)) ;
      GALGAS_bool var_ok_4143 = var_projectName_4081.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 61)) ;
      GALGAS_uint var_idx_4206 = GALGAS_uint (uint32_t (1U)) ;
      if (var_projectName_4081.getter_count (SOURCE_FILE ("projectCreation.galgas", 63)).isValid ()) {
        uint32_t variant_4218 = var_projectName_4081.getter_count (SOURCE_FILE ("projectCreation.galgas", 63)).uintValue () ;
        bool loop_4218 = true ;
        while (loop_4218) {
          loop_4218 = GALGAS_bool (kIsStrictInf, var_idx_4206.objectCompare (var_projectName_4081.getter_count (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4143 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).isValid () ;
          if (loop_4218) {
            loop_4218 = GALGAS_bool (kIsStrictInf, var_idx_4206.objectCompare (var_projectName_4081.getter_count (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4143 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).boolValue () ;
          }
          if (loop_4218 && (0 == variant_4218)) {
            loop_4218 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 63)) ;
          }
          if (loop_4218) {
            variant_4218 -- ;
            GALGAS_char var_c_4307 = var_projectName_4081.getter_characterAtIndex (var_idx_4206, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 65)) ;
            var_ok_4143 = var_c_4307.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 66)).operator_or (GALGAS_bool (kIsEqual, var_c_4307.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 66)) ;
            var_idx_4206.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 67)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4143.operator_not (SOURCE_FILE ("projectCreation.galgas", 69)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_println (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4081, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 70)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4143.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4143 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 75)).operator_not (SOURCE_FILE ("projectCreation.galgas", 75)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4143.operator_not (SOURCE_FILE ("projectCreation.galgas", 76)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_println (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77)).add_operation (GALGAS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 77)) ;
              }
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4143.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 81)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString (GALGAS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_24658 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 592)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_24658.getter_count (SOURCE_FILE ("templateSyntax.galgas", 593)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_24658  COMMA_SOURCE_FILE ("templateSyntax.galgas", 594))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 594)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3939 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3939, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 73)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_3989 = var_receiverExpression_3939.readProperty_mResultType () ;
  GALGAS_string var_receiverTypeName_4041 = extensionGetter_definition (var_receiverType_3989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 81)).readProperty_mTypeName ().readProperty_string () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = extensionGetter_definition (var_receiverType_3989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 83)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 83)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GALGAS_bool (kIsEqual, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = this ;
        GALGAS_AccessControl var_accessControl_4397 ;
        GALGAS_bool var_unused_0_4412 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_4419 ;
        const bool optionalResult4364 = extensionGetter_definition (var_receiverType_3989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 85)).readProperty_mPropertyMap ().optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_accessControl_4397, var_unused_0_4412, var_propertyType_4419) ;
        if (!optionalResult4364) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = this ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_8 = this ;
          extensionMethod_checkSetAccess (var_accessControl_4397, GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("templateAnalysis.galgas", 89)), temp_8.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)) ;
          const GALGAS_templateGetterCallInExpressionAST temp_9 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_10 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4419, temp_9.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3939, temp_10.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 93)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_5040 = extensionGetter_definition (var_receiverType_3989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)).readProperty_mGetterMap () ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_5141 ;
    GALGAS_methodKind var_kind_5190 ;
    GALGAS_bool var_hasCompilerArgument_5209 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_5258 ;
    GALGAS_stringlist var_fieldList_5279 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 107)) ;
    const GALGAS_templateGetterCallInExpressionAST temp_11 = this ;
    GALGAS_string var_actualGetterName_5314 = temp_11.readProperty_mGetterName ().readProperty_string () ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_templateGetterCallInExpressionAST temp_13 = this ;
      test_12 = var_getterMap_5040.getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_actualGetterNameString_5596 ;
        const GALGAS_templateGetterCallInExpressionAST temp_14 = this ;
        GALGAS_location joker_5518 ; // Joker input parameter
        GALGAS_methodQualifier joker_5580 ; // Joker input parameter
        var_getterMap_5040.method_searchKey (temp_14.readProperty_mGetterName (), var_kind_5190, var_getterFormalArgumentTypeList_5141, joker_5518, var_hasCompilerArgument_5209, var_returnedType_5258, joker_5580, var_actualGetterNameString_5596, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 110)) ;
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, var_actualGetterNameString_5596.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_15) {
            var_actualGetterName_5314 = var_actualGetterNameString_5596 ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()).boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_templateGetterCallInExpressionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                appendFixItActions (fixItArray18, kFixItReplace, var_actualGetterName_5314) ;
                inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 122)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_12) {
      GALGAS_uint var_matchingReaderCount_5932 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_3989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 127)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 127)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          var_getterFormalArgumentTypeList_5141 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 128)) ;
          var_hasCompilerArgument_5209 = GALGAS_bool (true) ;
          var_returnedType_5258 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 130)) ;
          var_kind_5190 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 131)) ;
          cEnumerator_typedPropertyList enumerator_6254 (extensionGetter_definition (var_receiverType_3989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
          while (enumerator_6254.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6340 = extensionGetter_definition (enumerator_6254.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)).readProperty_mGetterMap () ;
            const GALGAS_templateGetterCallInExpressionAST temp_20 = this ;
            const cMapElement_getterMap * objectArray_6400 = (const cMapElement_getterMap *) var_aMap_6340.readAccessForWithInstruction (temp_20.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_6400) {
                macroValidSharedObject (objectArray_6400, cMapElement_getterMap) ;
              var_matchingReaderCount_5932.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 135)) ;
              var_getterFormalArgumentTypeList_5141 = objectArray_6400->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_5209 = objectArray_6400->mProperty_mHasCompilerArgument ;
              var_returnedType_5258 = objectArray_6400->mProperty_mReturnedType ;
              var_kind_5190 = objectArray_6400->mProperty_mKind ;
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                test_21 = GALGAS_bool (kIsNotEqual, objectArray_6400->mProperty_mGetterNameThatObsoletesInvokationName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_21) {
                  var_actualGetterName_5314 = objectArray_6400->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
              var_fieldList_5279.addAssign_operation (enumerator_6254.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 143)) ;
            }
            enumerator_6254.gotoNextObject () ;
          }
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, var_matchingReaderCount_5932.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              const GALGAS_templateGetterCallInExpressionAST temp_23 = this ;
              const GALGAS_templateGetterCallInExpressionAST temp_24 = this ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_4041, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)) ;
              var_getterFormalArgumentTypeList_5141.drop () ; // Release error dropped variable
              var_hasCompilerArgument_5209.drop () ; // Release error dropped variable
              var_returnedType_5258.drop () ; // Release error dropped variable
              var_kind_5190.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_22) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_5932.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_26) {
                GALGAS_string var_s_7271 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7293 (var_fieldList_5279, kENUMERATION_UP) ;
                while (enumerator_7293.hasCurrentObject ()) {
                  var_s_7271.plusAssign_operation(enumerator_7293.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 154)) ;
                  if (enumerator_7293.hasNextObject ()) {
                    var_s_7271.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 155)) ;
                  }
                  enumerator_7293.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_27 = this ;
                const GALGAS_templateGetterCallInExpressionAST temp_28 = this ;
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_4041, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (temp_28.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (var_s_7271, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)), fixItArray29  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)) ;
                var_getterFormalArgumentTypeList_5141.drop () ; // Release error dropped variable
                var_hasCompilerArgument_5209.drop () ; // Release error dropped variable
                var_returnedType_5258.drop () ; // Release error dropped variable
                var_kind_5190.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_19) {
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          test_30 = GALGAS_bool (kIsEqual, var_getterMap_5040.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_30) {
            const GALGAS_templateGetterCallInExpressionAST temp_31 = this ;
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (temp_31.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_4041, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)), fixItArray32  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)) ;
            var_getterFormalArgumentTypeList_5141.drop () ; // Release error dropped variable
            var_hasCompilerArgument_5209.drop () ; // Release error dropped variable
            var_returnedType_5258.drop () ; // Release error dropped variable
            var_kind_5190.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_30) {
          const GALGAS_templateGetterCallInExpressionAST temp_33 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_34 = this ;
          TC_Array <C_FixItDescription> fixItArray35 ;
          appendFixItActions (fixItArray35, kFixItReplace, var_getterMap_5040.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 170))) ;
          inCompiler->emitSemanticError (temp_33.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_4041, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (temp_34.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)) ;
          var_getterFormalArgumentTypeList_5141.drop () ; // Release error dropped variable
          var_hasCompilerArgument_5209.drop () ; // Release error dropped variable
          var_returnedType_5258.drop () ; // Release error dropped variable
          var_kind_5190.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      const GALGAS_templateGetterCallInExpressionAST temp_37 = this ;
      test_36 = GALGAS_bool (kIsNotEqual, temp_37.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 174)).objectCompare (var_getterFormalArgumentTypeList_5141.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 174)))).boolEnum () ;
      if (kBoolTrue == test_36) {
        const GALGAS_templateGetterCallInExpressionAST temp_38 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_39 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_40 = this ;
        TC_Array <C_FixItDescription> fixItArray41 ;
        inCompiler->emitSemanticError (temp_38.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_39.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (var_receiverTypeName_4041, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (var_getterFormalArgumentTypeList_5141.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 176)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (temp_40.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 177)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 177)), fixItArray41  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_36) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8698 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 179)) ;
      const GALGAS_templateGetterCallInExpressionAST temp_42 = this ;
      cEnumerator_templateExpressionListAST enumerator_8776 (temp_42.readProperty_mExpressionList (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_8874 (var_getterFormalArgumentTypeList_5141, kENUMERATION_UP) ;
      while (enumerator_8776.hasCurrentObject () && enumerator_8874.hasCurrentObject ()) {
        enumGalgasBool test_43 = kBoolTrue ;
        if (kBoolTrue == test_43) {
          test_43 = GALGAS_bool (kIsNotEqual, enumerator_8874.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8776.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_43) {
            GALGAS_string temp_44 ;
            const enumGalgasBool test_45 = GALGAS_bool (kIsNotEqual, enumerator_8874.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_45) {
              temp_44 = enumerator_8874.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)) ;
            }else if (kBoolFalse == test_45) {
              temp_44 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_8999 = GALGAS_string ("!").add_operation (temp_44, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)) ;
            TC_Array <C_FixItDescription> fixItArray46 ;
            appendFixItActions (fixItArray46, kFixItReplace, var_s_8999) ;
            inCompiler->emitSemanticError (enumerator_8776.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8999, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9410 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8776.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_9410, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8874.current_mFormalArgumentType (HERE), var_exp_9410.readProperty_mResultType (), enumerator_8776.current_mEndOfExpressionLocation (HERE), var_exp_9410, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 193)) ;
        }
        var_constructorEffectiveParameterList_8698.addAssign_operation (var_exp_9410  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 194)) ;
        enumerator_8776.gotoNextObject () ;
        enumerator_8874.gotoNextObject () ;
      }
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        const GALGAS_templateGetterCallInExpressionAST temp_48 = this ;
        GALGAS_bool test_49 = GALGAS_bool (kIsNotEqual, var_actualGetterName_5314.objectCompare (temp_48.readProperty_mGetterName ().readProperty_string ())) ;
        if (kBoolTrue == test_49.boolEnum ()) {
          test_49 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_47 = test_49.boolEnum () ;
        if (kBoolTrue == test_47) {
          const GALGAS_templateGetterCallInExpressionAST temp_50 = this ;
          TC_Array <C_FixItDescription> fixItArray51 ;
          appendFixItActions (fixItArray51, kFixItReplace, var_actualGetterName_5314) ;
          inCompiler->emitSemanticError (temp_50.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray51  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 197)) ;
        }
      }
      const GALGAS_templateGetterCallInExpressionAST temp_52 = this ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_5258, temp_52.readProperty_mGetterName ().readProperty_location (), var_kind_5190, var_receiverExpression_3939, var_fieldList_5279, var_actualGetterName_5314, var_constructorEffectiveParameterList_8698, var_hasCompilerArgument_5209  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateConstructorAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateConstructorAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateConstructorAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_constructorType_10737 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 224)) ;
  GALGAS_constructorMap var_constructorMap_10854 = extensionGetter_definition (var_constructorType_10737, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 226)).readProperty_mConstructorMap () ;
  GALGAS_unifiedTypeMapEntry var_returnedType_10966 ;
  GALGAS_bool var_hasCompilerArgument_10991 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_11036 ;
  const GALGAS_templateConstructorAST temp_1 = this ;
  const cMapElement_constructorMap * objectArray_11072 = (const cMapElement_constructorMap *) var_constructorMap_10854.readAccessForWithInstruction (temp_1.readProperty_mConstructorName ().readProperty_string ()) ;
  if (nullptr != objectArray_11072) {
      macroValidSharedObject (objectArray_11072, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_11036 = objectArray_11072->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10991 = objectArray_11072->mProperty_mHasCompilerArgument ;
    var_returnedType_10966 = objectArray_11072->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_10854.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 236)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = this ;
        const GALGAS_templateConstructorAST temp_4 = this ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 238)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 238)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 237)) ;
        var_constructorFormalArgumentTypeList_11036.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10991.drop () ; // Release error dropped variable
        var_returnedType_10966.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = this ;
      const GALGAS_templateConstructorAST temp_7 = this ;
      const GALGAS_templateConstructorAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_10854.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 244))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (temp_8.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)) ;
      var_constructorFormalArgumentTypeList_11036.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10991.drop () ; // Release error dropped variable
      var_returnedType_10966.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11861 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 249)).objectCompare (var_constructorFormalArgumentTypeList_11036.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 249)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = this ;
      const GALGAS_templateConstructorAST temp_13 = this ;
      const GALGAS_templateConstructorAST temp_14 = this ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (extensionGetter_definition (var_constructorType_10737, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (var_constructorFormalArgumentTypeList_11036.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 252)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)).add_operation (temp_14.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 253)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
      var_constructorEffectiveParameterList_11861.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_11861 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 256)) ;
    const GALGAS_templateConstructorAST temp_16 = this ;
    cEnumerator_templateExpressionListAST enumerator_12469 (temp_16.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12557 (var_constructorFormalArgumentTypeList_11036, kENUMERATION_UP) ;
    while (enumerator_12469.hasCurrentObject () && enumerator_12557.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_12557.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12469.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_12557.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12557.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 259)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12683 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 259)) ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12683) ;
          inCompiler->emitSemanticError (enumerator_12469.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12683, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_13229 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_12469.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_13229, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_12557.current_mFormalArgumentType (HERE), var_exp_13229.readProperty_mResultType (), enumerator_12469.current_mEndOfExpressionLocation (HERE), var_exp_13229, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 271)) ;
      }
      var_constructorEffectiveParameterList_11861.addAssign_operation (var_exp_13229  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 272)) ;
      enumerator_12469.gotoNextObject () ;
      enumerator_12557.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = this ;
  const GALGAS_templateConstructorAST temp_22 = this ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10966, temp_21.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10737, temp_22.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11861, var_hasCompilerArgument_10991  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 276)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFileWrapperTemplateCallAST temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 296)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_15224 ;
  const GALGAS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15224, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 311)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15465 ;
  const GALGAS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15465, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 319)) ;
  {
  const GALGAS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_15224.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 328)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 328)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15224, var_rightExpression_15465, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 327)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_15224.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15224, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 339)), var_rightExpression_15465  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 335)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16568 ;
  const GALGAS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_16568, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 354)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16809 ;
  const GALGAS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_16809, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 362)) ;
  {
  const GALGAS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_16568.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 371)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 371)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16568, var_rightExpression_16809, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 370)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_16568.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16568, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 382)), var_rightExpression_16809  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 378)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_17911 ;
  const GALGAS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_17911, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 397)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_18152 ;
  const GALGAS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_18152, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 405)) ;
  {
  const GALGAS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_17911.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 414)).readProperty_mHandledOperatorFlags ().getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 414)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17911, var_rightExpression_18152, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 413)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_17911.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_17911, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 425)), var_rightExpression_18152  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 421)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 439)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_20180 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_20194 (temp_0.readProperty_mLiteralStringList (), kENUMERATION_UP) ;
  while (enumerator_20194.hasCurrentObject ()) {
    var_s_20180.plusAssign_operation(enumerator_20194.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 465)) ;
    enumerator_20194.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_20180  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 467)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 479)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralCharExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 537)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 551)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_24647 ;
  const GALGAS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_24647, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 568)) ;
  GALGAS_unifiedTypeMapEntry var_type_24722 = var_expression_24647.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_24722, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 577)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 577)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 577)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_24722, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_24722, temp_4.readProperty_mOperatorLocation (), var_expression_24647  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_25748 ;
  const GALGAS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_25748, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 601)) ;
  GALGAS_unifiedTypeMapEntry var_type_25823 = var_expression_25748.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_25823, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 610)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 610)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 610)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_25823, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 611)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_25823, temp_4.readProperty_mOperatorLocation (), var_expression_25748  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 616)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_26896 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_26896, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_27024 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 642)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_26896.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 644)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 644)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_27268 = var_castType_27024 ;
      GALGAS_bool var_found_27295 = GALGAS_bool (kIsEqual, var_t_27268.objectCompare (var_expression_26896.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 648)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 648)).isValid ()) {
        uint32_t variant_27335 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 648)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 648)).uintValue () ;
        bool loop_27335 = true ;
        while (loop_27335) {
          loop_27335 = var_found_27295.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_and (extensionGetter_definition (var_t_27268, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).isValid () ;
          if (loop_27335) {
            loop_27335 = var_found_27295.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_and (extensionGetter_definition (var_t_27268, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).boolValue () ;
          }
          if (loop_27335 && (0 == variant_27335)) {
            loop_27335 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 648)) ;
          }
          if (loop_27335) {
            variant_27335 -- ;
            var_t_27268 = extensionGetter_definition (var_t_27268, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 650)).readProperty_mSuperType () ;
            var_found_27295 = GALGAS_bool (kIsEqual, var_t_27268.objectCompare (var_expression_26896.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_27295.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 653)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = this ;
          const GALGAS_templateTestDynamicClassAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).add_operation (extensionGetter_definition (var_expression_26896.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 654)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_26896.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_26896.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 659)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 658)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 659)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 658)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = this ;
  const GALGAS_templateTestDynamicClassAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_26896, temp_9.readProperty_mTypeComparisonKind (), var_castType_27024  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 662)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateOptionAccessAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_28565 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_28565 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 680)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_28859 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_28918 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_28963 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_29008 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_29055 ;
  const GALGAS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_28859, var_boolOptionMap_28918, var_uintOptionMap_28963, var_stringOptionMap_29008, var_stringListOptionMap_29055, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 681)) ;
  const GALGAS_templateOptionAccessAST temp_2 = this ;
  GALGAS_bool var_found_29085 = var_boolOptionMap_28918.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 689)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_29168 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_29085.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 691)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = this ;
      var_found_29085 = var_uintOptionMap_28963.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 692)) ;
      var_returnedType_29168 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_29085.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 695)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = this ;
      var_found_29085 = var_stringOptionMap_29008.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 696)) ;
      var_returnedType_29168 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_29085.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 699)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = this ;
      var_found_29085 = var_stringListOptionMap_29055.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 700)) ;
      var_returnedType_29168 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_29085.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = this ;
          const GALGAS_templateOptionAccessAST temp_13 = this ;
          const GALGAS_templateOptionAccessAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_29168, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28859, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 705)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_templateOptionAccessAST temp_16 = this ;
          test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_templateOptionAccessAST temp_17 = this ;
            const GALGAS_templateOptionAccessAST temp_18 = this ;
            const GALGAS_templateOptionAccessAST temp_19 = this ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28859, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_templateOptionAccessAST temp_21 = this ;
            test_20 = GALGAS_bool (kIsEqual, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_templateOptionAccessAST temp_22 = this ;
              const GALGAS_templateOptionAccessAST temp_23 = this ;
              const GALGAS_templateOptionAccessAST temp_24 = this ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28859, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_templateOptionAccessAST temp_26 = this ;
              test_25 = GALGAS_bool (kIsEqual, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_templateOptionAccessAST temp_27 = this ;
                const GALGAS_templateOptionAccessAST temp_28 = this ;
                const GALGAS_templateOptionAccessAST temp_29 = this ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28859, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 729)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_templateOptionAccessAST temp_30 = this ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 737)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringset var_s_31183 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
    cEnumerator_commandLineOptionMap enumerator_31210 (var_boolOptionMap_28918, kENUMERATION_UP) ;
    while (enumerator_31210.hasCurrentObject ()) {
      var_s_31183.addAssign_operation (enumerator_31210.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 742)) ;
      enumerator_31210.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_31278 (var_uintOptionMap_28963, kENUMERATION_UP) ;
    while (enumerator_31278.hasCurrentObject ()) {
      var_s_31183.addAssign_operation (enumerator_31278.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 745)) ;
      enumerator_31278.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_31346 (var_stringOptionMap_29008, kENUMERATION_UP) ;
    while (enumerator_31346.hasCurrentObject ()) {
      var_s_31183.addAssign_operation (enumerator_31346.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 748)) ;
      enumerator_31346.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = this ;
    const GALGAS_templateOptionAccessAST temp_33 = this ;
    const GALGAS_templateOptionAccessAST temp_34 = this ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_31183) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 751)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 751)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 751)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 751)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFunctionCallAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_32184 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 768)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_32184 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 769)) ;
  }
  GALGAS_functionSignature var_functionSignature_32485 ;
  GALGAS_unifiedTypeMapEntry var_resultType_32533 ;
  GALGAS_bool var_isInternal_32559 ;
  const GALGAS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_32485, var_resultType_32533, var_isInternal_32559, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 771)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_32559.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_32623 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 779)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)).objectCompare (var_procDeclarationLocation_32623.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_32623.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_32485.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 785)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 785)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = this ;
      const GALGAS_templateFunctionCallAST temp_11 = this ;
      const GALGAS_templateFunctionCallAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (var_functionSignature_32485.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 787)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 788)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 788)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 788)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 786)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_33346 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 792)) ;
    const GALGAS_templateFunctionCallAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_33469 (var_functionSignature_32485, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_33523 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_33469.hasCurrentObject () && enumerator_33523.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_33781 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_33523.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_33781, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 794)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_33469.current_mFormalArgumentType (HERE), var_expression_33781.readProperty_mResultType (), enumerator_33523.current_mEndOfExpressionLocation (HERE), var_expression_33781, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 801)) ;
      }
      var_semanticExpressionListForGeneration_33346.addAssign_operation (var_expression_33781  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_33469.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_33523.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_33469.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_33469.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 804)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_34074 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 804)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_34074) ;
          inCompiler->emitSemanticError (enumerator_33523.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_34074, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)) ;
        }
      }
      enumerator_33469.gotoNextObject () ;
      enumerator_33523.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = this ;
    const GALGAS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_32533, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_33346  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 809)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateExtensionTemplateCallAST temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 828)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_36063 ;
  GALGAS_string var_sourceVariableCppName_36073 ;
  const GALGAS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_36063, var_sourceVariableCppName_36073, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 844)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_36063, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_36073, var_sourceVariableCppName_36073  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 845)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_37050 ;
  const GALGAS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_37050, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 864)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37291 ;
  const GALGAS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_37291, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 872)) ;
  {
  const GALGAS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_37050.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 881)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 881)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_37050, var_rightExpression_37291, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 880)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_37050.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_37050, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("templateAnalysis.galgas", 892)), var_rightExpression_37291  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 888)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_38556 ;
  const GALGAS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_38556, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_38797 ;
  const GALGAS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_38797, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 917)) ;
  {
  const GALGAS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_38556.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 926)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 926)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_38556, var_rightExpression_38797, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 925)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_38556.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_38556, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("templateAnalysis.galgas", 937)), var_rightExpression_38797  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 933)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_40074 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_40074, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 954)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40315 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_40315, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 962)) ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_40074.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 971)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 971)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_40074, var_rightExpression_40315, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 970)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_40074.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_40074, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 982)), var_rightExpression_40315  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_41593 ;
  const GALGAS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_41593, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 999)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_41834 ;
  const GALGAS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_41834, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1007)) ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_41593.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1016)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 1016)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_41593, var_rightExpression_41834, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1015)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_41593.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_41593, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1027)), var_rightExpression_41834  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1023)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_43110 ;
  const GALGAS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_43110, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1044)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_43351 ;
  const GALGAS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_43351, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1052)) ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_43110.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1061)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1061)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_43110, var_rightExpression_43351, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1060)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_43110.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_43110, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1072)), var_rightExpression_43351  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_44591 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_44591, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1089)) ;
  GALGAS_unifiedTypeMapEntry var_type_44666 = var_expression_44591.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_44666, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1098)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1098)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1098)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_44666, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1099)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_44666, temp_4.readProperty_mOperatorLocation (), var_expression_44591  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1104)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_45983 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_45983, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1123)) ;
  GALGAS_unifiedTypeMapEntry var_type_46062 = var_expression_45983.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_type_46062, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1132)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 1132)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_46062, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1132)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1132)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1132)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1133)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_46315 = extensionGetter_definition (var_type_46062, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)).readProperty_mPropertyMap () ;
  GALGAS_AccessControl var_accessControl_46413 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GALGAS_bool joker_46427 ; // Joker input parameter
  var_propertyMap_46315.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_46413, joker_46427, var_type_46062, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1136)) ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_46413, GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("templateAnalysis.galgas", 1137)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1137)) ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_46062, temp_7.readProperty_mOperatorLocation (), var_expression_45983, temp_8.readProperty_mStructFieldName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1142)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_47619 ;
  const GALGAS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_47619, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1162)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47864 ;
  const GALGAS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47864, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1170)) ;
  {
  const GALGAS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_47619, var_rightExpression_47864, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
  }
  const GALGAS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_47619, GALGAS_comparison::constructor_equal (SOURCE_FILE ("templateAnalysis.galgas", 1190)), var_rightExpression_47864  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_48899 ;
  const GALGAS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48899, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1205)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_49144 ;
  const GALGAS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_49144, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1213)) ;
  {
  const GALGAS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48899, var_rightExpression_49144, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1221)) ;
  }
  const GALGAS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48899, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1233)), var_rightExpression_49144  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_50183 ;
  const GALGAS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_50183, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1248)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_50428 ;
  const GALGAS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50428, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1256)) ;
  {
  const GALGAS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_50183, var_rightExpression_50428, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1264)) ;
  }
  const GALGAS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_50183, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1276)), var_rightExpression_50428  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_51468 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_51468, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1291)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51713 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_51713, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)) ;
  {
  const GALGAS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_51468, var_rightExpression_51713, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1307)) ;
  }
  const GALGAS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_51468, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1319)), var_rightExpression_51713  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_52756 ;
  const GALGAS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_52756, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1334)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_53001 ;
  const GALGAS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_53001, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1342)) ;
  {
  const GALGAS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_52756, var_rightExpression_53001, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1350)) ;
  }
  const GALGAS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_52756, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1362)), var_rightExpression_53001  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1358)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_54043 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_54043, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1377)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_54288 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_54288, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1385)) ;
  {
  const GALGAS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_54043, var_rightExpression_54288, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1393)) ;
  }
  const GALGAS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_54043, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1405)), var_rightExpression_54288  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1401)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_55338 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_55338, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1420)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_55583 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_55583, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1428)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_55664 = var_leftExpression_55338.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_55729 = var_rightExpression_55583.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_55664, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1438)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1438)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1438)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_55664, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1440)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1440)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1440)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1439)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_55729, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1442)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_55729, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1443)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_55664, temp_8.readProperty_mOperatorLocation (), var_leftExpression_55338, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1452)), var_rightExpression_55583  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1448)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_57125 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_57125, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1468)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_57370 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_57370, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1476)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_57451 = var_leftExpression_57125.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_57516 = var_rightExpression_57370.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_57451, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1486)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1486)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1486)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_57451, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1487)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_57516, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1490)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_57516, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1491)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_57451, temp_8.readProperty_mOperatorLocation (), var_leftExpression_57125, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1500)), var_rightExpression_57370  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1496)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                              const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                              GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_59400 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_59400.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_59400.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530)) ;
    enumerator_59400.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (temp_0.readProperty_mTemplateString ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_60778 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_60778, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1561)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_60778.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1568)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_60778.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_60778  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_61684 ;
  const GALGAS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_61684, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1583)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expression_61684.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1590)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bigint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_getterCallExpressionForGeneration var_conversionExpression_61782 = GALGAS_getterCallExpressionForGeneration::constructor_new (var_expression_61684.readProperty_mResultType (), var_expression_61684.readProperty_mLocation (), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 1594)), var_expression_61684, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1596)), GALGAS_string ("uint"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1598)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1591)) ;
      var_expression_61684 = var_conversionExpression_61782 ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_61684.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1602)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateBlockInstructionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_61684.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)) ;
      }
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_62257 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1605)) ;
  {
  const GALGAS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_62257, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1606)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_61684, temp_6.readProperty_mLocation (), var_blockInstructionList_62257  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1626))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1626)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1638))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1638)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_64180 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1651)) ;
  const GALGAS_templateInstructionIfAST temp_0 = this ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_64282 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_64282.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_64508 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_64282.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_64508, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1653)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_64508.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1660)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_64508.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_64508.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_64764 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1663)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_64282.current_mInstructionList (HERE), var_instructionList_64764, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1664)) ;
    }
    var_templateInstructionIfBranchList_64180.addAssign_operation (var_expression_64508, var_instructionList_64764  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1672)) ;
    enumerator_64282.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_65109 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1675)) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_65109, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1676)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_64180, var_elseInstructionList_65109  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1685))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1685)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_1771 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1771.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_1771.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_1771.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result += ").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_cppName_3039 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3039, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 66)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result += ").add_operation (var_cppName_3039, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_indendationVarCppName_3635 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 79)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                            GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 105)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                             GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionIfForGeneration temp_0 = this ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_5933 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_5933.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_6176 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_5933.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6176, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 130)) ;
    GALGAS_string var_testVar_6211 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6211, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (var_ifVarCppName_6176, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_6211, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 141)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_5933.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 142)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 150)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_6211, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 151)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 151)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 152)) ;
    }
    enumerator_5933.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 155)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = this ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_7125 (temp_2.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_7125.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 164)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 165)) ;
    enumerator_7125.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_6720 ;
  const GALGAS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_6720, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 198)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6841 = extensionGetter_definition (var_expression_6720.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_6841.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 207)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6720.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6720.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7140 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 211)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7140, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 212)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = this ;
  GALGAS_string var_enumeratorCppName_7434 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 221)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 221)) ;
  GALGAS_templateVariableMap var_doVariableMap_7537 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = this ;
  const GALGAS_templateInstructionForeachAST temp_6 = this ;
  GALGAS_string var_cppIndexVarName_7598 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 224)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7537.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7598, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 226)) ;
      }
    }
  }
  switch (this->mProperty_mEnumeratedObjectProperties.enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::kNotBuilt:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_implicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit * extractPtr_8727 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit *) (this->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_string extractedValue_7987_prefix = extractPtr_8727->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8004_remplacementRange = extractPtr_8727->mAssociatedValue1 ;
      GALGAS_string var_suggestion_8033 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_8074 (var_enumerationDescriptor_6841, kENUMERATION_UP) ;
      while (enumerator_8074.hasCurrentObject ()) {
        {
        var_doVariableMap_7537.setter_insertKey (GALGAS_lstring::constructor_new (extractedValue_7987_prefix.add_operation (enumerator_8074.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)), var_expression_6720.readProperty_mLocation (), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)), enumerator_8074.current_mEnumeratedType (HERE), var_enumeratorCppName_7434.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)).add_operation (enumerator_8074.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)) ;
        }
        var_suggestion_8033.plusAssign_operation(extractedValue_7987_prefix.add_operation (enumerator_8074.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)) ;
        if (enumerator_8074.hasNextObject ()) {
          var_suggestion_8033.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 240)) ;
        }
        enumerator_8074.gotoNextObject () ;
      }
      var_suggestion_8033.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 242)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_suggestion_8033) ;
          inCompiler->emitSemanticError (extractedValue_8004_remplacementRange, GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray11  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 244)) ;
        }
      }
    }
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_explicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit * extractPtr_9459 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit *) (this->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_lstringlist extractedValue_8761_enumeration = extractPtr_9459->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8783_errorLocation = extractPtr_9459->mAssociatedValue1 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extractedValue_8761_enumeration.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 249)).objectCompare (var_enumerationDescriptor_6841.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 249)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_8783_errorLocation, var_enumerationDescriptor_6841.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 251)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (extractedValue_8761_enumeration.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 252)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 252)), fixItArray13  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 250)) ;
        }
      }
      if (kBoolFalse == test_12) {
        cEnumerator_enumerationDescriptorList enumerator_9052 (var_enumerationDescriptor_6841, kENUMERATION_UP) ;
        cEnumerator_lstringlist enumerator_9106 (extractedValue_8761_enumeration, kENUMERATION_UP) ;
        while (enumerator_9052.hasCurrentObject () && enumerator_9106.hasCurrentObject ()) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = GALGAS_bool (kIsNotEqual, enumerator_9106.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              {
              var_doVariableMap_7537.setter_insertKey (enumerator_9106.current_mValue (HERE), enumerator_9052.current_mEnumeratedType (HERE), var_enumeratorCppName_7434.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)).add_operation (enumerator_9052.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)) ;
              }
            }
          }
          enumerator_9052.gotoNextObject () ;
          enumerator_9106.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_9475 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7537, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 266)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_9632 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 270)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_15 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9475, ioArgument_ioTypeMap, temp_15.readProperty_mDoInstructionList (), var_doInstructionList_9632, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 271)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_9919 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 280)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_16.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9919, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 281)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10219 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 290)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_17.readProperty_mAfterInstructionList (), var_afterInstructionList_10219, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 291)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_18 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (temp_18.readProperty_mIsAscending (), var_expression_6720, var_enumeratorCppName_7434, var_beforeInstructionList_7140, var_doInstructionList_9632, var_cppIndexVarName_7598, var_betweenInstructionList_9919, var_afterInstructionList_10219  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 300))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 300)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_foreachVarCppName_12078 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_12078, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 336)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 338)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_12078, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)) ;
  }
  const GALGAS_templateInstructionForeachForGeneration temp_4 = this ;
  const GALGAS_templateInstructionForeachForGeneration temp_5 = this ;
  const GALGAS_templateInstructionForeachForGeneration temp_6 = this ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = temp_6.readProperty_mIsAscending ().boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_UP") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_DOWN") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (temp_4.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (var_foreachVarCppName_12078, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_templateInstructionForeachForGeneration temp_10 = this ;
    const GALGAS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GALGAS_bool (kIsStrictSup, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 347)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 347)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_templateInstructionForeachForGeneration temp_12 = this ;
      const GALGAS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 350)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 351)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 351)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 352)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 353)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 362)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 365)) ;
  }
  {
  const GALGAS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateInstructionForeachForGeneration temp_21 = this ;
    test_20 = GALGAS_bool (kIsStrictSup, temp_21.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 376)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateInstructionForeachForGeneration temp_22 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (temp_22.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 377)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 377)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 378)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_23 = this ;
      routine_templateCodeGenerationForListInstruction (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 379)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 387)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 388)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_templateInstructionForeachForGeneration temp_25 = this ;
    test_24 = GALGAS_bool (kIsStrictSup, temp_25.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 391)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_templateInstructionForeachForGeneration temp_26 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_26.readProperty_mIndexCppName ().add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 392)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_27 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_27.readProperty_mEnumeratorCppName ().add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 396)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 397)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GALGAS_bool (kIsStrictSup, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 399)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 400)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 400)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 401)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 402)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 410)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 411)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 414)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 415)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_switchExpression_4542 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_4542, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 125)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_4542.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 132)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_switchExpression_4542.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_4542.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 134)).readProperty_mTypeKindEnum (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 134)), fixItArray2  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_4831 = extensionGetter_definition (var_switchExpression_4542.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 136)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_4925 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-switch-instruction.galgas", 137)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5042 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
  const GALGAS_templateInstructionSwitchAST temp_3 = this ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_5149 (temp_3.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_5149.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5259 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 141)) ;
    GALGAS_bool var_firstConstant_5317 = GALGAS_bool (true) ;
    GALGAS_templateAnalysisContext var_analysisContext_5346 = constinArgument_inAnalysisContext ;
    cEnumerator_lstringlist enumerator_5392 (enumerator_5149.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_5392.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_enumConstantMap_4831.getter_hasKey (enumerator_5392.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 145)).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_constantsNamedInSwitchInstruction_4925.getter_hasKey (enumerator_5392.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_5392.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5392.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 148)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 148)), fixItArray6  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 147)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_4925.addAssign_operation (enumerator_5392.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 150)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5806 ;
          GALGAS_uint joker_5773 ; // Joker input parameter
          var_enumConstantMap_4831.method_searchKey (enumerator_5392.current_mValue (HERE), joker_5773, var_associatedTypeList_5806, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 151)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5806.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_5149.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5392.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_5392.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)), fixItArray8  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, var_associatedTypeList_5806.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 155)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5149.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 155)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5392.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5392.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)), fixItArray10  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_5806.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 158)).objectCompare (enumerator_5149.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 158)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string temp_12 ;
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5806.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    temp_12 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_13) {
                    temp_12 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_5392.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5392.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (var_associatedTypeList_5806.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 160)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)), fixItArray14  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)) ;
                }
              }
              if (kBoolFalse == test_11) {
                GALGAS_bigint var_associatedValueIndex_6530 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_6570 (var_associatedTypeList_5806, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_6645 (enumerator_5149.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_6570.hasCurrentObject () && enumerator_6645.hasCurrentObject ()) {
                  enumGalgasBool test_15 = kBoolTrue ;
                  if (kBoolTrue == test_15) {
                    test_15 = GALGAS_bool (kIsNotEqual, enumerator_6645.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_6570.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_6645.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (enumerator_6645.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_6570.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)), fixItArray17  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_18 = kBoolTrue ;
                  if (kBoolTrue == test_18) {
                    test_18 = var_firstConstant_5317.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6645.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      GALGAS_string var_cppName_7090 = GALGAS_string ("extractedValue_").add_operation (enumerator_6645.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)).add_operation (enumerator_6645.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)) ;
                      var_extractedAssociatedValuesForGeneration_5259.addAssign_operation (enumerator_6570.current_mEntry (HERE), var_cppName_7090, var_associatedValueIndex_6530.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172)) ;
                      {
                      var_analysisContext_5346.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_6645.current_mExtractedValueName (HERE), enumerator_6570.current_mEntry (HERE), var_cppName_7090, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 173)) ;
                      }
                    }
                  }
                  var_associatedValueIndex_6530.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)) ;
                  enumerator_6570.gotoNextObject () ;
                  enumerator_6645.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_5392.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5392.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).add_operation (extensionGetter_definition (var_switchExpression_4542.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)), fixItArray19  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)) ;
      }
      var_firstConstant_5317 = GALGAS_bool (false) ;
      enumerator_5392.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_7734 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 184)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5346, ioArgument_ioTypeMap, enumerator_5149.current_mInstructionList (HERE), var_instructionList_7734, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 185)) ;
    }
    var_templateInstructionSwitchBranchList_5042.addAssign_operation (enumerator_5149.current_mConstantList (HERE), var_extractedAssociatedValuesForGeneration_5259, enumerator_5149.current_mEndOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)), var_instructionList_7734  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 193)) ;
    enumerator_5149.gotoNextObject () ;
  }
  GALGAS_stringset var_forgottenConstants_8181 = var_enumConstantMap_4831.getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 200)).substract_operation (var_constantsNamedInSwitchInstruction_4925, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 200)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_8181.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 201)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_string var_s_8320 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_8336 (var_forgottenConstants_8181, kENUMERATION_UP) ;
      while (enumerator_8336.hasCurrentObject ()) {
        var_s_8320.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_8336.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)) ;
        enumerator_8336.gotoNextObject () ;
      }
      const GALGAS_templateInstructionSwitchAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mSwitchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8320, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 206)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_4542.readProperty_mResultType (), var_switchExpression_4542, var_templateInstructionSwitchBranchList_5042  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 210))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 210)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_switchVarCppName_10260 ;
  const GALGAS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_10260, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 246)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_10260, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 256)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_2 = this ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_10607 (temp_2.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_10607.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10682 (enumerator_10607.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10682.hasCurrentObject ()) {
      const GALGAS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)).add_operation (enumerator_10682.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)) ;
      enumerator_10682.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_10607.current_mExtractedAssociatedValuesForGeneration (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 265)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateInstructionSwitchForGeneration temp_5 = this ;
        GALGAS_string var_type_11054 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (enumerator_10607.current_mConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)) ;
        GALGAS_string var_varPtr_11208 = GALGAS_string ("extractPtr_").add_operation (enumerator_10607.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11054, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_varPtr_11208, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_type_11054, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_switchVarCppName_10260, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_11407 (enumerator_10607.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_11407.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11407.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (enumerator_11407.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (var_varPtr_11208, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)).add_operation (enumerator_11407.current_mIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)) ;
          enumerator_11407.gotoNextObject () ;
        }
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, enumerator_10607.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 275)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 276)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction (enumerator_10607.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 277)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 285)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 287)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 288)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 289)) ;
    }
    enumerator_10607.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 292)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  GALGAS_lstring var_key_30376 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 810)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 810)) ;
  {
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_30376, temp_2, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 811)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap var_lexicalTypeMap_31198 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 823)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_31265 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 824)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_31198, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_31265, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 825)) ;
  }
  GALGAS_terminalMap var_terminalMap_31462 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 831)) ;
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_31510 (temp_1.readProperty_mTerminalDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_31510.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_31560 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 833)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_31629 (enumerator_31510.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_31629.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_31727 ;
      var_lexicalAttributeMap_31265.method_searchKey (enumerator_31629.current_mAttributeName (HERE), var_attributeLexicalType_31727, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 835)) ;
      var_argumentTypeList_31560.addAssign_operation (enumerator_31629.current_mFormalSelector (HERE), enumerator_31629.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_31727  COMMA_SOURCE_FILE ("lexique-component.galgas", 836)) ;
      enumerator_31629.gotoNextObject () ;
    }
    {
    var_terminalMap_31462.setter_insertKey (enumerator_31510.current_mName (HERE), var_argumentTypeList_31560, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 838)) ;
    }
    enumerator_31510.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_31942 (temp_2.readProperty_mLexicalListDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_31942.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_32004 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 842)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_32073 (enumerator_31942.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_32073.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_32172 ;
      var_lexicalAttributeMap_31265.method_searchKey (enumerator_32073.current_mAttributeName (HERE), var_attributeLexicalType_32172, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 844)) ;
      var_argumentTypeList_32004.addAssign_operation (enumerator_32073.current_mFormalSelector (HERE), enumerator_32073.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_32172  COMMA_SOURCE_FILE ("lexique-component.galgas", 845)) ;
      enumerator_32073.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_32320 (enumerator_31942.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_32320.hasCurrentObject ()) {
      {
      var_terminalMap_31462.setter_insertKey (enumerator_32320.current_mTerminalSpelling (HERE), var_argumentTypeList_32004, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 848)) ;
      }
      enumerator_32320.gotoNextObject () ;
    }
    enumerator_31942.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  const GALGAS_lexiqueComponentAST temp_5 = this ;
  const GALGAS_lexiqueComponentAST temp_6 = this ;
  const GALGAS_lexiqueComponentAST temp_7 = this ;
  const GALGAS_lexiqueComponentAST temp_8 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), this->mProperty_mIsTemplate, var_terminalMap_31462, temp_4.readProperty_mIndexingListAST (), temp_5.readProperty_mTerminalDeclarationListAST (), temp_6.readProperty_mLexicalAttributeListAST (), temp_7.readProperty_mLexicalStyleListAST (), temp_8.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 852)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_33571 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 875)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_33571, var_nameForUsefulness_33571, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 876)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_33824 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 878)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_33962 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_33962, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 880)) ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_34081 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_34081, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 882)) ;
  }
  GALGAS_stringset var_unicodeTestFunctions_34208 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis (var_unicodeTestFunctions_34208, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 884)) ;
  }
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_34301 = GALGAS_lexiqueAnalysisContext::constructor_new (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_33962, var_lexicalFunctionMap_34081, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 890)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 891)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 892)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 893)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 894)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexique-component.galgas", 895)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 896)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 897)), var_unicodeTestFunctions_34208, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 886)) ;
  GALGAS_bigint var_styleIndex_34708 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 901)) ;
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_lexicalStyleListAST enumerator_34736 (temp_2.readProperty_mLexicalStyleListAST (), kENUMERATION_UP) ;
  while (enumerator_34736.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_34301.mProperty_mStyleMap.setter_insertKey (enumerator_34736.current_mName (HERE), enumerator_34736.current_mComment (HERE), var_styleIndex_34708.getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 903)) ;
    }
    var_styleIndex_34708.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 904)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 904)) ;
    enumerator_34736.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_33824, temp_3.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_34301.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 907)) ;
  }
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_35226 (temp_4.readProperty_mTerminalDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_35226.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_35300 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, enumerator_35226.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 915)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_lstring joker_35419 ; // Joker input parameter
        var_lexiqueAnalysisContext_34301.readProperty_mStyleMap ().method_searchKey (enumerator_35226.current_mStyle (HERE), joker_35419, var_terminalStyleIndex_35300, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 916)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_35459 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 918)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_35528 (enumerator_35226.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_35528.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_35651 ;
      var_lexiqueAnalysisContext_34301.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_35528.current_mAttributeName (HERE), var_attributeLexicalType_35651, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 920)) ;
      var_argumentTypeList_35459.addAssign_operation (enumerator_35528.current_mFormalSelector (HERE), enumerator_35528.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_35651  COMMA_SOURCE_FILE ("lexique-component.galgas", 921)) ;
      enumerator_35528.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_34301.mProperty_mTerminalMap.setter_insertKey (enumerator_35226.current_mName (HERE), var_argumentTypeList_35459, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 923)) ;
    }
    var_lexiqueAnalysisContext_34301.mProperty_mTerminalList.addAssign_operation (enumerator_35226.current_mName (HERE), var_argumentTypeList_35459, enumerator_35226.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_35226.current_isEndOfTemplateMark (HERE), enumerator_35226.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 946)), var_terminalStyleIndex_35300  COMMA_SOURCE_FILE ("lexique-component.galgas", 941)) ;
    enumerator_35226.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_6 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_36813 (temp_6.readProperty_mLexicalListDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_36813.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_36881 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsStrictSup, enumerator_36813.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 951)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring joker_37000 ; // Joker input parameter
        var_lexiqueAnalysisContext_34301.readProperty_mStyleMap ().method_searchKey (enumerator_36813.current_mStyle (HERE), joker_37000, var_terminalStyleIndex_36881, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 952)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_37040 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 954)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_37109 (enumerator_36813.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_37109.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_37232 ;
      var_lexiqueAnalysisContext_34301.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_37109.current_mAttributeName (HERE), var_attributeLexicalType_37232, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 956)) ;
      var_argumentTypeList_37040.addAssign_operation (enumerator_37109.current_mFormalSelector (HERE), enumerator_37109.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_37232  COMMA_SOURCE_FILE ("lexique-component.galgas", 957)) ;
      enumerator_37109.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_37387 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 959)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_37420 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("lexique-component.galgas", 960)) ;
    cEnumerator_lexicalListEntryListAST enumerator_37519 (enumerator_36813.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_37519.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_37565 = enumerator_36813.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_37519.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 962)) ;
      var_lexiqueAnalysisContext_34301.mProperty_mTerminalList.addAssign_operation (enumerator_37519.current_mTerminalSpelling (HERE), var_argumentTypeList_37040, var_syntaxErrorMessage_37565, enumerator_37519.current_isEndOfTemplateMark (HERE), enumerator_37519.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 985)), var_terminalStyleIndex_36881  COMMA_SOURCE_FILE ("lexique-component.galgas", 980)) ;
      {
      var_lexiqueAnalysisContext_34301.mProperty_mTerminalMap.setter_insertKey (enumerator_37519.current_mTerminalSpelling (HERE), var_argumentTypeList_37040, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 987)) ;
      }
      {
      var_lexicalTokenListMap_37387.setter_insertKey (enumerator_37519.current_mEntrySpelling (HERE), enumerator_37519.current_mTerminalSpelling (HERE), enumerator_37519.current_nonAtomicSelection (HERE), enumerator_37519.current_isEndOfTemplateMark (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 988)) ;
      }
      var_tokenSortedlist_37420.addAssign_operation (enumerator_37519.current_mEntrySpelling (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 994)), enumerator_37519.current_mEntrySpelling (HERE).readProperty_string (), enumerator_37519.current_mTerminalSpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 994)) ;
      var_lexiqueAnalysisContext_34301.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_37519.current_mEntrySpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 995)) ;
      enumerator_37519.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_34301.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_36813.current_mName (HERE), var_lexicalTokenListMap_37387, var_tokenSortedlist_37420, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 997)) ;
    }
    enumerator_36813.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_8 = this ;
  cEnumerator_lexicalMessageDeclarationListAST enumerator_39308 (temp_8.readProperty_mLexicalMessageDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_39308.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_34301.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_39308.current_mMessageName (HERE), enumerator_39308.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1001)) ;
    }
    enumerator_39308.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_9 = this ;
  cEnumerator_lexicalRuleListAST enumerator_39530 (temp_9.readProperty_mLexicalRuleListAST (), kENUMERATION_UP) ;
  while (enumerator_39530.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_39530.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_34301, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1005)) ;
    enumerator_39530.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_39722 (var_lexiqueAnalysisContext_34301.readProperty_mLexicalMessageMap (), kENUMERATION_UP) ;
  while (enumerator_39722.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = enumerator_39722.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 1009)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_39722.current_lkey (HERE).readProperty_location (), GALGAS_string ("unused message"), fixItArray11  COMMA_SOURCE_FILE ("lexique-component.galgas", 1010)) ;
      }
    }
    enumerator_39722.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_12 = this ;
  cEnumerator_templateDelimitorListAST enumerator_39976 (temp_12.readProperty_mTemplateDelimitorListAST (), kENUMERATION_UP) ;
  while (enumerator_39976.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_34301.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_39976.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1015)) ;
    var_lexiqueAnalysisContext_34301.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_39976.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1016)) ;
    var_lexiqueAnalysisContext_34301.mProperty_mTemplateDelimitorList.addAssign_operation (enumerator_39976.current_mStartString (HERE), enumerator_39976.current_mEndString (HERE), enumerator_39976.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 1017)) ;
    enumerator_39976.gotoNextObject () ;
  }
  GALGAS_stringset var_indexNameSet_40299 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexique-component.galgas", 1019)) ;
  const GALGAS_lexiqueComponentAST temp_13 = this ;
  cEnumerator_indexingListAST enumerator_40335 (temp_13.readProperty_mIndexingListAST (), kENUMERATION_UP) ;
  while (enumerator_40335.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_indexNameSet_40299.getter_hasKey (enumerator_40335.current_mIndexName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas", 1021)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_40335.current_mIndexName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_40335.current_mIndexName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1022)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1022)), fixItArray15  COMMA_SOURCE_FILE ("lexique-component.galgas", 1022)) ;
      }
    }
    var_indexNameSet_40299.addAssign_operation (enumerator_40335.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1024)) ;
    enumerator_40335.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_16 = this ;
  cEnumerator_templateReplacementListAST enumerator_40652 (temp_16.readProperty_mTemplateReplacementListAST (), kENUMERATION_UP) ;
  while (enumerator_40652.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_34301.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_40652.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1028)) ;
    var_lexiqueAnalysisContext_34301.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_40652.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1029)) ;
    enumerator_40652.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("lexique-component.galgas", 1033)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      const GALGAS_lexiqueComponentAST temp_18 = this ;
      const GALGAS_lexiqueComponentAST temp_19 = this ;
      const GALGAS_lexiqueComponentAST temp_20 = this ;
      const GALGAS_lexiqueComponentAST temp_21 = this ;
      GALGAS_string var_headerContents_41020 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (inCompiler, temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1036)), temp_19.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_34301, temp_20.readProperty_mTemplateDelimitorListAST (), temp_21.readProperty_mIndexingListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1035))) ;
      const GALGAS_lexiqueComponentAST temp_22 = this ;
      const GALGAS_lexiqueComponentAST temp_23 = this ;
      const GALGAS_lexiqueComponentAST temp_24 = this ;
      const GALGAS_lexiqueComponentAST temp_25 = this ;
      const GALGAS_lexiqueComponentAST temp_26 = this ;
      const GALGAS_lexiqueComponentAST temp_27 = this ;
      const GALGAS_lexiqueComponentAST temp_28 = this ;
      GALGAS_string var_cppContents_41327 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (inCompiler, temp_22.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1044)), extensionGetter_useLoopLocalVar (temp_23.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1045)), var_lexiqueAnalysisContext_34301.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34301.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34301.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34301.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_34301.readProperty_mUnicodeStringToGenerate (), temp_24.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34301, temp_25.readProperty_mTemplateDelimitorListAST (), temp_26.readProperty_mLexiqueComponentName ().readProperty_string (), temp_27.readProperty_mTemplateReplacementListAST (), temp_28.readProperty_mLexicalStyleListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1043))) ;
      const GALGAS_lexiqueComponentAST temp_29 = this ;
      GALGAS_string var_objCocoaHeader_42025 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, temp_29.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_34301 COMMA_SOURCE_FILE ("lexique-component.galgas", 1059))) ;
      const GALGAS_lexiqueComponentAST temp_30 = this ;
      const GALGAS_lexiqueComponentAST temp_31 = this ;
      const GALGAS_lexiqueComponentAST temp_32 = this ;
      const GALGAS_lexiqueComponentAST temp_33 = this ;
      const GALGAS_lexiqueComponentAST temp_34 = this ;
      const GALGAS_lexiqueComponentAST temp_35 = this ;
      const GALGAS_lexiqueComponentAST temp_36 = this ;
      GALGAS_string var_objCocoaImplementation_42217 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (temp_30.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1065)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1065)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1065)), temp_31.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_34301.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34301.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34301.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34301.readProperty_mUnicodeStringToGenerate (), temp_32.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34301, temp_33.readProperty_mTemplateReplacementListAST (), temp_34.readProperty_mIndexingListAST (), temp_35.readProperty_mLexicalStyleListAST (), temp_36.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1064))) ;
      const GALGAS_lexiqueComponentAST temp_37 = this ;
      const GALGAS_lexiqueComponentAST temp_38 = this ;
      const GALGAS_lexiqueComponentAST temp_39 = this ;
      const GALGAS_lexiqueComponentAST temp_40 = this ;
      const GALGAS_lexiqueComponentAST temp_41 = this ;
      const GALGAS_lexiqueComponentAST temp_42 = this ;
      const GALGAS_lexiqueComponentAST temp_43 = this ;
      GALGAS_string var_swiftCocoaImplementation_42887 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (temp_37.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1080)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1080)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1080)), temp_38.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_34301.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34301.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34301.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34301.readProperty_mUnicodeStringToGenerate (), temp_39.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34301, temp_40.readProperty_mTemplateReplacementListAST (), temp_41.readProperty_mIndexingListAST (), temp_42.readProperty_mLexicalStyleListAST (), temp_43.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1079))) ;
      const GALGAS_lexiqueComponentAST temp_44 = this ;
      const GALGAS_lexiqueComponentAST temp_45 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (temp_44.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1098)), temp_45.readProperty_mLexiqueComponentName ().readProperty_string (), GALGAS_string::makeEmptyString (), var_headerContents_41020, var_cppContents_41327, var_objCocoaHeader_42025, var_objCocoaImplementation_42217, var_swiftCocoaImplementation_42887  COMMA_SOURCE_FILE ("lexique-component.galgas", 1096))  COMMA_SOURCE_FILE ("lexique-component.galgas", 1094)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                             const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                             const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                             const GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "//--------------------------------------------------------------------------------------------------\n//\n//" ;
  result += GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue () ;
  result += "\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/C_Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    R O U T I N E S\n//--------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_664_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_664 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_664.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_664.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "\nvoid scanner_routine_" ;
        result += enumerator_664.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += " (C_Lexique & inLexique" ;
        GALGAS_uint index_885_ (0) ;
        if (enumerator_664.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_885 (enumerator_664.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_885.hasCurrentObject ()) {
            result += ",\n                " ;
            result += extensionGetter_cppConstInFormalArgument (enumerator_885.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 17)).stringValue () ;
            result += extensionGetter_cppTypeName (enumerator_885.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 18)).stringValue () ;
            result += extensionGetter_cppReferenceInFormalArgument (enumerator_885.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 19)).stringValue () ;
            result += " " ;
            result += enumerator_885.current_mArgumentNameForComment (HERE).stringValue () ;
            index_885_.increment () ;
            enumerator_885.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1238_ (0) ;
        if (enumerator_664.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1238 (enumerator_664.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
          while (enumerator_1238.hasCurrentObject ()) {
            result += ",\n                const char * " ;
            result += enumerator_1238.current_mValue (HERE).stringValue () ;
            index_1238_.increment () ;
            enumerator_1238.gotoNextObject () ;
          }
        }
        result += ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_664_.increment () ;
      enumerator_664.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    F U N C T I O N S\n//--------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1724_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1724 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1724.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1724.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result += "\n" ;
        result += extensionGetter_cppTypeName (enumerator_1724.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 35)).stringValue () ;
        result += " scanner_function_" ;
        result += enumerator_1724.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += " (C_Lexique & inLexique" ;
        GALGAS_uint index_1921_ (0) ;
        if (enumerator_1724.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1921 (enumerator_1724.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1921.hasCurrentObject ()) {
            result += ",\n                const " ;
            result += extensionGetter_cppTypeName (enumerator_1921.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 37)).stringValue () ;
            result += " " ;
            result += enumerator_1921.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1921_.increment () ;
            enumerator_1921.gotoNextObject () ;
          }
        }
        result += ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1724_.increment () ;
      enumerator_1724.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " : public cToken {\n" ;
  GALGAS_uint index_2438_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2438 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_2438.hasCurrentObject ()) {
      result += "  public: " ;
      result += extensionGetter_cppTypeName (enumerator_2438.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue () ;
      result += " mLexicalAttribute_" ;
      result += enumerator_2438.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue () ;
      result += " ;\n" ;
      index_2438_.increment () ;
      enumerator_2438.gotoNextObject () ;
    }
  }
  result += "\n  public: cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (void) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " : public C_Lexique {\n//--- Constructors\n  public: C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    C_SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (void) {}\n  #endif\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 80)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result += "\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result += "\n\n\n//--- Terminal symbols enumeration\n  public: enum {kToken_" ;
  GALGAS_uint index_4100_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_4100 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_4100.hasCurrentObject ()) {
      result += ",\n   kToken_" ;
      result += enumerator_4100.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue () ;
      index_4100_.increment () ;
      enumerator_4100.gotoNextObject () ;
    }
  }
  result += "} ;\n" ;
  GALGAS_uint index_4285_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_4285 (in_DELIMITOR_5F_LIST_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4285.hasCurrentObject ()) {
      result += "\n//--- Key words table '" ;
      result += enumerator_4285.current_mName (HERE).readProperty_string ().stringValue () ;
      result += "'\n  public: static int32_t search_into_" ;
      result += enumerator_4285.current_mName (HERE).readProperty_string ().stringValue () ;
      result += " (const String & inSearchedString) ;\n" ;
      index_4285_.increment () ;
      enumerator_4285.gotoNextObject () ;
    }
  }
  result += "  \n\n//--- Assign from attribute\n" ;
  GALGAS_uint index_4551_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_4551 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_4551.hasCurrentObject ()) {
      result += "  public: GALGAS_l" ;
      result += extensionGetter_lexicalTypeBaseName (enumerator_4551.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).stringValue () ;
      result += " synthetizedAttribute_" ;
      result += enumerator_4551.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).stringValue () ;
      result += " (void) const ;\n" ;
      index_4551_.increment () ;
      enumerator_4551.gotoNextObject () ;
    }
  }
  result += "\n\n//--- Attribute access\n" ;
  GALGAS_uint index_4825_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_4825 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_4825.hasCurrentObject ()) {
      result += "  public: " ;
      result += extensionGetter_cppTypeName (enumerator_4825.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 109)).stringValue () ;
      result += " attributeValue_" ;
      result += enumerator_4825.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 109)).stringValue () ;
      result += " (void) const ;\n" ;
      index_4825_.increment () ;
      enumerator_4825.gotoNextObject () ;
    }
  }
  result += "\n\n//--- Indexing keys\n" ;
  GALGAS_uint index_5052_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_5052 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5052 = enumerator_5052.hasCurrentObject () ;
    if (nonEmpty_enumerator_5052) {
      result += "  public: enum {" ;
    }
    while (enumerator_5052.hasCurrentObject ()) {
      result += "\n    kIndexing_" ;
      result += enumerator_5052.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 117)).stringValue () ;
      if (enumerator_5052.hasNextObject ()) {
        result += "," ;
      }
      index_5052_.increment () ;
      enumerator_5052.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_5052) {
      result += "\n  } ;\n" ;
    }
  }
  result += "\n//--- Parse lexical token\n  protected: void internalParseLexicalToken (cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " & token) ;\n  protected: virtual bool parseLexicalToken (void) override ;\n\n//--- Get terminal message\n  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;\n\n//--- Get terminal count\n  public: virtual int32_t terminalVocabularyCount (void) const override { return " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 130)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 130)).stringValue () ;
  result += " ; }\n\n//--- Get Token String\n  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;\n\n//--- Enter Token\n  protected: void enterToken (cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " & ioToken) ;\n\n//--- Style name for Latex\n  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;\n  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;\n} ;\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (Compiler * inCompiler,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                               const GALGAS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                               const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                               const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                               const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                               const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                               const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                               const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result += "//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E                                                                             \n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"strings/unicode_character_cpp.h\"\n#include \"galgas2/scanner_actions.h\"\n#include \"galgas2/cLexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (void)" ;
  GALGAS_uint index_675_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_675 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_675 = enumerator_675.hasCurrentObject () ;
    if (nonEmpty_enumerator_675) {
      result += " :\n" ;
    }
    while (enumerator_675.hasCurrentObject ()) {
      result += "mLexicalAttribute_" ;
      result += enumerator_675.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue () ;
      result += " ()" ;
      if (enumerator_675.hasNextObject ()) {
        result += ",\n" ;
      }
      index_675_.increment () ;
      enumerator_675.gotoNextObject () ;
    }
  }
  result += " {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "Compiler * inCallerCompiler,\n                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const String & inSourceFileName\n                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) :\nC_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE)" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += ",\nmMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_0) {
  }
  result += " {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "Compiler * inCallerCompiler,\n                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const String & inSourceString,\n                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "const String & inStringForError\n                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "COMMA_LOCATION_ARGS) :\nC_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += ",\nmMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_1) {
  }
  result += " {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                        Lexical error message list                                             \n//--------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_2121_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_2121 (in_LEXICAL_5F_MESSAGE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2121.hasCurrentObject ()) {
      result += "\nstatic const char * gLexicalMessage_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_2121.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " = " ;
      result += enumerator_2121.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result += " ;\n" ;
      index_2121_.increment () ;
      enumerator_2121.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//                getMessageForTerminal                                                          \n//--------------------------------------------------------------------------------------------------\n\nString C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::getMessageForTerminal (const int32_t inTerminalIndex) const {\n  String result = \"<unknown>\" ;\n  if ((inTerminalIndex >= 0) && (inTerminalIndex < " ;
  result += in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue () ;
  result += ")) {\n    static const char * syntaxErrorMessageArray [" ;
  result += in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue () ;
  result += "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_2986_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_2986 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2986.hasCurrentObject ()) {
      result += ",\n        " ;
      result += enumerator_2986.current_mSyntaxErrorMessage (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 64)).stringValue () ;
      index_2986_.increment () ;
      enumerator_2986.gotoNextObject () ;
    }
  }
  result += "\n    } ;\n    result = syntaxErrorMessageArray [inTerminalIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S                                           \n//--------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_3509_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_3509 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_3509.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_3509.current_key (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result += "\n//--- Unicode string for '$" ;
        result += enumerator_3509.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue () ;
        result += "$'\nstatic const utf32 kUnicodeString_" ;
        result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result += "_" ;
        result += enumerator_3509.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
        result += " [] = " ;
        result += enumerator_3509.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
        result += " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_3509_.increment () ;
      enumerator_3509.gotoNextObject () ;
    }
  }
  result += "\n" ;
  GALGAS_uint index_3899_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_3899 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3899.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n//             Key words table '" ;
      result += enumerator_3899.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += "'      \n//--------------------------------------------------------------------------------------------------\n\nstatic const int32_t ktable_size_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_3899.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " = " ;
      result += enumerator_3899.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).stringValue () ;
      result += " ;\n\nstatic const C_unicode_lexique_table_entry ktable_for_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_3899.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " [ktable_size_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_3899.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += "] = {\n" ;
      GALGAS_uint index_4590_ (0) ;
      if (enumerator_3899.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_4590 (enumerator_3899.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_4590.hasCurrentObject ()) {
          result += "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result += "_" ;
          result += enumerator_4590.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue () ;
          result += ", " ;
          result += enumerator_4590.current_mLength (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue () ;
          result += ", C_Lexique_" ;
          result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result += "::kToken_" ;
          result += enumerator_4590.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue () ;
          result += ")" ;
          if (enumerator_4590.hasNextObject ()) {
            result += ",\n" ;
          }
          index_4590_.increment () ;
          enumerator_4590.gotoNextObject () ;
        }
      }
      result += "\n} ;\n\nint32_t C_Lexique_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "::search_into_" ;
      result += enumerator_3899.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " (const String & inSearchedString) {\n  return searchInList (inSearchedString, ktable_for_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_3899.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += ", ktable_size_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_3899.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += ") ;\n}\n\n" ;
      index_3899_.increment () ;
      enumerator_3899.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//                          getCurrentTokenString                                                \n//--------------------------------------------------------------------------------------------------\n\nString C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::getCurrentTokenString (const cToken * inTokenPtr) const {\n  const cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " * ptr = (const cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " *) inTokenPtr ;\n  String s ;\n  if (ptr == nullptr) {\n    s.appendCString(\"$$\") ;\n  }else{\n    switch (ptr->mTokenCode) {\n    case kToken_:\n      s.appendCString(\"$$\") ;\n      break ;\n" ;
  GALGAS_uint index_5962_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_5962 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5962.hasCurrentObject ()) {
      result += "    case kToken_" ;
      result += enumerator_5962.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 115)).stringValue () ;
      result += ":\n      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n      s.appendCString (" ;
      result += enumerator_5962.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 117)).stringValue () ;
      result += ") ;\n      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_6367_ (0) ;
      if (enumerator_5962.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_6367 (enumerator_5962.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
        while (enumerator_6367.hasCurrentObject ()) {
          result += "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n      s." ;
          result += extensionGetter_appendMethodName (enumerator_6367.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue () ;
          result += " (ptr->mLexicalAttribute_" ;
          result += enumerator_6367.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue () ;
          result += extensionGetter_appendArgumentOfMethod (enumerator_6367.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue () ;
          result += ") ;\n" ;
          index_6367_.increment () ;
          enumerator_6367.gotoNextObject () ;
        }
      }
      result += "      break ;\n" ;
      index_5962_.increment () ;
      enumerator_5962.gotoNextObject () ;
    }
  }
  result += "    default:\n      break ;\n    }\n  }\n  return s ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters                                                 \n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_7255_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    cEnumerator_templateDelimitorList enumerator_7255 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7255 = enumerator_7255.hasCurrentObject () ;
    if (nonEmpty_enumerator_7255) {
      result += "static const cTemplateDelimiter " ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_kTemplateDefinitionArray [" ;
      result += in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).stringValue () ;
      result += "] = {\n" ;
    }
    while (enumerator_7255.hasCurrentObject ()) {
      result += "  cTemplateDelimiter (kUnicodeString_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_7255.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
      result += ", " ;
      result += enumerator_7255.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
      result += ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7255.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result += "nullptr, 0," ;
      }else if (kBoolFalse == test_3) {
        result += "kUnicodeString_" ;
        result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result += "_" ;
        result += enumerator_7255.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue () ;
        result += ", " ;
        result += enumerator_7255.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue () ;
        result += "," ;
      }
      result += " nullptr, " ;
      result += enumerator_7255.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).stringValue () ;
      result += ")" ;
      if (enumerator_7255.hasNextObject ()) {
        result += ",\n" ;
      }
      index_7255_.increment () ;
      enumerator_7255.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7255) {
      result += "\n} ;\n" ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements                                               \n//--------------------------------------------------------------------------------------------------\n\n" ;
  GALGAS_uint index_8263_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_8263 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8263 = enumerator_8263.hasCurrentObject () ;
    if (nonEmpty_enumerator_8263) {
      result += "static const cTemplateDelimiter " ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_kTemplateReplacementArray [" ;
      result += in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue () ;
      result += "] = {\n" ;
    }
    while (enumerator_8263.hasCurrentObject ()) {
      result += "  cTemplateDelimiter (kUnicodeString_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_8263.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue () ;
      result += ", " ;
      result += enumerator_8263.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue () ;
      result += ", kUnicodeString_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "_" ;
      result += enumerator_8263.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
      result += ", " ;
      result += enumerator_8263.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
      result += ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_8263.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result += "nullptr" ;
      }else if (kBoolFalse == test_4) {
        result += "scanner_routine_" ;
        result += enumerator_8263.current_mReplacementFunction (HERE).readProperty_string ().stringValue () ;
      }
      result += ", true)" ;
      if (enumerator_8263.hasNextObject ()) {
        result += ",\n" ;
      }
      index_8263_.increment () ;
      enumerator_8263.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8263) {
      result += "\n} ;\n" ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark                                 \n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_9410_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_9410 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9410 = enumerator_9410.hasCurrentObject () ;
      if (nonEmpty_enumerator_9410) {
        result += "static const bool " ;
        result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result += "_kEndOfScriptInTemplateArray [" ;
        result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
        result += "] = {\n" ;
      }
      while (enumerator_9410.hasCurrentObject ()) {
        result += "  " ;
        result += enumerator_9410.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue () ;
        result += " /* " ;
        result += enumerator_9410.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
        result += " */" ;
        if (enumerator_9410.hasNextObject ()) {
          result += ",\n" ;
        }
        index_9410_.increment () ;
        enumerator_9410.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9410) {
        result += "\n} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_5) {
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//               INTERNAL PARSE LEXICAL TOKEN                                         \n//--------------------------------------------------------------------------------------------------\n\nvoid C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::internalParseLexicalToken (cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " & token) {\n" ;
  const enumGalgasBool test_6 = in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE.boolEnum () ;
  if (kBoolTrue == test_6) {
    result += "  bool loop = true ;\n" ;
  }else if (kBoolFalse == test_6) {
  }
  GALGAS_uint index_10050_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_10050 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_10050.hasCurrentObject ()) {
      result += "  token.mLexicalAttribute_" ;
      result += enumerator_10050.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue () ;
      result += extensionGetter_initialization (enumerator_10050.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue () ;
      result += " ;\n" ;
      index_10050_.increment () ;
      enumerator_10050.gotoNextObject () ;
    }
  }
  result += "  mTokenStartLocation = mCurrentLocation ;\n  try{\n" ;
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  GALGAS_uint index_10271_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_10271 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10271.hasCurrentObject ()) {
      result += callExtensionGetter_generateLexicalRuleCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10271.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 200)).stringValue () ;
      index_10271_.increment () ;
      enumerator_10271.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  result += "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n      token.mTokenCode = kToken_ ; // Empty string code\n    }else{ // Unknown input character\n      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n      token.mTokenCode = -1 ; // No token\n      advance () ; // ... go throught unknown character\n    }\n  }catch (const C_lexicalErrorException &) {\n    token.mTokenCode = -1 ; // No token\n    advance () ; // ... go throught unknown character\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N                                         \n//--------------------------------------------------------------------------------------------------\n\nbool C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::parseLexicalToken (void) {\n  cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 225)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result += "    if ((mMatchedTemplateDelimiterIndex >= 0)\n     && (" ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (" ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                              " ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,\n                                                              true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (" ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateReplacementArray, " ;
    result += in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 239)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 239)).stringValue () ;
    result += ") ;\n        if (replacementIndex >= 0) {\n          if (" ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken += " ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateReplacementArray [replacementIndex].mEndString ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (" ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateReplacementArray [replacementIndex].mEndString,\n                                               " ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateReplacementArray [replacementIndex].mEndStringLength,\n                                               kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;\n            }\n            " ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (" ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kTemplateDefinitionArray, " ;
    result += in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 255)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 255)).stringValue () ;
    result += ") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && " ;
    result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result += "_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  " ;
  }else if (kBoolFalse == test_7) {
    result += "    internalParseLexicalToken (token) ;" ;
  }
  result += "\n  }\n  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         E N T E R    T O K E N                                                \n//--------------------------------------------------------------------------------------------------\n\nvoid C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::enterToken (cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " & ioToken) {\n  cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " * ptr = nullptr ;\n  macroMyNew (ptr, cTokenFor_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " ()) ;\n  ptr->mTokenCode = ioToken.mTokenCode ;\n  // ptr->mIsOptional = ioToken.mIsOptional ;\n  ptr->mStartLocation = mTokenStartLocation ;\n  ptr->mEndLocation = mTokenEndLocation ;\n  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n  ioToken.mTemplateStringBeforeToken = \"\" ;\n" ;
  GALGAS_uint index_15089_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_15089 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_15089.hasCurrentObject ()) {
      result += "  ptr->mLexicalAttribute_" ;
      result += enumerator_15089.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 293)).stringValue () ;
      result += " = ioToken.mLexicalAttribute_" ;
      result += enumerator_15089.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 293)).stringValue () ;
      result += " ;\n" ;
      index_15089_.increment () ;
      enumerator_15089.gotoNextObject () ;
    }
  }
  result += "  enterTokenFromPointer (ptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//               A T T R I B U T E   A C C E S S                                                 \n" ;
  GALGAS_uint index_15519_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_15519 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_15519.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\n" ;
      result += extensionGetter_cppTypeName (enumerator_15519.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 303)).stringValue () ;
      result += " C_Lexique_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "::attributeValue_" ;
      result += enumerator_15519.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 303)).stringValue () ;
      result += " (void) const {\n  cTokenFor_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += " * ptr = (cTokenFor_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += " *) currentTokenPtr (HERE) ;\n  return ptr->mLexicalAttribute_" ;
      result += enumerator_15519.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 305)).stringValue () ;
      result += " ;\n}\n\n" ;
      index_15519_.increment () ;
      enumerator_15519.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n//         A S S I G N    F R O M    A T T R I B U T E                                           \n" ;
  GALGAS_uint index_16226_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_16226 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_16226.hasCurrentObject ()) {
      result += "//--------------------------------------------------------------------------------------------------\n\nGALGAS_l" ;
      result += extensionGetter_lexicalTypeBaseName (enumerator_16226.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 313)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 313)).stringValue () ;
      result += " C_Lexique_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += "::synthetizedAttribute_" ;
      result += enumerator_16226.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 313)).stringValue () ;
      result += " (void) const {\n  cTokenFor_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += " * ptr = (cTokenFor_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += " *) currentTokenPtr (HERE) ;\n  macroValidSharedObject (ptr, cTokenFor_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += ") ;\n  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n  GALGAS_" ;
      result += extensionGetter_lexicalTypeBaseName (enumerator_16226.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 317)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 317)).stringValue () ;
      result += " value (ptr->mLexicalAttribute_" ;
      result += enumerator_16226.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 317)).stringValue () ;
      result += ") ;\n  GALGAS_l" ;
      result += extensionGetter_lexicalTypeBaseName (enumerator_16226.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 318)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 318)).stringValue () ;
      result += " result (value, currentLocation) ;\n  return result ;\n}\n\n" ;
      index_16226_.increment () ;
      enumerator_16226.gotoNextObject () ;
    }
  }
  result += "//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N                                             \n//--------------------------------------------------------------------------------------------------\n\nGALGAS_stringlist C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::symbols (LOCATION_ARGS) {\n  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n" ;
  GALGAS_uint index_17734_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_17734 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_17734.hasCurrentObject ()) {
      result += "  result.addAssign_operation (GALGAS_string (" ;
      result += enumerator_17734.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result += ") COMMA_HERE) ;\n" ;
      index_17734_.increment () ;
      enumerator_17734.gotoNextObject () ;
    }
  }
  result += "  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (TC_UniqueArray <String> & " ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 337)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result += "/* ioList */" ;
  }else if (kBoolFalse == test_8) {
    result += "ioList" ;
  }
  result += ") {\n" ;
  GALGAS_uint index_18247_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_18247 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18247.hasCurrentObject ()) {
      result += "  ioList.appendObject (" ;
      result += in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 341)).add_operation (enumerator_18247.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 341)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 341)).stringValue () ;
      result += ") ;\n" ;
      index_18247_.increment () ;
      enumerator_18247.gotoNextObject () ;
    }
  }
  result += "}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += " (" ;
  columnMarker = result.currentColumn () ;
  result += "const String & " ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 347)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result += "/* inIdentifier */" ;
  }else if (kBoolFalse == test_9) {
    result += "inIdentifier" ;
  }
  result += ",\n     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "bool & " ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 348)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result += "/* ioFound */" ;
  }else if (kBoolFalse == test_10) {
    result += "ioFound" ;
  }
  result += ",\n     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result += "TC_UniqueArray <String> & " ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    result += "/* ioList */" ;
  }else if (kBoolFalse == test_11) {
    result += "ioList" ;
  }
  result += ") {\n" ;
  GALGAS_uint index_18956_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_18956 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18956.hasCurrentObject ()) {
      result += "  if (inIdentifier == " ;
      result += in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).add_operation (enumerator_18956.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result += ") {\n    ioFound = true ;\n" ;
      GALGAS_uint index_19153_ (0) ;
      if (enumerator_18956.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_19153 (enumerator_18956.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_19153.hasCurrentObject ()) {
          result += "    ioList.appendObject (" ;
          result += enumerator_19153.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 356)).stringValue () ;
          result += ") ;\n" ;
          index_19153_.increment () ;
          enumerator_19153.gotoNextObject () ;
        }
      }
      result += "    ioList.sortArrayUsingCompareMethod() ;\n  }\n" ;
      index_18956_.increment () ;
      enumerator_18956.gotoNextObject () ;
    }
  }
  result += "}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic cLexiqueIntrospection lexiqueIntrospection_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += ", getKeywordsForIdentifier_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += ") ;\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n//--------------------------------------------------------------------------------------------------\n\nuint32_t C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n  static const uint32_t kTerminalSymbolStyles [" ;
  result += in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 374)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 374)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 374)).stringValue () ;
  result += "] = {0" ;
  GALGAS_uint index_20251_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_20251 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20251.hasCurrentObject ()) {
      result += ",\n    " ;
      result += enumerator_20251.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 376)).stringValue () ;
      result += " /* " ;
      result += in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result += "_1_" ;
      result += enumerator_20251.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 376)).stringValue () ;
      result += " */" ;
      index_20251_.increment () ;
      enumerator_20251.gotoNextObject () ;
    }
  }
  result += "\n  } ;\n  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n//--------------------------------------------------------------------------------------------------\n\nString C_Lexique_" ;
  result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result += "::styleNameForIndex (const uint32_t inStyleIndex) const {\n  String result ;\n  if (inStyleIndex < " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 387)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 387)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 387)).stringValue () ;
  result += ") {\n    static const char * kStyleArray [" ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).stringValue () ;
  result += "] = {\n      \"\"" ;
  GALGAS_uint index_21089_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_21089 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21089.hasCurrentObject ()) {
      result += ",\n      " ;
      result += enumerator_21089.current_mName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 391)).stringValue () ;
      index_21089_.increment () ;
      enumerator_21089.gotoNextObject () ;
    }
  }
  result += "\n    } ;\n    result = kStyleArray [inStyleIndex] ;\n  }\n  return result ;\n}\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result += "\n#import \"OC_Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    R O U T I N E S\n//\n//--------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_417_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_417 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_417.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_417.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "\nvoid scanner_cocoa_routine_" ;
        result += enumerator_417.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += " (" ;
        columnMarker = result.currentColumn () ;
        result += "BOOL * ioScanningOk" ;
        GALGAS_uint index_646_ (0) ;
        if (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_646 (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_646.hasCurrentObject ()) {
            result += ",\n                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result += extensionGetter_cppConstInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result += extensionGetter_cocoaTypeName (enumerator_646.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result += extensionGetter_cocoaPointerInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
            result += " " ;
            result += enumerator_646.current_mArgumentNameForComment (HERE).stringValue () ;
            index_646_.increment () ;
            enumerator_646.gotoNextObject () ;
          }
        }
        result += ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_417_.increment () ;
      enumerator_417.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    F U N C T I O N S\n//\n//--------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1392_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1392 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1392.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1392.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result += "\n" ;
        result += extensionGetter_cppTypeName (enumerator_1392.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result += " scanner_cocoa_function_" ;
        result += enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += " (" ;
        columnMarker = result.currentColumn () ;
        result += "BOOL * ioScanningOk" ;
        GALGAS_uint index_1597_ (0) ;
        if (enumerator_1392.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1597 (enumerator_1392.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1597.hasCurrentObject ()) {
            result += ",\n                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result += "const " ;
            result += extensionGetter_cppTypeName (enumerator_1597.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
            result += " " ;
            result += enumerator_1597.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1597_.increment () ;
            enumerator_1597.gotoNextObject () ;
          }
        }
        result += ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1392_.increment () ;
      enumerator_1392.gotoNextObject () ;
    }
  }
  result += "\n\n//--------------------------------------------------------------------------------------------------\n//\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//\n//--------------------------------------------------------------------------------------------------\n\nenum {" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_1_" ;
  GALGAS_uint index_2198_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_2198 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_2198.hasCurrentObject ()) {
      result += ",\n  " ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "_1_" ;
      result += enumerator_2198.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
      index_2198_.increment () ;
      enumerator_2198.gotoNextObject () ;
    }
  }
  result += "\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " : OC_Lexique {\n//--- Attributes\n" ;
  GALGAS_uint index_2719_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2719 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_2719.hasCurrentObject ()) {
      result += "  @protected " ;
      result += extensionGetter_cocoaTypeName (enumerator_2719.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue () ;
      result += " mLexicalAttribute_" ;
      result += enumerator_2719.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " ;\n" ;
      index_2719_.increment () ;
      enumerator_2719.gotoNextObject () ;
    }
  }
  result += "\n}\n\n- (NSUInteger) terminalVocabularyCount ;\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring ;\n\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (NSUInteger) styleCount ;\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n\n- (NSArray *) indexingTitles ; // Array of NSString\n\n- (BOOL) isTemplateLexique ;\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                          const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                          const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                          const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "\n#import \"" ;
  result += in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result += ".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "static NSArray * kTemplateReplacementArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue () ;
    result += " ; // Of NSString \n" ;
  }else if (kBoolFalse == test_0) {
  }
  result += "\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "static NSArray * kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue () ;
    result += " ;\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n" ;
  GALGAS_uint index_1321_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_1321 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1321.hasCurrentObject ()) {
      result += "    mLexicalAttribute_" ;
      result += enumerator_1321.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " = " ;
      result += extensionGetter_cocoaInitializationCode (enumerator_1321.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue () ;
      result += " ;\n" ;
      index_1321_.increment () ;
      enumerator_1321.gotoNextObject () ;
    }
  }
  result += "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result += "  if (nil == kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue () ;
    result += ") {\n    kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue () ;
    result += " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1811_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1811 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_1811.hasCurrentObject ()) {
        result += "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result += enumerator_1811.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue () ;
        result += " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result += "nil" ;
        }else if (kBoolFalse == test_3) {
          result += "@" ;
          result += enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue () ;
        }
        result += " discardStartString:" ;
        result += enumerator_1811.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
        result += "],\n" ;
        index_1811_.increment () ;
        enumerator_1811.gotoNextObject () ;
      }
    }
    result += "      nil\n    ] ;\n  }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result += "  if (nil == kTemplateReplacementArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue () ;
    result += ") {\n\n    kTemplateReplacementArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
    result += " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_2576_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_2576 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2576.hasCurrentObject ()) {
        result += "      @" ;
        result += enumerator_2576.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue () ;
        result += ", " ;
        index_2576_.increment () ;
        enumerator_2576.gotoNextObject () ;
      }
    }
    result += "      nil\n    ] ;\n  }\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result += "  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                 I N D E X I N G    T I T L E S\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSArray *) indexingTitles { // Array of NSString\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result += "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3317_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_3317 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3317.hasCurrentObject ()) {
        result += "    @" ;
        result += enumerator_3317.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 88)).stringValue () ;
        result += ",\n" ;
        index_3317_.increment () ;
        enumerator_3317.gotoNextObject () ;
      }
    }
    result += "    NULL\n  ] ;\n" ;
  }else if (kBoolFalse == test_5) {
    result += "\n  return [NSArray array] ;\n" ;
  }
  result += "}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 105)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_4116_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_4116 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_4116 = enumerator_4116.hasCurrentObject () ;
      if (nonEmpty_enumerator_4116) {
        result += "static const BOOL kEndOfScriptInTemplateArray_" ;
        result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue () ;
        result += " [" ;
        result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue () ;
        result += "] = {\n" ;
      }
      while (enumerator_4116.hasCurrentObject ()) {
        result += "  " ;
        result += enumerator_4116.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 108)).stringValue () ;
        result += " /* " ;
        result += enumerator_4116.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
        result += " */" ;
        if (enumerator_4116.hasNextObject ()) {
          result += ",\n" ;
        }
        index_4116_.increment () ;
        enumerator_4116.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_4116) {
        result += "\n} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_6) {
  }
  result += "\n\n" ;
  GALGAS_uint index_4409_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_4409 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), kENUMERATION_UP) ;
    while (enumerator_4409.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_4409.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result += "//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '" ;
        result += enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += "'      \n//\n//--------------------------------------------------------------------------------------------------\n\nstatic const C_cocoa_lexique_table_entry ktable_for_" ;
        result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue () ;
        result += "_" ;
        result += enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += " [" ;
        result += enumerator_4409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue () ;
        result += "] = {\n" ;
        GALGAS_uint index_5051_ (0) ;
        if (enumerator_4409.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_5051 (enumerator_4409.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_5051.hasCurrentObject ()) {
            result += "  {" ;
            result += enumerator_5051.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue () ;
            result += ", " ;
            result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result += "_1_" ;
            result += enumerator_5051.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue () ;
            result += "}" ;
            if (enumerator_5051.hasNextObject ()) {
              result += ",\n" ;
            }
            index_5051_.increment () ;
            enumerator_5051.gotoNextObject () ;
          }
        }
        result += "\n} ;\n\nstatic NSInteger search_into_" ;
        result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 129)).stringValue () ;
        result += "_" ;
        result += enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += " (NSString * inSearchedString) {\n  return searchStringInTable (inSearchedString, ktable_for_" ;
        result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).stringValue () ;
        result += "_" ;
        result += enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += ", " ;
        result += enumerator_4409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).stringValue () ;
        result += ") ;\n}\n\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_4409_.increment () ;
      enumerator_4409.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//\n//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n" ;
  GALGAS_uint index_6023_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_6023 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_6023.hasCurrentObject ()) {
      result += "  " ;
      result += extensionGetter_cocoaResetPrefix (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
      result += "mLexicalAttribute_" ;
      result += enumerator_6023.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += extensionGetter_cocoaReset (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
      result += " ;\n" ;
      index_6023_.increment () ;
      enumerator_6023.gotoNextObject () ;
    }
  }
  result += "  mTokenStartLocation = mCurrentLocation ;\n" ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  GALGAS_uint index_6241_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_6241 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6241.hasCurrentObject ()) {
      result += callExtensionGetter_generateObjcCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_6241.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).stringValue () ;
      index_6241_.increment () ;
      enumerator_6241.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  result += "  if ([self testForInputChar:'\\0']) { // End of source text \?\n    mTokenCode = " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_1_ ; // Empty string code\n  }else{ // Unknown input character\n    scanningOk = NO ;\n    [self advance] ;\n  }\n  return scanningOk ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n" ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 173)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result += "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 174)).stringValue () ;
    result += " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).stringValue () ;
    result += " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      " ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 181)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      result += "\n      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 182)).stringValue () ;
      result += "] ;\n      " ;
    }else if (kBoolFalse == test_9) {
    }
    result += "\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 184)).stringValue () ;
    result += "] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 193)).stringValue () ;
    result += " [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }" ;
  }else if (kBoolFalse == test_8) {
    result += "    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;" ;
  }
  result += "\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                   T E R M I N A L    C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) terminalVocabularyCount {\n  return " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).stringValue () ;
  result += " ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S T Y L E   C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleCount {\n  return " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).stringValue () ;
  result += " ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) isTemplateLexique {\n  return " ;
  result += GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).stringValue () ;
  result += " ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//   S T Y L E   I N D E X    F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n  static const NSUInteger kTerminalSymbolStyles [" ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).stringValue () ;
  result += "] = {0" ;
  GALGAS_uint index_10280_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_10280 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_10280.hasCurrentObject ()) {
      result += ",\n    " ;
      result += enumerator_10280.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue () ;
      result += " /* " ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "_1_" ;
      result += enumerator_10280.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue () ;
      result += " */" ;
      index_10280_.increment () ;
      enumerator_10280.gotoNextObject () ;
    }
  }
  result += "\n  } ;\n  return kTerminalSymbolStyles [inTerminal] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n  static const BOOL kTerminalAtomicSelection [" ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).stringValue () ;
  result += "] = {NO" ;
  GALGAS_uint index_11065_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_11065 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_11065.hasCurrentObject ()) {
      result += ",\n    " ;
      result += enumerator_11065.current_atomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue () ;
      result += " /* " ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "_1_" ;
      result += enumerator_11065.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue () ;
      result += " */" ;
      index_11065_.increment () ;
      enumerator_11065.gotoNextObject () ;
    }
  }
  result += "\n  } ;\n  return kTerminalAtomicSelection [inTokenIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//             S T Y L E   N A M E    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).stringValue () ;
  result += ")) {\n    NSString * kStyleArray [" ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
  result += "] = {\n      @\"Default Style\"" ;
  GALGAS_uint index_11837_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_11837 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11837.hasCurrentObject ()) {
      result += ",\n      @" ;
      result += enumerator_11837.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 274)).stringValue () ;
      index_11837_.increment () ;
      enumerator_11837.gotoNextObject () ;
    }
  }
  result += "\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         S T Y L E   I D E N T I F I E R    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).stringValue () ;
  result += ")) {\n    NSString * kStyleArray [" ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).stringValue () ;
  result += "] = {\n      @\"" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\"" ;
  GALGAS_uint index_12590_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_12590 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12590.hasCurrentObject ()) {
      result += ",\n      @\"" ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "-" ;
      result += enumerator_12590.current_mName (HERE).readProperty_string ().stringValue () ;
      result += "\"" ;
      index_12590_.increment () ;
      enumerator_12590.gotoNextObject () ;
    }
  }
  result += "\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) lexiqueIdentifier {\n  return @\"" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftCocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                               const GALGAS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                               const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                               const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                               const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                               const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                               const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result += "\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//   LEXIQUE " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gFont_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " = EBGenericPreferenceProperty <NSFont> (\n  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),\n  prefKey: \"FontFor_\" + " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gLineHeight_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " = EBGenericPreferenceProperty <Int> (\n  defaultValue: 12,\n  prefKey: \"LineHeightFor_\" + " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gColors_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " : [EBGenericPreferenceProperty <NSColor>] = [\n  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\"),\n" ;
  GALGAS_uint index_1117_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_1117 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1117.hasCurrentObject ()) {
      result += "  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_" ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "-" ;
      result += enumerator_1117.current_mName (HERE).readProperty_string ().stringValue () ;
      result += "\"),\n" ;
      index_1117_.increment () ;
      enumerator_1117.gotoNextObject () ;
    }
  }
  result += "  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: \"ColorFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_lexical_error\"),\n  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: \"ColorFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gBoldStyle_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " : [EBGenericPreferenceProperty <Bool>] = [\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\"),\n" ;
  GALGAS_uint index_1833_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_1833 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1833.hasCurrentObject ()) {
      result += "  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_" ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "-" ;
      result += enumerator_1833.current_mName (HERE).readProperty_string ().stringValue () ;
      result += "\"),\n" ;
      index_1833_.increment () ;
      enumerator_1833.gotoNextObject () ;
    }
  }
  result += "  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: \"BoldFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_lexical_error\"),\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gItalicStyle_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " : [EBGenericPreferenceProperty <Bool>] = [\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\"),\n" ;
  GALGAS_uint index_2540_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_2540 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2540.hasCurrentObject ()) {
      result += "  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_" ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "-" ;
      result += enumerator_2540.current_mName (HERE).readProperty_string ().stringValue () ;
      result += "\"),\n" ;
      index_2540_.increment () ;
      enumerator_2540.gotoNextObject () ;
    }
  }
  result += "  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_lexical_error\"),\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "fileprivate let kTemplateReplacementArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 61)).stringValue () ;
    result += " : [String] = [\n" ;
    GALGAS_uint index_3411_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3411 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3411.hasCurrentObject ()) {
        result += "  " ;
        result += enumerator_3411.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 64)).stringValue () ;
        if (enumerator_3411.hasNextObject ()) {
          result += ",\n" ;
        }
        index_3411_.increment () ;
        enumerator_3411.gotoNextObject () ;
      }
    }
    result += "\n]\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result += "\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 74)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result += "fileprivate let kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 75)).stringValue () ;
    result += " : [SWIFT_TemplateDelimiter] = [\n" ;
    GALGAS_uint index_4057_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_4057 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_4057.hasCurrentObject ()) {
        result += "  SWIFT_TemplateDelimiter (startString: " ;
        result += enumerator_4057.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 78)).stringValue () ;
        result += ", endString: " ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_4057.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          result += "nil" ;
        }else if (kBoolFalse == test_2) {
          result += enumerator_4057.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 82)).stringValue () ;
        }
        result += ", discardStartString: " ;
        result += enumerator_4057.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 85)).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 85)).stringValue () ;
        result += ")" ;
        if (enumerator_4057.hasNextObject ()) {
          result += ",\n" ;
        }
        index_4057_.increment () ;
        enumerator_4057.gotoNextObject () ;
      }
    }
    result += "\n]\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result += "\n\n//--------------------------------------------------------------------------------------------------\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//--------------------------------------------------------------------------------------------------\n\nlet " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_1_ : UInt16 = 0\n" ;
  GALGAS_uint index_4808_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_4808 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_4808.hasCurrentObject ()) {
      result += "let " ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "_1_" ;
      result += enumerator_4808.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).stringValue () ;
      result += " : UInt16 = " ;
      result += index_4808_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).stringValue () ;
      result += "\n" ;
      index_4808_idx.increment () ;
      enumerator_4808.gotoNextObject () ;
    }
  }
  result += "let " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_2_ERROR : UInt16 = " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).stringValue () ;
  result += "\nlet " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_2_TEMPLATE : UInt16 = " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).stringValue () ;
  result += "\n\n//--------------------------------------------------------------------------------------------------\n\nfunc " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_lexiqueIdentifier () -> String {\n  return \"" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_styleNameFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"Default Style\", // 0\n" ;
  GALGAS_uint index_5636_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_5636 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5636.hasCurrentObject ()) {
      result += "    " ;
      result += enumerator_5636.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).stringValue () ;
      result += ", // " ;
      result += index_5636_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).stringValue () ;
      result += "\n" ;
      index_5636_idx.increment () ;
      enumerator_5636.gotoNextObject () ;
    }
  }
  result += "    \"Lexical error\", // " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).stringValue () ;
  result += "\n    \"Template\" // " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).stringValue () ;
  result += "\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "\", // 0\n" ;
  GALGAS_uint index_6203_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_6203 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6203.hasCurrentObject ()) {
      result += "    " ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).add_operation (enumerator_6203.current_mName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).stringValue () ;
      result += ", // " ;
      result += index_6203_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).stringValue () ;
      result += "\n" ;
      index_6203_idx.increment () ;
      enumerator_6203.gotoNextObject () ;
    }
  }
  result += "    " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string (".ERROR"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).stringValue () ;
  result += ", // " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).stringValue () ;
  result += "\n    " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string (".TEMPLATE"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).stringValue () ;
  result += " // " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).stringValue () ;
  result += "\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass SWIFT_Lexique_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " : SWIFT_Lexique {\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n" ;
  GALGAS_uint index_7133_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_7133 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_7133.hasCurrentObject ()) {
      result += "  private var mLexicalAttribute_" ;
      result += enumerator_7133.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " : " ;
      result += extensionGetter_swiftTypeName (enumerator_7133.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 149)).stringValue () ;
      result += " = " ;
      result += extensionGetter_swiftInitializationCode (enumerator_7133.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 149)).stringValue () ;
      result += "\n" ;
      index_7133_.increment () ;
      enumerator_7133.gotoNextObject () ;
    }
  }
  result += "\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func lexiqueIdentifier () -> String {\n    return " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_lexiqueIdentifier ()\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func isTemplateLexique () -> Bool {\n    return " ;
  result += GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).objectCompare (GALGAS_uint (uint32_t (0U)))).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).stringValue () ;
  result += "\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func terminalVocabularyCount () -> Int {\n    return " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 167)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 167)).stringValue () ;
  result += "\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var font : EBGenericPreferenceProperty <NSFont> { return gFont_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {\n    return gColors_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {\n    return gBoldStyle_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {\n    return gItalicStyle_" ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += " [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {\n    let kTerminalSymbolStyles : [UInt8] = [\n      0, // Default\n" ;
  GALGAS_uint index_9551_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_9551 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_9551.hasCurrentObject ()) {
      result += "      " ;
      result += enumerator_9551.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue () ;
      result += ", // " ;
      result += index_9551_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue () ;
      result += " : " ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "_1_" ;
      result += enumerator_9551.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue () ;
      result += "\n" ;
      index_9551_idx.increment () ;
      enumerator_9551.gotoNextObject () ;
    }
  }
  result += "      " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).stringValue () ;
  result += ", // " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).stringValue () ;
  result += " : " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_2_ERROR\n      " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).stringValue () ;
  result += "  // " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).stringValue () ;
  result += " : " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_2_TEMPLATE\n    ]\n    return kTerminalSymbolStyles [Int (inTokenIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {\n    let kTerminalAtomicSelection : [Bool] = [\n      false, // Default\n" ;
  GALGAS_uint index_10399_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_10399 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_10399.hasCurrentObject ()) {
      result += "      " ;
      result += enumerator_10399.current_atomicSelection (HERE).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue () ;
      result += ", // " ;
      result += index_10399_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue () ;
      result += " : " ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result += "_1_" ;
      result += enumerator_10399.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue () ;
      result += "\n" ;
      index_10399_idx.increment () ;
      enumerator_10399.gotoNextObject () ;
    }
  }
  result += "      false, // " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).stringValue () ;
  result += " : " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_2_ERROR\n      false  // " ;
  result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).stringValue () ;
  result += " : " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_2_TEMPLATE\n    ]\n    return kTerminalAtomicSelection [Int (inTokenIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func indexingTitles () -> [String] {\n" ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 230)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    result += "    return [\n" ;
    GALGAS_uint index_11105_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_11105 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11105.hasCurrentObject ()) {
        result += "      " ;
        result += enumerator_11105.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 234)).stringValue () ;
        result += " /* " ;
        result += enumerator_11105.current_mIndexName (HERE).readProperty_string ().stringValue () ;
        result += " */" ;
        if (enumerator_11105.hasNextObject ()) {
          result += ",\n" ;
        }
        index_11105_.increment () ;
        enumerator_11105.gotoNextObject () ;
      }
    }
    result += "\n    ]\n" ;
  }else if (kBoolFalse == test_3) {
    result += "\n    return []\n" ;
  }
  result += "  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  S T Y L E S\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleCount () -> UInt8 {\n    return " ;
  result += in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 251)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 251)).stringValue () ;
  result += "\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleNameFor (styleIndex inIndex : UInt8) -> String {\n    return " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_styleNameFor (styleIndex: inIndex)\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n    return " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_styleIdentifierFor (styleIndex: inIndex)\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    var loop = true\n    var scanningOk = true\n" ;
  GALGAS_uint index_12561_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_12561 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_12561.hasCurrentObject ()) {
      result += "    self.mLexicalAttribute_" ;
      result += enumerator_12561.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " = " ;
      result += extensionGetter_swiftInitializationCode (enumerator_12561.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 274)).stringValue () ;
      result += "\n" ;
      index_12561_.increment () ;
      enumerator_12561.gotoNextObject () ;
    }
  }
  result += "    var tokenCode : UInt16 = 0\n    let startLocation = self.currentLocation\n" ;
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).uintValue ())) ;
  }
  GALGAS_uint index_12798_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_12798 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12798.hasCurrentObject ()) {
      result += callExtensionGetter_generateSwiftCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_12798.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 281)).stringValue () ;
      index_12798_.increment () ;
      enumerator_12798.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).uintValue ())) ;
  }
  result += "if self.testForInputChar (0) { // End of source text \?\n      tokenCode = " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_1_ ; // Empty string code\n    }else{ // Unknown input character\n      tokenCode = " ;
  result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result += "_2_TEMPLATE\n      self.advance ()\n    }\n    return SWIFT_Token (\n      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n      tokenCode: tokenCode,\n      templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n    )\n  }\n  \n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n" ;
  GALGAS_uint index_13744_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_13744 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13744.hasCurrentObject ()) {
      result += "    mLexicalAttribute_" ;
      result += enumerator_13744.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += " = " ;
      result += extensionGetter_cocoaInitializationCode (enumerator_13744.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 309)).stringValue () ;
      result += " ;\n" ;
      index_13744_.increment () ;
      enumerator_13744.gotoNextObject () ;
    }
  }
  result += "  }\n" ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 312)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result += "  if (nil == kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 313)).stringValue () ;
    result += ") {\n    kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 314)).stringValue () ;
    result += " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_14234_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_14234 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_14234.hasCurrentObject ()) {
        result += "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result += enumerator_14234.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 316)).stringValue () ;
        result += " endString:" ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14234.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 317)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result += "nil" ;
        }else if (kBoolFalse == test_5) {
          result += "@" ;
          result += enumerator_14234.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 320)).stringValue () ;
        }
        result += " discardStartString:" ;
        result += enumerator_14234.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 323)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 323)).stringValue () ;
        result += "],\n" ;
        index_14234_.increment () ;
        enumerator_14234.gotoNextObject () ;
      }
    }
    result += "      nil\n    ] ;\n  }\n" ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 330)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result += "  if (nil == kTemplateReplacementArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 331)).stringValue () ;
    result += ") {\n\n    kTemplateReplacementArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 332)).stringValue () ;
    result += " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_14999_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_14999 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_14999.hasCurrentObject ()) {
        result += "      @" ;
        result += enumerator_14999.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 334)).stringValue () ;
        result += ", " ;
        index_14999_.increment () ;
        enumerator_14999.gotoNextObject () ;
      }
    }
    result += "      nil\n    ] ;\n  }\n" ;
  }else if (kBoolFalse == test_6) {
  }
  result += "  return self ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n/*\n" ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 350)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_uint index_15809_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_15809 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_15809 = enumerator_15809.hasCurrentObject () ;
      if (nonEmpty_enumerator_15809) {
        result += "static const BOOL kEndOfScriptInTemplateArray_" ;
        result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).stringValue () ;
        result += " [" ;
        result += in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).stringValue () ;
        result += "] = {\n" ;
      }
      while (enumerator_15809.hasCurrentObject ()) {
        result += "  " ;
        result += enumerator_15809.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 353)).stringValue () ;
        result += " /* " ;
        result += enumerator_15809.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
        result += " */" ;
        if (enumerator_15809.hasNextObject ()) {
          result += ",\n" ;
        }
        index_15809_.increment () ;
        enumerator_15809.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_15809) {
        result += "\n} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_7) {
  }
  result += "\n*/\n\n\n" ;
  GALGAS_uint index_16105_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_16105 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), kENUMERATION_UP) ;
    while (enumerator_16105.hasCurrentObject ()) {
      const enumGalgasBool test_8 = enumerator_16105.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_8) {
        result += "//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '" ;
        result += enumerator_16105.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += "'      \n//\n//--------------------------------------------------------------------------------------------------\n\nfileprivate func search_into_" ;
        result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 369)).stringValue () ;
        result += "_" ;
        result += enumerator_16105.current_lkey (HERE).readProperty_string ().stringValue () ;
        result += " (_ inSearchedString : String) -> UInt16 {\n  let dictionary : [String : UInt16] = [\n" ;
        GALGAS_uint index_16751_ (0) ;
        if (enumerator_16105.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_16751 (enumerator_16105.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_16751.hasCurrentObject ()) {
            result += "    " ;
            result += enumerator_16751.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 372)).stringValue () ;
            result += " : " ;
            result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result += "_1_" ;
            result += enumerator_16751.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 372)).stringValue () ;
            if (enumerator_16751.hasNextObject ()) {
              result += ",\n" ;
            }
            index_16751_.increment () ;
            enumerator_16751.gotoNextObject () ;
          }
        }
        result += "\n  ]\n  return dictionary [inSearchedString, default: " ;
        result += in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
        result += "_1_]\n}\n\n" ;
      }else if (kBoolFalse == test_8) {
      }
      index_16105_.increment () ;
      enumerator_16105.gotoNextObject () ;
    }
  }
  result += "\n\n\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n" ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 395)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result += "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 396)).stringValue () ;
    result += " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 397)).stringValue () ;
    result += " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      " ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 403)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      result += "\n      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 404)).stringValue () ;
      result += "] ;\n      " ;
    }else if (kBoolFalse == test_10) {
    }
    result += "\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 406)).stringValue () ;
    result += "] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_" ;
    result += in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 415)).stringValue () ;
    result += " [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }" ;
  }else if (kBoolFalse == test_9) {
    result += "    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;" ;
  }
  result += "\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n" ;
  return GALGAS_string (result) ;
}

