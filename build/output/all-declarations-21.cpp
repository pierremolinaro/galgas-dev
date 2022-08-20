#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element::GALGAS_scopeLocalVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mAttributes (),
mProperty_mState () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element::~ GALGAS_scopeLocalVarMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element::GALGAS_scopeLocalVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_string & inOperand3,
                                                                        const GALGAS_localVariableAttributes & inOperand4,
                                                                        const GALGAS_localVarValuation & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCppName (inOperand2),
mProperty_mNameForCheckingFormalParameterUsing (inOperand3),
mProperty_mAttributes (inOperand4),
mProperty_mState (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element GALGAS_scopeLocalVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                        const GALGAS_string & inOperand2,
                                                                                        const GALGAS_string & inOperand3,
                                                                                        const GALGAS_localVariableAttributes & inOperand4,
                                                                                        const GALGAS_localVarValuation & inOperand5 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_scopeLocalVarMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_scopeLocalVarMap_2D_element::objectCompare (const GALGAS_scopeLocalVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (inOperand.mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributes.objectCompare (inOperand.mProperty_mAttributes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mState.objectCompare (inOperand.mProperty_mState) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_scopeLocalVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_mNameForCheckingFormalParameterUsing.isValid () && mProperty_mAttributes.isValid () && mProperty_mState.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_mNameForCheckingFormalParameterUsing.drop () ;
  mProperty_mAttributes.drop () ;
  mProperty_mState.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @scopeLocalVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mState.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@scopeLocalVarMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeLocalVarMap_2D_element ("scopeLocalVarMap-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeLocalVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeLocalVarMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeLocalVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeLocalVarMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element GALGAS_scopeLocalVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap_2D_element result ;
  const GALGAS_scopeLocalVarMap_2D_element * p = (const GALGAS_scopeLocalVarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scopeLocalVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeLocalVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::~ GALGAS_unifiedTypeMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_unifiedTypeMapElementClass & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mElement (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_unifiedTypeMapElementClass & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_unifiedTypeMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeMap_2D_element::objectCompare (const GALGAS_unifiedTypeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mElement.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ("unifiedTypeMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  const GALGAS_unifiedTypeMap_2D_element * p = (const GALGAS_unifiedTypeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList_2D_element::GALGAS_actualOutputExpressionList_2D_element (void) :
mProperty_mActualSelector (),
mProperty_mExpression (),
mProperty_mEndOfExpressionLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList_2D_element::~ GALGAS_actualOutputExpressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList_2D_element::GALGAS_actualOutputExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_semanticExpressionAST & inOperand1,
                                                                                            const GALGAS_location & inOperand2) :
mProperty_mActualSelector (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mEndOfExpressionLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList_2D_element GALGAS_actualOutputExpressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_semanticExpressionAST & inOperand1,
                                                                                                            const GALGAS_location & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actualOutputExpressionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualOutputExpressionList_2D_element::objectCompare (const GALGAS_actualOutputExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActualSelector.objectCompare (inOperand.mProperty_mActualSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfExpressionLocation.objectCompare (inOperand.mProperty_mEndOfExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actualOutputExpressionList_2D_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mExpression.isValid () && mProperty_mEndOfExpressionLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList_2D_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpressionLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualOutputExpressionList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @actualOutputExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActualSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualOutputExpressionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualOutputExpressionList_2D_element ("actualOutputExpressionList-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualOutputExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputExpressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualOutputExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualOutputExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList_2D_element GALGAS_actualOutputExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList_2D_element result ;
  const GALGAS_actualOutputExpressionList_2D_element * p = (const GALGAS_actualOutputExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualOutputExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element::GALGAS_castInstructionBranchListAST_2D_element (void) :
mProperty_mTypeName (),
mProperty_mConstantVarName (),
mProperty_mInstructionList (),
mProperty_mTypeComparisonKind (),
mProperty_mEndOfInstructions () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element::~ GALGAS_castInstructionBranchListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                                const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                                const GALGAS_location & inOperand4 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_castInstructionBranchListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_castInstructionBranchListAST_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mConstantVarName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mTypeComparisonKind.isValid () && mProperty_mEndOfInstructions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mConstantVarName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mEndOfInstructions.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @castInstructionBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInstructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@castInstructionBranchListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ("castInstructionBranchListAST-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  const GALGAS_castInstructionBranchListAST_2D_element * p = (const GALGAS_castInstructionBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) :
mProperty_mOptionalTypeName (),
mProperty_mDeclaredAsUnused (),
mProperty_mOptionalConstantName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::~ GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_bool & inOperand1,
                                                                                                                                const GALGAS_lstring & inOperand2) :
mProperty_mOptionalTypeName (inOperand0),
mProperty_mDeclaredAsUnused (inOperand1),
mProperty_mOptionalConstantName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_bool::constructor_default (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                const GALGAS_bool & inOperand1,
                                                                                                                                                const GALGAS_lstring & inOperand2 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::isValid (void) const {
  return mProperty_mOptionalTypeName.isValid () && mProperty_mDeclaredAsUnused.isValid () && mProperty_mOptionalConstantName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::drop (void) {
  mProperty_mOptionalTypeName.drop () ;
  mProperty_mDeclaredAsUnused.drop () ;
  mProperty_mOptionalConstantName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectElementListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeclaredAsUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionEnumeratedObjectElementListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ("forInstructionEnumeratedObjectElementListAST-element",
                                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) :
mProperty_mEnumerationOrder (),
mProperty_mEnumeratedExpression (),
mProperty_mEnumeratorCppName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::~ GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2) :
mProperty_mEnumerationOrder (inOperand0),
mProperty_mEnumeratedExpression (inOperand1),
mProperty_mEnumeratorCppName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                      const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                                      const GALGAS_string & inOperand2 
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::isValid (void) const {
  return mProperty_mEnumerationOrder.isValid () && mProperty_mEnumeratedExpression.isValid () && mProperty_mEnumeratorCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::drop (void) {
  mProperty_mEnumerationOrder.drop () ;
  mProperty_mEnumeratedExpression.drop () ;
  mProperty_mEnumeratorCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionEnumeratedObjectListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ("forInstructionEnumeratedObjectListForGeneration-element",
                                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element::GALGAS_optionalMethodActualArgumentList_2D_element (void) :
mProperty_mSelector (),
mProperty_mActualArgument () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element::~ GALGAS_optionalMethodActualArgumentList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element::GALGAS_optionalMethodActualArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_optionalMethodActualArgument & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mActualArgument (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element GALGAS_optionalMethodActualArgumentList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_optionalMethodActualArgument & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_optionalMethodActualArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgumentList_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mActualArgument.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mActualArgument.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @optionalMethodActualArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionalMethodActualArgumentList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionalMethodActualArgumentList_2D_element ("optionalMethodActualArgumentList-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodActualArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodActualArgumentList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodActualArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodActualArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element GALGAS_optionalMethodActualArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList_2D_element result ;
  const GALGAS_optionalMethodActualArgumentList_2D_element * p = (const GALGAS_optionalMethodActualArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionalMethodActualArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodActualArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element::~ GALGAS_logListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_semanticExpressionAST & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_logListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_logListAST_2D_element::isValid (void) const {
  return mProperty_mLogMessage.isValid () && mProperty_mLogExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logListAST_2D_element::drop (void) {
  mProperty_mLogMessage.drop () ;
  mProperty_mLogExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logListAST_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @logListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLogMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@logListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logListAST_2D_element ("logListAST-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  const GALGAS_logListAST_2D_element * p = (const GALGAS_logListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element::GALGAS_switchExtractedValuesListAST_2D_element (void) :
mProperty_mExtractedValueTypeName (),
mProperty_mExtractedValueName (),
mProperty_mMarkedAsUnused () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element::~ GALGAS_switchExtractedValuesListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element::GALGAS_switchExtractedValuesListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_bool & inOperand2) :
mProperty_mExtractedValueTypeName (inOperand0),
mProperty_mExtractedValueName (inOperand1),
mProperty_mMarkedAsUnused (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchExtractedValuesListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_bool & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_switchExtractedValuesListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_switchExtractedValuesListAST_2D_element::isValid (void) const {
  return mProperty_mExtractedValueTypeName.isValid () && mProperty_mExtractedValueName.isValid () && mProperty_mMarkedAsUnused.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST_2D_element::drop (void) {
  mProperty_mExtractedValueTypeName.drop () ;
  mProperty_mExtractedValueName.drop () ;
  mProperty_mMarkedAsUnused.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @switchExtractedValuesListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@switchExtractedValuesListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ("switchExtractedValuesListAST-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchExtractedValuesListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchExtractedValuesListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchExtractedValuesListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST_2D_element result ;
  const GALGAS_switchExtractedValuesListAST_2D_element * p = (const GALGAS_switchExtractedValuesListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchExtractedValuesListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mNonTerminalIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                const GALGAS_uint & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @unusedNonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unusedNonTerminalSymbolMapForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ("unusedNonTerminalSymbolMapForGrammarAnalysis-element",
                                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element * p = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) :
mProperty_mNonTerminalSymbol (),
mProperty_mNonTerminalIndex (),
mProperty_mNonterminalSymbolParametersMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mProperty_mNonTerminalSymbol (inOperand0),
mProperty_mNonTerminalIndex (inOperand1),
mProperty_mNonterminalSymbolParametersMap (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_uint::constructor_default (HERE),
                                                                          GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                                  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mNonTerminalSymbol.isValid () && mProperty_mNonTerminalIndex.isValid () && mProperty_mNonterminalSymbolParametersMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mNonTerminalSymbol.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
  mProperty_mNonterminalSymbolParametersMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalSymbolSortedListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mNonTerminalSymbol.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonTerminalSymbolSortedListForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ("nonTerminalSymbolSortedListForGrammarAnalysis-element",
                                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element * p = (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) :
mProperty_mProductionRulesList (),
mProperty_mSyntaxComponentName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::~ GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1) :
mProperty_mProductionRulesList (inOperand0),
mProperty_mSyntaxComponentName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mProductionRulesList.isValid () && mProperty_mSyntaxComponentName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mProductionRulesList.drop () ;
  mProperty_mSyntaxComponentName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @syntaxComponentListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProductionRulesList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxComponentListForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ("syntaxComponentListForGrammarAnalysis-element",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element * p = (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mTerminalIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::~ GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTerminalIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminalIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminalIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @terminalSymbolsMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@terminalSymbolsMapForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ("terminalSymbolsMapForGrammarAnalysis-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element * p = (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::~ GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::GALGAS_extensionMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_extensionMethodMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForGlobalCheckings_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForGlobalCheckings-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ("extensionMethodMapForGlobalCheckings-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings_2D_element result ;
  const GALGAS_extensionMethodMapForGlobalCheckings_2D_element * p = (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::~ GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::GALGAS_extensionSetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_extensionSetterMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForGlobalCheckings_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForGlobalCheckings-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ("extensionSetterMapForGlobalCheckings-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings_2D_element result ;
  const GALGAS_extensionSetterMapForGlobalCheckings_2D_element * p = (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::~ GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::GALGAS_extensionGetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_extensionGetterMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForGlobalCheckings_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForGlobalCheckings-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ("extensionGetterMapForGlobalCheckings-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings_2D_element result ;
  const GALGAS_extensionGetterMapForGlobalCheckings_2D_element * p = (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) :
mProperty_mFeatureName (),
mProperty_mFeatureValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element::~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1) :
mProperty_mFeatureName (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_QualifiedFeatureList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_lstring & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_galgas_33_QualifiedFeatureList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_galgas_33_QualifiedFeatureList_2D_element::isValid (void) const {
  return mProperty_mFeatureName.isValid () && mProperty_mFeatureValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::drop (void) {
  mProperty_mFeatureName.drop () ;
  mProperty_mFeatureValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @galgas3QualifiedFeatureList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFeatureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3QualifiedFeatureList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ("galgas3QualifiedFeatureList-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  const GALGAS_galgas_33_QualifiedFeatureList_2D_element * p = (const GALGAS_galgas_33_QualifiedFeatureList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_QualifiedFeatureList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInclusion (),
mProperty_mHeaderString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element::~ GALGAS_headerCompositionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_stringset & inOperand1,
                                                                                const GALGAS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInclusion (inOperand1),
mProperty_mHeaderString (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_headerCompositionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_stringset::constructor_emptySet (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_stringset & inOperand1,
                                                                                                const GALGAS_string & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_headerCompositionMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerCompositionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInclusion.isValid () && mProperty_mHeaderString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInclusion.drop () ;
  mProperty_mHeaderString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @headerCompositionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInclusion.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHeaderString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@headerCompositionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ("headerCompositionMap-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerCompositionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerCompositionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerCompositionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  const GALGAS_headerCompositionMap_2D_element * p = (const GALGAS_headerCompositionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerCompositionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mHeaderFileName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element::~ GALGAS_headerRepartitionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mHeaderFileName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_headerRepartitionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_string & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_headerRepartitionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerRepartitionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mHeaderFileName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mHeaderFileName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @headerRepartitionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHeaderFileName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@headerRepartitionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ("headerRepartitionMap-element",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerRepartitionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerRepartitionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerRepartitionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  const GALGAS_headerRepartitionMap_2D_element * p = (const GALGAS_headerRepartitionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerRepartitionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (void) :
mProperty_lkey (),
mProperty_mFeatureValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element::~ GALGAS_projectQualifiedFeatureMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_projectQualifiedFeatureMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_projectQualifiedFeatureMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_projectQualifiedFeatureMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFeatureValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFeatureValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @projectQualifiedFeatureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@projectQualifiedFeatureMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ("projectQualifiedFeatureMap-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_projectQualifiedFeatureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_projectQualifiedFeatureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectQualifiedFeatureMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  const GALGAS_projectQualifiedFeatureMap_2D_element * p = (const GALGAS_projectQualifiedFeatureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_projectQualifiedFeatureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLiteralUIntExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralUIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralUIntExpressionAST * p = (const cPtr_templateLiteralUIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInt.objectCompare (p->mProperty_mLiteralInt) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralUIntExpressionAST::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mLiteralInt
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralUIntExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GALGAS_lbigint & in_mLiteralInt
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralInt (in_mLiteralInt) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateLiteralUIntExpressionAST:" ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralUIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mProperty_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralUIntExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUIntExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  const GALGAS_templateLiteralUIntExpressionAST * p = (const GALGAS_templateLiteralUIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLiteralSIntExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralSIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralSIntExpressionAST * p = (const cPtr_templateLiteralSIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralSIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInt.objectCompare (p->mProperty_mLiteralInt) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralSIntExpressionAST::objectCompare (const GALGAS_templateLiteralSIntExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST::GALGAS_templateLiteralSIntExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralSIntExpressionAST::constructor_new (GALGAS_lsint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST::GALGAS_templateLiteralSIntExpressionAST (const cPtr_templateLiteralSIntExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralSIntExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST::constructor_new (const GALGAS_lsint & inAttribute_mLiteralInt
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralSIntExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint GALGAS_templateLiteralSIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lsint () ;
  }else{
    cPtr_templateLiteralSIntExpressionAST * p = (cPtr_templateLiteralSIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralSIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralSIntExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralSIntExpressionAST::cPtr_templateLiteralSIntExpressionAST (const GALGAS_lsint & in_mLiteralInt
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralInt (in_mLiteralInt) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralSIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ;
}

void cPtr_templateLiteralSIntExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateLiteralSIntExpressionAST:" ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralSIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralSIntExpressionAST (mProperty_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralSIntExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ("templateLiteralSIntExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralSIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralSIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSIntExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST result ;
  const GALGAS_templateLiteralSIntExpressionAST * p = (const GALGAS_templateLiteralSIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLiteralUInt_36__34_ExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralUInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInt.objectCompare (p->mProperty_mLiteralInt) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralUInt_36__34_ExpressionAST::objectCompare (const GALGAS_templateLiteralUInt_36__34_ExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST::GALGAS_templateLiteralUInt_36__34_ExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_new (GALGAS_luint_36__34_::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST::GALGAS_templateLiteralUInt_36__34_ExpressionAST (const cPtr_templateLiteralUInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST::constructor_new (const GALGAS_luint_36__34_ & inAttribute_mLiteralInt
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralUInt_36__34_ExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ GALGAS_templateLiteralUInt_36__34_ExpressionAST::readProperty_mLiteralInt (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint_36__34_ () ;
  }else{
    cPtr_templateLiteralUInt_36__34_ExpressionAST * p = (cPtr_templateLiteralUInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUInt64ExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralUInt_36__34_ExpressionAST::cPtr_templateLiteralUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mLiteralInt
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralInt (in_mLiteralInt) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralUInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST ;
}

void cPtr_templateLiteralUInt_36__34_ExpressionAST::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@templateLiteralUInt64ExpressionAST:" ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralUInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralUInt_36__34_ExpressionAST (mProperty_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralUInt64ExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST ("templateLiteralUInt64ExpressionAST",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralUInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralUInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST result ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST * p = (const GALGAS_templateLiteralUInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLiteralSInt_36__34_ExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralSInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInt.objectCompare (p->mProperty_mLiteralInt) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralSInt_36__34_ExpressionAST::objectCompare (const GALGAS_templateLiteralSInt_36__34_ExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST::GALGAS_templateLiteralSInt_36__34_ExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_new (GALGAS_lsint_36__34_::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST::GALGAS_templateLiteralSInt_36__34_ExpressionAST (const cPtr_templateLiteralSInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST::constructor_new (const GALGAS_lsint_36__34_ & inAttribute_mLiteralInt
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralSInt_36__34_ExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ GALGAS_templateLiteralSInt_36__34_ExpressionAST::readProperty_mLiteralInt (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lsint_36__34_ () ;
  }else{
    cPtr_templateLiteralSInt_36__34_ExpressionAST * p = (cPtr_templateLiteralSInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralSInt64ExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralSInt_36__34_ExpressionAST::cPtr_templateLiteralSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mLiteralInt
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralInt (in_mLiteralInt) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralSInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST ;
}

void cPtr_templateLiteralSInt_36__34_ExpressionAST::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@templateLiteralSInt64ExpressionAST:" ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralSInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralSInt_36__34_ExpressionAST (mProperty_mLiteralInt COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralSInt64ExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST ("templateLiteralSInt64ExpressionAST",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralSInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralSInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST result ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST * p = (const GALGAS_templateLiteralSInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLiteralCharExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralCharExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralCharExpressionAST * p = (const cPtr_templateLiteralCharExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralChar.objectCompare (p->mProperty_mLiteralChar) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralCharExpressionAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (const cPtr_templateLiteralCharExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralCharExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::constructor_new (const GALGAS_lchar & inAttribute_mLiteralChar
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST result ;
  if (inAttribute_mLiteralChar.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralCharExpressionAST (inAttribute_mLiteralChar COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_templateLiteralCharExpressionAST::readProperty_mLiteralChar (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_templateLiteralCharExpressionAST * p = (cPtr_templateLiteralCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
    return p->mProperty_mLiteralChar ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralCharExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (const GALGAS_lchar & in_mLiteralChar
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralChar (in_mLiteralChar) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

void cPtr_templateLiteralCharExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateLiteralCharExpressionAST:" ;
  mProperty_mLiteralChar.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralCharExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralCharExpressionAST (mProperty_mLiteralChar COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralCharExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ("templateLiteralCharExpressionAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralCharExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST result ;
  const GALGAS_templateLiteralCharExpressionAST * p = (const GALGAS_templateLiteralCharExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLiteralDoubleExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralDoubleExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralDoubleExpressionAST * p = (const cPtr_templateLiteralDoubleExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralDouble.objectCompare (p->mProperty_mLiteralDouble) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralDoubleExpressionAST::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralDoubleExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::constructor_new (const GALGAS_ldouble & inAttribute_mLiteralDouble
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  if (inAttribute_mLiteralDouble.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralDoubleExpressionAST (inAttribute_mLiteralDouble COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_templateLiteralDoubleExpressionAST::readProperty_mLiteralDouble (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ldouble () ;
  }else{
    cPtr_templateLiteralDoubleExpressionAST * p = (cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
    return p->mProperty_mLiteralDouble ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralDoubleExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (const GALGAS_ldouble & in_mLiteralDouble
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralDouble (in_mLiteralDouble) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

void cPtr_templateLiteralDoubleExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateLiteralDoubleExpressionAST:" ;
  mProperty_mLiteralDouble.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralDoubleExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralDoubleExpressionAST (mProperty_mLiteralDouble COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralDoubleExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ("templateLiteralDoubleExpressionAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  const GALGAS_templateLiteralDoubleExpressionAST * p = (const GALGAS_templateLiteralDoubleExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralDoubleExpressionAST *> (p)) {
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
  "<expression>",// Index 0
  "<relation_term>",// Index 1
  "<relation_factor>",// Index 2
  "<simple_expression>",// Index 3
  "<term>",// Index 4
  "<factor>",// Index 5
  "<primary>",// Index 6
  "<output_expression_list>",// Index 7
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

static const int16_t gActionTable_templateGrammar [] = {
// State S0 (index = 0)
  C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (85)
, END
// State S1 (index = 17)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S2 (index = 48)
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
// State S3 (index = 79)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (26)
, END
// State S4 (index = 110)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S5 (index = 141)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S6 (index = 172)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (35)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (36)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (93)
, END
// State S7 (index = 179)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S8 (index = 210)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (85)
, END
// State S9 (index = 227)
, C_Lexique_galgasTemplateScanner::kToken_, ACCEPT
, END
// State S10 (index = 230)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (29)
, END
// State S11 (index = 233)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S12 (index = 264)
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
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (41)
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
// State S13 (index = 345)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S14 (index = 376)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S15 (index = 407)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S16 (index = 438)
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
// State S17 (index = 517)
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
// State S18 (index = 596)
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
// State S19 (index = 675)
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
// State S20 (index = 754)
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
// State S21 (index = 833)
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
// State S22 (index = 912)
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
// State S23 (index = 991)
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
// State S24 (index = 1070)
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
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (45)
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
// State S25 (index = 1151)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, C_Lexique_galgasTemplateScanner::kToken_template, SHIFT (47)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (48)
, C_Lexique_galgasTemplateScanner::kToken_filewrapper, SHIFT (49)
, C_Lexique_galgasTemplateScanner::kToken_option, SHIFT (50)
, END
// State S26 (index = 1190)
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
// State S27 (index = 1221)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
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
// State S28 (index = 1268)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (56)
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
// State S29 (index = 1317)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, SHIFT (58)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, SHIFT (59)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, SHIFT (60)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, SHIFT (61)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (63)
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
// State S30 (index = 1378)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
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
// State S31 (index = 1447)
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
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
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
// State S32 (index = 1522)
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
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (74)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken_is, SHIFT (75)
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
// State S33 (index = 1601)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (77)
, END
// State S34 (index = 1604)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (78)
, END
// State S35 (index = 1607)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (95)
, END
// State S36 (index = 1610)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (94)
, END
// State S37 (index = 1613)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (79)
, END
// State S38 (index = 1616)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (112)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (81)
, END
// State S39 (index = 1621)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (86)
, END
// State S40 (index = 1624)
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
// State S41 (index = 1699)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (83)
, END
// State S42 (index = 1706)
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
// State S43 (index = 1781)
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
// State S44 (index = 1856)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (86)
, END
// State S45 (index = 1859)
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
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (45)
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
// State S46 (index = 1940)
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
// State S47 (index = 2019)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S48 (index = 2050)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (89)
, END
// State S49 (index = 2053)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (90)
, END
// State S50 (index = 2056)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (91)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (92)
, END
// State S51 (index = 2061)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (94)
, END
// State S52 (index = 2064)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (20)
, END
// State S53 (index = 2143)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S54 (index = 2174)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S55 (index = 2205)
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
// State S56 (index = 2248)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S57 (index = 2279)
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
// State S58 (index = 2326)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S59 (index = 2357)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S60 (index = 2388)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S61 (index = 2419)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S62 (index = 2450)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S63 (index = 2481)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S64 (index = 2512)
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
// State S65 (index = 2561)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S66 (index = 2592)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S67 (index = 2623)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S68 (index = 2654)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S69 (index = 2685)
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
// State S70 (index = 2746)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S71 (index = 2777)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S72 (index = 2808)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S73 (index = 2839)
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
// State S74 (index = 2908)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (111)
, END
// State S75 (index = 2911)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, SHIFT (112)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, SHIFT (113)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (114)
, END
// State S76 (index = 2918)
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
// State S77 (index = 2993)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (75)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S78 (index = 3010)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S79 (index = 3031)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (120)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (121)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (122)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (123)
, END
// State S80 (index = 3040)
, C_Lexique_galgasTemplateScanner::kToken_before, SHIFT (125)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (96)
, END
// State S81 (index = 3045)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (127)
, END
// State S82 (index = 3048)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (129)
, END
// State S83 (index = 3051)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S84 (index = 3082)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (131)
, END
// State S85 (index = 3085)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (23)
, END
// State S86 (index = 3090)
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
// State S87 (index = 3169)
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
// State S88 (index = 3248)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (132)
, END
// State S89 (index = 3251)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (83)
, END
// State S90 (index = 3258)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (134)
, END
// State S91 (index = 3261)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (135)
, END
// State S92 (index = 3264)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (136)
, END
// State S93 (index = 3267)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (137)
, END
// State S94 (index = 3270)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (83)
, END
// State S95 (index = 3277)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
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
// State S96 (index = 3324)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
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
// State S97 (index = 3371)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (56)
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
// State S98 (index = 3420)
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
// State S99 (index = 3469)
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
// State S100 (index = 3518)
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
// State S101 (index = 3567)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
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
// State S102 (index = 3616)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (48)
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
// State S103 (index = 3665)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (49)
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
// State S104 (index = 3714)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
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
// State S105 (index = 3783)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
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
// State S106 (index = 3852)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
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
// State S107 (index = 3921)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
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
// State S108 (index = 3990)
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
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
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
// State S109 (index = 4065)
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
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
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
// State S110 (index = 4140)
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
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
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
// State S111 (index = 4215)
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
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (74)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (59)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (59)
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
// State S112 (index = 4292)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (70)
, END
// State S113 (index = 4295)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (71)
, END
// State S114 (index = 4298)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (72)
, END
// State S115 (index = 4301)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (150)
, END
// State S116 (index = 4304)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (75)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S117 (index = 4321)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (152)
, END
// State S118 (index = 4324)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S119 (index = 4345)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (154)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (77)
, END
// State S120 (index = 4352)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (31)
, END
// State S121 (index = 4361)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (32)
, END
// State S122 (index = 4370)
, C_Lexique_galgasTemplateScanner::kToken_in, SHIFT (156)
, END
// State S123 (index = 4373)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (157)
, END
// State S124 (index = 4376)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (120)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (121)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (89)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (123)
, END
// State S125 (index = 4385)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S126 (index = 4402)
, C_Lexique_galgasTemplateScanner::kToken_do, SHIFT (162)
, END
// State S127 (index = 4405)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (116)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (116)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (163)
, END
// State S128 (index = 4412)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (165)
, END
// State S129 (index = 4415)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (36)
, END
// State S130 (index = 4446)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (83)
, END
// State S131 (index = 4453)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (21)
, END
// State S132 (index = 4532)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (83)
, END
// State S133 (index = 4539)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (168)
, END
// State S134 (index = 4542)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (169)
, END
// State S135 (index = 4545)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (170)
, END
// State S136 (index = 4548)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (171)
, END
// State S137 (index = 4551)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (67)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (67)
, END
// State S138 (index = 4630)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (172)
, END
// State S139 (index = 4633)
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
// State S140 (index = 4676)
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
// State S141 (index = 4719)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (42)
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
// State S142 (index = 4766)
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
// State S143 (index = 4827)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
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
// State S144 (index = 4888)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (53)
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
// State S145 (index = 4949)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (54)
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
// State S146 (index = 5010)
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
// State S147 (index = 5079)
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
// State S148 (index = 5148)
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
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (58)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (58)
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
// State S149 (index = 5217)
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
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (60)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (60)
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
// State S150 (index = 5292)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (22)
, END
// State S151 (index = 5371)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (76)
, END
// State S152 (index = 5374)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (27)
, END
// State S153 (index = 5405)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (80)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (80)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (80)
, END
// State S154 (index = 5412)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S155 (index = 5443)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_else, SHIFT (174)
, END
// State S156 (index = 5448)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S157 (index = 5479)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (30)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (30)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (30)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (30)
, END
// State S158 (index = 5488)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (120)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (121)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (89)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (123)
, END
// State S159 (index = 5497)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (178)
, END
// State S160 (index = 5500)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S161 (index = 5517)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (97)
, END
// State S162 (index = 5520)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (180)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (100)
, END
// State S163 (index = 5543)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (182)
, END
// State S164 (index = 5546)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (183)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (118)
, END
// State S165 (index = 5551)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (114)
, END
// State S166 (index = 5570)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (74)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (74)
, END
// State S167 (index = 5575)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (187)
, END
// State S168 (index = 5578)
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
// State S169 (index = 5657)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (73)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (83)
, END
// State S170 (index = 5664)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (68)
, END
// State S171 (index = 5667)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (189)
, END
// State S172 (index = 5670)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (66)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (66)
, END
// State S173 (index = 5749)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (190)
, END
// State S174 (index = 5752)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S175 (index = 5769)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (193)
, END
// State S176 (index = 5772)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (194)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (87)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (87)
, END
// State S177 (index = 5779)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (90)
, END
// State S178 (index = 5782)
, C_Lexique_galgasTemplateScanner::kToken_in, SHIFT (196)
, END
// State S179 (index = 5785)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (99)
, END
// State S180 (index = 5788)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (197)
, END
// State S181 (index = 5791)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (102)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (102)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (102)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S182 (index = 5812)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (116)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (116)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (163)
, END
// State S183 (index = 5819)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (201)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (126)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (202)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (203)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (126)
, END
// State S184 (index = 5830)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (37)
, END
// State S185 (index = 5833)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (114)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (114)
, END
// State S186 (index = 5852)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (112)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (81)
, END
// State S187 (index = 5857)
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
// State S188 (index = 5936)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (208)
, END
// State S189 (index = 5939)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (69)
, END
// State S190 (index = 5942)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S191 (index = 5963)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S192 (index = 5980)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (82)
, END
// State S193 (index = 5983)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (28)
, END
// State S194 (index = 6014)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (211)
, END
// State S195 (index = 6017)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (33)
, END
// State S196 (index = 6022)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S197 (index = 6053)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (213)
, END
// State S198 (index = 6056)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (102)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (102)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (102)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S199 (index = 6077)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (104)
, C_Lexique_galgasTemplateScanner::kToken_between, SHIFT (215)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (104)
, END
// State S200 (index = 6084)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (117)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (117)
, END
// State S201 (index = 6089)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (123)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (123)
, END
// State S202 (index = 6102)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (217)
, END
// State S203 (index = 6105)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (125)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (125)
, END
// State S204 (index = 6110)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (201)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (126)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (120)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (202)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (203)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (126)
, END
// State S205 (index = 6123)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (127)
, C_Lexique_galgasTemplateScanner::kToken_unused, SHIFT (220)
, END
// State S206 (index = 6128)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (115)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (115)
, END
// State S207 (index = 6133)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (113)
, END
// State S208 (index = 6136)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_is, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (65)
, END
// State S209 (index = 6215)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (154)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (77)
, END
// State S210 (index = 6222)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (84)
, END
// State S211 (index = 6225)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (88)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (88)
, END
// State S212 (index = 6230)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (223)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (91)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (91)
, END
// State S213 (index = 6237)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (101)
, END
// State S214 (index = 6258)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (103)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (103)
, END
// State S215 (index = 6265)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (106)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (106)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S216 (index = 6284)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (108)
, C_Lexique_galgasTemplateScanner::kToken_after, SHIFT (227)
, END
// State S217 (index = 6289)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (122)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (122)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (122)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (122)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (122)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (122)
, END
// State S218 (index = 6302)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (229)
, END
// State S219 (index = 6305)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (201)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (126)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (120)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (202)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (203)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (126)
, END
// State S220 (index = 6318)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (128)
, END
// State S221 (index = 6321)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (231)
, END
// State S222 (index = 6324)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (78)
, END
// State S223 (index = 6329)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (232)
, END
// State S224 (index = 6332)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (34)
, END
// State S225 (index = 6337)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (106)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (106)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S226 (index = 6356)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (105)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (105)
, END
// State S227 (index = 6361)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (110)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S228 (index = 6378)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (236)
, END
// State S229 (index = 6381)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (119)
, END
// State S230 (index = 6384)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (121)
, END
// State S231 (index = 6387)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (124)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (124)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (124)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, REDUCE (124)
, C_Lexique_galgasTemplateScanner::kToken__40_type, REDUCE (124)
, C_Lexique_galgasTemplateScanner::kToken_unused, REDUCE (124)
, END
// State S232 (index = 6400)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (92)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (92)
, END
// State S233 (index = 6405)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (107)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (107)
, END
// State S234 (index = 6410)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (110)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S235 (index = 6427)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (109)
, END
// State S236 (index = 6430)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (35)
, END
// State S237 (index = 6461)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (111)
, END} ;

static const uint32_t gActionTableIndex_templateGrammar [238] = {
  0  // S0
, 17  // S1
, 48  // S2
, 79  // S3
, 110  // S4
, 141  // S5
, 172  // S6
, 179  // S7
, 210  // S8
, 227  // S9
, 230  // S10
, 233  // S11
, 264  // S12
, 345  // S13
, 376  // S14
, 407  // S15
, 438  // S16
, 517  // S17
, 596  // S18
, 675  // S19
, 754  // S20
, 833  // S21
, 912  // S22
, 991  // S23
, 1070  // S24
, 1151  // S25
, 1190  // S26
, 1221  // S27
, 1268  // S28
, 1317  // S29
, 1378  // S30
, 1447  // S31
, 1522  // S32
, 1601  // S33
, 1604  // S34
, 1607  // S35
, 1610  // S36
, 1613  // S37
, 1616  // S38
, 1621  // S39
, 1624  // S40
, 1699  // S41
, 1706  // S42
, 1781  // S43
, 1856  // S44
, 1859  // S45
, 1940  // S46
, 2019  // S47
, 2050  // S48
, 2053  // S49
, 2056  // S50
, 2061  // S51
, 2064  // S52
, 2143  // S53
, 2174  // S54
, 2205  // S55
, 2248  // S56
, 2279  // S57
, 2326  // S58
, 2357  // S59
, 2388  // S60
, 2419  // S61
, 2450  // S62
, 2481  // S63
, 2512  // S64
, 2561  // S65
, 2592  // S66
, 2623  // S67
, 2654  // S68
, 2685  // S69
, 2746  // S70
, 2777  // S71
, 2808  // S72
, 2839  // S73
, 2908  // S74
, 2911  // S75
, 2918  // S76
, 2993  // S77
, 3010  // S78
, 3031  // S79
, 3040  // S80
, 3045  // S81
, 3048  // S82
, 3051  // S83
, 3082  // S84
, 3085  // S85
, 3090  // S86
, 3169  // S87
, 3248  // S88
, 3251  // S89
, 3258  // S90
, 3261  // S91
, 3264  // S92
, 3267  // S93
, 3270  // S94
, 3277  // S95
, 3324  // S96
, 3371  // S97
, 3420  // S98
, 3469  // S99
, 3518  // S100
, 3567  // S101
, 3616  // S102
, 3665  // S103
, 3714  // S104
, 3783  // S105
, 3852  // S106
, 3921  // S107
, 3990  // S108
, 4065  // S109
, 4140  // S110
, 4215  // S111
, 4292  // S112
, 4295  // S113
, 4298  // S114
, 4301  // S115
, 4304  // S116
, 4321  // S117
, 4324  // S118
, 4345  // S119
, 4352  // S120
, 4361  // S121
, 4370  // S122
, 4373  // S123
, 4376  // S124
, 4385  // S125
, 4402  // S126
, 4405  // S127
, 4412  // S128
, 4415  // S129
, 4446  // S130
, 4453  // S131
, 4532  // S132
, 4539  // S133
, 4542  // S134
, 4545  // S135
, 4548  // S136
, 4551  // S137
, 4630  // S138
, 4633  // S139
, 4676  // S140
, 4719  // S141
, 4766  // S142
, 4827  // S143
, 4888  // S144
, 4949  // S145
, 5010  // S146
, 5079  // S147
, 5148  // S148
, 5217  // S149
, 5292  // S150
, 5371  // S151
, 5374  // S152
, 5405  // S153
, 5412  // S154
, 5443  // S155
, 5448  // S156
, 5479  // S157
, 5488  // S158
, 5497  // S159
, 5500  // S160
, 5517  // S161
, 5520  // S162
, 5543  // S163
, 5546  // S164
, 5551  // S165
, 5570  // S166
, 5575  // S167
, 5578  // S168
, 5657  // S169
, 5664  // S170
, 5667  // S171
, 5670  // S172
, 5749  // S173
, 5752  // S174
, 5769  // S175
, 5772  // S176
, 5779  // S177
, 5782  // S178
, 5785  // S179
, 5788  // S180
, 5791  // S181
, 5812  // S182
, 5819  // S183
, 5830  // S184
, 5833  // S185
, 5852  // S186
, 5857  // S187
, 5936  // S188
, 5939  // S189
, 5942  // S190
, 5963  // S191
, 5980  // S192
, 5983  // S193
, 6014  // S194
, 6017  // S195
, 6022  // S196
, 6053  // S197
, 6056  // S198
, 6077  // S199
, 6084  // S200
, 6089  // S201
, 6102  // S202
, 6105  // S203
, 6110  // S204
, 6123  // S205
, 6128  // S206
, 6133  // S207
, 6136  // S208
, 6215  // S209
, 6222  // S210
, 6225  // S211
, 6230  // S212
, 6237  // S213
, 6258  // S214
, 6265  // S215
, 6284  // S216
, 6289  // S217
, 6302  // S218
, 6305  // S219
, 6318  // S220
, 6321  // S221
, 6324  // S222
, 6329  // S223
, 6332  // S224
, 6337  // S225
, 6356  // S226
, 6361  // S227
, 6378  // S228
, 6381  // S229
, 6384  // S230
, 6387  // S231
, 6400  // S232
, 6405  // S233
, 6410  // S234
, 6427  // S235
, 6430  // S236
, 6461  // S237
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_templateGrammar_0 [7] = {8, 8,
  9, 9,
  29, 10, -1} ;

static const int16_t gSuccessorTable_templateGrammar_1 [15] = {0, 26,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_4 [15] = {0, 33,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_5 [15] = {0, 34,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_6 [3] = {33, 37, -1} ;

static const int16_t gSuccessorTable_templateGrammar_7 [15] = {0, 38,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_8 [5] = {8, 8,
  29, 39, -1} ;

static const int16_t gSuccessorTable_templateGrammar_11 [5] = {5, 40,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_13 [5] = {5, 42,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_14 [5] = {5, 43,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_15 [15] = {0, 44,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_24 [3] = {19, 46, -1} ;

static const int16_t gSuccessorTable_templateGrammar_25 [17] = {0, 51,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32,
  20, 52, -1} ;

static const int16_t gSuccessorTable_templateGrammar_27 [3] = {13, 55, -1} ;

static const int16_t gSuccessorTable_templateGrammar_28 [3] = {14, 57, -1} ;

static const int16_t gSuccessorTable_templateGrammar_29 [3] = {15, 64, -1} ;

static const int16_t gSuccessorTable_templateGrammar_30 [3] = {16, 69, -1} ;

static const int16_t gSuccessorTable_templateGrammar_31 [3] = {17, 73, -1} ;

static const int16_t gSuccessorTable_templateGrammar_32 [3] = {18, 76, -1} ;

static const int16_t gSuccessorTable_templateGrammar_37 [3] = {11, 80, -1} ;

static const int16_t gSuccessorTable_templateGrammar_38 [3] = {42, 82, -1} ;

static const int16_t gSuccessorTable_templateGrammar_41 [5] = {7, 84,
  23, 85, -1} ;

static const int16_t gSuccessorTable_templateGrammar_45 [3] = {19, 87, -1} ;

static const int16_t gSuccessorTable_templateGrammar_47 [15] = {0, 88,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_50 [3] = {21, 93, -1} ;

static const int16_t gSuccessorTable_templateGrammar_53 [13] = {1, 95,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_54 [13] = {1, 96,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_56 [11] = {2, 97,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_58 [9] = {3, 98,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_59 [9] = {3, 99,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_60 [9] = {3, 100,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_61 [9] = {3, 101,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_62 [9] = {3, 102,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_63 [9] = {3, 103,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_65 [7] = {4, 104,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_66 [7] = {4, 105,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_67 [7] = {4, 106,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_68 [7] = {4, 107,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_70 [5] = {5, 108,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_71 [5] = {5, 109,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_72 [5] = {5, 110,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_75 [3] = {22, 115, -1} ;

static const int16_t gSuccessorTable_templateGrammar_77 [5] = {8, 116,
  24, 117, -1} ;

static const int16_t gSuccessorTable_templateGrammar_78 [5] = {8, 118,
  26, 119, -1} ;

static const int16_t gSuccessorTable_templateGrammar_79 [3] = {10, 124, -1} ;

static const int16_t gSuccessorTable_templateGrammar_80 [3] = {34, 126, -1} ;

static const int16_t gSuccessorTable_templateGrammar_81 [3] = {12, 128, -1} ;

static const int16_t gSuccessorTable_templateGrammar_83 [15] = {0, 130,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_89 [5] = {7, 133,
  23, 85, -1} ;

static const int16_t gSuccessorTable_templateGrammar_94 [5] = {7, 138,
  23, 85, -1} ;

static const int16_t gSuccessorTable_templateGrammar_95 [3] = {13, 139, -1} ;

static const int16_t gSuccessorTable_templateGrammar_96 [3] = {13, 140, -1} ;

static const int16_t gSuccessorTable_templateGrammar_97 [3] = {14, 141, -1} ;

static const int16_t gSuccessorTable_templateGrammar_104 [3] = {16, 142, -1} ;

static const int16_t gSuccessorTable_templateGrammar_105 [3] = {16, 143, -1} ;

static const int16_t gSuccessorTable_templateGrammar_106 [3] = {16, 144, -1} ;

static const int16_t gSuccessorTable_templateGrammar_107 [3] = {16, 145, -1} ;

static const int16_t gSuccessorTable_templateGrammar_108 [3] = {17, 146, -1} ;

static const int16_t gSuccessorTable_templateGrammar_109 [3] = {17, 147, -1} ;

static const int16_t gSuccessorTable_templateGrammar_110 [3] = {17, 148, -1} ;

static const int16_t gSuccessorTable_templateGrammar_111 [3] = {18, 149, -1} ;

static const int16_t gSuccessorTable_templateGrammar_116 [5] = {8, 116,
  24, 151, -1} ;

static const int16_t gSuccessorTable_templateGrammar_118 [5] = {8, 118,
  26, 153, -1} ;

static const int16_t gSuccessorTable_templateGrammar_119 [3] = {25, 155, -1} ;

static const int16_t gSuccessorTable_templateGrammar_124 [5] = {10, 158,
  31, 159, -1} ;

static const int16_t gSuccessorTable_templateGrammar_125 [5] = {8, 160,
  35, 161, -1} ;

static const int16_t gSuccessorTable_templateGrammar_127 [3] = {44, 164, -1} ;

static const int16_t gSuccessorTable_templateGrammar_130 [3] = {23, 166, -1} ;

static const int16_t gSuccessorTable_templateGrammar_132 [5] = {7, 167,
  23, 85, -1} ;

static const int16_t gSuccessorTable_templateGrammar_154 [15] = {0, 173,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_155 [3] = {27, 175, -1} ;

static const int16_t gSuccessorTable_templateGrammar_156 [15] = {0, 176,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_158 [5] = {10, 158,
  31, 177, -1} ;

static const int16_t gSuccessorTable_templateGrammar_160 [5] = {8, 160,
  35, 179, -1} ;

static const int16_t gSuccessorTable_templateGrammar_162 [3] = {36, 181, -1} ;

static const int16_t gSuccessorTable_templateGrammar_164 [3] = {45, 184, -1} ;

static const int16_t gSuccessorTable_templateGrammar_165 [5] = {8, 185,
  43, 186, -1} ;

static const int16_t gSuccessorTable_templateGrammar_169 [5] = {7, 188,
  23, 85, -1} ;

static const int16_t gSuccessorTable_templateGrammar_174 [5] = {8, 191,
  28, 192, -1} ;

static const int16_t gSuccessorTable_templateGrammar_176 [3] = {30, 195, -1} ;

static const int16_t gSuccessorTable_templateGrammar_181 [5] = {8, 198,
  37, 199, -1} ;

static const int16_t gSuccessorTable_templateGrammar_182 [3] = {44, 200, -1} ;

static const int16_t gSuccessorTable_templateGrammar_183 [5] = {47, 204,
  48, 205, -1} ;

static const int16_t gSuccessorTable_templateGrammar_185 [5] = {8, 185,
  43, 206, -1} ;

static const int16_t gSuccessorTable_templateGrammar_186 [3] = {42, 207, -1} ;

static const int16_t gSuccessorTable_templateGrammar_190 [5] = {8, 118,
  26, 209, -1} ;

static const int16_t gSuccessorTable_templateGrammar_191 [5] = {8, 191,
  28, 210, -1} ;

static const int16_t gSuccessorTable_templateGrammar_196 [15] = {0, 212,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_198 [5] = {8, 198,
  37, 214, -1} ;

static const int16_t gSuccessorTable_templateGrammar_199 [3] = {38, 216, -1} ;

static const int16_t gSuccessorTable_templateGrammar_204 [7] = {46, 218,
  47, 219,
  48, 205, -1} ;

static const int16_t gSuccessorTable_templateGrammar_205 [3] = {49, 221, -1} ;

static const int16_t gSuccessorTable_templateGrammar_209 [3] = {25, 222, -1} ;

static const int16_t gSuccessorTable_templateGrammar_212 [3] = {32, 224, -1} ;

static const int16_t gSuccessorTable_templateGrammar_215 [5] = {8, 225,
  39, 226, -1} ;

static const int16_t gSuccessorTable_templateGrammar_216 [3] = {40, 228, -1} ;

static const int16_t gSuccessorTable_templateGrammar_219 [7] = {46, 230,
  47, 219,
  48, 205, -1} ;

static const int16_t gSuccessorTable_templateGrammar_225 [5] = {8, 225,
  39, 233, -1} ;

static const int16_t gSuccessorTable_templateGrammar_227 [5] = {8, 234,
  41, 235, -1} ;

static const int16_t gSuccessorTable_templateGrammar_234 [5] = {8, 234,
  41, 237, -1} ;

static const int16_t * gSuccessorTable_templateGrammar [238] = {
gSuccessorTable_templateGrammar_0, gSuccessorTable_templateGrammar_1, NULL, NULL, 
  gSuccessorTable_templateGrammar_4, gSuccessorTable_templateGrammar_5, gSuccessorTable_templateGrammar_6, gSuccessorTable_templateGrammar_7, 
  gSuccessorTable_templateGrammar_8, NULL, NULL, gSuccessorTable_templateGrammar_11, 
  NULL, gSuccessorTable_templateGrammar_13, gSuccessorTable_templateGrammar_14, gSuccessorTable_templateGrammar_15, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_24, gSuccessorTable_templateGrammar_25, NULL, gSuccessorTable_templateGrammar_27, 
  gSuccessorTable_templateGrammar_28, gSuccessorTable_templateGrammar_29, gSuccessorTable_templateGrammar_30, gSuccessorTable_templateGrammar_31, 
  gSuccessorTable_templateGrammar_32, NULL, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_37, gSuccessorTable_templateGrammar_38, NULL, 
  NULL, gSuccessorTable_templateGrammar_41, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_45, NULL, gSuccessorTable_templateGrammar_47, 
  NULL, NULL, gSuccessorTable_templateGrammar_50, NULL, 
  NULL, gSuccessorTable_templateGrammar_53, gSuccessorTable_templateGrammar_54, NULL, 
  gSuccessorTable_templateGrammar_56, NULL, gSuccessorTable_templateGrammar_58, gSuccessorTable_templateGrammar_59, 
  gSuccessorTable_templateGrammar_60, gSuccessorTable_templateGrammar_61, gSuccessorTable_templateGrammar_62, gSuccessorTable_templateGrammar_63, 
  NULL, gSuccessorTable_templateGrammar_65, gSuccessorTable_templateGrammar_66, gSuccessorTable_templateGrammar_67, 
  gSuccessorTable_templateGrammar_68, NULL, gSuccessorTable_templateGrammar_70, gSuccessorTable_templateGrammar_71, 
  gSuccessorTable_templateGrammar_72, NULL, NULL, gSuccessorTable_templateGrammar_75, 
  NULL, gSuccessorTable_templateGrammar_77, gSuccessorTable_templateGrammar_78, gSuccessorTable_templateGrammar_79, 
  gSuccessorTable_templateGrammar_80, gSuccessorTable_templateGrammar_81, NULL, gSuccessorTable_templateGrammar_83, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_89, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_94, gSuccessorTable_templateGrammar_95, 
  gSuccessorTable_templateGrammar_96, gSuccessorTable_templateGrammar_97, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_104, gSuccessorTable_templateGrammar_105, gSuccessorTable_templateGrammar_106, gSuccessorTable_templateGrammar_107, 
  gSuccessorTable_templateGrammar_108, gSuccessorTable_templateGrammar_109, gSuccessorTable_templateGrammar_110, gSuccessorTable_templateGrammar_111, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_116, NULL, gSuccessorTable_templateGrammar_118, gSuccessorTable_templateGrammar_119, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_124, gSuccessorTable_templateGrammar_125, NULL, gSuccessorTable_templateGrammar_127, 
  NULL, NULL, gSuccessorTable_templateGrammar_130, NULL, 
  gSuccessorTable_templateGrammar_132, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_154, gSuccessorTable_templateGrammar_155, 
  gSuccessorTable_templateGrammar_156, NULL, gSuccessorTable_templateGrammar_158, NULL, 
  gSuccessorTable_templateGrammar_160, NULL, gSuccessorTable_templateGrammar_162, NULL, 
  gSuccessorTable_templateGrammar_164, gSuccessorTable_templateGrammar_165, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_169, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_174, NULL, 
  gSuccessorTable_templateGrammar_176, NULL, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_181, gSuccessorTable_templateGrammar_182, gSuccessorTable_templateGrammar_183, 
  NULL, gSuccessorTable_templateGrammar_185, gSuccessorTable_templateGrammar_186, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_190, gSuccessorTable_templateGrammar_191, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_196, NULL, gSuccessorTable_templateGrammar_198, gSuccessorTable_templateGrammar_199, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_204, gSuccessorTable_templateGrammar_205, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_209, NULL, NULL, 
  gSuccessorTable_templateGrammar_212, NULL, NULL, gSuccessorTable_templateGrammar_215, 
  gSuccessorTable_templateGrammar_216, NULL, NULL, gSuccessorTable_templateGrammar_219, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_225, NULL, gSuccessorTable_templateGrammar_227, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_234, NULL, 
  NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_templateGrammar [130 * 2] = {
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
//                                      'expression' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_expression_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_templateSyntax_expression_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_expression_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_templateSyntax_expression_i0_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_expression_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_templateSyntax_expression_i0_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'relation_term' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_term_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_templateSyntax_relation_5F_term_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_templateSyntax_relation_5F_term_i1_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_templateSyntax_relation_5F_term_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'relation_factor' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_factor_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_templateSyntax_relation_5F_factor_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_templateSyntax_relation_5F_factor_i2_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_templateSyntax_relation_5F_factor_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'simple_expression' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_simple_5F_expression_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_templateSyntax_simple_5F_expression_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_templateSyntax_simple_5F_expression_i3_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_templateSyntax_simple_5F_expression_i3_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'term' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_term_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_templateSyntax_term_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_term_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_templateSyntax_term_i4_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_term_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_templateSyntax_term_i4_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'factor' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_factor_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_i5_parse(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_i5_indexing(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_i6_indexing(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_i7_indexing(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_i8_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'primary' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_primary_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_i9_parse(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_i10_parse(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_i11_parse(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_i12_parse(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_i14_parse(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_i15_parse(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_i19_parse(inLexique) ;
    break ;
  case 20 :
      rule_templateSyntax_primary_i20_parse(inLexique) ;
    break ;
  case 21 :
      rule_templateSyntax_primary_i21_parse(inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_primary_i22_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_i9_indexing(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_i10_indexing(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_i11_indexing(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_i12_indexing(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_i13_indexing(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_i14_indexing(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_i15_indexing(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_i16_indexing(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_i17_indexing(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_i18_indexing(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_i19_indexing(inLexique) ;
    break ;
  case 20 :
      rule_templateSyntax_primary_i20_indexing(inLexique) ;
    break ;
  case 21 :
      rule_templateSyntax_primary_i21_indexing(inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_primary_i22_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_i9_(parameter_1, inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_i11_(parameter_1, inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_i12_(parameter_1, inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_i19_(parameter_1, inLexique) ;
    break ;
  case 20 :
      rule_templateSyntax_primary_i20_(parameter_1, inLexique) ;
    break ;
  case 21 :
      rule_templateSyntax_primary_i21_(parameter_1, inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_primary_i22_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'output_expression_list' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_templateSyntax_output_5F_expression_5F_list_i23_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_templateSyntax_output_5F_expression_5F_list_i23_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_ (GALGAS_templateExpressionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_templateSyntax_output_5F_expression_5F_list_i23_(parameter_1, inLexique) ;
    break ;
  default :
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
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_parse(inLexique) ;
    break ;
  case 26 :
      rule_templateSyntax_template_5F_instruction_i26_parse(inLexique) ;
    break ;
  case 27 :
      rule_templateSyntax_template_5F_instruction_i27_parse(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_template_5F_instruction_i28_parse(inLexique) ;
    break ;
  case 35 :
      rule_templateSyntax_template_5F_instruction_i35_parse(inLexique) ;
    break ;
  case 36 :
      rule_templateSyntax_template_5F_instruction_i36_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_indexing(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_indexing(inLexique) ;
    break ;
  case 26 :
      rule_templateSyntax_template_5F_instruction_i26_indexing(inLexique) ;
    break ;
  case 27 :
      rule_templateSyntax_template_5F_instruction_i27_indexing(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_template_5F_instruction_i28_indexing(inLexique) ;
    break ;
  case 35 :
      rule_templateSyntax_template_5F_instruction_i35_indexing(inLexique) ;
    break ;
  case 36 :
      rule_templateSyntax_template_5F_instruction_i36_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_(parameter_1, inLexique) ;
    break ;
  case 26 :
      rule_templateSyntax_template_5F_instruction_i26_(parameter_1, inLexique) ;
    break ;
  case 27 :
      rule_templateSyntax_template_5F_instruction_i27_(parameter_1, inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_template_5F_instruction_i28_(parameter_1, inLexique) ;
    break ;
  case 35 :
      rule_templateSyntax_template_5F_instruction_i35_(parameter_1, inLexique) ;
    break ;
  case 36 :
      rule_templateSyntax_template_5F_instruction_i36_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'template_parser_start_symbol' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 29 :
      rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i29_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 29 :
      rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i29_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 29 :
      rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i29_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::performIndexing (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
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

void cGrammar_templateGrammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
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

void cGrammar_templateGrammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
    C_String filePath = filePathAsString.stringValue () ;
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
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
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
  case 30 :
      rule_templateSyntax_for_5F_instruction_5F_element_i30_parse(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_for_5F_instruction_5F_element_i31_parse(inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_for_5F_instruction_5F_element_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_for_5F_instruction_5F_element_i30_indexing(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_for_5F_instruction_5F_element_i31_indexing(inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_for_5F_instruction_5F_element_i32_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_for_5F_instruction_5F_element_i30_(parameter_1, inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_for_5F_instruction_5F_element_i31_(parameter_1, inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_for_5F_instruction_5F_element_i32_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          'for_instruction_enumerated_object' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_parse(inLexique) ;
    break ;
  case 34 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_indexing(inLexique) ;
    break ;
  case 34 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_indexing(inLexique) ;
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
  case 33 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 34 :
      rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'switch_case' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_switch_5F_case_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 37 :
      rule_templateSyntax_switch_5F_case_i37_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_indexing (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 37 :
      rule_templateSyntax_switch_5F_case_i37_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_ (GALGAS_lstringlist &  parameter_1,
                                GALGAS_switchExtractedValuesListAST &  parameter_2,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 37 :
      rule_templateSyntax_switch_5F_case_i37_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_0' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_0 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 38 39 40
  return inLexique->nextProductionIndex () - 37 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_1' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 41 42
  return inLexique->nextProductionIndex () - 40 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_2' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 43 44 45 46 47 48 49
  return inLexique->nextProductionIndex () - 42 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_3' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 50 51 52 53 54
  return inLexique->nextProductionIndex () - 49 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_4' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 55 56 57 58
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_5' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 59 60
  return inLexique->nextProductionIndex () - 58 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_6' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_7' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 63 64 65 66 67
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_8' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 68 69
  return inLexique->nextProductionIndex () - 67 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_9' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 70 71 72
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_10' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 73 74
  return inLexique->nextProductionIndex () - 72 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_11' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 75 76
  return inLexique->nextProductionIndex () - 74 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_12' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 77 78
  return inLexique->nextProductionIndex () - 76 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_13' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 79 80
  return inLexique->nextProductionIndex () - 78 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_14' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 81 82
  return inLexique->nextProductionIndex () - 80 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_15' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 83 84
  return inLexique->nextProductionIndex () - 82 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_16' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 85 86
  return inLexique->nextProductionIndex () - 84 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_17' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_18' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_19' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_20' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 93 94 95
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_21' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 96 97
  return inLexique->nextProductionIndex () - 95 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_22' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 98 99
  return inLexique->nextProductionIndex () - 97 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_23' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 100 101
  return inLexique->nextProductionIndex () - 99 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_24' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 102 103
  return inLexique->nextProductionIndex () - 101 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_25' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 104 105
  return inLexique->nextProductionIndex () - 103 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_26' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 106 107
  return inLexique->nextProductionIndex () - 105 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_27' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 108 109
  return inLexique->nextProductionIndex () - 107 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_28' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 110 111
  return inLexique->nextProductionIndex () - 109 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_29' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_29 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 112 113
  return inLexique->nextProductionIndex () - 111 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_30' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_30 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_31' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_31 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 116 117
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_32' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_32 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_33' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_33 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 120 121
  return inLexique->nextProductionIndex () - 119 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_34' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_34 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 122 123 124
  return inLexique->nextProductionIndex () - 121 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_35' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_35 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 125 126
  return inLexique->nextProductionIndex () - 124 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_36' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_36 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 127 128
  return inLexique->nextProductionIndex () - 126 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionExpressionForGeneration * p = (const cPtr_templateInstructionExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionForGeneration (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@templateInstructionExpressionForGeneration:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                   & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  const GALGAS_templateInstructionExpressionForGeneration * p = (const GALGAS_templateInstructionExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mTemplateVariableMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::~ GALGAS_templateAnalysisContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_templateVariableMap & inOperand2) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mTemplateVariableMap (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::constructor_new (const GALGAS_semanticContext & inOperand0,
                                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                                const GALGAS_templateVariableMap & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateAnalysisContext (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateAnalysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mTemplateVariableMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mTemplateVariableMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @templateAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateAnalysisContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAnalysisContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  const GALGAS_templateAnalysisContext * p = (const GALGAS_templateAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @optionComponentForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentForGeneration::setter_setMIsPredefined (GALGAS_bool inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    p->mProperty_mIsPredefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentForGeneration::setter_setMOptionComponentName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentForGeneration::setter_setMBoolOptionMap (GALGAS_commandLineOptionMap inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    p->mProperty_mBoolOptionMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentForGeneration::setter_setMUIntOptionMap (GALGAS_commandLineOptionMap inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    p->mProperty_mUIntOptionMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentForGeneration::setter_setMStringOptionMap (GALGAS_commandLineOptionMap inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    p->mProperty_mStringOptionMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentForGeneration::setter_setMStringListOptionMap (GALGAS_commandLineOptionMap inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    p->mProperty_mStringListOptionMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionComponentForGeneration::readProperty_mIsPredefined (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mIsPredefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionComponentForGeneration::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mBoolOptionMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mBoolOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mUIntOptionMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mUIntOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mStringOptionMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mStringListOptionMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringListOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentForGeneration class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

void cPtr_optionComponentForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@optionComponentForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBoolOptionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUIntOptionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStringOptionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStringListOptionMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionMap, mProperty_mUIntOptionMap, mProperty_mStringOptionMap, mProperty_mStringListOptionMap COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentForGeneration ("optionComponentForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  const GALGAS_optionComponentForGeneration * p = (const GALGAS_optionComponentForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak & GALGAS_optionComponentForGeneration_2D_weak::operator = (const GALGAS_optionComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (const GALGAS_optionComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration_2D_weak::bang_optionComponentForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentForGeneration) ;
      result = GALGAS_optionComponentForGeneration ((cPtr_optionComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ("optionComponentForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration_2D_weak result ;
  const GALGAS_optionComponentForGeneration_2D_weak * p = (const GALGAS_optionComponentForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @arrayTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration::GALGAS_arrayTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration::GALGAS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_arrayTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_arrayTypeForGeneration::readProperty_mDimension (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_mDimension ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                          const GALGAS_uint & in_mDimension
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (in_mElementTypeEntry),
mProperty_mDimension (in_mDimension) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

void cPtr_arrayTypeForGeneration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@arrayTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDimension.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDimension COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayTypeForGeneration ("arrayTypeForGeneration",
                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration result ;
  const GALGAS_arrayTypeForGeneration * p = (const GALGAS_arrayTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak & GALGAS_arrayTypeForGeneration_2D_weak::operator = (const GALGAS_arrayTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (const GALGAS_arrayTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak GALGAS_arrayTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration_2D_weak::bang_arrayTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayTypeForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayTypeForGeneration) ;
      result = GALGAS_arrayTypeForGeneration ((cPtr_arrayTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ("arrayTypeForGeneration-weak",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak GALGAS_arrayTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration_2D_weak result ;
  const GALGAS_arrayTypeForGeneration_2D_weak * p = (const GALGAS_arrayTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (GALGAS_localVarManager & ioObject,
                                                  const GALGAS_lstring constinArgument_inVarName,
                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GALGAS_string constinArgument_inCppName,
                                                  const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_none (SOURCE_FILE ("variable-manager.galgas", 29)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 24)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRule'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                  const GALGAS_string constinArgument_inSyntaxCompnentName,
                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_currentNode_4942 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_1.addAssign_operation (var_currentNode_4942, GALGAS_string ("[firstPoint] {}")  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS_rowList var_rowArray_4978 = temp_0 ;
  GALGAS_string var_arrows_5038 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5068 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5094 = GALGAS_uint (uint32_t (1U)) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5132 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5164 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_5164.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5164.current_mInstruction (HERE).ptr (), var_rowArray_4978, GALGAS_uint (uint32_t (0U)), var_column_5094, var_currentNode_4942, var_arrowStyle_5068, var_arrows_5038, var_unusedMaxUsedRowIndex_5132, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 117)) ;
    enumerator_5164.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_5562 ;
  {
  extensionSetter_appendRow (var_rowArray_4978, GALGAS_string ("[lastPoint] {}"), GALGAS_uint (uint32_t (0U)), var_column_5094, var_lastNodeName_5562, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 129)) ;
  }
  var_arrows_5038.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_4942, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (var_lastNodeName_5562, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_5672 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxCompnentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)).add_operation (function_escapeForTex (var_loc_5672.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 135)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).add_operation (function_escapeForTex (var_loc_5672.getter_line (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("}\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 138)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)) ;
  cEnumerator_rowList enumerator_6092 (var_rowArray_4978, kENUMERATION_DOWN) ;
  while (enumerator_6092.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)) ;
    cEnumerator__32_stringlist enumerator_6164 (enumerator_6092.current_columns (HERE), kENUMERATION_UP) ;
    while (enumerator_6164.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_6164.current (HERE).readProperty_mValue_30_ ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6164.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (enumerator_6164.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)) ;
      }
      enumerator_6164.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 150)) ;
    enumerator_6092.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5038, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\end{tikzpicture}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 155)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 21)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 22)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ("galgas_cli_options",
                                         "checkEntityUsefulness",
                                         0,
                                         "check-usefulness",
                                         "Check Entity Usefulness") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_gmp ("galgas_cli_options",
                                         "check_gmp",
                                         0,
                                         "check-gmp",
                                         "Run a GMP check") ;

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ("galgas_cli_options",
                                         "displayUnicodeLexicalTestFunctions",
                                         0,
                                         "display-lexical-test-functions",
                                         "Display Unicode Lexical Test Functions") ;

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

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ("galgas_cli_options",
                                         "macosxSDK",
                                         0,
                                         "macosx",
                                         "Generate an Xcode project for OS X",
                                         0) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "project (0:0:1) -> " ;
  result << in_PROJECT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue () ;
  result << " {\n"
    "#--- Targets\n"
    "  %makefile-macosx\n"
    "  %makefile-unix\n"
    "  %makefile-x86linux32-on-macosx\n"
    "  %makefile-x86linux64-on-macosx\n"
    "  %makefile-win32-on-macosx\n"
    "  %MacOS\n"
    "  %applicationBundleBase : \"fr.what\"\n"
    "  %codeblocks-windows\n"
    "  %codeblocks-linux32\n"
    "  %codeblocks-linux64\n"
    "  %codeblocks-mac\n"
    "\n"
    "#--- Source files\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-lexique.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-options.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-semantics.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-syntax.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-grammar.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-cocoa.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-program.galgas\"\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (C_Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "gui cocoa {\n"
    "  with option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options\n"
    "\n"
    "  with lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "    fileExtension: \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "    title: \"Source\"\n"
    "    blockComment : \"#\"\n"
    "  }\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar \"LL1\" {\n"
    "  syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax\n"
    "  <start_symbol>\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Identifiers and keywords                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@string tokenString\n"
    "\n"
    "style keywordsStyle -> \"Keywords\"\n"
    "\n"
    "$identifier$ ! tokenString error message \"an identifier\"\n"
    "\n"
    "#--- This is the keyword list\n"
    "list keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n"
    "  \"begin\",\n"
    "  \"end\"\n"
    "}\n"
    "\n"
    "rule 'a'->'z' |  'A'->'Z' {\n"
    "  repeat\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n"
    "  end\n"
    "  send search tokenString in keyWordList default $identifier$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Literal decimal integers                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style integerStyle -> \"Integer Constants\"\n"
    "@uint uint32value\n"
    "$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n"
    "\n"
    "message decimalNumberTooLarge : \"decimal number too large\"\n"
    "message internalError : \"internal error\"\n"
    "\n"
    "rule '0'->'9' {\n"
    "  enterCharacterIntoString (!\?tokenString !*)\n"
    "  repeat\n"
    "  while '0'->'9' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while '_' :\n"
    "  end\n"
    "  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n"
    "  send $integer$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Literal character strings                                                                    \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style stringStyle -> \"String Constants\"\n"
    "$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n"
    "\n"
    "\n"
    "message incorrectStringEnd : \"string does not end with '\\\"'\"\n"
    "\n"
    "rule '\"' {\n"
    "  repeat\n"
    "   while ' ' | '!' | '#'-> '\\uFFFD' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  end\n"
    "  select\n"
    "  case '\"' :\n"
    "    send $\"string\"$\n"
    "  default\n"
    "    error incorrectStringEnd\n"
    "  end\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Delimiters                                                                                   \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style delimitersStyle -> \"Delimiters\"\n"
    "list delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n"
    "  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n"
    "}\n"
    "\n"
    "rule list delimitorsList\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Comments                                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style commentStyle -> \"Comments\"\n"
    "$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\n"
    "rule '#' {\n"
    "  repeat\n"
    "  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n"
    "  end\n"
    "  drop $comment$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Separators                                                                                   \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "rule '\\u0001' -> ' ' {\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options {\n"
    "\n"
    "# ADD YOUR CODE\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#--- Prologue routine\n"
    "before {\n"
    "}\n"
    "\n"
    "#--- 'when' clauses\n"
    "case . \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "message \"a source text file with the ." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << " extension\"\n"
    "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar\n"
    "\?sourceFilePath:@lstring inSourceFile {\n"
    "  grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar () in inSourceFile\n"
    "}\n"
    "\n"
    "#--- Epilogue routine\n"
    "after {\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "# ADD YOUR CODE\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (C_Compiler * /* inCompiler */,
                                                                                const GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax (" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique) {\n"
    "\n"
    "rule <start_symbol> {\n"
    "  # ADD YOUR SYNTAX INSTRUCTIONS\n"
    "}\n"
    "\n"
    "# ADD OTHER RULES\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performProjectCreation (const GALGAS_string constinArgument_inProjectPath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectName_2333 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 38)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2422 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 40)) ;
  var_galgas_5F_sources_5F_DIR_2422.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 41)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 42))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 43))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2333 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2422.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_2333, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  inCompiler->printMessage (GALGAS_string ("*** DONE ***\n")  COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_projectCreation (const GALGAS_string constinArgument_inProjectPath,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_length (SOURCE_FILE ("projectCreation.galgas", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (GALGAS_string (" option) ***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58))  COMMA_SOURCE_FILE ("projectCreation.galgas", 58)) ;
      GALGAS_string var_projectName_4090 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 60)) ;
      GALGAS_bool var_ok_4143 = var_projectName_4090.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 61)) ;
      GALGAS_uint var_idx_4207 = GALGAS_uint (uint32_t (1U)) ;
      if (var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 63)).isValid ()) {
        uint32_t variant_4220 = var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 63)).uintValue () ;
        bool loop_4220 = true ;
        while (loop_4220) {
          loop_4220 = GALGAS_bool (kIsStrictInf, var_idx_4207.objectCompare (var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4143 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).isValid () ;
          if (loop_4220) {
            loop_4220 = GALGAS_bool (kIsStrictInf, var_idx_4207.objectCompare (var_projectName_4090.getter_length (SOURCE_FILE ("projectCreation.galgas", 64)))).operator_and (var_ok_4143 COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).boolValue () ;
          }
          if (loop_4220 && (0 == variant_4220)) {
            loop_4220 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 63)) ;
          }
          if (loop_4220) {
            variant_4220 -- ;
            GALGAS_char var_c_4308 = var_projectName_4090.getter_characterAtIndex (var_idx_4207, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 65)) ;
            var_ok_4143 = var_c_4308.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 66)).operator_or (GALGAS_bool (kIsEqual, var_c_4308.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 66)) ;
            var_idx_4207.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 67)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4143.operator_not (SOURCE_FILE ("projectCreation.galgas", 69)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4090, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 70)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 71))  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
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
              inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 77))  COMMA_SOURCE_FILE ("projectCreation.galgas", 77)) ;
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


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterTemplateString (GALGAS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_26306 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 628)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_26306.getter_length (SOURCE_FILE ("templateSyntax.galgas", 629)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_26306  COMMA_SOURCE_FILE ("templateSyntax.galgas", 630))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 630)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3866 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_receiverExpression_3866, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 71)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_3910 = var_receiverExpression_3866.readProperty_mResultType () ;
  GALGAS_string var_receiverTypeName_3966 = extensionGetter_definition (var_receiverType_3910, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 78)).readProperty_mTypeName ().readProperty_string () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = extensionGetter_definition (var_receiverType_3910, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3910, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GALGAS_bool (kIsEqual, temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 81)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = this ;
        GALGAS_bool var_isPublic_4315 ;
        GALGAS_bool var_unused_0_4318 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_4336 ;
        const bool optionalResult4283 = extensionGetter_definition (var_receiverType_3910, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 82)).readProperty_mPropertyMap ().optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_isPublic_4315, var_unused_0_4318, var_propertyType_4336) ;
        if (!optionalResult4283) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = this ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 84)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isPublic_4315.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 86)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_templateGetterCallInExpressionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_11 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_12 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4336, temp_11.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3866, temp_12.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_5637 = extensionGetter_definition (var_receiverType_3910, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)).readProperty_mGetterMap () ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_5757 ;
    GALGAS_methodKind var_kind_5782 ;
    GALGAS_bool var_hasCompilerArgument_5816 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_5858 ;
    GALGAS_stringlist var_fieldList_5876 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 117)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_templateGetterCallInExpressionAST temp_14 = this ;
      test_13 = var_getterMap_5637.getter_hasKey (temp_14.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_templateGetterCallInExpressionAST temp_15 = this ;
        GALGAS_location joker_6056 ; // Joker input parameter
        GALGAS_methodQualifier joker_6118_2 ; // Joker input parameter
        GALGAS_string joker_6118_1 ; // Joker input parameter
        var_getterMap_5637.method_searchKey (temp_15.readProperty_mGetterName (), var_kind_5782, var_getterFormalArgumentTypeList_5757, joker_6056, var_hasCompilerArgument_5816, var_returnedType_5858, joker_6118_2, joker_6118_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 119)) ;
      }
    }
    if (kBoolFalse == test_13) {
      GALGAS_uint var_matchingReaderCount_6173 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_3910, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          var_getterFormalArgumentTypeList_5757 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 130)) ;
          var_hasCompilerArgument_5816 = GALGAS_bool (true) ;
          var_returnedType_5858 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
          var_kind_5782 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 133)) ;
          cEnumerator_typedPropertyList enumerator_6479 (extensionGetter_definition (var_receiverType_3910, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 134)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
          while (enumerator_6479.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6568 = extensionGetter_definition (enumerator_6479.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 135)).readProperty_mGetterMap () ;
            const GALGAS_templateGetterCallInExpressionAST temp_17 = this ;
            const cMapElement_getterMap * objectArray_6628 = (const cMapElement_getterMap *) var_aMap_6568.readAccessForWithInstruction (temp_17.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_6628) {
                macroValidSharedObject (objectArray_6628, cMapElement_getterMap) ;
              var_matchingReaderCount_6173.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)) ;
              var_getterFormalArgumentTypeList_5757 = objectArray_6628->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_5816 = objectArray_6628->mProperty_mHasCompilerArgument ;
              var_returnedType_5858 = objectArray_6628->mProperty_mReturnedType ;
              var_kind_5782 = objectArray_6628->mProperty_mKind ;
              var_fieldList_5876.addAssign_operation (enumerator_6479.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 142)) ;
            }
            enumerator_6479.gotoNextObject () ;
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = GALGAS_bool (kIsEqual, var_matchingReaderCount_6173.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_18) {
              const GALGAS_templateGetterCallInExpressionAST temp_19 = this ;
              const GALGAS_templateGetterCallInExpressionAST temp_20 = this ;
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3966, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)) ;
              var_getterFormalArgumentTypeList_5757.drop () ; // Release error dropped variable
              var_hasCompilerArgument_5816.drop () ; // Release error dropped variable
              var_returnedType_5858.drop () ; // Release error dropped variable
              var_kind_5782.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_6173.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_22) {
                GALGAS_string var_s_7343 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7370 (var_fieldList_5876, kENUMERATION_UP) ;
                while (enumerator_7370.hasCurrentObject ()) {
                  var_s_7343.plusAssign_operation(enumerator_7370.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 153)) ;
                  if (enumerator_7370.hasNextObject ()) {
                    var_s_7343.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 154)) ;
                  }
                  enumerator_7370.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_23 = this ;
                const GALGAS_templateGetterCallInExpressionAST temp_24 = this ;
                TC_Array <C_FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3966, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (var_s_7343, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)) ;
                var_getterFormalArgumentTypeList_5757.drop () ; // Release error dropped variable
                var_hasCompilerArgument_5816.drop () ; // Release error dropped variable
                var_returnedType_5858.drop () ; // Release error dropped variable
                var_kind_5782.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, var_getterMap_5637.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 161)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_26) {
            const GALGAS_templateGetterCallInExpressionAST temp_27 = this ;
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3966, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)) ;
            var_getterFormalArgumentTypeList_5757.drop () ; // Release error dropped variable
            var_hasCompilerArgument_5816.drop () ; // Release error dropped variable
            var_returnedType_5858.drop () ; // Release error dropped variable
            var_kind_5782.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_26) {
          const GALGAS_templateGetterCallInExpressionAST temp_29 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_30 = this ;
          TC_Array <C_FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, kFixItReplace, var_getterMap_5637.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 169))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3966, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)) ;
          var_getterFormalArgumentTypeList_5757.drop () ; // Release error dropped variable
          var_hasCompilerArgument_5816.drop () ; // Release error dropped variable
          var_returnedType_5858.drop () ; // Release error dropped variable
          var_kind_5782.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_templateGetterCallInExpressionAST temp_33 = this ;
      test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 173)).objectCompare (var_getterFormalArgumentTypeList_5757.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const GALGAS_templateGetterCallInExpressionAST temp_34 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_35 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_36 = this ;
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (var_receiverTypeName_3966, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (var_getterFormalArgumentTypeList_5757.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 175)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (temp_36.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 176)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_32) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8803 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 178)) ;
      const GALGAS_templateGetterCallInExpressionAST temp_38 = this ;
      cEnumerator_templateExpressionListAST enumerator_8872 (temp_38.readProperty_mExpressionList (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_8947 (var_getterFormalArgumentTypeList_5757, kENUMERATION_UP) ;
      while (enumerator_8872.hasCurrentObject () && enumerator_8947.hasCurrentObject ()) {
        enumGalgasBool test_39 = kBoolTrue ;
        if (kBoolTrue == test_39) {
          test_39 = GALGAS_bool (kIsNotEqual, enumerator_8947.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8872.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_string temp_40 ;
            const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_8947.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_41) {
              temp_40 = enumerator_8947.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)) ;
            }else if (kBoolFalse == test_41) {
              temp_40 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_9072 = GALGAS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)) ;
            TC_Array <C_FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, kFixItReplace, var_s_9072) ;
            inCompiler->emitSemanticError (enumerator_8872.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9072, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9460 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8872.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_9460, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 185)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8947.current_mFormalArgumentType (HERE), var_exp_9460.readProperty_mResultType (), enumerator_8872.current_mEndOfExpressionLocation (HERE), var_exp_9460, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)) ;
        }
        var_constructorEffectiveParameterList_8803.addAssign_operation (var_exp_9460  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 192)) ;
        enumerator_8872.gotoNextObject () ;
        enumerator_8947.gotoNextObject () ;
      }
      const GALGAS_templateGetterCallInExpressionAST temp_43 = this ;
      const GALGAS_templateGetterCallInExpressionAST temp_44 = this ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_5858, temp_43.readProperty_mGetterName ().readProperty_location (), var_kind_5782, var_receiverExpression_3866, var_fieldList_5876, temp_44.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_8803, var_hasCompilerArgument_5816  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 194)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateConstructorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateConstructorAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateConstructorAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_constructorType_10556 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 218)) ;
  GALGAS_constructorMap var_constructorMap_10706 = extensionGetter_definition (var_constructorType_10556, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 220)).readProperty_mConstructorMap () ;
  GALGAS_unifiedTypeMapEntry var_returnedType_10816 ;
  GALGAS_bool var_hasCompilerArgument_10848 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_10907 ;
  const GALGAS_templateConstructorAST temp_1 = this ;
  const cMapElement_constructorMap * objectArray_10914 = (const cMapElement_constructorMap *) var_constructorMap_10706.readAccessForWithInstruction (temp_1.readProperty_mConstructorName ().readProperty_string ()) ;
  if (NULL != objectArray_10914) {
      macroValidSharedObject (objectArray_10914, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_10907 = objectArray_10914->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10848 = objectArray_10914->mProperty_mHasCompilerArgument ;
    var_returnedType_10816 = objectArray_10914->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_10706.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 230)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = this ;
        const GALGAS_templateConstructorAST temp_4 = this ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)) ;
        var_constructorFormalArgumentTypeList_10907.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10848.drop () ; // Release error dropped variable
        var_returnedType_10816.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = this ;
      const GALGAS_templateConstructorAST temp_7 = this ;
      const GALGAS_templateConstructorAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_10706.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 238))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (temp_8.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)) ;
      var_constructorFormalArgumentTypeList_10907.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10848.drop () ; // Release error dropped variable
      var_returnedType_10816.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11729 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 243)).objectCompare (var_constructorFormalArgumentTypeList_10907.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 243)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = this ;
      const GALGAS_templateConstructorAST temp_13 = this ;
      const GALGAS_templateConstructorAST temp_14 = this ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (extensionGetter_definition (var_constructorType_10556, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (var_constructorFormalArgumentTypeList_10907.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 246)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (temp_14.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 247)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 247)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)) ;
      var_constructorEffectiveParameterList_11729.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_11729 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
    const GALGAS_templateConstructorAST temp_16 = this ;
    cEnumerator_templateExpressionListAST enumerator_12332 (temp_16.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12397 (var_constructorFormalArgumentTypeList_10907, kENUMERATION_UP) ;
    while (enumerator_12332.hasCurrentObject () && enumerator_12397.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_12397.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12332.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_12397.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12397.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12523 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12523) ;
          inCompiler->emitSemanticError (enumerator_12332.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12523, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_13048 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_12332.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_13048, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 258)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_12397.current_mFormalArgumentType (HERE), var_exp_13048.readProperty_mResultType (), enumerator_12332.current_mEndOfExpressionLocation (HERE), var_exp_13048, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
      }
      var_constructorEffectiveParameterList_11729.addAssign_operation (var_exp_13048  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 265)) ;
      enumerator_12332.gotoNextObject () ;
      enumerator_12397.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = this ;
  const GALGAS_templateConstructorAST temp_22 = this ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10816, temp_21.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10556, temp_22.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11729, var_hasCompilerArgument_10848  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFileWrapperTemplateCallAST temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 288)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14971 ;
  const GALGAS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_14971, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 302)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15197 ;
  const GALGAS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_15197, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 309)) ;
  {
  const GALGAS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_14971.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 317)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 317)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14971, var_rightExpression_15197, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 316)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_14971.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14971, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 328)), var_rightExpression_15197  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 324)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16253 ;
  const GALGAS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_16253, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 342)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16479 ;
  const GALGAS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_16479, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 349)) ;
  {
  const GALGAS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_16253.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 357)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 357)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16253, var_rightExpression_16479, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 356)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_16253.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16253, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 368)), var_rightExpression_16479  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 364)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_17534 ;
  const GALGAS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_17534, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 382)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17760 ;
  const GALGAS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_17760, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 389)) ;
  {
  const GALGAS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_17534.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 397)).readProperty_mHandledOperatorFlags ().getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 397)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17534, var_rightExpression_17760, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 396)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_17534.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_17534, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 408)), var_rightExpression_17760  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 404)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 421)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 432)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_19663 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_19682 (temp_0.readProperty_mLiteralStringList (), kENUMERATION_UP) ;
  while (enumerator_19682.hasCurrentObject ()) {
    var_s_19663.plusAssign_operation(enumerator_19682.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 445)) ;
    enumerator_19682.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19663  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 447)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 458)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLiteralSIntExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralSIntExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralSIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 473)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUInt_36__34_ExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 487)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLiteralSInt_36__34_ExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 501)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralCharExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 515)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 528)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_23949 ;
  const GALGAS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_23949, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 544)) ;
  GALGAS_unifiedTypeMapEntry var_type_24018 = var_expression_23949.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_24018, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 552)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 552)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 552)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_24018, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 554)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 554)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 554)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 553)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_24018, temp_4.readProperty_mOperatorLocation (), var_expression_23949  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_25004 ;
  const GALGAS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_25004, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 575)) ;
  GALGAS_unifiedTypeMapEntry var_type_25073 = var_expression_25004.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_25073, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 583)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 583)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_25073, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 585)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 585)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 585)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_25073, temp_4.readProperty_mOperatorLocation (), var_expression_25004  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 589)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_26076 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_26076, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 605)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_26236 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_26076.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 615)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_26507 = var_castType_26236 ;
      GALGAS_bool var_found_26538 = GALGAS_bool (kIsEqual, var_t_26507.objectCompare (var_expression_26076.readProperty_mResultType ())) ;
      if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 619)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 619)).isValid ()) {
        uint32_t variant_26577 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 619)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 619)).uintValue () ;
        bool loop_26577 = true ;
        while (loop_26577) {
          loop_26577 = var_found_26538.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 620)).operator_and (extensionGetter_definition (var_t_26507, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 620)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 620)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)).isValid () ;
          if (loop_26577) {
            loop_26577 = var_found_26538.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 620)).operator_and (extensionGetter_definition (var_t_26507, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 620)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 620)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)).boolValue () ;
          }
          if (loop_26577 && (0 == variant_26577)) {
            loop_26577 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 619)) ;
          }
          if (loop_26577) {
            variant_26577 -- ;
            var_t_26507 = extensionGetter_definition (var_t_26507, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 621)).readProperty_mSuperType () ;
            var_found_26538 = GALGAS_bool (kIsEqual, var_t_26507.objectCompare (var_expression_26076.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_26538.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 624)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = this ;
          const GALGAS_templateTestDynamicClassAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).add_operation (extensionGetter_definition (var_expression_26076.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 625)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_26076.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_26076.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 630)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 630)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = this ;
  const GALGAS_templateTestDynamicClassAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_26076, temp_9.readProperty_mTypeComparisonKind (), var_castType_26236  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateOptionAccessAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_27814 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_27814 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 650)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_28121 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_28166 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_28211 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_28258 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_28309 ;
  const GALGAS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_28121, var_boolOptionMap_28166, var_uintOptionMap_28211, var_stringOptionMap_28258, var_stringListOptionMap_28309, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 651)) ;
  const GALGAS_templateOptionAccessAST temp_2 = this ;
  GALGAS_bool var_found_28325 = var_boolOptionMap_28166.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 659)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_28415 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_28325.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 661)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = this ;
      var_found_28325 = var_uintOptionMap_28211.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 662)) ;
      var_returnedType_28415 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_28325.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 665)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = this ;
      var_found_28325 = var_stringOptionMap_28258.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 666)) ;
      var_returnedType_28415 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_28325.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 669)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = this ;
      var_found_28325 = var_stringListOptionMap_28309.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 670)) ;
      var_returnedType_28415 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_28325.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = this ;
          const GALGAS_templateOptionAccessAST temp_13 = this ;
          const GALGAS_templateOptionAccessAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_28415, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28121, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 675)) ;
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
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28121, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 683)) ;
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
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28121, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 691)) ;
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
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28121, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 699)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_templateOptionAccessAST temp_30 = this ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 707)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringset var_s_30419 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 710)) ;
    cEnumerator_commandLineOptionMap enumerator_30446 (var_boolOptionMap_28166, kENUMERATION_UP) ;
    while (enumerator_30446.hasCurrentObject ()) {
      var_s_30419.addAssign_operation (enumerator_30446.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 712)) ;
      enumerator_30446.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30514 (var_uintOptionMap_28211, kENUMERATION_UP) ;
    while (enumerator_30514.hasCurrentObject ()) {
      var_s_30419.addAssign_operation (enumerator_30514.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 715)) ;
      enumerator_30514.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30582 (var_stringOptionMap_28258, kENUMERATION_UP) ;
    while (enumerator_30582.hasCurrentObject ()) {
      var_s_30419.addAssign_operation (enumerator_30582.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 718)) ;
      enumerator_30582.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = this ;
    const GALGAS_templateOptionAccessAST temp_33 = this ;
    const GALGAS_templateOptionAccessAST temp_34 = this ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_30419) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 720)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFunctionCallAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_31400 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 737)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_31400 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 738)) ;
  }
  GALGAS_functionSignature var_functionSignature_31704 ;
  GALGAS_unifiedTypeMapEntry var_resultType_31745 ;
  GALGAS_bool var_isInternal_31771 ;
  const GALGAS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_31704, var_resultType_31745, var_isInternal_31771, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_31771.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_31848 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 748)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 749)).objectCompare (var_procDeclarationLocation_31848.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 749)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_31848.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_31704.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 754)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 754)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = this ;
      const GALGAS_templateFunctionCallAST temp_11 = this ;
      const GALGAS_templateFunctionCallAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)).add_operation (var_functionSignature_31704.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 756)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 757)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 755)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_32587 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 761)) ;
    const GALGAS_templateFunctionCallAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_32676 (var_functionSignature_31704, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_32753 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_32676.hasCurrentObject () && enumerator_32753.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_32977 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_32753.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_32977, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_32676.current_mFormalArgumentType (HERE), var_expression_32977.readProperty_mResultType (), enumerator_32753.current_mEndOfExpressionLocation (HERE), var_expression_32977, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 769)) ;
      }
      var_semanticExpressionListForGeneration_32587.addAssign_operation (var_expression_32977  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 770)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_32676.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_32753.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_32676.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_32676.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 772)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_33261 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 772)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_33261) ;
          inCompiler->emitSemanticError (enumerator_32753.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_33261, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 773)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 773)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 773)) ;
        }
      }
      enumerator_32676.gotoNextObject () ;
      enumerator_32753.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = this ;
    const GALGAS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_31745, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_32587  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 777)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateExtensionTemplateCallAST temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 795)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_35176 ;
  GALGAS_string var_sourceVariableCppName_35203 ;
  const GALGAS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_35176, var_sourceVariableCppName_35203, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 810)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_35176, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_35203, var_sourceVariableCppName_35203  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 811)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_36127 ;
  const GALGAS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_36127, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 829)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_36353 ;
  const GALGAS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_36353, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 836)) ;
  {
  const GALGAS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_36127.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 844)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 844)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_36127, var_rightExpression_36353, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 843)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_36127.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_36127, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("templateAnalysis.galgas", 855)), var_rightExpression_36353  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 851)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_37571 ;
  const GALGAS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_37571, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 871)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37797 ;
  const GALGAS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_37797, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 878)) ;
  {
  const GALGAS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_37571.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 886)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_37571, var_rightExpression_37797, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 885)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_37571.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_37571, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("templateAnalysis.galgas", 897)), var_rightExpression_37797  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 893)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_39027 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_39027, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 913)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_39253 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_39253, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 920)) ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_39027.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 928)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 928)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_39027, var_rightExpression_39253, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 927)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_39027.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_39027, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 939)), var_rightExpression_39253  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 935)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_40484 ;
  const GALGAS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_40484, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 955)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40710 ;
  const GALGAS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_40710, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 962)) ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_40484.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 970)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 970)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_40484, var_rightExpression_40710, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 969)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_40484.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_40484, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 981)), var_rightExpression_40710  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 977)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_41939 ;
  const GALGAS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_41939, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 997)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_42165 ;
  const GALGAS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_42165, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1004)) ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator (extensionGetter_definition (var_leftExpression_41939.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1012)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1012)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_41939, var_rightExpression_42165, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1011)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftExpression_41939.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_41939, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1023)), var_rightExpression_42165  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1019)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_43354 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_43354, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1039)) ;
  GALGAS_unifiedTypeMapEntry var_type_43423 = var_expression_43354.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_43423, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1047)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1047)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1047)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_43423, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1048)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_43423, temp_4.readProperty_mOperatorLocation (), var_expression_43354  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1053)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_44700 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_44700, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)) ;
  GALGAS_unifiedTypeMapEntry var_type_44773 = var_expression_44700.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_type_44773, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1079)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 1079)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_44773, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1079)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1079)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1079)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1080)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_45033 = extensionGetter_definition (var_type_44773, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1082)).readProperty_mPropertyMap () ;
  GALGAS_bool var_isPublic_45128 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GALGAS_bool joker_45130 ; // Joker input parameter
  var_propertyMap_45033.method_searchKey (temp_5.readProperty_mStructFieldName (), var_isPublic_45128, joker_45130, var_type_44773, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1083)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isPublic_45128.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1084)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1085)) ;
    }
  }
  const GALGAS_structFieldAccessTemplateExpressionAST temp_9 = this ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_44773, temp_9.readProperty_mOperatorLocation (), var_expression_44700, temp_10.readProperty_mStructFieldName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1088)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_46218 ;
  const GALGAS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_46218, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1107)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_46448 ;
  const GALGAS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_46448, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)) ;
  {
  const GALGAS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_46218, var_rightExpression_46448, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1121)) ;
  }
  const GALGAS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_46218, GALGAS_comparison::constructor_equal (SOURCE_FILE ("templateAnalysis.galgas", 1133)), var_rightExpression_46448  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1129)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_47436 ;
  const GALGAS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_47436, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1147)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47666 ;
  const GALGAS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_47666, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1154)) ;
  {
  const GALGAS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_47436, var_rightExpression_47666, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1161)) ;
  }
  const GALGAS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_47436, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1173)), var_rightExpression_47666  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1169)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_48658 ;
  const GALGAS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_48658, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1187)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_48888 ;
  const GALGAS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_48888, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1194)) ;
  {
  const GALGAS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48658, var_rightExpression_48888, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1201)) ;
  }
  const GALGAS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48658, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1213)), var_rightExpression_48888  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_49881 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_49881, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_50111 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_50111, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1234)) ;
  {
  const GALGAS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_49881, var_rightExpression_50111, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1241)) ;
  }
  const GALGAS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_49881, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1253)), var_rightExpression_50111  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1249)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_51107 ;
  const GALGAS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_51107, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51337 ;
  const GALGAS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_51337, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1274)) ;
  {
  const GALGAS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_51107, var_rightExpression_51337, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1281)) ;
  }
  const GALGAS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_51107, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1293)), var_rightExpression_51337  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1289)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_52332 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_52332, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1307)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_52562 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_52562, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)) ;
  {
  const GALGAS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator (GALGAS_bool (true), GALGAS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_52332, var_rightExpression_52562, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)) ;
  }
  const GALGAS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_52332, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1333)), var_rightExpression_52562  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1329)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_53565 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_53565, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1347)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_53795 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_53795, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1354)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_53869 = var_leftExpression_53565.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_53935 = var_rightExpression_53795.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_53869, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1363)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1363)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1363)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_53869, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1365)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1365)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1365)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1364)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_53935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1367)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_53935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1369)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1369)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1369)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1368)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_53869, temp_8.readProperty_mOperatorLocation (), var_leftExpression_53565, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1377)), var_rightExpression_53795  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1373)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_55290 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_55290, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1392)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_55520 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_55520, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_55594 = var_leftExpression_55290.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_55660 = var_rightExpression_55520.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_55594, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1408)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1408)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1408)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_55594, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1410)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1410)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1410)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1409)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_55660, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1412)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_55660, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1414)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1414)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1414)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1413)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_55594, temp_8.readProperty_mOperatorLocation (), var_leftExpression_55290, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1422)), var_rightExpression_55520  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1418)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                              const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                              GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_57487 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_57487.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_57487.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1450)) ;
    enumerator_57487.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                            GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (temp_0.readProperty_mTemplateString ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1467))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1467)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_58762 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_58762, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1478)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_58762.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1484)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_58762.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1485)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1485)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1485)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1485)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_58762  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1487))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1487)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_59622 ;
  const GALGAS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_59622, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1498)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expression_59622.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1504)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bigint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_getterCallExpressionForGeneration var_conversionExpression_59730 = GALGAS_getterCallExpressionForGeneration::constructor_new (var_expression_59622.readProperty_mResultType (), var_expression_59622.readProperty_mLocation (), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 1508)), var_expression_59622, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1510)), GALGAS_string ("uint"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1512)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1505)) ;
      var_expression_59622 = var_conversionExpression_59730 ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_59622.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1516)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateBlockInstructionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_59622.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1517)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1517)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1517)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1517)) ;
      }
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_60205 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1519)) ;
  {
  const GALGAS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_60205, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_59622, temp_6.readProperty_mLocation (), var_blockInstructionList_60205  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1527))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1527)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1538))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1538)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                        GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1549))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_62019 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1561)) ;
  const GALGAS_templateInstructionIfAST temp_0 = this ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_62106 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_62106.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_62304 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_62106.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_62304, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1563)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_62304.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1569)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_62304.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_62304.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_62565 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1572)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_62106.current_mInstructionList (HERE), var_instructionList_62565, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1573)) ;
    }
    var_templateInstructionIfBranchList_62019.addAssign_operation (var_expression_62304, var_instructionList_62565  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1580)) ;
    enumerator_62106.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_62896 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1583)) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_62896, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1584)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_62019, var_elseInstructionList_62896  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1592))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1592)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_1782 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1782.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_1782.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_1782.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_cppName_3025 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3025, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 66)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName_3025, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_indendationVarCppName_3635 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 79)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                            GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 105)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                             GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 117)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionIfForGeneration temp_0 = this ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_5661 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_5661.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_5872 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_5661.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_5872, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 130)) ;
    GALGAS_string var_testVar_5897 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 131)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)).add_operation (var_ifVarCppName_5872, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_5661.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    }
    enumerator_5661.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = this ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_6806 (temp_2.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_6806.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)) ;
    enumerator_6806.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_6638 ;
  const GALGAS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_6638, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 197)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6770 = extensionGetter_definition (var_expression_6638.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 204)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_6770.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 205)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6638.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6638.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7070 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 209)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7070, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 210)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = this ;
  GALGAS_string var_enumeratorCppName_7344 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 218)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 218)) ;
  GALGAS_templateVariableMap var_doVariableMap_7438 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = this ;
  const GALGAS_templateInstructionForeachAST temp_6 = this ;
  GALGAS_string var_cppIndexVarName_7501 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 221)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7438.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7501, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)) ;
      }
    }
  }
  switch (this->mProperty_mEnumeratedObjectProperties.enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::kNotBuilt:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_implicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit * extractPtr_8610 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit *) (this->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_string extractedValue_7876_prefix = extractPtr_8610->mAssociatedValue0 ;
      const GALGAS_location extractedValue_7904_remplacementRange = extractPtr_8610->mAssociatedValue1 ;
      GALGAS_string var_suggestion_7926 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_7972 (var_enumerationDescriptor_6770, kENUMERATION_UP) ;
      while (enumerator_7972.hasCurrentObject ()) {
        {
        var_doVariableMap_7438.setter_insertKey (GALGAS_lstring::constructor_new (extractedValue_7876_prefix.add_operation (enumerator_7972.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 231)), var_expression_6638.readProperty_mLocation ()  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 231)), enumerator_7972.current_mEnumeratedType (HERE), var_enumeratorCppName_7344.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)).add_operation (enumerator_7972.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)) ;
        }
        var_suggestion_7926.plusAssign_operation(extractedValue_7876_prefix.add_operation (enumerator_7972.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 235)) ;
        if (enumerator_7972.hasNextObject ()) {
          var_suggestion_7926.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 237)) ;
        }
        enumerator_7972.gotoNextObject () ;
      }
      var_suggestion_7926.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 239)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_suggestion_7926) ;
          inCompiler->emitSemanticError (extractedValue_7904_remplacementRange, GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray11  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 241)) ;
        }
      }
    }
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_explicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit * extractPtr_9346 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit *) (this->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_lstringlist extractedValue_8652_enumeration = extractPtr_9346->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8676_errorLocation = extractPtr_9346->mAssociatedValue1 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extractedValue_8652_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 246)).objectCompare (var_enumerationDescriptor_6770.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 246)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_8676_errorLocation, var_enumerationDescriptor_6770.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 248)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (extractedValue_8652_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 249)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 249)), fixItArray13  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)) ;
        }
      }
      if (kBoolFalse == test_12) {
        cEnumerator_enumerationDescriptorList enumerator_8951 (var_enumerationDescriptor_6770, kENUMERATION_UP) ;
        cEnumerator_lstringlist enumerator_9010 (extractedValue_8652_enumeration, kENUMERATION_UP) ;
        while (enumerator_8951.hasCurrentObject () && enumerator_9010.hasCurrentObject ()) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = GALGAS_bool (kIsNotEqual, enumerator_9010.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              {
              var_doVariableMap_7438.setter_insertKey (enumerator_9010.current_mValue (HERE), enumerator_8951.current_mEnumeratedType (HERE), var_enumeratorCppName_7344.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)).add_operation (enumerator_8951.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 254)) ;
              }
            }
          }
          enumerator_8951.gotoNextObject () ;
          enumerator_9010.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_9376 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7438  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 263)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_9533 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 267)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_15 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9376, temp_15.readProperty_mDoInstructionList (), var_doInstructionList_9533, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 268)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_9809 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 276)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_16.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9809, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 277)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10091 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 285)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_17.readProperty_mAfterInstructionList (), var_afterInstructionList_10091, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 286)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_18 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (temp_18.readProperty_mIsAscending (), var_expression_6638, var_enumeratorCppName_7344, var_beforeInstructionList_7070, var_doInstructionList_9533, var_cppIndexVarName_7501, var_betweenInstructionList_9809, var_afterInstructionList_10091  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 294))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 294)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_foreachVarCppName_11931 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11931, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 330)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 332)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 333)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 333)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_11931, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 336)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 336)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (temp_4.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (var_foreachVarCppName_11931, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_templateInstructionForeachForGeneration temp_10 = this ;
    const GALGAS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GALGAS_bool (kIsStrictSup, temp_10.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_templateInstructionForeachForGeneration temp_12 = this ;
      const GALGAS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 344)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 347)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 355)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 356)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 358)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 358)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)) ;
  }
  {
  const GALGAS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateInstructionForeachForGeneration temp_21 = this ;
    test_20 = GALGAS_bool (kIsStrictSup, temp_21.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 370)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateInstructionForeachForGeneration temp_22 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (temp_22.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 371)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 371)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_23 = this ;
      routine_templateCodeGenerationForListInstruction (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 373)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 382)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_templateInstructionForeachForGeneration temp_25 = this ;
    test_24 = GALGAS_bool (kIsStrictSup, temp_25.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 385)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_templateInstructionForeachForGeneration temp_26 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_26.readProperty_mIndexCppName ().add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 386)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_27 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_27.readProperty_mEnumeratorCppName ().add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 389)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 391)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GALGAS_bool (kIsStrictSup, temp_29.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 393)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 396)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 404)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 405)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 408)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 409)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_switchExpression_4473 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_switchExpression_4473, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 124)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_4473.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 130)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 130)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_switchExpression_4473.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_4473.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)).readProperty_mTypeKindEnum (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)), fixItArray2  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_4761 = extensionGetter_definition (var_switchExpression_4473.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 134)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_4873 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-switch-instruction.galgas", 135)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_4992 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 137)) ;
  const GALGAS_templateInstructionSwitchAST temp_3 = this ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_5076 (temp_3.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_5076.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5212 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
    GALGAS_bool var_firstConstant_5245 = GALGAS_bool (true) ;
    GALGAS_templateAnalysisContext var_analysisContext_5276 = constinArgument_inAnalysisContext ;
    cEnumerator_lstringlist enumerator_5313 (enumerator_5076.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_5313.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_enumConstantMap_4761.getter_hasKey (enumerator_5313.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_constantsNamedInSwitchInstruction_4873.getter_hasKey (enumerator_5313.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 144)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_5313.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5313.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)), fixItArray6  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 145)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_4873.addAssign_operation (enumerator_5313.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 148)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5739 ;
          GALGAS_uint joker_5689 ; // Joker input parameter
          var_enumConstantMap_4761.method_searchKey (enumerator_5313.current_mValue (HERE), joker_5689, var_associatedTypeList_5739, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 149)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5739.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 150)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_5076.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 150)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 150)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5313.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_5313.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)), fixItArray8  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 151)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, var_associatedTypeList_5739.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 153)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5076.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 153)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5313.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5313.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)), fixItArray10  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_5739.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 156)).objectCompare (enumerator_5076.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 156)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string temp_12 ;
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5739.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 159)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    temp_12 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_13) {
                    temp_12 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_5313.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5313.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (var_associatedTypeList_5739.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 158)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)), fixItArray14  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)) ;
                }
              }
              if (kBoolFalse == test_11) {
                GALGAS_bigint var_associatedValueIndex_6473 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 161)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_6498 (var_associatedTypeList_5739, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_6569 (enumerator_5076.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_6498.hasCurrentObject () && enumerator_6569.hasCurrentObject ()) {
                  enumGalgasBool test_15 = kBoolTrue ;
                  if (kBoolTrue == test_15) {
                    test_15 = GALGAS_bool (kIsNotEqual, enumerator_6569.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_6498.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 164)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_6569.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (enumerator_6569.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_6498.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)), fixItArray17  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_18 = kBoolTrue ;
                  if (kBoolTrue == test_18) {
                    test_18 = var_firstConstant_5245.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6569.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 168)).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      GALGAS_string var_cppName_7020 = GALGAS_string ("extractedValue_").add_operation (enumerator_6569.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (enumerator_6569.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)) ;
                      var_extractedAssociatedValuesForGeneration_5212.addAssign_operation (enumerator_6498.current_mEntry (HERE), var_cppName_7020, var_associatedValueIndex_6473.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)) ;
                      {
                      var_analysisContext_5276.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_6569.current_mExtractedValueName (HERE), enumerator_6498.current_mEntry (HERE), var_cppName_7020, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)) ;
                      }
                    }
                  }
                  var_associatedValueIndex_6473.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 173)) ;
                  enumerator_6498.gotoNextObject () ;
                  enumerator_6569.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_5313.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5313.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (extensionGetter_definition (var_switchExpression_4473.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)), fixItArray19  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 177)) ;
      }
      var_firstConstant_5245 = GALGAS_bool (false) ;
      enumerator_5313.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_7671 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 182)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5276, enumerator_5076.current_mInstructionList (HERE), var_instructionList_7671, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 183)) ;
    }
    var_templateInstructionSwitchBranchList_4992.addAssign_operation (enumerator_5076.current_mConstantList (HERE), var_extractedAssociatedValuesForGeneration_5212, enumerator_5076.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 193)), var_instructionList_7671  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 190)) ;
    enumerator_5076.gotoNextObject () ;
  }
  GALGAS_stringset var_forgottenConstants_8098 = var_enumConstantMap_4761.getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 197)).substract_operation (var_constantsNamedInSwitchInstruction_4873, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 197)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_8098.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 198)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_string var_s_8220 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_8238 (var_forgottenConstants_8098, kENUMERATION_UP) ;
      while (enumerator_8238.hasCurrentObject ()) {
        var_s_8220.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_8238.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 201)) ;
        enumerator_8238.gotoNextObject () ;
      }
      const GALGAS_templateInstructionSwitchAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mSwitchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8220, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 203)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_4473.readProperty_mResultType (), var_switchExpression_4473, var_templateInstructionSwitchBranchList_4992  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207)) ;
}
