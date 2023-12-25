#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element::GALGAS_castInstructionBranchListAST_2D_element (void) :
mProperty_mTypeName (),
mProperty_mConstantVarName (),
mProperty_mInstructionList (),
mProperty_mTypeComparisonKind (),
mProperty_mEndOfInstructions () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element::~ GALGAS_castInstructionBranchListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element::GALGAS_castInstructionBranchListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                const GALGAS_location & inOperand4) :
mProperty_mTypeName (inOperand0),
mProperty_mConstantVarName (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mTypeComparisonKind (inOperand3),
mProperty_mEndOfInstructions (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::constructor_new (const GALGAS_lstring & in_mTypeName,
                                                                                                                const GALGAS_lstring & in_mConstantVarName,
                                                                                                                const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                                const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                const GALGAS_location & in_mEndOfInstructions,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  if (in_mTypeName.isValid () && in_mConstantVarName.isValid () && in_mInstructionList.isValid () && in_mTypeComparisonKind.isValid () && in_mEndOfInstructions.isValid ()) {
    result = GALGAS_castInstructionBranchListAST_2D_element (in_mTypeName, in_mConstantVarName, in_mInstructionList, in_mTypeComparisonKind, in_mEndOfInstructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_castInstructionBranchListAST_2D_element::objectCompare (const GALGAS_castInstructionBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantVarName.objectCompare (inOperand.mProperty_mConstantVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeComparisonKind.objectCompare (inOperand.mProperty_mTypeComparisonKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInstructions.objectCompare (inOperand.mProperty_mEndOfInstructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_castInstructionBranchListAST_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mConstantVarName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mTypeComparisonKind.isValid () && mProperty_mEndOfInstructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mConstantVarName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mEndOfInstructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.addString ("<struct @castInstructionBranchListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConstantVarName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfInstructions.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @castInstructionBranchListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ("castInstructionBranchListAST-element",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  const GALGAS_castInstructionBranchListAST_2D_element * p = (const GALGAS_castInstructionBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInstructionBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) :
mProperty_mOptionalTypeName (),
mProperty_mDeclaredAsUnused (),
mProperty_mOptionalConstantName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::~ GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_bool & inOperand1,
                                                                                                                                const GALGAS_lstring & inOperand2) :
mProperty_mOptionalTypeName (inOperand0),
mProperty_mDeclaredAsUnused (inOperand1),
mProperty_mOptionalConstantName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::constructor_new (const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                                                const GALGAS_bool & in_mDeclaredAsUnused,
                                                                                                                                                const GALGAS_lstring & in_mOptionalConstantName,
                                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element result ;
  if (in_mOptionalTypeName.isValid () && in_mDeclaredAsUnused.isValid () && in_mOptionalConstantName.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (in_mOptionalTypeName, in_mDeclaredAsUnused, in_mOptionalConstantName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionalTypeName.objectCompare (inOperand.mProperty_mOptionalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeclaredAsUnused.objectCompare (inOperand.mProperty_mDeclaredAsUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionalConstantName.objectCompare (inOperand.mProperty_mOptionalConstantName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::isValid (void) const {
  return mProperty_mOptionalTypeName.isValid () && mProperty_mDeclaredAsUnused.isValid () && mProperty_mOptionalConstantName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::drop (void) {
  mProperty_mOptionalTypeName.drop () ;
  mProperty_mDeclaredAsUnused.drop () ;
  mProperty_mOptionalConstantName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.addString ("<struct @forInstructionEnumeratedObjectElementListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDeclaredAsUnused.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mOptionalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectElementListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ("forInstructionEnumeratedObjectElementListAST-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
  ioString.addString ("<struct @forInstructionEnumeratedObjectListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @optionalMethodActualArgumentList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @logListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mLogMessage.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @switchExtractedValuesListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @unusedNonTerminalSymbolMapForGrammarAnalysis-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @nonTerminalSymbolSortedListForGrammarAnalysis-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mNonTerminalSymbol.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @syntaxComponentListForGrammarAnalysis-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mProductionRulesList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @terminalSymbolsMapForGrammarAnalysis-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @extensionMethodMapForGlobalCheckings-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @extensionSetterMapForGlobalCheckings-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @extensionGetterMapForGlobalCheckings-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @galgas3QualifiedFeatureList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mFeatureName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @headerCompositionMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInclusion.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mHeaderString.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @headerRepartitionMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mHeaderFileName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("<struct @projectQualifiedFeatureMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  ioString.addString ("[@templateLiteralUIntExpressionAST:") ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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
  ioString.addString ("[@templateLiteralCharExpressionAST:") ;
  mProperty_mLiteralChar.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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
  ioString.addString ("[@templateLiteralDoubleExpressionAST:") ;
  mProperty_mLiteralDouble.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

#include "files/FileManager.h"

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
  C_Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = nullptr ;
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
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_galgasTemplateScanner * scanner = nullptr ;
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
        message.addString ("the '") ;
        message.addString (filePath) ;
        message.addString ("' file exists, but cannot be read") ;
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.addString ("the '") ;
      message.addString (filePath) ;
      message.addString ("' file does not exist") ;
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
    C_Lexique_galgasTemplateScanner * scanner = nullptr ;
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
// Productions numbers:  35 36 37
  return inLexique->nextProductionIndex () - 34 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_1' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  38 39
  return inLexique->nextProductionIndex () - 37 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_2' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  40 41 42 43 44 45 46
  return inLexique->nextProductionIndex () - 39 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_3' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  47 48 49 50 51
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_4' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  52 53 54 55
  return inLexique->nextProductionIndex () - 51 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_5' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  56 57
  return inLexique->nextProductionIndex () - 55 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_6' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  58 59
  return inLexique->nextProductionIndex () - 57 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_7' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  60 61 62 63 64
  return inLexique->nextProductionIndex () - 59 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_8' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  65 66
  return inLexique->nextProductionIndex () - 64 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_9' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  67 68 69
  return inLexique->nextProductionIndex () - 66 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_10' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  70 71
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_11' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  72 73
  return inLexique->nextProductionIndex () - 71 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_12' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  74 75
  return inLexique->nextProductionIndex () - 73 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_13' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  76 77
  return inLexique->nextProductionIndex () - 75 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_14' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  78 79
  return inLexique->nextProductionIndex () - 77 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_15' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  80 81
  return inLexique->nextProductionIndex () - 79 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_16' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  82 83
  return inLexique->nextProductionIndex () - 81 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_17' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  84 85
  return inLexique->nextProductionIndex () - 83 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_18' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  86 87
  return inLexique->nextProductionIndex () - 85 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_19' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  88 89
  return inLexique->nextProductionIndex () - 87 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_20' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  90 91 92
  return inLexique->nextProductionIndex () - 89 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_21' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_22' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_23' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_24' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_25' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_26' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_27' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_28' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  107 108
  return inLexique->nextProductionIndex () - 106 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_29' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_29 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  109 110
  return inLexique->nextProductionIndex () - 108 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_30' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_30 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  111 112
  return inLexique->nextProductionIndex () - 110 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_31' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_31 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  113 114
  return inLexique->nextProductionIndex () - 112 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_32' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_32 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  115 116
  return inLexique->nextProductionIndex () - 114 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_33' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_33 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  117 118
  return inLexique->nextProductionIndex () - 116 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_34' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_34 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  119 120 121
  return inLexique->nextProductionIndex () - 118 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_35' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_35 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_36' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_36 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  124 125
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
  ioString.addString ("[@templateInstructionExpressionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mRoutineMap (),
mProperty_mFunctionMap (),
mProperty_mFilewrapperMap (),
mProperty_mGrammarMap (),
mProperty_mOptionComponentMapForSemanticAnalysis (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis (),
mProperty_galgas_34_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_routineMap & inOperand0,
                                                const GALGAS_functionMap & inOperand1,
                                                const GALGAS_filewrapperMap & inOperand2,
                                                const GALGAS_grammarMap & inOperand3,
                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand4,
                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand5,
                                                const GALGAS_syntaxComponentMap & inOperand6,
                                                const GALGAS_bool & inOperand7) :
mProperty_mRoutineMap (inOperand0),
mProperty_mFunctionMap (inOperand1),
mProperty_mFilewrapperMap (inOperand2),
mProperty_mGrammarMap (inOperand3),
mProperty_mOptionComponentMapForSemanticAnalysis (inOperand4),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand5),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand6),
mProperty_galgas_34_ (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_bool & in_galgas4,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMap in_mRoutineMap = GALGAS_routineMap::constructor_new (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 202)) ;
  const GALGAS_functionMap in_mFunctionMap = GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 203)) ;
  const GALGAS_filewrapperMap in_mFilewrapperMap = GALGAS_filewrapperMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 204)) ;
  const GALGAS_grammarMap in_mGrammarMap = GALGAS_grammarMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 205)) ;
  const GALGAS_optionComponentMapForSemanticAnalysis in_mOptionComponentMapForSemanticAnalysis = GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 206)) ;
  const GALGAS_lexiqueComponentMapForSemanticAnalysis in_mLexiqueComponentMapForSemanticAnalysis = GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 207)) ;
  const GALGAS_syntaxComponentMap in_mSyntaxComponentMapForSemanticAnalysis = GALGAS_syntaxComponentMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 208)) ;
  GALGAS_semanticContext result ;
  if (in_mRoutineMap.isValid () && in_mFunctionMap.isValid () && in_mFilewrapperMap.isValid () && in_mGrammarMap.isValid () && in_mOptionComponentMapForSemanticAnalysis.isValid () && in_mLexiqueComponentMapForSemanticAnalysis.isValid () && in_mSyntaxComponentMapForSemanticAnalysis.isValid () && in_galgas4.isValid ()) {
    result = GALGAS_semanticContext (in_mRoutineMap, in_mFunctionMap, in_mFilewrapperMap, in_mGrammarMap, in_mOptionComponentMapForSemanticAnalysis, in_mLexiqueComponentMapForSemanticAnalysis, in_mSyntaxComponentMapForSemanticAnalysis, in_galgas4) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMap.objectCompare (inOperand.mProperty_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionMap.objectCompare (inOperand.mProperty_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperMap.objectCompare (inOperand.mProperty_mFilewrapperMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGrammarMap.objectCompare (inOperand.mProperty_mGrammarMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mOptionComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mLexiqueComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mSyntaxComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_galgas_34_.objectCompare (inOperand.mProperty_galgas_34_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mRoutineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_mGrammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () && mProperty_galgas_34_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mRoutineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_mGrammarMap.drop () ;
  mProperty_mOptionComponentMapForSemanticAnalysis.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
  mProperty_galgas_34_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGrammarMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_galgas_34_.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
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

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::constructor_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mOptionComponentName,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mBoolOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mUIntOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mStringOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mStringListOptionMap
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mBoolOptionMap.isValid () && inAttribute_mUIntOptionMap.isValid () && inAttribute_mStringOptionMap.isValid () && inAttribute_mStringListOptionMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionComponentForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mIsPredefined, inAttribute_mOptionComponentName, inAttribute_mBoolOptionMap, inAttribute_mUIntOptionMap, inAttribute_mStringOptionMap, inAttribute_mStringListOptionMap COMMA_THERE)) ;
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

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GALGAS_bool & in_generateHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mOptionComponentName,
                                                                      const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
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
  ioString.addString ("[@optionComponentForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBoolOptionMap.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUIntOptionMap.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mStringOptionMap.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mStringListOptionMap.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionMap, mProperty_mUIntOptionMap, mProperty_mStringOptionMap, mProperty_mStringListOptionMap COMMA_THERE)) ;
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
// @boolsetTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolsetTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolsetTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolsetTypeForGeneration::objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const {
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

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                  const GALGAS_lstringlist & inAttribute_mFlagList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetTypeForGeneration::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_boolsetTypeForGeneration * p = (cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolsetTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                              const GALGAS_lstringlist & in_mFlagList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mFlagList (in_mFlagList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

void cPtr_boolsetTypeForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.addString ("[@boolsetTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolsetTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolsetTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration ("boolsetTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  const GALGAS_boolsetTypeForGeneration * p = (const GALGAS_boolsetTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolsetTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolsetTypeForGeneration_2D_weak::objectCompare (const GALGAS_boolsetTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak & GALGAS_boolsetTypeForGeneration_2D_weak::operator = (const GALGAS_boolsetTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (const GALGAS_boolsetTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration_2D_weak::bang_boolsetTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetTypeForGeneration) ;
      result = GALGAS_boolsetTypeForGeneration ((cPtr_boolsetTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolsetTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ("boolsetTypeForGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  const GALGAS_boolsetTypeForGeneration_2D_weak * p = (const GALGAS_boolsetTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolsetTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GALGAS_routineMap & ioObject,
                                const GALGAS_lstring constinArgument_inRoutineName,
                                const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                const GALGAS_bool constinArgument_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineArgumentMap var_routineArgumentMap_2725 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_hasKey (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas", 67)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2725, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 68)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_routineArgumentMap_2725 = GALGAS_routineArgumentMap::constructor_emptyMap (SOURCE_FILE ("routineMap.galgas", 70)) ;
  }
  GALGAS_string var_routineArguments_2938 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 72)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_routineArgumentMap_2725.getter_hasKey (var_routineArguments_2938 COMMA_SOURCE_FILE ("routineMap.galgas", 73)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 74)).add_operation (var_routineArguments_2938, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 74)).add_operation (GALGAS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 74)), fixItArray4  COMMA_SOURCE_FILE ("routineMap.galgas", 74)) ;
    }
  }
  if (kBoolFalse == test_3) {
    {
    var_routineArgumentMap_2725.setter_insertKey (GALGAS_lstring::constructor_new (var_routineArguments_2938, constinArgument_inRoutineName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 77)), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 76)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2725 COMMA_SOURCE_FILE ("routineMap.galgas", 81)) ;
    }
  }
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

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mSelfObjectCppName (),
mProperty_selfType (),
mProperty_mSelfObjectCppPrefixForAccessingProperty (),
mProperty_requiresSelfForAccessingProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (const GALGAS_semanticContext & inOperand0,
                                                const GALGAS_predefinedTypes & inOperand1,
                                                const GALGAS_string & inOperand2,
                                                const GALGAS_selfAvailability & inOperand3,
                                                const GALGAS_string & inOperand4,
                                                const GALGAS_bool & inOperand5) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mSelfObjectCppName (inOperand2),
mProperty_selfType (inOperand3),
mProperty_mSelfObjectCppPrefixForAccessingProperty (inOperand4),
mProperty_requiresSelfForAccessingProperty (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::constructor_new (const GALGAS_semanticContext & in_mSemanticContext,
                                                                const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                                                const GALGAS_string & in_mSelfObjectCppName,
                                                                const GALGAS_selfAvailability & in_selfType,
                                                                const GALGAS_string & in_mSelfObjectCppPrefixForAccessingProperty,
                                                                const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  if (in_mSemanticContext.isValid () && in_mPredefinedTypes.isValid () && in_mSelfObjectCppName.isValid () && in_selfType.isValid () && in_mSelfObjectCppPrefixForAccessingProperty.isValid () && in_requiresSelfForAccessingProperty.isValid ()) {
    result = GALGAS_analysisContext (in_mSemanticContext, in_mPredefinedTypes, in_mSelfObjectCppName, in_selfType, in_mSelfObjectCppPrefixForAccessingProperty, in_requiresSelfForAccessingProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_analysisContext::objectCompare (const GALGAS_analysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSemanticContext.objectCompare (inOperand.mProperty_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPredefinedTypes.objectCompare (inOperand.mProperty_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfObjectCppName.objectCompare (inOperand.mProperty_mSelfObjectCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_selfType.objectCompare (inOperand.mProperty_selfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfObjectCppPrefixForAccessingProperty.objectCompare (inOperand.mProperty_mSelfObjectCppPrefixForAccessingProperty) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (inOperand.mProperty_requiresSelfForAccessingProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_analysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mSelfObjectCppName.isValid () && mProperty_selfType.isValid () && mProperty_mSelfObjectCppPrefixForAccessingProperty.isValid () && mProperty_requiresSelfForAccessingProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mSelfObjectCppName.drop () ;
  mProperty_selfType.drop () ;
  mProperty_mSelfObjectCppPrefixForAccessingProperty.drop () ;
  mProperty_requiresSelfForAccessingProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @analysisContext:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelfObjectCppName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_selfType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelfObjectCppPrefixForAccessingProperty.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @analysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  const GALGAS_analysisContext * p = (const GALGAS_analysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  GALGAS_string var_currentNode_4906 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_1.addAssign_operation (var_currentNode_4906, GALGAS_string ("[firstPoint] {}")  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS_rowList var_rowArray_4945 = temp_0 ;
  GALGAS_string var_arrows_5007 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5033 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5063 = GALGAS_uint (uint32_t (1U)) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5086 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5128 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_5128.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5128.current_mInstruction (HERE).ptr (), var_rowArray_4945, GALGAS_uint (uint32_t (0U)), var_column_5063, var_currentNode_4906, var_arrowStyle_5033, var_arrows_5007, var_unusedMaxUsedRowIndex_5086, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 117)) ;
    enumerator_5128.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_5525 ;
  {
  extensionSetter_appendRow (var_rowArray_4945, GALGAS_string ("[lastPoint] {}"), GALGAS_uint (uint32_t (0U)), var_column_5063, var_lastNodeName_5525, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 129)) ;
  }
  var_arrows_5007.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_4906, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (var_lastNodeName_5525, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_5644 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)).add_operation (function_escapeForTex (var_loc_5644.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 135)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).add_operation (function_escapeForTex (var_loc_5644.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 138)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)) ;
  cEnumerator_rowList enumerator_6066 (var_rowArray_4945, kENUMERATION_DOWN) ;
  while (enumerator_6066.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)) ;
    cEnumerator__32_stringlist enumerator_6138 (enumerator_6066.current_columns (HERE), kENUMERATION_UP) ;
    while (enumerator_6138.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_6138.current (HERE).readProperty_mValue_30_ ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6138.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (enumerator_6138.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)) ;
      }
      enumerator_6138.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 150)) ;
    enumerator_6066.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5007, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
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
  ioString.addString ("<struct @templateAnalysisContext:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
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
  result.addString ("project (0:0:1) -> ") ;
  result.addString (in_PROJECT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue ()) ;
  result.addString (" {\n#--- Targets\n  %makefile-unix\n  %makefile-macosx\n  %makefile-x86linux32-on-macosx\n  %makefile-x86linux64-on-macosx\n  %makefile-win32-on-macosx\n  %MacOS\n  %applicationBundleBase : \"fr.what\"\n  %codeblocks-windows\n  %codeblocks-linux32\n  %codeblocks-linux64\n\n#--- Source files\n  \"galgas-sources/") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("-lexique.galgas\"\n  \"galgas-sources/") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("-options.galgas\"\n  \"galgas-sources/") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("-semantics.galgas\"\n  \"galgas-sources/") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("-syntax.galgas\"\n  \"galgas-sources/") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("-grammar.galgas\"\n  \"galgas-sources/") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("-cocoa.galgas\"\n  \"galgas-sources/") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("-program.galgas\"\n}\n\n") ;
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
  result.addString ("gui cocoa {\n  with option ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_options\n\n  with lexique ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_lexique {\n    fileExtension: \"") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("\"\n    title: \"Source\"\n    blockComment : \"#\"\n  }\n\n}\n") ;
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
  result.addString ("grammar ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_grammar \"LL1\" {\n  syntax ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_syntax\n  <start_symbol>\n}\n\n") ;
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
  result.addString ("lexique ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_lexique {\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Identifiers and keywords                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString error message \"an identifier\"\n\n#--- This is the keyword list\nlist keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send search tokenString in keyWordList default $identifier$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal decimal integers                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n\nmessage decimalNumberTooLarge : \"decimal number too large\"\nmessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal character strings                                                                    \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n\n\nmessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Delimiters                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Comments                                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\nrule '#' {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Separators                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n") ;
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
  result.addString ("option ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_options {\n\n# ADD YOUR CODE\n\n}\n") ;
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
  result.addString ("#--- Prologue routine\nbefore {\n}\n\n#--- 'when' clauses\ncase . \"") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("\"\nmessage \"a source text file with the .") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString (" extension\"\n%useGrammar ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_grammar\n\?sourceFilePath:@lstring inSourceFile {\n  grammar ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_grammar () in inSourceFile\n}\n\n#--- Epilogue routine\nafter {\n}\n") ;
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
  result.addString ("\n# ADD YOUR CODE\n\n") ;
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
  result.addString ("syntax ") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_syntax (") ;
  result.addString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.addString ("_lexique) {\n\nrule <start_symbol> {\n  # ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n# ADD OTHER RULES\n\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const GALGAS_string constinArgument_inProjectPath,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectName_2307 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 38)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2389 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 40)) ;
  var_galgas_5F_sources_5F_DIR_2389.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 41)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 42))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 43))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2389.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2389.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2389.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2389.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2389.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2389.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2307 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2389.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_2307, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  {
  routine_println_3F_ (GALGAS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const GALGAS_string constinArgument_inProjectPath,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println_3F_ (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (GALGAS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 58)) ;
      }
      GALGAS_string var_projectName_4061 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 60)) ;
      GALGAS_bool var_ok_4123 = var_projectName_4061.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 61)) ;
      GALGAS_uint var_idx_4186 = GALGAS_uint (uint32_t (1U)) ;
      if (var_projectName_4061.getter_count (SOURCE_FILE ("projectCreation.galgas", 63)).isValid ()) {
        uint32_t variant_4198 = var_projectName_4061.getter_count (SOURCE_FILE ("projectCreation.galgas", 63)).uintValue () ;
        bool loop_4198 = true ;
        while (loop_4198) {
          loop_4198 = GALGAS_bool (kIsStrictInf, var_idx_4186.objectCompare (var_projectName_4061.getter_count (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4123 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).isValid () ;
          if (loop_4198) {
            loop_4198 = GALGAS_bool (kIsStrictInf, var_idx_4186.objectCompare (var_projectName_4061.getter_count (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4123 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).boolValue () ;
          }
          if (loop_4198 && (0 == variant_4198)) {
            loop_4198 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 63)) ;
          }
          if (loop_4198) {
            variant_4198 -- ;
            GALGAS_char var_c_4287 = var_projectName_4061.getter_characterAtIndex (var_idx_4186, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 65)) ;
            var_ok_4123 = var_c_4287.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 66)).operator_or (GALGAS_bool (kIsEqual, var_c_4287.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 66)) ;
            var_idx_4186.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 67)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4123.operator_not (SOURCE_FILE ("projectCreation.galgas", 69)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_println_3F_ (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4061, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 70)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4123.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4123 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 75)).operator_not (SOURCE_FILE ("projectCreation.galgas", 75)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4123.operator_not (SOURCE_FILE ("projectCreation.galgas", 76)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_println_3F_ (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77)).add_operation (GALGAS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 77)) ;
              }
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4123.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 81)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GALGAS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_24447 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 592)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_24447.getter_count (SOURCE_FILE ("templateSyntax.galgas", 593)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_24447  COMMA_SOURCE_FILE ("templateSyntax.galgas", 594))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 594)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3885 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3885, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 73)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_3935 = var_receiverExpression_3885.readProperty_mResultType () ;
  GALGAS_string var_receiverTypeName_3987 = extensionGetter_definition (var_receiverType_3935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 81)).readProperty_mTypeName ().readProperty_string () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = extensionGetter_definition (var_receiverType_3935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 83)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 83)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GALGAS_bool (kIsEqual, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = this ;
        GALGAS_AccessControl var_accessControl_4343 ;
        GALGAS_bool var_unused_0_4358 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_4365 ;
        const bool optionalResult4310 = extensionGetter_definition (var_receiverType_3935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 85)).readProperty_mPropertyMap ().optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_accessControl_4343, var_unused_0_4358, var_propertyType_4365) ;
        if (!optionalResult4310) {
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
          extensionMethod_checkSetAccess (var_accessControl_4343, GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("templateAnalysis.galgas", 89)), temp_8.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)) ;
          const GALGAS_templateGetterCallInExpressionAST temp_9 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_10 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4365, temp_9.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3885, temp_10.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 93)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_4986 = extensionGetter_definition (var_receiverType_3935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)).readProperty_mGetterMap () ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_5087 ;
    GALGAS_methodKind var_kind_5136 ;
    GALGAS_bool var_hasCompilerArgument_5155 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_5204 ;
    GALGAS_stringlist var_fieldList_5225 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 107)) ;
    const GALGAS_templateGetterCallInExpressionAST temp_11 = this ;
    GALGAS_string var_actualGetterName_5260 = temp_11.readProperty_mGetterName ().readProperty_string () ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_templateGetterCallInExpressionAST temp_13 = this ;
      test_12 = var_getterMap_4986.getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_actualGetterNameString_5542 ;
        const GALGAS_templateGetterCallInExpressionAST temp_14 = this ;
        GALGAS_location joker_5464 ; // Joker input parameter
        GALGAS_methodQualifier joker_5526 ; // Joker input parameter
        var_getterMap_4986.method_searchKey (temp_14.readProperty_mGetterName (), var_kind_5136, var_getterFormalArgumentTypeList_5087, joker_5464, var_hasCompilerArgument_5155, var_returnedType_5204, joker_5526, var_actualGetterNameString_5542, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 110)) ;
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, var_actualGetterNameString_5542.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_15) {
            var_actualGetterName_5260 = var_actualGetterNameString_5542 ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()).boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_templateGetterCallInExpressionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                appendFixItActions (fixItArray18, kFixItReplace, var_actualGetterName_5260) ;
                inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 122)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_12) {
      GALGAS_uint var_matchingReaderCount_5875 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_3935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 127)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 127)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          var_getterFormalArgumentTypeList_5087 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 128)) ;
          var_hasCompilerArgument_5155 = GALGAS_bool (true) ;
          var_returnedType_5204 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 130)) ;
          var_kind_5136 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 131)) ;
          cEnumerator_typedPropertyList enumerator_6197 (extensionGetter_definition (var_receiverType_3935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
          while (enumerator_6197.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6283 = extensionGetter_definition (enumerator_6197.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)).readProperty_mGetterMap () ;
            const GALGAS_templateGetterCallInExpressionAST temp_20 = this ;
            const cMapElement_getterMap * objectArray_6343 = (const cMapElement_getterMap *) var_aMap_6283.readAccessForWithInstruction (temp_20.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_6343) {
                macroValidSharedObject (objectArray_6343, cMapElement_getterMap) ;
              var_matchingReaderCount_5875.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 135)) ;
              var_getterFormalArgumentTypeList_5087 = objectArray_6343->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_5155 = objectArray_6343->mProperty_mHasCompilerArgument ;
              var_returnedType_5204 = objectArray_6343->mProperty_mReturnedType ;
              var_kind_5136 = objectArray_6343->mProperty_mKind ;
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                test_21 = GALGAS_bool (kIsNotEqual, objectArray_6343->mProperty_mGetterNameThatObsoletesInvokationName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_21) {
                  var_actualGetterName_5260 = objectArray_6343->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
              var_fieldList_5225.addAssign_operation (enumerator_6197.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 143)) ;
            }
            enumerator_6197.gotoNextObject () ;
          }
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, var_matchingReaderCount_5875.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              const GALGAS_templateGetterCallInExpressionAST temp_23 = this ;
              const GALGAS_templateGetterCallInExpressionAST temp_24 = this ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3987, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)) ;
              var_getterFormalArgumentTypeList_5087.drop () ; // Release error dropped variable
              var_hasCompilerArgument_5155.drop () ; // Release error dropped variable
              var_returnedType_5204.drop () ; // Release error dropped variable
              var_kind_5136.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_22) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_5875.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_26) {
                GALGAS_string var_s_7214 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7236 (var_fieldList_5225, kENUMERATION_UP) ;
                while (enumerator_7236.hasCurrentObject ()) {
                  var_s_7214.plusAssign_operation(enumerator_7236.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 154)) ;
                  if (enumerator_7236.hasNextObject ()) {
                    var_s_7214.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 155)) ;
                  }
                  enumerator_7236.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_27 = this ;
                const GALGAS_templateGetterCallInExpressionAST temp_28 = this ;
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3987, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (temp_28.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (var_s_7214, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)), fixItArray29  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)) ;
                var_getterFormalArgumentTypeList_5087.drop () ; // Release error dropped variable
                var_hasCompilerArgument_5155.drop () ; // Release error dropped variable
                var_returnedType_5204.drop () ; // Release error dropped variable
                var_kind_5136.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_19) {
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          test_30 = GALGAS_bool (kIsEqual, var_getterMap_4986.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_30) {
            const GALGAS_templateGetterCallInExpressionAST temp_31 = this ;
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (temp_31.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3987, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)), fixItArray32  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)) ;
            var_getterFormalArgumentTypeList_5087.drop () ; // Release error dropped variable
            var_hasCompilerArgument_5155.drop () ; // Release error dropped variable
            var_returnedType_5204.drop () ; // Release error dropped variable
            var_kind_5136.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_30) {
          const GALGAS_templateGetterCallInExpressionAST temp_33 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_34 = this ;
          TC_Array <C_FixItDescription> fixItArray35 ;
          appendFixItActions (fixItArray35, kFixItReplace, var_getterMap_4986.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 170))) ;
          inCompiler->emitSemanticError (temp_33.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3987, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (temp_34.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)) ;
          var_getterFormalArgumentTypeList_5087.drop () ; // Release error dropped variable
          var_hasCompilerArgument_5155.drop () ; // Release error dropped variable
          var_returnedType_5204.drop () ; // Release error dropped variable
          var_kind_5136.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      const GALGAS_templateGetterCallInExpressionAST temp_37 = this ;
      test_36 = GALGAS_bool (kIsNotEqual, temp_37.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 174)).objectCompare (var_getterFormalArgumentTypeList_5087.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 174)))).boolEnum () ;
      if (kBoolTrue == test_36) {
        const GALGAS_templateGetterCallInExpressionAST temp_38 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_39 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_40 = this ;
        TC_Array <C_FixItDescription> fixItArray41 ;
        inCompiler->emitSemanticError (temp_38.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_39.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (var_receiverTypeName_3987, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (var_getterFormalArgumentTypeList_5087.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 176)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (temp_40.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 177)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 177)), fixItArray41  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_36) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8638 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 179)) ;
      const GALGAS_templateGetterCallInExpressionAST temp_42 = this ;
      cEnumerator_templateExpressionListAST enumerator_8716 (temp_42.readProperty_mExpressionList (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_8814 (var_getterFormalArgumentTypeList_5087, kENUMERATION_UP) ;
      while (enumerator_8716.hasCurrentObject () && enumerator_8814.hasCurrentObject ()) {
        enumGalgasBool test_43 = kBoolTrue ;
        if (kBoolTrue == test_43) {
          test_43 = GALGAS_bool (kIsNotEqual, enumerator_8814.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8716.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_43) {
            GALGAS_string temp_44 ;
            const enumGalgasBool test_45 = GALGAS_bool (kIsNotEqual, enumerator_8814.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_45) {
              temp_44 = enumerator_8814.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)) ;
            }else if (kBoolFalse == test_45) {
              temp_44 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_8939 = GALGAS_string ("!").add_operation (temp_44, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)) ;
            TC_Array <C_FixItDescription> fixItArray46 ;
            appendFixItActions (fixItArray46, kFixItReplace, var_s_8939) ;
            inCompiler->emitSemanticError (enumerator_8716.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8939, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9347 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8716.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_9347, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8814.current_mFormalArgumentType (HERE), var_exp_9347.readProperty_mResultType (), enumerator_8716.current_mEndOfExpressionLocation (HERE), var_exp_9347, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 193)) ;
        }
        var_constructorEffectiveParameterList_8638.addAssign_operation (var_exp_9347  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 194)) ;
        enumerator_8716.gotoNextObject () ;
        enumerator_8814.gotoNextObject () ;
      }
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        const GALGAS_templateGetterCallInExpressionAST temp_48 = this ;
        GALGAS_bool test_49 = GALGAS_bool (kIsNotEqual, var_actualGetterName_5260.objectCompare (temp_48.readProperty_mGetterName ().readProperty_string ())) ;
        if (kBoolTrue == test_49.boolEnum ()) {
          test_49 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_47 = test_49.boolEnum () ;
        if (kBoolTrue == test_47) {
          const GALGAS_templateGetterCallInExpressionAST temp_50 = this ;
          TC_Array <C_FixItDescription> fixItArray51 ;
          appendFixItActions (fixItArray51, kFixItReplace, var_actualGetterName_5260) ;
          inCompiler->emitSemanticError (temp_50.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray51  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 197)) ;
        }
      }
      const GALGAS_templateGetterCallInExpressionAST temp_52 = this ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_5204, temp_52.readProperty_mGetterName ().readProperty_location (), var_kind_5136, var_receiverExpression_3885, var_fieldList_5225, var_actualGetterName_5260, var_constructorEffectiveParameterList_8638, var_hasCompilerArgument_5155  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)) ;
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
  GALGAS_unifiedTypeMapEntry var_constructorType_10663 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 224)) ;
  GALGAS_constructorMap var_constructorMap_10780 = extensionGetter_definition (var_constructorType_10663, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 226)).readProperty_mConstructorMap () ;
  GALGAS_unifiedTypeMapEntry var_returnedType_10892 ;
  GALGAS_bool var_hasCompilerArgument_10917 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_10962 ;
  const GALGAS_templateConstructorAST temp_1 = this ;
  const cMapElement_constructorMap * objectArray_10998 = (const cMapElement_constructorMap *) var_constructorMap_10780.readAccessForWithInstruction (temp_1.readProperty_mConstructorName ().readProperty_string ()) ;
  if (nullptr != objectArray_10998) {
      macroValidSharedObject (objectArray_10998, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_10962 = objectArray_10998->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10917 = objectArray_10998->mProperty_mHasCompilerArgument ;
    var_returnedType_10892 = objectArray_10998->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_10780.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 236)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = this ;
        const GALGAS_templateConstructorAST temp_4 = this ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 238)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 238)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 237)) ;
        var_constructorFormalArgumentTypeList_10962.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10917.drop () ; // Release error dropped variable
        var_returnedType_10892.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = this ;
      const GALGAS_templateConstructorAST temp_7 = this ;
      const GALGAS_templateConstructorAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_10780.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 244))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (temp_8.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)) ;
      var_constructorFormalArgumentTypeList_10962.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10917.drop () ; // Release error dropped variable
      var_returnedType_10892.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11784 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 249)).objectCompare (var_constructorFormalArgumentTypeList_10962.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 249)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = this ;
      const GALGAS_templateConstructorAST temp_13 = this ;
      const GALGAS_templateConstructorAST temp_14 = this ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (extensionGetter_definition (var_constructorType_10663, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (var_constructorFormalArgumentTypeList_10962.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 252)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 251)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)).add_operation (temp_14.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 253)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
      var_constructorEffectiveParameterList_11784.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_11784 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 256)) ;
    const GALGAS_templateConstructorAST temp_16 = this ;
    cEnumerator_templateExpressionListAST enumerator_12392 (temp_16.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12480 (var_constructorFormalArgumentTypeList_10962, kENUMERATION_UP) ;
    while (enumerator_12392.hasCurrentObject () && enumerator_12480.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_12480.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12392.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_12480.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12480.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 259)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12606 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 259)) ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12606) ;
          inCompiler->emitSemanticError (enumerator_12392.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12606, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_13149 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_12392.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_13149, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12480.current_mFormalArgumentType (HERE), var_exp_13149.readProperty_mResultType (), enumerator_12392.current_mEndOfExpressionLocation (HERE), var_exp_13149, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 271)) ;
      }
      var_constructorEffectiveParameterList_11784.addAssign_operation (var_exp_13149  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 272)) ;
      enumerator_12392.gotoNextObject () ;
      enumerator_12480.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = this ;
  const GALGAS_templateConstructorAST temp_22 = this ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10892, temp_21.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10663, temp_22.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11784, var_hasCompilerArgument_10917  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 276)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_15128 ;
  const GALGAS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15128, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 311)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15369 ;
  const GALGAS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15369, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 319)) ;
  {
  const GALGAS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15128.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 328)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 328)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15128, var_rightExpression_15369, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 327)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_15128.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15128, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 339)), var_rightExpression_15369  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 335)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_16468 ;
  const GALGAS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_16468, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 354)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16709 ;
  const GALGAS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_16709, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 362)) ;
  {
  const GALGAS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16468.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 371)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 371)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16468, var_rightExpression_16709, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 370)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_16468.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16468, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 382)), var_rightExpression_16709  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 378)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_17807 ;
  const GALGAS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_17807, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 397)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_18048 ;
  const GALGAS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_18048, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 405)) ;
  {
  const GALGAS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_17807.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 414)).readProperty_mHandledOperatorFlags ().getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 414)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17807, var_rightExpression_18048, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 413)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_17807.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_17807, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 425)), var_rightExpression_18048  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 421)) ;
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
  GALGAS_string var_s_20064 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_20078 (temp_0.readProperty_mLiteralStringList (), kENUMERATION_UP) ;
  while (enumerator_20078.hasCurrentObject ()) {
    var_s_20064.plusAssign_operation(enumerator_20078.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 465)) ;
    enumerator_20078.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_20064  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 467)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_24503 ;
  const GALGAS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_24503, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 568)) ;
  GALGAS_unifiedTypeMapEntry var_type_24578 = var_expression_24503.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_24578, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 577)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 577)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 577)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_24578, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_24578, temp_4.readProperty_mOperatorLocation (), var_expression_24503  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_25600 ;
  const GALGAS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_25600, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 601)) ;
  GALGAS_unifiedTypeMapEntry var_type_25675 = var_expression_25600.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_25675, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 610)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 610)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 610)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_25675, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 611)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_25675, temp_4.readProperty_mOperatorLocation (), var_expression_25600  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 616)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_26744 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_26744, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_26872 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 642)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_26744.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 644)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 644)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_27116 = var_castType_26872 ;
      GALGAS_bool var_found_27143 = GALGAS_bool (kIsEqual, var_t_27116.objectCompare (var_expression_26744.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 648)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 648)).isValid ()) {
        uint32_t variant_27183 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 648)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 648)).uintValue () ;
        bool loop_27183 = true ;
        while (loop_27183) {
          loop_27183 = var_found_27143.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_and (extensionGetter_definition (var_t_27116, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).isValid () ;
          if (loop_27183) {
            loop_27183 = var_found_27143.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_and (extensionGetter_definition (var_t_27116, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 649)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 649)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)).boolValue () ;
          }
          if (loop_27183 && (0 == variant_27183)) {
            loop_27183 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 648)) ;
          }
          if (loop_27183) {
            variant_27183 -- ;
            var_t_27116 = extensionGetter_definition (var_t_27116, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 650)).readProperty_mSuperType () ;
            var_found_27143 = GALGAS_bool (kIsEqual, var_t_27116.objectCompare (var_expression_26744.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_27143.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 653)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = this ;
          const GALGAS_templateTestDynamicClassAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).add_operation (extensionGetter_definition (var_expression_26744.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 654)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_26744.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_26744.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 659)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 658)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 659)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 658)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = this ;
  const GALGAS_templateTestDynamicClassAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_26744, temp_9.readProperty_mTypeComparisonKind (), var_castType_26872  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 662)) ;
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
  GALGAS_lstring var_usefulnessName_28409 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_28409 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 680)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_28703 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_28762 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_28807 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_28852 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_28899 ;
  const GALGAS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_28703, var_boolOptionMap_28762, var_uintOptionMap_28807, var_stringOptionMap_28852, var_stringListOptionMap_28899, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 681)) ;
  const GALGAS_templateOptionAccessAST temp_2 = this ;
  GALGAS_bool var_found_28929 = var_boolOptionMap_28762.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 689)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_29012 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_28929.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 691)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = this ;
      var_found_28929 = var_uintOptionMap_28807.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 692)) ;
      var_returnedType_29012 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_28929.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 695)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = this ;
      var_found_28929 = var_stringOptionMap_28852.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 696)) ;
      var_returnedType_29012 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_28929.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 699)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = this ;
      var_found_28929 = var_stringListOptionMap_28899.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 700)) ;
      var_returnedType_29012 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_28929.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = this ;
          const GALGAS_templateOptionAccessAST temp_13 = this ;
          const GALGAS_templateOptionAccessAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_29012, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28703, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 705)) ;
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
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28703, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)) ;
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
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28703, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)) ;
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
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28703, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 729)) ;
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
    GALGAS_stringset var_s_31027 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
    cEnumerator_commandLineOptionMap enumerator_31054 (var_boolOptionMap_28762, kENUMERATION_UP) ;
    while (enumerator_31054.hasCurrentObject ()) {
      var_s_31027.addAssign_operation (enumerator_31054.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 742)) ;
      enumerator_31054.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_31122 (var_uintOptionMap_28807, kENUMERATION_UP) ;
    while (enumerator_31122.hasCurrentObject ()) {
      var_s_31027.addAssign_operation (enumerator_31122.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 745)) ;
      enumerator_31122.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_31190 (var_stringOptionMap_28852, kENUMERATION_UP) ;
    while (enumerator_31190.hasCurrentObject ()) {
      var_s_31027.addAssign_operation (enumerator_31190.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 748)) ;
      enumerator_31190.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = this ;
    const GALGAS_templateOptionAccessAST temp_33 = this ;
    const GALGAS_templateOptionAccessAST temp_34 = this ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_31027) ;
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
  GALGAS_lstring var_usefulnessName_32017 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 768)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_32017 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 769)) ;
  }
  GALGAS_functionSignature var_functionSignature_32318 ;
  GALGAS_unifiedTypeMapEntry var_resultType_32366 ;
  GALGAS_bool var_isInternal_32392 ;
  const GALGAS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_32318, var_resultType_32366, var_isInternal_32392, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 771)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_32392.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_32456 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 779)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)).objectCompare (var_procDeclarationLocation_32456.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_32456.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_32318.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 785)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 785)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = this ;
      const GALGAS_templateFunctionCallAST temp_11 = this ;
      const GALGAS_templateFunctionCallAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (var_functionSignature_32318.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 787)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 788)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 788)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 788)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 786)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_33179 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 792)) ;
    const GALGAS_templateFunctionCallAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_33302 (var_functionSignature_32318, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_33356 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_33302.hasCurrentObject () && enumerator_33356.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_33614 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_33356.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_33614, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 794)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_33302.current_mFormalArgumentType (HERE), var_expression_33614.readProperty_mResultType (), enumerator_33356.current_mEndOfExpressionLocation (HERE), var_expression_33614, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 801)) ;
      }
      var_semanticExpressionListForGeneration_33179.addAssign_operation (var_expression_33614  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_33302.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_33356.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_33302.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_33302.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 804)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_33907 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 804)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_33907) ;
          inCompiler->emitSemanticError (enumerator_33356.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_33907, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)) ;
        }
      }
      enumerator_33302.gotoNextObject () ;
      enumerator_33356.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = this ;
    const GALGAS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_32366, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_33179  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 809)) ;
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
  GALGAS_unifiedTypeMapEntry var_type_35877 ;
  GALGAS_string var_sourceVariableCppName_35887 ;
  const GALGAS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_35877, var_sourceVariableCppName_35887, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 844)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_35877, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_35887, var_sourceVariableCppName_35887  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 845)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_36856 ;
  const GALGAS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_36856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 864)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37097 ;
  const GALGAS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_37097, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 872)) ;
  {
  const GALGAS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_36856.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 881)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 881)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_36856, var_rightExpression_37097, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 880)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_36856.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_36856, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("templateAnalysis.galgas", 892)), var_rightExpression_37097  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 888)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_38354 ;
  const GALGAS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_38354, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_38595 ;
  const GALGAS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_38595, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 917)) ;
  {
  const GALGAS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_38354.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 926)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 926)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_38354, var_rightExpression_38595, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 925)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_38354.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_38354, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("templateAnalysis.galgas", 937)), var_rightExpression_38595  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 933)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_39864 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_39864, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 954)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40105 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_40105, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 962)) ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_39864.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 971)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 971)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_39864, var_rightExpression_40105, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 970)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_39864.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_39864, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 982)), var_rightExpression_40105  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_41375 ;
  const GALGAS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_41375, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 999)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_41616 ;
  const GALGAS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_41616, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1007)) ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_41375.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1016)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 1016)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_41375, var_rightExpression_41616, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1015)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_41375.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_41375, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1027)), var_rightExpression_41616  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1023)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_42884 ;
  const GALGAS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_42884, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1044)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_43125 ;
  const GALGAS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_43125, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1052)) ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_42884.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1061)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1061)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_42884, var_rightExpression_43125, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1060)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_42884.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_42884, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1072)), var_rightExpression_43125  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_44357 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_44357, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1089)) ;
  GALGAS_unifiedTypeMapEntry var_type_44432 = var_expression_44357.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_44432, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1098)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1098)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1098)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_44432, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1099)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_44432, temp_4.readProperty_mOperatorLocation (), var_expression_44357  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1104)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_45741 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_45741, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1123)) ;
  GALGAS_unifiedTypeMapEntry var_type_45820 = var_expression_45741.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_type_45820, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1132)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 1132)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_45820, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1132)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1132)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1132)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1133)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_46073 = extensionGetter_definition (var_type_45820, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)).readProperty_mPropertyMap () ;
  GALGAS_AccessControl var_accessControl_46171 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GALGAS_bool joker_46185 ; // Joker input parameter
  var_propertyMap_46073.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_46171, joker_46185, var_type_45820, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1136)) ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_46171, GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("templateAnalysis.galgas", 1137)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1137)) ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_45820, temp_7.readProperty_mOperatorLocation (), var_expression_45741, temp_8.readProperty_mStructFieldName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1142)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_47369 ;
  const GALGAS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_47369, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1162)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47614 ;
  const GALGAS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47614, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1170)) ;
  {
  const GALGAS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (GALGAS_bool (true), GALGAS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_47369, var_rightExpression_47614, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
  }
  const GALGAS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_47369, GALGAS_comparison::constructor_equal (SOURCE_FILE ("templateAnalysis.galgas", 1190)), var_rightExpression_47614  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_48645 ;
  const GALGAS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48645, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1205)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_48890 ;
  const GALGAS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_48890, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1213)) ;
  {
  const GALGAS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (GALGAS_bool (true), GALGAS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48645, var_rightExpression_48890, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1221)) ;
  }
  const GALGAS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48645, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1233)), var_rightExpression_48890  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_49925 ;
  const GALGAS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_49925, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1248)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_50170 ;
  const GALGAS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50170, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1256)) ;
  {
  const GALGAS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (GALGAS_bool (true), GALGAS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_49925, var_rightExpression_50170, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1264)) ;
  }
  const GALGAS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_49925, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1276)), var_rightExpression_50170  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_51206 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_51206, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1291)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51451 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_51451, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)) ;
  {
  const GALGAS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (GALGAS_bool (true), GALGAS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_51206, var_rightExpression_51451, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1307)) ;
  }
  const GALGAS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_51206, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1319)), var_rightExpression_51451  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1315)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_52490 ;
  const GALGAS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_52490, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1334)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_52735 ;
  const GALGAS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_52735, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1342)) ;
  {
  const GALGAS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (GALGAS_bool (true), GALGAS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_52490, var_rightExpression_52735, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1350)) ;
  }
  const GALGAS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_52490, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1362)), var_rightExpression_52735  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1358)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_53773 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_53773, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1377)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_54018 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_54018, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1385)) ;
  {
  const GALGAS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (GALGAS_bool (true), GALGAS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_53773, var_rightExpression_54018, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1393)) ;
  }
  const GALGAS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_53773, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1405)), var_rightExpression_54018  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1401)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_55064 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_55064, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1420)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_55309 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_55309, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1428)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_55390 = var_leftExpression_55064.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_55455 = var_rightExpression_55309.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_55390, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1438)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1438)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1438)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_55390, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1440)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1440)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1440)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1439)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_55455, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1442)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_55455, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1443)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_55390, temp_8.readProperty_mOperatorLocation (), var_leftExpression_55064, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1452)), var_rightExpression_55309  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1448)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_56847 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_56847, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1468)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_57092 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_57092, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1476)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_57173 = var_leftExpression_56847.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_57238 = var_rightExpression_57092.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_57173, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1486)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1486)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1486)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_57173, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1487)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_57238, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1490)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_57238, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1491)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_57173, temp_8.readProperty_mOperatorLocation (), var_leftExpression_56847, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1500)), var_rightExpression_57092  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1496)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_59110 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_59110.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_59110.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530)) ;
    enumerator_59110.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_expression_60480 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_60480, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1561)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_60480.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1568)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_60480.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_60480  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_61382 ;
  const GALGAS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_61382, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1583)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expression_61382.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1590)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bigint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_getterCallExpressionForGeneration var_conversionExpression_61480 = GALGAS_getterCallExpressionForGeneration::constructor_new (var_expression_61382.readProperty_mResultType (), var_expression_61382.readProperty_mLocation (), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 1594)), var_expression_61382, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1596)), GALGAS_string ("uint"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1598)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1591)) ;
      var_expression_61382 = var_conversionExpression_61480 ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_61382.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1602)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateBlockInstructionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_61382.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)) ;
      }
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_61955 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1605)) ;
  {
  const GALGAS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_61955, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1606)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_61382, temp_6.readProperty_mLocation (), var_blockInstructionList_61955  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)) ;
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
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_63866 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1651)) ;
  const GALGAS_templateInstructionIfAST temp_0 = this ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_63968 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_63968.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_64194 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_63968.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_64194, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1653)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_64194.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1660)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_64194.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_64194.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1661)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_64450 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1663)) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_63968.current_mInstructionList (HERE), var_instructionList_64450, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1664)) ;
    }
    var_templateInstructionIfBranchList_63866.addAssign_operation (var_expression_64194, var_instructionList_64450  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1672)) ;
    enumerator_63968.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_64795 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1675)) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_64795, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1676)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_63866, var_elseInstructionList_64795  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1685))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1685)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_1759 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1759.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_1759.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_1759.gotoNextObject () ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.addString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
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
  GALGAS_string var_cppName_3028 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3028, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 66)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.addString (").add_operation (var_cppName_3028, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)).add_operation (GALGAS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
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
  GALGAS_string var_indendationVarCppName_3629 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3629, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 79)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3629, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_3629, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3629, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_3629, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)) ;
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
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_5915 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_5915.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_6158 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_5915.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6158, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 130)) ;
    GALGAS_string var_testVar_6185 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6185, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (var_ifVarCppName_6158, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_testVar_6185, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case kBoolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 141)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 142)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_5915.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 151)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 152)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case kBoolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 153)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 154)) ;
    }
    enumerator_5915.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = this ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_7150 (temp_2.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_7150.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 166)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 167)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 168)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 169)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 170)) ;
    enumerator_7150.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_expression_6665 ;
  const GALGAS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_6665, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 198)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6786 = extensionGetter_definition (var_expression_6665.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_6786.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 207)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6665.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6665.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 208)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7085 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 211)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7085, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 212)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = this ;
  GALGAS_string var_enumeratorCppName_7379 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 221)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 221)) ;
  GALGAS_templateVariableMap var_doVariableMap_7482 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = this ;
  const GALGAS_templateInstructionForeachAST temp_6 = this ;
  GALGAS_string var_cppIndexVarName_7543 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 224)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7482.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7543, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 226)) ;
      }
    }
  }
  switch (this->mProperty_mEnumeratedObjectProperties.enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::kNotBuilt:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_implicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit * extractPtr_8669 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit *) (this->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_string extractedValue_7932_prefix = extractPtr_8669->mAssociatedValue0 ;
      const GALGAS_location extractedValue_7949_remplacementRange = extractPtr_8669->mAssociatedValue1 ;
      GALGAS_string var_suggestion_7978 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_8019 (var_enumerationDescriptor_6786, kENUMERATION_UP) ;
      while (enumerator_8019.hasCurrentObject ()) {
        {
        var_doVariableMap_7482.setter_insertKey (GALGAS_lstring::constructor_new (extractedValue_7932_prefix.add_operation (enumerator_8019.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)), var_expression_6665.readProperty_mLocation (), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)), enumerator_8019.current_mEnumeratedType (HERE), var_enumeratorCppName_7379.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)).add_operation (enumerator_8019.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)) ;
        }
        var_suggestion_7978.plusAssign_operation(extractedValue_7932_prefix.add_operation (enumerator_8019.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)) ;
        if (enumerator_8019.hasNextObject ()) {
          var_suggestion_7978.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 240)) ;
        }
        enumerator_8019.gotoNextObject () ;
      }
      var_suggestion_7978.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 242)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_suggestion_7978) ;
          inCompiler->emitSemanticError (extractedValue_7949_remplacementRange, GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray11  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 244)) ;
        }
      }
    }
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_explicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit * extractPtr_9401 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit *) (this->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_lstringlist extractedValue_8703_enumeration = extractPtr_9401->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8725_errorLocation = extractPtr_9401->mAssociatedValue1 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extractedValue_8703_enumeration.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 249)).objectCompare (var_enumerationDescriptor_6786.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 249)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_8725_errorLocation, var_enumerationDescriptor_6786.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 251)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (extractedValue_8703_enumeration.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 252)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 252)), fixItArray13  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 250)) ;
        }
      }
      if (kBoolFalse == test_12) {
        cEnumerator_enumerationDescriptorList enumerator_8994 (var_enumerationDescriptor_6786, kENUMERATION_UP) ;
        cEnumerator_lstringlist enumerator_9048 (extractedValue_8703_enumeration, kENUMERATION_UP) ;
        while (enumerator_8994.hasCurrentObject () && enumerator_9048.hasCurrentObject ()) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = GALGAS_bool (kIsNotEqual, enumerator_9048.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              {
              var_doVariableMap_7482.setter_insertKey (enumerator_9048.current_mValue (HERE), enumerator_8994.current_mEnumeratedType (HERE), var_enumeratorCppName_7379.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)).add_operation (enumerator_8994.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)) ;
              }
            }
          }
          enumerator_8994.gotoNextObject () ;
          enumerator_9048.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_9417 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7482, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 266)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_9574 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 270)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_15 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9417, ioArgument_ioTypeMap, temp_15.readProperty_mDoInstructionList (), var_doInstructionList_9574, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 271)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_9861 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 280)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_16.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9861, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 281)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10161 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 290)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_17.readProperty_mAfterInstructionList (), var_afterInstructionList_10161, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 291)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_18 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (temp_18.readProperty_mIsAscending (), var_expression_6665, var_enumeratorCppName_7379, var_beforeInstructionList_7085, var_doInstructionList_9574, var_cppIndexVarName_7543, var_betweenInstructionList_9861, var_afterInstructionList_10161  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 300))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 300)) ;
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
  GALGAS_string var_foreachVarCppName_12012 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_12012, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 336)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 338)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_12012, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (temp_4.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (var_foreachVarCppName_12012, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)) ;
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
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 353)) ;
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
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)) ;
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
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 379)) ;
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
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 402)) ;
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
  GALGAS_semanticExpressionForGeneration var_switchExpression_4506 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_4506, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 125)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_4506.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 132)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_switchExpression_4506.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_4506.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 134)).readProperty_mTypeKindEnum (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 134)), fixItArray2  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_4795 = extensionGetter_definition (var_switchExpression_4506.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 136)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_4889 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-switch-instruction.galgas", 137)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5006 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
  const GALGAS_templateInstructionSwitchAST temp_3 = this ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_5113 (temp_3.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_5113.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5223 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 141)) ;
    GALGAS_bool var_firstConstant_5281 = GALGAS_bool (true) ;
    GALGAS_templateAnalysisContext var_analysisContext_5310 = constinArgument_inAnalysisContext ;
    cEnumerator_lstringlist enumerator_5356 (enumerator_5113.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_5356.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_enumConstantMap_4795.getter_hasKey (enumerator_5356.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 145)).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_constantsNamedInSwitchInstruction_4889.getter_hasKey (enumerator_5356.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_5356.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5356.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 148)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 148)), fixItArray6  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 147)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_4889.addAssign_operation (enumerator_5356.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 150)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5770 ;
          GALGAS_uint joker_5737 ; // Joker input parameter
          var_enumConstantMap_4795.method_searchKey (enumerator_5356.current_mValue (HERE), joker_5737, var_associatedTypeList_5770, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 151)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5770.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_5113.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5356.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_5356.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)), fixItArray8  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, var_associatedTypeList_5770.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 155)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5113.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 155)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5356.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5356.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)), fixItArray10  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_5770.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 158)).objectCompare (enumerator_5113.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 158)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string temp_12 ;
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5770.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    temp_12 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_13) {
                    temp_12 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_5356.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5356.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (var_associatedTypeList_5770.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 160)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)), fixItArray14  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)) ;
                }
              }
              if (kBoolFalse == test_11) {
                GALGAS_bigint var_associatedValueIndex_6494 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_6534 (var_associatedTypeList_5770, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_6609 (enumerator_5113.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_6534.hasCurrentObject () && enumerator_6609.hasCurrentObject ()) {
                  enumGalgasBool test_15 = kBoolTrue ;
                  if (kBoolTrue == test_15) {
                    test_15 = GALGAS_bool (kIsNotEqual, enumerator_6609.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_6534.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_6609.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (enumerator_6609.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_6534.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)), fixItArray17  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 167)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_18 = kBoolTrue ;
                  if (kBoolTrue == test_18) {
                    test_18 = var_firstConstant_5281.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6609.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      GALGAS_string var_cppName_7054 = GALGAS_string ("extractedValue_").add_operation (enumerator_6609.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)).add_operation (enumerator_6609.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)) ;
                      var_extractedAssociatedValuesForGeneration_5223.addAssign_operation (enumerator_6534.current_mEntry (HERE), var_cppName_7054, var_associatedValueIndex_6494.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172)) ;
                      {
                      var_analysisContext_5310.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_6609.current_mExtractedValueName (HERE), enumerator_6534.current_mEntry (HERE), var_cppName_7054, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 173)) ;
                      }
                    }
                  }
                  var_associatedValueIndex_6494.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)) ;
                  enumerator_6534.gotoNextObject () ;
                  enumerator_6609.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_5356.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5356.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).add_operation (extensionGetter_definition (var_switchExpression_4506.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)), fixItArray19  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)) ;
      }
      var_firstConstant_5281 = GALGAS_bool (false) ;
      enumerator_5356.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_7698 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 184)) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5310, ioArgument_ioTypeMap, enumerator_5113.current_mInstructionList (HERE), var_instructionList_7698, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 185)) ;
    }
    var_templateInstructionSwitchBranchList_5006.addAssign_operation (enumerator_5113.current_mConstantList (HERE), var_extractedAssociatedValuesForGeneration_5223, enumerator_5113.current_mEndOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)), var_instructionList_7698  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 193)) ;
    enumerator_5113.gotoNextObject () ;
  }
  GALGAS_stringset var_forgottenConstants_8145 = var_enumConstantMap_4795.getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 200)).substract_operation (var_constantsNamedInSwitchInstruction_4889, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 200)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_8145.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 201)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_string var_s_8284 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_8300 (var_forgottenConstants_8145, kENUMERATION_UP) ;
      while (enumerator_8300.hasCurrentObject ()) {
        var_s_8284.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_8300.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)) ;
        enumerator_8300.gotoNextObject () ;
      }
      const GALGAS_templateInstructionSwitchAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mSwitchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8284, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 206)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_4506.readProperty_mResultType (), var_switchExpression_4506, var_templateInstructionSwitchBranchList_5006  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 210))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 210)) ;
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
  GALGAS_string var_switchVarCppName_10216 ;
  const GALGAS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_10216, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 246)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_10216, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 255)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 256)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_2 = this ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_10563 (temp_2.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_10563.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10638 (enumerator_10563.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10638.hasCurrentObject ()) {
      const GALGAS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)).add_operation (enumerator_10638.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)) ;
      enumerator_10638.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_10563.current_mExtractedAssociatedValuesForGeneration (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 265)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateInstructionSwitchForGeneration temp_5 = this ;
        GALGAS_string var_type_11010 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (enumerator_10563.current_mConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)) ;
        GALGAS_string var_varPtr_11164 = GALGAS_string ("extractPtr_").add_operation (enumerator_10563.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11010, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_varPtr_11164, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_type_11010, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_switchVarCppName_10216, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_11363 (enumerator_10563.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_11363.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11363.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (enumerator_11363.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)).add_operation (var_varPtr_11164, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)).add_operation (enumerator_11363.current_mIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 271)) ;
          enumerator_11363.gotoNextObject () ;
        }
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, enumerator_10563.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 275)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 276)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_10563.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 277)) ;
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
    enumerator_10563.gotoNextObject () ;
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
  GALGAS_lstring var_key_30208 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 810)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 810)) ;
  {
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_30208, temp_2, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 811)) ;
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
  GALGAS_lexicalTypeMap var_lexicalTypeMap_31026 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 823)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_31093 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 824)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_31026, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_31093, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 825)) ;
  }
  GALGAS_terminalMap var_terminalMap_31290 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 831)) ;
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_31338 (temp_1.readProperty_mTerminalDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_31338.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_31388 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 833)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_31457 (enumerator_31338.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_31457.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_31555 ;
      var_lexicalAttributeMap_31093.method_searchKey (enumerator_31457.current_mAttributeName (HERE), var_attributeLexicalType_31555, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 835)) ;
      var_argumentTypeList_31388.addAssign_operation (enumerator_31457.current_mFormalSelector (HERE), enumerator_31457.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_31555  COMMA_SOURCE_FILE ("lexique-component.galgas", 836)) ;
      enumerator_31457.gotoNextObject () ;
    }
    {
    var_terminalMap_31290.setter_insertKey (enumerator_31338.current_mName (HERE), var_argumentTypeList_31388, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 838)) ;
    }
    enumerator_31338.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_31770 (temp_2.readProperty_mLexicalListDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_31770.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_31832 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 842)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_31901 (enumerator_31770.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_31901.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_32000 ;
      var_lexicalAttributeMap_31093.method_searchKey (enumerator_31901.current_mAttributeName (HERE), var_attributeLexicalType_32000, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 844)) ;
      var_argumentTypeList_31832.addAssign_operation (enumerator_31901.current_mFormalSelector (HERE), enumerator_31901.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_32000  COMMA_SOURCE_FILE ("lexique-component.galgas", 845)) ;
      enumerator_31901.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_32148 (enumerator_31770.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_32148.hasCurrentObject ()) {
      {
      var_terminalMap_31290.setter_insertKey (enumerator_32148.current_mTerminalSpelling (HERE), var_argumentTypeList_31832, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 848)) ;
      }
      enumerator_32148.gotoNextObject () ;
    }
    enumerator_31770.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  const GALGAS_lexiqueComponentAST temp_5 = this ;
  const GALGAS_lexiqueComponentAST temp_6 = this ;
  const GALGAS_lexiqueComponentAST temp_7 = this ;
  const GALGAS_lexiqueComponentAST temp_8 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), this->mProperty_mIsTemplate, var_terminalMap_31290, temp_4.readProperty_mIndexingListAST (), temp_5.readProperty_mTerminalDeclarationListAST (), temp_6.readProperty_mLexicalAttributeListAST (), temp_7.readProperty_mLexicalStyleListAST (), temp_8.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 852)) ;
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
  GALGAS_lstring var_nameForUsefulness_33395 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 875)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_33395, var_nameForUsefulness_33395, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 876)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_33648 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 878)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_33786 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_33786, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 880)) ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_33905 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_33905, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 882)) ;
  }
  GALGAS_stringset var_unicodeTestFunctions_34032 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_34032, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 884)) ;
  }
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_34125 = GALGAS_lexiqueAnalysisContext::constructor_new (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_33786, var_lexicalFunctionMap_33905, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 890)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 891)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 892)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 893)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 894)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexique-component.galgas", 895)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 896)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 897)), var_unicodeTestFunctions_34032, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 886)) ;
  GALGAS_bigint var_styleIndex_34532 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 901)) ;
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_lexicalStyleListAST enumerator_34560 (temp_2.readProperty_mLexicalStyleListAST (), kENUMERATION_UP) ;
  while (enumerator_34560.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_34125.mProperty_mStyleMap.setter_insertKey (enumerator_34560.current_mName (HERE), enumerator_34560.current_mComment (HERE), var_styleIndex_34532.getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 903)) ;
    }
    var_styleIndex_34532.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 904)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 904)) ;
    enumerator_34560.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_33648, temp_3.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_34125.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 907)) ;
  }
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_35050 (temp_4.readProperty_mTerminalDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_35050.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_35124 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, enumerator_35050.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 915)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_lstring joker_35243 ; // Joker input parameter
        var_lexiqueAnalysisContext_34125.readProperty_mStyleMap ().method_searchKey (enumerator_35050.current_mStyle (HERE), joker_35243, var_terminalStyleIndex_35124, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 916)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_35283 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 918)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_35352 (enumerator_35050.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_35352.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_35475 ;
      var_lexiqueAnalysisContext_34125.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_35352.current_mAttributeName (HERE), var_attributeLexicalType_35475, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 920)) ;
      var_argumentTypeList_35283.addAssign_operation (enumerator_35352.current_mFormalSelector (HERE), enumerator_35352.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_35475  COMMA_SOURCE_FILE ("lexique-component.galgas", 921)) ;
      enumerator_35352.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_34125.mProperty_mTerminalMap.setter_insertKey (enumerator_35050.current_mName (HERE), var_argumentTypeList_35283, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 923)) ;
    }
    var_lexiqueAnalysisContext_34125.mProperty_mTerminalList.addAssign_operation (enumerator_35050.current_mName (HERE), var_argumentTypeList_35283, enumerator_35050.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_35050.current_isEndOfTemplateMark (HERE), enumerator_35050.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 946)), var_terminalStyleIndex_35124  COMMA_SOURCE_FILE ("lexique-component.galgas", 941)) ;
    enumerator_35050.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_6 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_36637 (temp_6.readProperty_mLexicalListDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_36637.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_36705 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsStrictSup, enumerator_36637.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 951)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring joker_36824 ; // Joker input parameter
        var_lexiqueAnalysisContext_34125.readProperty_mStyleMap ().method_searchKey (enumerator_36637.current_mStyle (HERE), joker_36824, var_terminalStyleIndex_36705, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 952)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_36864 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 954)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_36933 (enumerator_36637.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_36933.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_37056 ;
      var_lexiqueAnalysisContext_34125.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_36933.current_mAttributeName (HERE), var_attributeLexicalType_37056, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 956)) ;
      var_argumentTypeList_36864.addAssign_operation (enumerator_36933.current_mFormalSelector (HERE), enumerator_36933.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_37056  COMMA_SOURCE_FILE ("lexique-component.galgas", 957)) ;
      enumerator_36933.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_37211 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("lexique-component.galgas", 959)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_37244 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("lexique-component.galgas", 960)) ;
    cEnumerator_lexicalListEntryListAST enumerator_37343 (enumerator_36637.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_37343.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_37389 = enumerator_36637.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_37343.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 962)) ;
      var_lexiqueAnalysisContext_34125.mProperty_mTerminalList.addAssign_operation (enumerator_37343.current_mTerminalSpelling (HERE), var_argumentTypeList_36864, var_syntaxErrorMessage_37389, enumerator_37343.current_isEndOfTemplateMark (HERE), enumerator_37343.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 985)), var_terminalStyleIndex_36705  COMMA_SOURCE_FILE ("lexique-component.galgas", 980)) ;
      {
      var_lexiqueAnalysisContext_34125.mProperty_mTerminalMap.setter_insertKey (enumerator_37343.current_mTerminalSpelling (HERE), var_argumentTypeList_36864, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 987)) ;
      }
      {
      var_lexicalTokenListMap_37211.setter_insertKey (enumerator_37343.current_mEntrySpelling (HERE), enumerator_37343.current_mTerminalSpelling (HERE), enumerator_37343.current_nonAtomicSelection (HERE), enumerator_37343.current_isEndOfTemplateMark (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 988)) ;
      }
      var_tokenSortedlist_37244.addAssign_operation (enumerator_37343.current_mEntrySpelling (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 994)), enumerator_37343.current_mEntrySpelling (HERE).readProperty_string (), enumerator_37343.current_mTerminalSpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 994)) ;
      var_lexiqueAnalysisContext_34125.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_37343.current_mEntrySpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 995)) ;
      enumerator_37343.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_34125.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_36637.current_mName (HERE), var_lexicalTokenListMap_37211, var_tokenSortedlist_37244, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 997)) ;
    }
    enumerator_36637.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_8 = this ;
  cEnumerator_lexicalMessageDeclarationListAST enumerator_39132 (temp_8.readProperty_mLexicalMessageDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_39132.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_34125.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_39132.current_mMessageName (HERE), enumerator_39132.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1001)) ;
    }
    enumerator_39132.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_9 = this ;
  cEnumerator_lexicalRuleListAST enumerator_39354 (temp_9.readProperty_mLexicalRuleListAST (), kENUMERATION_UP) ;
  while (enumerator_39354.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_39354.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_34125, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1005)) ;
    enumerator_39354.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_39546 (var_lexiqueAnalysisContext_34125.readProperty_mLexicalMessageMap (), kENUMERATION_UP) ;
  while (enumerator_39546.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = enumerator_39546.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 1009)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_39546.current_lkey (HERE).readProperty_location (), GALGAS_string ("unused message"), fixItArray11  COMMA_SOURCE_FILE ("lexique-component.galgas", 1010)) ;
      }
    }
    enumerator_39546.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_12 = this ;
  cEnumerator_templateDelimitorListAST enumerator_39800 (temp_12.readProperty_mTemplateDelimitorListAST (), kENUMERATION_UP) ;
  while (enumerator_39800.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_34125.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_39800.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1015)) ;
    var_lexiqueAnalysisContext_34125.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_39800.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1016)) ;
    var_lexiqueAnalysisContext_34125.mProperty_mTemplateDelimitorList.addAssign_operation (enumerator_39800.current_mStartString (HERE), enumerator_39800.current_mEndString (HERE), enumerator_39800.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 1017)) ;
    enumerator_39800.gotoNextObject () ;
  }
  GALGAS_stringset var_indexNameSet_40123 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexique-component.galgas", 1019)) ;
  const GALGAS_lexiqueComponentAST temp_13 = this ;
  cEnumerator_indexingListAST enumerator_40159 (temp_13.readProperty_mIndexingListAST (), kENUMERATION_UP) ;
  while (enumerator_40159.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_indexNameSet_40123.getter_hasKey (enumerator_40159.current_mIndexName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas", 1021)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_40159.current_mIndexName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_40159.current_mIndexName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1022)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1022)), fixItArray15  COMMA_SOURCE_FILE ("lexique-component.galgas", 1022)) ;
      }
    }
    var_indexNameSet_40123.addAssign_operation (enumerator_40159.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1024)) ;
    enumerator_40159.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_16 = this ;
  cEnumerator_templateReplacementListAST enumerator_40476 (temp_16.readProperty_mTemplateReplacementListAST (), kENUMERATION_UP) ;
  while (enumerator_40476.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_34125.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_40476.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1028)) ;
    var_lexiqueAnalysisContext_34125.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_40476.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1029)) ;
    enumerator_40476.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("lexique-component.galgas", 1033)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      const GALGAS_lexiqueComponentAST temp_18 = this ;
      const GALGAS_lexiqueComponentAST temp_19 = this ;
      const GALGAS_lexiqueComponentAST temp_20 = this ;
      const GALGAS_lexiqueComponentAST temp_21 = this ;
      GALGAS_string var_headerContents_40844 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (inCompiler, temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1036)), temp_19.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_34125, temp_20.readProperty_mTemplateDelimitorListAST (), temp_21.readProperty_mIndexingListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1035))) ;
      const GALGAS_lexiqueComponentAST temp_22 = this ;
      const GALGAS_lexiqueComponentAST temp_23 = this ;
      const GALGAS_lexiqueComponentAST temp_24 = this ;
      const GALGAS_lexiqueComponentAST temp_25 = this ;
      const GALGAS_lexiqueComponentAST temp_26 = this ;
      const GALGAS_lexiqueComponentAST temp_27 = this ;
      const GALGAS_lexiqueComponentAST temp_28 = this ;
      GALGAS_string var_cppContents_41151 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (inCompiler, temp_22.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1044)), extensionGetter_useLoopLocalVar (temp_23.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1045)), var_lexiqueAnalysisContext_34125.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34125.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34125.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34125.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_34125.readProperty_mUnicodeStringToGenerate (), temp_24.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34125, temp_25.readProperty_mTemplateDelimitorListAST (), temp_26.readProperty_mLexiqueComponentName ().readProperty_string (), temp_27.readProperty_mTemplateReplacementListAST (), temp_28.readProperty_mLexicalStyleListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1043))) ;
      const GALGAS_lexiqueComponentAST temp_29 = this ;
      GALGAS_string var_objCocoaHeader_41849 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, temp_29.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_34125 COMMA_SOURCE_FILE ("lexique-component.galgas", 1059))) ;
      const GALGAS_lexiqueComponentAST temp_30 = this ;
      const GALGAS_lexiqueComponentAST temp_31 = this ;
      const GALGAS_lexiqueComponentAST temp_32 = this ;
      const GALGAS_lexiqueComponentAST temp_33 = this ;
      const GALGAS_lexiqueComponentAST temp_34 = this ;
      const GALGAS_lexiqueComponentAST temp_35 = this ;
      const GALGAS_lexiqueComponentAST temp_36 = this ;
      GALGAS_string var_objCocoaImplementation_42041 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (temp_30.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1065)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1065)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1065)), temp_31.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_34125.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34125.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34125.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34125.readProperty_mUnicodeStringToGenerate (), temp_32.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34125, temp_33.readProperty_mTemplateReplacementListAST (), temp_34.readProperty_mIndexingListAST (), temp_35.readProperty_mLexicalStyleListAST (), temp_36.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1064))) ;
      const GALGAS_lexiqueComponentAST temp_37 = this ;
      const GALGAS_lexiqueComponentAST temp_38 = this ;
      const GALGAS_lexiqueComponentAST temp_39 = this ;
      const GALGAS_lexiqueComponentAST temp_40 = this ;
      const GALGAS_lexiqueComponentAST temp_41 = this ;
      const GALGAS_lexiqueComponentAST temp_42 = this ;
      const GALGAS_lexiqueComponentAST temp_43 = this ;
      GALGAS_string var_swiftCocoaImplementation_42711 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (temp_37.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1080)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1080)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1080)), temp_38.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_34125.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34125.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34125.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34125.readProperty_mUnicodeStringToGenerate (), temp_39.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34125, temp_40.readProperty_mTemplateReplacementListAST (), temp_41.readProperty_mIndexingListAST (), temp_42.readProperty_mLexicalStyleListAST (), temp_43.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1079))) ;
      const GALGAS_lexiqueComponentAST temp_44 = this ;
      const GALGAS_lexiqueComponentAST temp_45 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (temp_44.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1098)), temp_45.readProperty_mLexiqueComponentName ().readProperty_string (), GALGAS_string::makeEmptyString (), var_headerContents_40844, var_cppContents_41151, var_objCocoaHeader_41849, var_objCocoaImplementation_42041, var_swiftCocoaImplementation_42711  COMMA_SOURCE_FILE ("lexique-component.galgas", 1096))  COMMA_SOURCE_FILE ("lexique-component.galgas", 1094)) ;
    }
  }
}
