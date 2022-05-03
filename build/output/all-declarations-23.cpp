#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionGetterMapForType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::~ GALGAS_extensionGetterMapForBuildingContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionGetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionGetterMapForType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionGetterMapForType::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionGetterMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionGetterMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionGetterMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionGetterMapForType.objectCompare (inOperand.mProperty_mExtensionGetterMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionGetterMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionGetterMapForType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtensionGetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForBuildingContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ("extensionGetterMapForBuildingContext-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  const GALGAS_extensionGetterMapForBuildingContext_2D_element * p = (const GALGAS_extensionGetterMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::~ GALGAS_wrapperExtensionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperExtensionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_wrapperExtensionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_wrapperExtensionMap_2D_element::objectCompare (const GALGAS_wrapperExtensionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperExtensionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperExtensionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperExtensionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ("wrapperExtensionMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperExtensionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperExtensionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperExtensionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  const GALGAS_wrapperExtensionMap_2D_element * p = (const GALGAS_wrapperExtensionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperExtensionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (void) :
mProperty_mExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::~ GALGAS_semanticExpressionListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::constructor_new (const GALGAS_semanticExpressionForGeneration & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticExpressionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticExpressionListForGeneration_2D_element::objectCompare (const GALGAS_semanticExpressionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticExpressionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @semanticExpressionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ("semanticExpressionListForGeneration-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  const GALGAS_semanticExpressionListForGeneration_2D_element * p = (const GALGAS_semanticExpressionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName (),
mProperty_mFormalArgumentCppName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::~ GALGAS_formalParameterListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_string & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mFormalArgumentCppName (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentCppName.objectCompare (inOperand.mProperty_mFormalArgumentCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mFormalArgumentCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @formalParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalParameterListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ("formalParameterListForGeneration-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  const GALGAS_formalParameterListForGeneration_2D_element * p = (const GALGAS_formalParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentCppName (),
mProperty_mFormalArgumentName (),
mProperty_mIsConstant () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::~ GALGAS_formalInputParameterListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                  const GALGAS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentCppName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                                  const GALGAS_bool & inOperand4 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalInputParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalInputParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentCppName.objectCompare (inOperand.mProperty_mFormalArgumentCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsConstant.objectCompare (inOperand.mProperty_mIsConstant) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalInputParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentCppName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsConstant.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsConstant.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @formalInputParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalInputParameterListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ("formalInputParameterListForGeneration-element",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  const GALGAS_formalInputParameterListForGeneration_2D_element * p = (const GALGAS_formalInputParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (void) :
mProperty_mActualParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::~ GALGAS_actualParameterListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::constructor_new (const GALGAS_actualParameterForGeneration & inOperand0 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualParameterListForGeneration_2D_element::objectCompare (const GALGAS_actualParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActualParameter.objectCompare (inOperand.mProperty_mActualParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actualParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ("actualParameterListForGeneration-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  const GALGAS_actualParameterListForGeneration_2D_element * p = (const GALGAS_actualParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (void) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (),
mProperty_mGalgasTypeNameForGrammarAnalysis () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::~ GALGAS_signatureForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (inOperand0),
mProperty_mGalgasTypeNameForGrammarAnalysis (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::constructor_new (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_signatureForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_signatureForGrammarAnalysis_2D_element::objectCompare (const GALGAS_signatureForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingModeForGrammarAnalysis.objectCompare (inOperand.mProperty_mFormalArgumentPassingModeForGrammarAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGalgasTypeNameForGrammarAnalysis.objectCompare (inOperand.mProperty_mGalgasTypeNameForGrammarAnalysis) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_signatureForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingModeForGrammarAnalysis.isValid () && mProperty_mGalgasTypeNameForGrammarAnalysis.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingModeForGrammarAnalysis.drop () ;
  mProperty_mGalgasTypeNameForGrammarAnalysis.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @signatureForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@signatureForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ("signatureForGrammarAnalysis-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_signatureForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_signatureForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_signatureForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  const GALGAS_signatureForGrammarAnalysis_2D_element * p = (const GALGAS_signatureForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_signatureForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParametersList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParametersList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                        GALGAS_signatureForGrammarAnalysis::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParametersList.objectCompare (inOperand.mProperty_mFormalParametersList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParametersList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParametersList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @nonterminalSymbolLabelMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParametersList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonterminalSymbolLabelMapForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ("nonterminalSymbolLabelMapForGrammarAnalysis-element",
                                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mNonTerminalIndex (),
mProperty_mNonterminalSymbolParametersMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1),
mProperty_mNonterminalSymbolParametersMap (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE),
                                                                   GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
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

bool GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () && mProperty_mNonterminalSymbolParametersMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
  mProperty_mNonterminalSymbolParametersMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonTerminalSymbolMapForGrammarAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ("nonTerminalSymbolMapForGrammarAnalysis-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mNoWarningIfUnused (),
mProperty_mCppName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element::~ GALGAS_localConstantList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2,
                                                                          const GALGAS_string & inOperand3) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mNoWarningIfUnused (inOperand2),
mProperty_mCppName (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localConstantList_2D_element (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE),
                                              GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_bool & inOperand2,
                                                                                          const GALGAS_string & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_localConstantList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localConstantList_2D_element::objectCompare (const GALGAS_localConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNoWarningIfUnused.objectCompare (inOperand.mProperty_mNoWarningIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_localConstantList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mNoWarningIfUnused.isValid () && mProperty_mCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localConstantList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mNoWarningIfUnused.drop () ;
  mProperty_mCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localConstantList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @localConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNoWarningIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localConstantList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantList_2D_element ("localConstantList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localConstantList_2D_element result ;
  const GALGAS_localConstantList_2D_element * p = (const GALGAS_localConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mCppName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element::~ GALGAS_localInitializedVariableList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mCppName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localInitializedVariableList_2D_element (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_localInitializedVariableList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localInitializedVariableList_2D_element::objectCompare (const GALGAS_localInitializedVariableList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_localInitializedVariableList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mCppName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @localInitializedVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localInitializedVariableList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ("localInitializedVariableList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localInitializedVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localInitializedVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localInitializedVariableList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  const GALGAS_localInitializedVariableList_2D_element * p = (const GALGAS_localInitializedVariableList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localInitializedVariableList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element::GALGAS_propertyIndexMap_2D_element (void) :
mProperty_lkey (),
mProperty_mPropertyTypeIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element::~ GALGAS_propertyIndexMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element::GALGAS_propertyIndexMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mPropertyTypeIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element GALGAS_propertyIndexMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyIndexMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element GALGAS_propertyIndexMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyIndexMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyIndexMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyIndexMap_2D_element::objectCompare (const GALGAS_propertyIndexMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeIndex.objectCompare (inOperand.mProperty_mPropertyTypeIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyIndexMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mPropertyTypeIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mPropertyTypeIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @propertyIndexMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyTypeIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyIndexMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyIndexMap_2D_element ("propertyIndexMap-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyIndexMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyIndexMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyIndexMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element GALGAS_propertyIndexMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyIndexMap_2D_element result ;
  const GALGAS_propertyIndexMap_2D_element * p = (const GALGAS_propertyIndexMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyIndexMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSignatureForGeneration (),
mProperty_mSignature (),
mProperty_mEndOfArgumentLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element::~ GALGAS_nonterminalLabelMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                              const GALGAS_location & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mSignatureForGeneration (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mEndOfArgumentLocation (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalLabelMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                                              const GALGAS_location & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_nonterminalLabelMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonterminalLabelMap_2D_element::objectCompare (const GALGAS_nonterminalLabelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureForGeneration.objectCompare (inOperand.mProperty_mSignatureForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfArgumentLocation.objectCompare (inOperand.mProperty_mEndOfArgumentLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalLabelMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignatureForGeneration.isValid () && mProperty_mSignature.isValid () && mProperty_mEndOfArgumentLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignatureForGeneration.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @nonterminalLabelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonterminalLabelMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ("nonterminalLabelMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalLabelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalLabelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalLabelMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap_2D_element result ;
  const GALGAS_nonterminalLabelMap_2D_element * p = (const GALGAS_nonterminalLabelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalLabelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLabelMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element::~ GALGAS_nonterminalMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_nonterminalLabelMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelMap (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_nonterminalLabelMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_nonterminalLabelMap & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonterminalMap_2D_element::objectCompare (const GALGAS_nonterminalMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabelMap.objectCompare (inOperand.mProperty_mLabelMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @nonterminalMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabelMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@nonterminalMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalMap_2D_element ("nonterminalMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  const GALGAS_nonterminalMap_2D_element * p = (const GALGAS_nonterminalMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element::GALGAS_ruleLabelImplementationList_2D_element (void) :
mProperty_mLabelName (),
mProperty_mSignatureForGeneration (),
mProperty_mSignature (),
mProperty_mEndOfArgumentLocation (),
mProperty_mInstructionListForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element::~ GALGAS_ruleLabelImplementationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element::GALGAS_ruleLabelImplementationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                                              const GALGAS_location & inOperand3,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand4) :
mProperty_mLabelName (inOperand0),
mProperty_mSignatureForGeneration (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mEndOfArgumentLocation (inOperand3),
mProperty_mInstructionListForGeneration (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleLabelImplementationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                                                              const GALGAS_location & inOperand3,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_ruleLabelImplementationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ruleLabelImplementationList_2D_element::objectCompare (const GALGAS_ruleLabelImplementationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLabelName.objectCompare (inOperand.mProperty_mLabelName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureForGeneration.objectCompare (inOperand.mProperty_mSignatureForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfArgumentLocation.objectCompare (inOperand.mProperty_mEndOfArgumentLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionListForGeneration.objectCompare (inOperand.mProperty_mInstructionListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ruleLabelImplementationList_2D_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mSignatureForGeneration.isValid () && mProperty_mSignature.isValid () && mProperty_mEndOfArgumentLocation.isValid () && mProperty_mInstructionListForGeneration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList_2D_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mSignatureForGeneration.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
  mProperty_mInstructionListForGeneration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @ruleLabelImplementationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ruleLabelImplementationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ("ruleLabelImplementationList-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ruleLabelImplementationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ruleLabelImplementationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleLabelImplementationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList_2D_element result ;
  const GALGAS_ruleLabelImplementationList_2D_element * p = (const GALGAS_ruleLabelImplementationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ruleLabelImplementationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element::GALGAS_uselessEntityLocationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element::~ GALGAS_uselessEntityLocationMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element::GALGAS_uselessEntityLocationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_location & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLocation (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element GALGAS_uselessEntityLocationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uselessEntityLocationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element GALGAS_uselessEntityLocationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_location & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_uselessEntityLocationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_uselessEntityLocationMap_2D_element::objectCompare (const GALGAS_uselessEntityLocationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLocation.objectCompare (inOperand.mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_uselessEntityLocationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @uselessEntityLocationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@uselessEntityLocationMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uselessEntityLocationMap_2D_element ("uselessEntityLocationMap-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uselessEntityLocationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uselessEntityLocationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uselessEntityLocationMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element GALGAS_uselessEntityLocationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap_2D_element result ;
  const GALGAS_uselessEntityLocationMap_2D_element * p = (const GALGAS_uselessEntityLocationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uselessEntityLocationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (void) :
mProperty_mTypeComparisonKind (),
mProperty_mType (),
mProperty_mCastedVarCppName (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::~ GALGAS_castInstructionBranchListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mTypeComparisonKind (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCastedVarCppName (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::constructor_new (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                                    const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_castInstructionBranchListForGeneration_2D_element::objectCompare (const GALGAS_castInstructionBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeComparisonKind.objectCompare (inOperand.mProperty_mTypeComparisonKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCastedVarCppName.objectCompare (inOperand.mProperty_mCastedVarCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_castInstructionBranchListForGeneration_2D_element::isValid (void) const {
  return mProperty_mTypeComparisonKind.isValid () && mProperty_mType.isValid () && mProperty_mCastedVarCppName.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration_2D_element::drop (void) {
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCastedVarCppName.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @castInstructionBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCastedVarCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@castInstructionBranchListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ("castInstructionBranchListForGeneration-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  const GALGAS_castInstructionBranchListForGeneration_2D_element * p = (const GALGAS_castInstructionBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_matchEntryListAST_2D_element::GALGAS_matchEntryListAST_2D_element (void) :
mProperty_mIsType (),
mProperty_mTypeNameOrEnumerationConstantName (),
mProperty_mLocalConstantName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_matchEntryListAST_2D_element::~ GALGAS_matchEntryListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_matchEntryListAST_2D_element::GALGAS_matchEntryListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_lstring & inOperand2) :
mProperty_mIsType (inOperand0),
mProperty_mTypeNameOrEnumerationConstantName (inOperand1),
mProperty_mLocalConstantName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_matchEntryListAST_2D_element GALGAS_matchEntryListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchEntryListAST_2D_element (GALGAS_bool::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_matchEntryListAST_2D_element GALGAS_matchEntryListAST_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstring & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchEntryListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_matchEntryListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_matchEntryListAST_2D_element::objectCompare (const GALGAS_matchEntryListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIsType.objectCompare (inOperand.mProperty_mIsType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeNameOrEnumerationConstantName.objectCompare (inOperand.mProperty_mTypeNameOrEnumerationConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLocalConstantName.objectCompare (inOperand.mProperty_mLocalConstantName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_matchEntryListAST_2D_element::isValid (void) const {
  return mProperty_mIsType.isValid () && mProperty_mTypeNameOrEnumerationConstantName.isValid () && mProperty_mLocalConstantName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_matchEntryListAST_2D_element::drop (void) {
  mProperty_mIsType.drop () ;
  mProperty_mTypeNameOrEnumerationConstantName.drop () ;
  mProperty_mLocalConstantName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_matchEntryListAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @matchEntryListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIsType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLocalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@matchEntryListAST-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchEntryListAST_2D_element ("matchEntryListAST-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_matchEntryListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchEntryListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_matchEntryListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchEntryListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_matchEntryListAST_2D_element GALGAS_matchEntryListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST_2D_element result ;
  const GALGAS_matchEntryListAST_2D_element * p = (const GALGAS_matchEntryListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchEntryListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchEntryListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) :
mProperty_mType (),
mProperty_mCppName (),
mProperty_mIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::~ GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_uint & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mCppName (inOperand1),
mProperty_mIndex (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extractedAssociatedValuesForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_uint & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_extractedAssociatedValuesForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extractedAssociatedValuesForGeneration_2D_element::objectCompare (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extractedAssociatedValuesForGeneration_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_mIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @extractedAssociatedValuesForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extractedAssociatedValuesForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ("extractedAssociatedValuesForGeneration-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  const GALGAS_extractedAssociatedValuesForGeneration_2D_element * p = (const GALGAS_extractedAssociatedValuesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extractedAssociatedValuesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  return GALGAS_templateLiteralUIntExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mLiteralInt
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  if (inAttribute_mLiteralInt.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralUIntExpressionAST (inAttribute_mLiteralInt COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GALGAS_luint & in_mLiteralInt
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

typeComparisonResult GALGAS_templateLiteralUIntExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralUIntExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_templateLiteralUIntExpressionAST_2D_weak::GALGAS_templateLiteralUIntExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak & GALGAS_templateLiteralUIntExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralUIntExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak::GALGAS_templateLiteralUIntExpressionAST_2D_weak (const GALGAS_templateLiteralUIntExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak GALGAS_templateLiteralUIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST_2D_weak::bang_templateLiteralUIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralUIntExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralUIntExpressionAST) ;
      result = GALGAS_templateLiteralUIntExpressionAST ((cPtr_templateLiteralUIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralUIntExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2D_weak ("templateLiteralUIntExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralUIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralUIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST_2D_weak GALGAS_templateLiteralUIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralUIntExpressionAST_2D_weak * p = (const GALGAS_templateLiteralUIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_templateLiteralSIntExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralSIntExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_templateLiteralSIntExpressionAST_2D_weak::GALGAS_templateLiteralSIntExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak & GALGAS_templateLiteralSIntExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralSIntExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak::GALGAS_templateLiteralSIntExpressionAST_2D_weak (const GALGAS_templateLiteralSIntExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak GALGAS_templateLiteralSIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST GALGAS_templateLiteralSIntExpressionAST_2D_weak::bang_templateLiteralSIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralSIntExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralSIntExpressionAST) ;
      result = GALGAS_templateLiteralSIntExpressionAST ((cPtr_templateLiteralSIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralSIntExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST_2D_weak ("templateLiteralSIntExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralSIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralSIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSIntExpressionAST_2D_weak GALGAS_templateLiteralSIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSIntExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralSIntExpressionAST_2D_weak * p = (const GALGAS_templateLiteralSIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak & GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralUInt_36__34_ExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (const GALGAS_templateLiteralUInt_36__34_ExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::bang_templateLiteralUInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
      result = GALGAS_templateLiteralUInt_36__34_ExpressionAST ((cPtr_templateLiteralUInt_36__34_ExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralUInt64ExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak ("templateLiteralUInt64ExpressionAST-weak",
                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak * p = (const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUInt64ExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak & GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralSInt_36__34_ExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (const GALGAS_templateLiteralSInt_36__34_ExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::bang_templateLiteralSInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
      result = GALGAS_templateLiteralSInt_36__34_ExpressionAST ((cPtr_templateLiteralSInt_36__34_ExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralSInt64ExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak ("templateLiteralSInt64ExpressionAST-weak",
                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak * p = (const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralSInt64ExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult GALGAS_templateLiteralCharExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralCharExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_templateLiteralCharExpressionAST_2D_weak::GALGAS_templateLiteralCharExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak & GALGAS_templateLiteralCharExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralCharExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak::GALGAS_templateLiteralCharExpressionAST_2D_weak (const GALGAS_templateLiteralCharExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak GALGAS_templateLiteralCharExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST_2D_weak::bang_templateLiteralCharExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralCharExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralCharExpressionAST) ;
      result = GALGAS_templateLiteralCharExpressionAST ((cPtr_templateLiteralCharExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralCharExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2D_weak ("templateLiteralCharExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralCharExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralCharExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralCharExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST_2D_weak GALGAS_templateLiteralCharExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralCharExpressionAST_2D_weak * p = (const GALGAS_templateLiteralCharExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralCharExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralCharExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateLiteralDoubleExpressionAST_2D_weak::objectCompare (const GALGAS_templateLiteralDoubleExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_templateLiteralDoubleExpressionAST_2D_weak::GALGAS_templateLiteralDoubleExpressionAST_2D_weak (void) :
GALGAS_templateExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak & GALGAS_templateLiteralDoubleExpressionAST_2D_weak::operator = (const GALGAS_templateLiteralDoubleExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak::GALGAS_templateLiteralDoubleExpressionAST_2D_weak (const GALGAS_templateLiteralDoubleExpressionAST & inSource) :
GALGAS_templateExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak GALGAS_templateLiteralDoubleExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST_2D_weak::bang_templateLiteralDoubleExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralDoubleExpressionAST) ;
      result = GALGAS_templateLiteralDoubleExpressionAST ((cPtr_templateLiteralDoubleExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateLiteralDoubleExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2D_weak ("templateLiteralDoubleExpressionAST-weak",
                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralDoubleExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralDoubleExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralDoubleExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST_2D_weak GALGAS_templateLiteralDoubleExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST_2D_weak result ;
  const GALGAS_templateLiteralDoubleExpressionAST_2D_weak * p = (const GALGAS_templateLiteralDoubleExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralDoubleExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralDoubleExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

typeComparisonResult GALGAS_templateInstructionExpressionForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionExpressionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_templateInstructionExpressionForGeneration_2D_weak::GALGAS_templateInstructionExpressionForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak & GALGAS_templateInstructionExpressionForGeneration_2D_weak::operator = (const GALGAS_templateInstructionExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak::GALGAS_templateInstructionExpressionForGeneration_2D_weak (const GALGAS_templateInstructionExpressionForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak GALGAS_templateInstructionExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration_2D_weak::bang_templateInstructionExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionExpressionForGeneration) ;
      result = GALGAS_templateInstructionExpressionForGeneration ((cPtr_templateInstructionExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2D_weak ("templateInstructionExpressionForGeneration-weak",
                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration_2D_weak GALGAS_templateInstructionExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration_2D_weak result ;
  const GALGAS_templateInstructionExpressionForGeneration_2D_weak * p = (const GALGAS_templateInstructionExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateAnalysisContext (GALGAS_semanticContext::constructor_default (HERE),
                                         GALGAS_predefinedTypes::constructor_default (HERE),
                                         GALGAS_templateVariableMap::constructor_emptyMap (HERE)) ;
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
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak & GALGAS_optionComponentForGeneration_2D_weak::operator = (const GALGAS_optionComponentForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (const GALGAS_optionComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration_2D_weak::bang_optionComponentForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                         GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                         GALGAS_uint::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration::GALGAS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mElementTypeEntry,
                                                                              const GALGAS_uint & inAttribute_mDimension
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mElementTypeEntry.isValid () && inAttribute_mDimension.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mElementTypeEntry, inAttribute_mDimension COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_arrayTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
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

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeEntry,
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
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak & GALGAS_arrayTypeForGeneration_2D_weak::operator = (const GALGAS_arrayTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (const GALGAS_arrayTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak GALGAS_arrayTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration_2D_weak::bang_arrayTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
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
// @literalBigIntExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalBigIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalBigIntExpressionAST * p = (const cPtr_literalBigIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalBigIntExpressionAST::objectCompare (const GALGAS_literalBigIntExpressionAST & inOperand) const {
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

GALGAS_literalBigIntExpressionAST::GALGAS_literalBigIntExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalBigIntExpressionAST::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST::GALGAS_literalBigIntExpressionAST (const cPtr_literalBigIntExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mValue
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalBigIntExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_literalBigIntExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (const GALGAS_lbigint & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalBigIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

void cPtr_literalBigIntExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalBigIntExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBigIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalBigIntExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalBigIntExpressionAST ("literalBigIntExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBigIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBigIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBigIntExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST result ;
  const GALGAS_literalBigIntExpressionAST * p = (const GALGAS_literalBigIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalBigIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalBigIntExpressionAST_2D_weak::objectCompare (const GALGAS_literalBigIntExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
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

GALGAS_literalBigIntExpressionAST_2D_weak::GALGAS_literalBigIntExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST_2D_weak & GALGAS_literalBigIntExpressionAST_2D_weak::operator = (const GALGAS_literalBigIntExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST_2D_weak::GALGAS_literalBigIntExpressionAST_2D_weak (const GALGAS_literalBigIntExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST_2D_weak GALGAS_literalBigIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST_2D_weak::bang_literalBigIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalBigIntExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBigIntExpressionAST) ;
      result = GALGAS_literalBigIntExpressionAST ((cPtr_literalBigIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalBigIntExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2D_weak ("literalBigIntExpressionAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBigIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBigIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBigIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST_2D_weak GALGAS_literalBigIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST_2D_weak result ;
  const GALGAS_literalBigIntExpressionAST_2D_weak * p = (const GALGAS_literalBigIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalBigIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  GALGAS_string var_currentNode_4936 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_1.addAssign_operation (var_currentNode_4936, GALGAS_string ("[firstPoint] {}")  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 111)) ;
  GALGAS_rowList var_rowArray_4972 = temp_0 ;
  GALGAS_string var_arrows_5032 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5062 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5082 = GALGAS_uint ((uint32_t) 1U) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5114 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5146 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_5146.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5146.current_mInstruction (HERE).ptr (), var_rowArray_4972, GALGAS_uint ((uint32_t) 0U), var_column_5082, var_currentNode_4936, var_arrowStyle_5062, var_arrows_5032, var_unusedMaxUsedRowIndex_5114, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 117)) ;
    enumerator_5146.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_5544 ;
  {
  extensionSetter_appendRow (var_rowArray_4972, GALGAS_string ("[lastPoint] {}"), GALGAS_uint ((uint32_t) 0U), var_column_5082, var_lastNodeName_5544, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 129)) ;
  }
  var_arrows_5032.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_4936, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (var_lastNodeName_5544, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 130)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_5654 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxCompnentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 134)).add_operation (function_escapeForTex (var_loc_5654.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 136)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 135)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)).add_operation (function_escapeForTex (var_loc_5654.getter_line (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("}\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 138)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 133)) ;
  cEnumerator_rowList enumerator_6074 (var_rowArray_4972, kENUMERATION_DOWN) ;
  while (enumerator_6074.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)) ;
    cEnumerator__32_stringlist enumerator_6146 (enumerator_6074.current_columns (HERE), kENUMERATION_UP) ;
    while (enumerator_6146.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_6146.current (HERE).readProperty_mValue_30_ ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6146.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (enumerator_6146.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 147)) ;
      }
      enumerator_6146.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 150)) ;
    enumerator_6074.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5032, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
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

C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles ("galgas_cli_options",
                                         "generateSharedMapAutomatonDotFiles",
                                         0,
                                         "generate-shared-map-automaton-dot-files",
                                         "Generate shared map automaton dot files") ;

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
    "  %LatestMacOS\n"
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
  result << "_grammar in inSourceFile\n"
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
  GALGAS_string var_projectName_2433 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 40)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2522 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  var_galgas_5F_sources_5F_DIR_2522.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  inCompiler->printMessage (GALGAS_string ("*** DONE ***\n")  COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
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
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_length (SOURCE_FILE ("projectCreation.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).add_operation (GALGAS_string (" option) ***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61))  COMMA_SOURCE_FILE ("projectCreation.galgas", 61)) ;
      GALGAS_string var_projectName_4191 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 63)) ;
      GALGAS_bool var_ok_4244 = var_projectName_4191.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 64)) ;
      GALGAS_uint var_idx_4308 = GALGAS_uint ((uint32_t) 1U) ;
      if (var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).isValid ()) {
        uint32_t variant_4321 = var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).uintValue () ;
        bool loop_4321 = true ;
        while (loop_4321) {
          loop_4321 = GALGAS_bool (kIsStrictInf, var_idx_4308.objectCompare (var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_4244 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).isValid () ;
          if (loop_4321) {
            loop_4321 = GALGAS_bool (kIsStrictInf, var_idx_4308.objectCompare (var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_4244 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).boolValue () ;
          }
          if (loop_4321 && (0 == variant_4321)) {
            loop_4321 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 66)) ;
          }
          if (loop_4321) {
            variant_4321 -- ;
            GALGAS_char var_c_4409 = var_projectName_4191.getter_characterAtIndex (var_idx_4308, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 68)) ;
            var_ok_4244 = var_c_4409.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 69)).operator_or (GALGAS_bool (kIsEqual, var_c_4409.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 69)) ;
            var_idx_4308.increment_operation (inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4244.operator_not (SOURCE_FILE ("projectCreation.galgas", 72)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4191, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 74))  COMMA_SOURCE_FILE ("projectCreation.galgas", 73)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4244.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4244 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 78)).operator_not (SOURCE_FILE ("projectCreation.galgas", 78)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4244.operator_not (SOURCE_FILE ("projectCreation.galgas", 79)).boolEnum () ;
            if (kBoolTrue == test_3) {
              inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80))  COMMA_SOURCE_FILE ("projectCreation.galgas", 80)) ;
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4244.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 84)) ;
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
  GALGAS_string var_s_26316 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 629)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_26316.getter_length (SOURCE_FILE ("templateSyntax.galgas", 630)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_26316  COMMA_SOURCE_FILE ("templateSyntax.galgas", 631))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 631)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateGetterCallInExpressionAST * object = (const cPtr_templateGetterCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateGetterCallInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3757 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_receiverExpression_3757, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_3966 = var_receiverExpression_3757.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = var_receiverType_3966.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)).getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = var_receiverType_3966.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = object ;
      test_1 = GALGAS_bool (kIsEqual, temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 81)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = object ;
        GALGAS_bool var_isPublic_4270 ;
        GALGAS_bool var_unused_0_4273 ;
        GALGAS_unifiedTypeMap_2D_entry var_propertyType_4291 ;
        const bool optionalResult4238 = var_receiverType_3966.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 82)).optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_isPublic_4270, var_unused_0_4273, var_propertyType_4291) ;
        if (!optionalResult4238) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = object ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 84)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isPublic_4270.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 86)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_templateGetterCallInExpressionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_11 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_12 = object ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4291, temp_11.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3757, temp_12.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_5592 = var_receiverType_3966.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)) ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_5701 ;
    GALGAS_methodKind var_kind_5726 ;
    GALGAS_bool var_hasCompilerArgument_5760 ;
    GALGAS_unifiedTypeMap_2D_entry var_returnedType_5803 ;
    GALGAS_stringlist var_fieldList_5821 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 117)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_templateGetterCallInExpressionAST temp_14 = object ;
      test_13 = var_getterMap_5592.getter_hasKey (temp_14.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_templateGetterCallInExpressionAST temp_15 = object ;
        GALGAS_location joker_6001 ; // Joker input parameter
        GALGAS_methodQualifier joker_6063_2 ; // Joker input parameter
        GALGAS_string joker_6063_1 ; // Joker input parameter
        var_getterMap_5592.method_searchKey (temp_15.readProperty_mGetterName (), var_kind_5726, var_getterFormalArgumentTypeList_5701, joker_6001, var_hasCompilerArgument_5760, var_returnedType_5803, joker_6063_2, joker_6063_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 119)) ;
      }
    }
    if (kBoolFalse == test_13) {
      GALGAS_uint var_matchingReaderCount_6118 = GALGAS_uint ((uint32_t) 0U) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, var_receiverType_3966.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          var_getterFormalArgumentTypeList_5701 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 130)) ;
          var_hasCompilerArgument_5760 = GALGAS_bool (true) ;
          var_returnedType_5803 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
          var_kind_5726 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 133)) ;
          cEnumerator_typedPropertyList enumerator_6414 (var_receiverType_3966.getter_mCurrentTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 134)), kENUMERATION_UP) ;
          while (enumerator_6414.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6492 = enumerator_6414.current_mPropertyTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 135)) ;
            const GALGAS_templateGetterCallInExpressionAST temp_17 = object ;
            const cMapElement_getterMap * objectArray_6541 = (const cMapElement_getterMap *) var_aMap_6492.readAccessForWithInstruction (temp_17.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_6541) {
                macroValidSharedObject (objectArray_6541, cMapElement_getterMap) ;
              var_matchingReaderCount_6118.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)) ;
              var_getterFormalArgumentTypeList_5701 = objectArray_6541->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_5760 = objectArray_6541->mProperty_mHasCompilerArgument ;
              var_returnedType_5803 = objectArray_6541->mProperty_mReturnedType ;
              var_kind_5726 = objectArray_6541->mProperty_mKind ;
              var_fieldList_5821.addAssign_operation (enumerator_6414.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 142)) ;
            }
            enumerator_6414.gotoNextObject () ;
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = GALGAS_bool (kIsEqual, var_matchingReaderCount_6118.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_18) {
              const GALGAS_templateGetterCallInExpressionAST temp_19 = object ;
              const GALGAS_templateGetterCallInExpressionAST temp_20 = object ;
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3966.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)) ;
              var_getterFormalArgumentTypeList_5701.drop () ; // Release error dropped variable
              var_hasCompilerArgument_5760.drop () ; // Release error dropped variable
              var_returnedType_5803.drop () ; // Release error dropped variable
              var_kind_5726.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_6118.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_22) {
                GALGAS_string var_s_7255 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7282 (var_fieldList_5821, kENUMERATION_UP) ;
                while (enumerator_7282.hasCurrentObject ()) {
                  var_s_7255.plusAssign_operation(enumerator_7282.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 153)) ;
                  if (enumerator_7282.hasNextObject ()) {
                    var_s_7255.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 154)) ;
                  }
                  enumerator_7282.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_23 = object ;
                const GALGAS_templateGetterCallInExpressionAST temp_24 = object ;
                TC_Array <C_FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3966.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (var_s_7255, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)) ;
                var_getterFormalArgumentTypeList_5701.drop () ; // Release error dropped variable
                var_hasCompilerArgument_5760.drop () ; // Release error dropped variable
                var_returnedType_5803.drop () ; // Release error dropped variable
                var_kind_5726.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, var_getterMap_5592.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_26) {
            const GALGAS_templateGetterCallInExpressionAST temp_27 = object ;
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3966.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)) ;
            var_getterFormalArgumentTypeList_5701.drop () ; // Release error dropped variable
            var_hasCompilerArgument_5760.drop () ; // Release error dropped variable
            var_returnedType_5803.drop () ; // Release error dropped variable
            var_kind_5726.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_26) {
          const GALGAS_templateGetterCallInExpressionAST temp_29 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_30 = object ;
          TC_Array <C_FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, kFixItReplace, var_getterMap_5592.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 169))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3966.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)) ;
          var_getterFormalArgumentTypeList_5701.drop () ; // Release error dropped variable
          var_hasCompilerArgument_5760.drop () ; // Release error dropped variable
          var_returnedType_5803.drop () ; // Release error dropped variable
          var_kind_5726.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_templateGetterCallInExpressionAST temp_33 = object ;
      test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 173)).objectCompare (var_getterFormalArgumentTypeList_5701.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const GALGAS_templateGetterCallInExpressionAST temp_34 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_35 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_36 = object ;
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (var_receiverType_3966.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (var_getterFormalArgumentTypeList_5701.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 175)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (temp_36.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 176)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_32) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8723 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 178)) ;
      const GALGAS_templateGetterCallInExpressionAST temp_38 = object ;
      cEnumerator_templateExpressionListAST enumerator_8792 (temp_38.readProperty_mExpressionList (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_8857 (var_getterFormalArgumentTypeList_5701, kENUMERATION_UP) ;
      while (enumerator_8792.hasCurrentObject () && enumerator_8857.hasCurrentObject ()) {
        enumGalgasBool test_39 = kBoolTrue ;
        if (kBoolTrue == test_39) {
          test_39 = GALGAS_bool (kIsNotEqual, enumerator_8857.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8792.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_string temp_40 ;
            const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_8857.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_41) {
              temp_40 = enumerator_8857.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)) ;
            }else if (kBoolFalse == test_41) {
              temp_40 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_8974 = GALGAS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)) ;
            TC_Array <C_FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, kFixItReplace, var_s_8974) ;
            inCompiler->emitSemanticError (enumerator_8792.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8974, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9504 ;
        callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_8792.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_9504, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 185)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8857.current_mFormalArgumentType (HERE), var_exp_9504.readProperty_mResultType (), enumerator_8792.current_mEndOfExpressionLocation (HERE), var_exp_9504, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)) ;
        }
        var_constructorEffectiveParameterList_8723.addAssign_operation (var_exp_9504  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 192)) ;
        enumerator_8792.gotoNextObject () ;
        enumerator_8857.gotoNextObject () ;
      }
      const GALGAS_templateGetterCallInExpressionAST temp_43 = object ;
      const GALGAS_templateGetterCallInExpressionAST temp_44 = object ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_5803, temp_43.readProperty_mGetterName ().readProperty_location (), var_kind_5726, var_receiverExpression_3757, var_fieldList_5821, temp_44.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_8723, var_hasCompilerArgument_5760  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 194)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST.mSlotID,
                                                   extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateConstructorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateConstructorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateConstructorAST * object = (const cPtr_templateConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateConstructorAST) ;
  const GALGAS_templateConstructorAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_constructorType_10601 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 218)) ;
  GALGAS_constructorMap var_constructorMap_10775 = var_constructorType_10601.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 220)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_10875 ;
  GALGAS_bool var_hasCompilerArgument_10907 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_10966 ;
  const GALGAS_templateConstructorAST temp_1 = object ;
  const cMapElement_constructorMap * objectArray_10973 = (const cMapElement_constructorMap *) var_constructorMap_10775.readAccessForWithInstruction (temp_1.readProperty_mConstructorName ().readProperty_string ()) ;
  if (NULL != objectArray_10973) {
      macroValidSharedObject (objectArray_10973, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_10966 = objectArray_10973->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10907 = objectArray_10973->mProperty_mHasCompilerArgument ;
    var_returnedType_10875 = objectArray_10973->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_10775.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 230)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = object ;
        const GALGAS_templateConstructorAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)) ;
        var_constructorFormalArgumentTypeList_10966.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10907.drop () ; // Release error dropped variable
        var_returnedType_10875.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = object ;
      const GALGAS_templateConstructorAST temp_7 = object ;
      const GALGAS_templateConstructorAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_10775.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 238))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (temp_8.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)) ;
      var_constructorFormalArgumentTypeList_10966.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10907.drop () ; // Release error dropped variable
      var_returnedType_10875.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11788 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 243)).objectCompare (var_constructorFormalArgumentTypeList_10966.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 243)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = object ;
      const GALGAS_templateConstructorAST temp_13 = object ;
      const GALGAS_templateConstructorAST temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (var_constructorType_10601.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (var_constructorFormalArgumentTypeList_10966.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 246)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (temp_14.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 247)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 247)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)) ;
      var_constructorEffectiveParameterList_11788.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_11788 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
    const GALGAS_templateConstructorAST temp_16 = object ;
    cEnumerator_templateExpressionListAST enumerator_12367 (temp_16.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12432 (var_constructorFormalArgumentTypeList_10966, kENUMERATION_UP) ;
    while (enumerator_12367.hasCurrentObject () && enumerator_12432.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_12432.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12367.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_12432.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12432.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12550 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12550) ;
          inCompiler->emitSemanticError (enumerator_12367.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12550, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_13075 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_12367.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_13075, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 258)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_12432.current_mFormalArgumentType (HERE), var_exp_13075.readProperty_mResultType (), enumerator_12367.current_mEndOfExpressionLocation (HERE), var_exp_13075, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
      }
      var_constructorEffectiveParameterList_11788.addAssign_operation (var_exp_13075  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 265)) ;
      enumerator_12367.gotoNextObject () ;
      enumerator_12432.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = object ;
  const GALGAS_templateConstructorAST temp_22 = object ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10875, temp_21.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10601, temp_22.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11788, var_hasCompilerArgument_10907  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateConstructorAST.mSlotID,
                                                   extensionMethod_templateConstructorAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateConstructorAST_templateExpressionAnalysis (defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperTemplateCallAST * object = (const cPtr_templateFileWrapperTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperTemplateCallAST) ;
  const GALGAS_templateFileWrapperTemplateCallAST temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 288)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                   extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_14998 ;
  const GALGAS_templateAndOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_14998, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 302)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15224 ;
  const GALGAS_templateAndOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_15224, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 309)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_15299 = var_leftExpression_14998.readProperty_mResultType () ;
  {
  const GALGAS_templateAndOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_15299, var_rightExpression_15224.readProperty_mResultType (), var_leftType_15299.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 320)).getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 320)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_15224, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 317)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_15299, temp_3.readProperty_mOperatorLocation (), var_leftExpression_14998, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 330)), var_rightExpression_15224  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 326)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                   extensionMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_16325 ;
  const GALGAS_templateOrOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_16325, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 344)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16551 ;
  const GALGAS_templateOrOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_16551, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 351)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_16626 = var_leftExpression_16325.readProperty_mResultType () ;
  {
  const GALGAS_templateOrOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_16626, var_rightExpression_16551.readProperty_mResultType (), var_leftType_16626.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 362)).getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 362)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_16551, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 359)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_16626, temp_3.readProperty_mOperatorLocation (), var_leftExpression_16325, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 372)), var_rightExpression_16551  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 368)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                   extensionMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_17651 ;
  const GALGAS_templateXorOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_17651, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 386)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17877 ;
  const GALGAS_templateXorOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_17877, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 393)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_17952 = var_leftExpression_17651.readProperty_mResultType () ;
  {
  const GALGAS_templateXorOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_17952, var_rightExpression_17877.readProperty_mResultType (), var_leftType_17952.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 404)).getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 404)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_17877, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 401)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_17952, temp_3.readProperty_mOperatorLocation (), var_leftExpression_17651, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 414)), var_rightExpression_17877  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 410)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                   extensionMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  const GALGAS_templateTrueBoolAST temp_0 = object ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 427)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                   extensionMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  const GALGAS_templateFalseBoolAST temp_0 = object ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 438)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                   extensionMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s_19825 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = object ;
  cEnumerator_stringlist enumerator_19844 (temp_0.readProperty_mLiteralStringList (), kENUMERATION_UP) ;
  while (enumerator_19844.hasCurrentObject ()) {
    var_s_19825.plusAssign_operation(enumerator_19844.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)) ;
    enumerator_19844.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19825  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 453)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  const GALGAS_templateLiteralUIntExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralUIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 464)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  const GALGAS_templateLiteralSIntExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralSIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 492)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 506)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  const GALGAS_templateLiteralCharExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralCharExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 520)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 533)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_23999 ;
  const GALGAS_templateNotOperatorAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_23999, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 550)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_24218 = var_expression_23999.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_24218.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)).getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 558)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 558)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_24218.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 560)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 560)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 559)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = object ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_24218, temp_4.readProperty_mOperatorLocation (), var_expression_23999  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 564)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                   extensionMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_25067 ;
  const GALGAS_templateLogicalNegateAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_25067, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_25285 = var_expression_25067.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_25285.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 590)).getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 590)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 590)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_25285.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 592)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 592)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 591)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = object ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_25285, temp_4.readProperty_mOperatorLocation (), var_expression_25067  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 596)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                   extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTestDynamicClassAST * object = (const cPtr_templateTestDynamicClassAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTestDynamicClassAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_26143 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_26143, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_castType_26345 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_expression_26143.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 622)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMap_2D_entry var_t_26630 = var_castType_26345 ;
      GALGAS_bool var_found_26661 = GALGAS_bool (kIsEqual, var_t_26630.objectCompare (var_expression_26143.readProperty_mResultType ())) ;
      if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 626)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).isValid ()) {
        uint32_t variant_26700 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 626)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).uintValue () ;
        bool loop_26700 = true ;
        while (loop_26700) {
          loop_26700 = var_found_26661.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_and (var_t_26630.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).isValid () ;
          if (loop_26700) {
            loop_26700 = var_found_26661.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_and (var_t_26630.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).boolValue () ;
          }
          if (loop_26700 && (0 == variant_26700)) {
            loop_26700 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 626)) ;
          }
          if (loop_26700) {
            variant_26700 -- ;
            var_t_26630 = var_t_26630.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)) ;
            var_found_26661 = GALGAS_bool (kIsEqual, var_t_26630.objectCompare (var_expression_26143.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_26661.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 631)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = object ;
          const GALGAS_templateTestDynamicClassAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)).add_operation (var_expression_26143.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 632)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_26143.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_26143.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 636)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 637)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 636)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = object ;
  const GALGAS_templateTestDynamicClassAST temp_9 = object ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_26143, temp_9.readProperty_mTypeComparisonKind (), var_castType_26345  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 640)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTestDynamicClassAST.mSlotID,
                                                   extensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateTestDynamicClassAST_templateExpressionAnalysis (defineExtensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOptionAccessAST * object = (const cPtr_templateOptionAccessAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOptionAccessAST) ;
  const GALGAS_templateOptionAccessAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_27867 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_27867 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_28174 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_28219 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_28264 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_28311 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_28362 ;
  const GALGAS_templateOptionAccessAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_28174, var_boolOptionMap_28219, var_uintOptionMap_28264, var_stringOptionMap_28311, var_stringListOptionMap_28362, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 658)) ;
  const GALGAS_templateOptionAccessAST temp_2 = object ;
  GALGAS_bool var_found_28378 = var_boolOptionMap_28219.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 666)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_28469 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_28378.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 668)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = object ;
      var_found_28378 = var_uintOptionMap_28264.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 669)) ;
      var_returnedType_28469 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_28378.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 672)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = object ;
      var_found_28378 = var_stringOptionMap_28311.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 673)) ;
      var_returnedType_28469 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_28378.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 676)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = object ;
      var_found_28378 = var_stringListOptionMap_28362.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 677)) ;
      var_returnedType_28469 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_28378.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = object ;
          const GALGAS_templateOptionAccessAST temp_13 = object ;
          const GALGAS_templateOptionAccessAST temp_14 = object ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_28469, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28174, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_templateOptionAccessAST temp_16 = object ;
          test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_templateOptionAccessAST temp_17 = object ;
            const GALGAS_templateOptionAccessAST temp_18 = object ;
            const GALGAS_templateOptionAccessAST temp_19 = object ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28174, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 690)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_templateOptionAccessAST temp_21 = object ;
            test_20 = GALGAS_bool (kIsEqual, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_templateOptionAccessAST temp_22 = object ;
              const GALGAS_templateOptionAccessAST temp_23 = object ;
              const GALGAS_templateOptionAccessAST temp_24 = object ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28174, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 698)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_templateOptionAccessAST temp_26 = object ;
              test_25 = GALGAS_bool (kIsEqual, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_templateOptionAccessAST temp_27 = object ;
                const GALGAS_templateOptionAccessAST temp_28 = object ;
                const GALGAS_templateOptionAccessAST temp_29 = object ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28174, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 706)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_templateOptionAccessAST temp_30 = object ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 714)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringset var_s_30473 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 717)) ;
    cEnumerator_commandLineOptionMap enumerator_30500 (var_boolOptionMap_28219, kENUMERATION_UP) ;
    while (enumerator_30500.hasCurrentObject ()) {
      var_s_30473.addAssign_operation (enumerator_30500.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 719)) ;
      enumerator_30500.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30568 (var_uintOptionMap_28264, kENUMERATION_UP) ;
    while (enumerator_30568.hasCurrentObject ()) {
      var_s_30473.addAssign_operation (enumerator_30568.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 722)) ;
      enumerator_30568.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30636 (var_stringOptionMap_28311, kENUMERATION_UP) ;
    while (enumerator_30636.hasCurrentObject ()) {
      var_s_30473.addAssign_operation (enumerator_30636.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 725)) ;
      enumerator_30636.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = object ;
    const GALGAS_templateOptionAccessAST temp_33 = object ;
    const GALGAS_templateOptionAccessAST temp_34 = object ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_30473) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 727)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                   extensionMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFunctionCallAST * object = (const cPtr_templateFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFunctionCallAST) ;
  const GALGAS_templateFunctionCallAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_31454 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_31454 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 745)) ;
  }
  GALGAS_functionSignature var_functionSignature_31758 ;
  GALGAS_unifiedTypeMap_2D_entry var_resultType_31800 ;
  GALGAS_bool var_isInternal_31826 ;
  const GALGAS_templateFunctionCallAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_31758, var_resultType_31800, var_isInternal_31826, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 747)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_31826.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_31903 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 755)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)).objectCompare (var_procDeclarationLocation_31903.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_31903.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_31758.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 761)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 761)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = object ;
      const GALGAS_templateFunctionCallAST temp_11 = object ;
      const GALGAS_templateFunctionCallAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (var_functionSignature_31758.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 763)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 764)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 764)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 764)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 762)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_32642 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 768)) ;
    const GALGAS_templateFunctionCallAST temp_14 = object ;
    cEnumerator_functionSignature enumerator_32730 (var_functionSignature_31758, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_32807 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_32730.hasCurrentObject () && enumerator_32807.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_33031 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_32807.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_33031, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 770)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_32730.current_mFormalArgumentType (HERE), var_expression_33031.readProperty_mResultType (), enumerator_32807.current_mEndOfExpressionLocation (HERE), var_expression_33031, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)) ;
      }
      var_semanticExpressionListForGeneration_32642.addAssign_operation (var_expression_33031  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 777)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_32730.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_32807.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_32730.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_32730.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 779)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_33307 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 779)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_33307) ;
          inCompiler->emitSemanticError (enumerator_32807.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_33307, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)) ;
        }
      }
      enumerator_32730.gotoNextObject () ;
      enumerator_32807.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = object ;
    const GALGAS_templateFunctionCallAST temp_20 = object ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_31800, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_32642  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 784)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                   extensionMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateExtensionTemplateCallAST * object = (const cPtr_templateExtensionTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateExtensionTemplateCallAST) ;
  const GALGAS_templateExtensionTemplateCallAST temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST.mSlotID,
                                                   extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateVarInExpressionAST * object = (const cPtr_templateVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateVarInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_35178 ;
  GALGAS_string var_sourceVariableCppName_35214 ;
  const GALGAS_templateVarInExpressionAST temp_0 = object ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_35178, var_sourceVariableCppName_35214, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 819)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_35178, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_35214, var_sourceVariableCppName_35214  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 820)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                   extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_36234 ;
  const GALGAS_templateAddOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_36234, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 838)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_36460 ;
  const GALGAS_templateAddOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_36460, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 845)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_36535 = var_leftExpression_36234.readProperty_mResultType () ;
  {
  const GALGAS_templateAddOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_36535, var_rightExpression_36460.readProperty_mResultType (), var_leftType_36535.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 856)).getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 856)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_36460, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 853)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_36535, temp_3.readProperty_mOperatorLocation (), var_leftExpression_36234, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("templateAnalysis.galgas", 866)), var_rightExpression_36460  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 862)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                   extensionMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_37723 ;
  const GALGAS_templateSubOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_37723, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 882)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37949 ;
  const GALGAS_templateSubOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_37949, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 889)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_38024 = var_leftExpression_37723.readProperty_mResultType () ;
  {
  const GALGAS_templateSubOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_38024, var_rightExpression_37949.readProperty_mResultType (), var_leftType_38024.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 900)).getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 900)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_37949, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 897)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_38024, temp_3.readProperty_mOperatorLocation (), var_leftExpression_37723, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("templateAnalysis.galgas", 910)), var_rightExpression_37949  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 906)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                   extensionMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_39224 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_39224, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 926)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_39450 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_39450, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 933)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_39525 = var_leftExpression_39224.readProperty_mResultType () ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_39525, var_rightExpression_39450.readProperty_mResultType (), var_leftType_39525.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)).getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 944)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_39450, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_39525, temp_3.readProperty_mOperatorLocation (), var_leftExpression_39224, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 954)), var_rightExpression_39450  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 950)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                   extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_40726 ;
  const GALGAS_templateDivideOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_40726, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 970)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40952 ;
  const GALGAS_templateDivideOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_40952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 977)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_41027 = var_leftExpression_40726.readProperty_mResultType () ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_41027, var_rightExpression_40952.readProperty_mResultType (), var_leftType_41027.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 988)).getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 988)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_40952, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_41027, temp_3.readProperty_mOperatorLocation (), var_leftExpression_40726, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 998)), var_rightExpression_40952  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 994)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                   extensionMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_42226 ;
  const GALGAS_templateModuloOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_42226, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1014)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_42452 ;
  const GALGAS_templateModuloOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_42452, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1021)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_42527 = var_leftExpression_42226.readProperty_mResultType () ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_42527, var_rightExpression_42452.readProperty_mResultType (), var_leftType_42527.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)).getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1032)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_42452, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1029)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_42527, temp_3.readProperty_mOperatorLocation (), var_leftExpression_42226, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1042)), var_rightExpression_42452  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1038)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                   extensionMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_43584 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_43584, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1059)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_43802 = var_expression_43584.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_43802.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1067)).getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1067)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1067)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_43802.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = object ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_43802, temp_4.readProperty_mOperatorLocation (), var_expression_43584  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1073)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                   extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_45044 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_45044, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1091)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_45118 = var_expression_45044.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, var_type_45118.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1099)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 1099)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = var_type_45118.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1099)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1099)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1099)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_45356 = var_type_45118.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102)) ;
  GALGAS_bool var_isPublic_45440 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = object ;
  GALGAS_bool joker_45442 ; // Joker input parameter
  var_propertyMap_45356.method_searchKey (temp_5.readProperty_mStructFieldName (), var_isPublic_45440, joker_45442, var_type_45118, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1103)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isPublic_45440.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1104)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1105)) ;
    }
  }
  const GALGAS_structFieldAccessTemplateExpressionAST temp_9 = object ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_45118, temp_9.readProperty_mOperatorLocation (), var_expression_45044, temp_10.readProperty_mStructFieldName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1108)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                   extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_46530 ;
  const GALGAS_templateEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_46530, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1127)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_46760 ;
  const GALGAS_templateEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_46760, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_46835 = var_leftExpression_46530.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_46902 = var_rightExpression_46760.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_46835.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1143)).readProperty_string ().objectCompare (var_rightType_46902.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1143)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_46835.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).add_operation (var_rightType_46902.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1144)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_46530, GALGAS_comparison::constructor_equal (SOURCE_FILE ("templateAnalysis.galgas", 1153)), var_rightExpression_46760  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1149)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                   extensionMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_48056 ;
  const GALGAS_templateNonEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_48056, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1168)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_48286 ;
  const GALGAS_templateNonEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_48286, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1175)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_48361 = var_leftExpression_48056.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_48428 = var_rightExpression_48286.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_48361.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1184)).readProperty_string ().objectCompare (var_rightType_48428.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1184)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateNonEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_48361.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)).add_operation (var_rightType_48428.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1185)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateNonEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_48056, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1194)), var_rightExpression_48286  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1190)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                   extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_49584 ;
  const GALGAS_templateStrictInfTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_49584, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_49814 ;
  const GALGAS_templateStrictInfTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_49814, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1216)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_49889 = var_leftExpression_49584.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_49956 = var_rightExpression_49814.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_49889.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1225)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1225)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1225)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictInfTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_49889.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1226)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_49889.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)).objectCompare (var_rightType_49956.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictInfTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_49889.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (var_rightType_49956.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1230)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictInfTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_49584, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1239)), var_rightExpression_49814  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1235)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                   extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_51307 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_51307, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1254)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51537 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_51537, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1261)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_51612 = var_leftExpression_51307.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_51679 = var_rightExpression_51537.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_51612.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1270)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1270)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1270)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateInfOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_51612.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1271)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_51612.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1274)).objectCompare (var_rightType_51679.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1274)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateInfOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_51612.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (var_rightType_51679.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1275)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateInfOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_51307, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1284)), var_rightExpression_51537  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1280)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_53034 ;
  const GALGAS_templateStrictSupTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_53034, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_53264 ;
  const GALGAS_templateStrictSupTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_53264, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1306)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_53339 = var_leftExpression_53034.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_53406 = var_rightExpression_53264.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_53339.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1315)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1315)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1315)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictSupTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53339.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1316)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_53339.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1319)).objectCompare (var_rightType_53406.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1319)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictSupTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53339.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)).add_operation (var_rightType_53406.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1320)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictSupTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_53034, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1329)), var_rightExpression_53264  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                   extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_54759 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_54759, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1344)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_54989 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_54989, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1351)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_55064 = var_leftExpression_54759.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_55131 = var_rightExpression_54989.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_55064.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1360)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1360)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1360)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateSupOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_55064.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1362)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1362)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1361)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_55064.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1364)).objectCompare (var_rightType_55131.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1364)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateSupOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_55064.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)).add_operation (var_rightType_55131.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1365)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateSupOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_54759, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1374)), var_rightExpression_54989  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1370)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_56493 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_56493, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1389)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_56723 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_56723, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1396)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_56798 = var_leftExpression_56493.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_56865 = var_rightExpression_56723.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_56798.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1405)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1405)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1405)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_56798.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1407)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1407)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1406)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_56865.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1409)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_56865.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1411)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1411)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1410)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_56798, temp_8.readProperty_mOperatorLocation (), var_leftExpression_56493, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1419)), var_rightExpression_56723  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1415)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                   extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_58137 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_58137, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1434)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_58367 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_58367, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1441)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_58442 = var_leftExpression_58137.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_58509 = var_rightExpression_58367.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_58442.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1450)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1450)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1450)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_58442.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1452)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1452)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1451)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_58509.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1454)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_58509.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1456)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1456)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1455)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_58442, temp_8.readProperty_mOperatorLocation (), var_leftExpression_58137, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1464)), var_rightExpression_58367  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1460)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                   extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

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
  cEnumerator_templateInstructionListAST enumerator_60253 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_60253.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((const cPtr_templateInstructionAST *) enumerator_60253.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)) ;
    enumerator_60253.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  const GALGAS_templateInstructionStringAST temp_0 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (temp_0.readProperty_mTemplateString ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1509))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1509)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                    extensionMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_61426 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_61426, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1521)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_61426.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1527)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression_61426.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_61426  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                    extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_62284 ;
  const GALGAS_templateBlockInstructionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_62284, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1542)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_62284.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1548)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateBlockInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression_62284.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_62627 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1551)) ;
  {
  const GALGAS_templateBlockInstructionAST temp_4 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.readProperty_mBlockInstructionList (), var_blockInstructionList_62627, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1552)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_5 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_62284, temp_5.readProperty_mLocation (), var_blockInstructionList_62627  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                    extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1570))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                  const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1581))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1581)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_64440 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1593)) ;
  const GALGAS_templateInstructionIfAST temp_0 = object ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_64526 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_64526.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_64623 ;
    callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_64526.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_64623, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1596)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_expression_64623.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1602)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_64623.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression_64623.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_64985 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1605)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_64526.current_mInstructionList (HERE), var_instructionList_64985, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1606)) ;
    }
    var_templateInstructionIfBranchList_64440.addAssign_operation (var_expression_64623, var_instructionList_64985  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1613)) ;
    enumerator_64526.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_65315 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1616)) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_65315, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_64440, var_elseInstructionList_65315  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1625))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1625)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                    extensionMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

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
    callExtensionMethod_templateCodeGeneration ((const cPtr_templateInstructionForGeneration *) enumerator_1782.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_1782.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringForGeneration * object = (const cPtr_templateInstructionStringForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringForGeneration) ;
  const GALGAS_templateInstructionStringForGeneration temp_0 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                               extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionForGeneration * object = (const cPtr_templateInstructionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionForGeneration) ;
  GALGAS_string var_cppName_2904 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_2904, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName_2904, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                               extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionForGeneration * object = (const cPtr_templateBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionForGeneration) ;
  GALGAS_string var_indendationVarCppName_3532 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3532, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3532, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName_3532, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 84)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3532, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName_3532, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 95)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                               extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 107)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                       GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 119)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfForGeneration * object = (const cPtr_templateInstructionIfForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfForGeneration) ;
  const GALGAS_templateInstructionIfForGeneration temp_0 = object ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_5711 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_5711.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_5806 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_5711.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_5806, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)) ;
    GALGAS_string var_testVar_5972 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_5972, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (var_ifVarCppName_5806, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_5972, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_5711.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_5972, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    enumerator_5711.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 151)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = object ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_6875 (temp_2.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_6875.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 161)) ;
    enumerator_6875.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                               extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_6526 ;
  const GALGAS_templateInstructionForeachAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_6526, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 197)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6769 = var_expression_6526.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 204)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_6769.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 205)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6526.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (var_expression_6526.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7071 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 209)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7071, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 210)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = object ;
  GALGAS_string var_enumeratorCppName_7344 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 218)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 218)) ;
  GALGAS_templateVariableMap var_doVariableMap_7438 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = object ;
  const GALGAS_templateInstructionForeachAST temp_6 = object ;
  GALGAS_string var_cppIndexVarName_7501 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 221)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = object ;
      var_doVariableMap_7438.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7501, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)) ;
      }
    }
  }
  switch (object->mProperty_mEnumeratedObjectProperties.enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::kNotBuilt:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_implicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit * extractPtr_8610 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_string extractedValue_7876_prefix = extractPtr_8610->mAssociatedValue0 ;
      const GALGAS_location extractedValue_7904_remplacementRange = extractPtr_8610->mAssociatedValue1 ;
      GALGAS_string var_suggestion_7926 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_7972 (var_enumerationDescriptor_6769, kENUMERATION_UP) ;
      while (enumerator_7972.hasCurrentObject ()) {
        {
        var_doVariableMap_7438.setter_insertKey (GALGAS_lstring::constructor_new (extractedValue_7876_prefix.add_operation (enumerator_7972.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 231)), var_expression_6526.readProperty_mLocation ()  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 231)), enumerator_7972.current_mEnumeratedType (HERE), var_enumeratorCppName_7344.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)).add_operation (enumerator_7972.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)) ;
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
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit * extractPtr_9346 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_lstringlist extractedValue_8652_enumeration = extractPtr_9346->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8676_errorLocation = extractPtr_9346->mAssociatedValue1 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extractedValue_8652_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 246)).objectCompare (var_enumerationDescriptor_6769.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 246)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_8676_errorLocation, var_enumerationDescriptor_6769.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 248)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (extractedValue_8652_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 249)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 249)), fixItArray13  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)) ;
        }
      }
      if (kBoolFalse == test_12) {
        cEnumerator_enumerationDescriptorList enumerator_8951 (var_enumerationDescriptor_6769, kENUMERATION_UP) ;
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
  const GALGAS_templateInstructionForeachAST temp_15 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9376, temp_15.readProperty_mDoInstructionList (), var_doInstructionList_9533, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 268)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_9809 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 276)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_16.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9809, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 277)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10091 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 285)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_17.readProperty_mAfterInstructionList (), var_afterInstructionList_10091, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 286)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_18 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (temp_18.readProperty_mIsAscending (), var_expression_6526, var_enumeratorCppName_7344, var_beforeInstructionList_7071, var_doInstructionList_9533, var_cppIndexVarName_7501, var_betweenInstructionList_9809, var_afterInstructionList_10091  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 294))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 294)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                    extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachForGeneration * object = (const cPtr_templateInstructionForeachForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachForGeneration) ;
  GALGAS_string var_foreachVarCppName_11810 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11810, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 331)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 333)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 334)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 334)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_11810, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)) ;
  }
  const GALGAS_templateInstructionForeachForGeneration temp_4 = object ;
  const GALGAS_templateInstructionForeachForGeneration temp_5 = object ;
  const GALGAS_templateInstructionForeachForGeneration temp_6 = object ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = temp_6.readProperty_mIsAscending ().boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_UP") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_DOWN") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (temp_4.readProperty_mExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (var_foreachVarCppName_11810, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_templateInstructionForeachForGeneration temp_10 = object ;
    const GALGAS_templateInstructionForeachForGeneration temp_11 = object ;
    test_9 = GALGAS_bool (kIsStrictSup, temp_10.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 342)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_templateInstructionForeachForGeneration temp_12 = object ;
      const GALGAS_templateInstructionForeachForGeneration temp_13 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_templateInstructionForeachForGeneration temp_15 = object ;
    test_14 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 345)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_templateInstructionForeachForGeneration temp_16 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 347)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_17 = object ;
      routine_templateCodeGenerationForListInstruction (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 356)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_18 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)) ;
  }
  {
  const GALGAS_templateInstructionForeachForGeneration temp_19 = object ;
  routine_templateCodeGenerationForListInstruction (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 362)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateInstructionForeachForGeneration temp_21 = object ;
    test_20 = GALGAS_bool (kIsStrictSup, temp_21.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 371)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateInstructionForeachForGeneration temp_22 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (temp_22.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 373)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_23 = object ;
      routine_templateCodeGenerationForListInstruction (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 374)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 382)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 383)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_templateInstructionForeachForGeneration temp_25 = object ;
    test_24 = GALGAS_bool (kIsStrictSup, temp_25.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 386)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_templateInstructionForeachForGeneration temp_26 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_26.readProperty_mIndexCppName ().add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 387)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_27 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_27.readProperty_mEnumeratorCppName ().add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 391)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 392)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_templateInstructionForeachForGeneration temp_29 = object ;
    test_28 = GALGAS_bool (kIsStrictSup, temp_29.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 394)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_templateInstructionForeachForGeneration temp_30 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 396)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_31 = object ;
      routine_templateCodeGenerationForListInstruction (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 397)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 405)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 406)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 409)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 410)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                               extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_4362 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_switchExpression_4362, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 125)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_switchExpression_4362.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 131)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_switchExpression_4362.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (var_switchExpression_4362.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)), fixItArray2  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_4789 = var_switchExpression_4362.readProperty_mResultType ().getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 135)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_4890 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-switch-instruction.galgas", 136)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5009 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 138)) ;
  const GALGAS_templateInstructionSwitchAST temp_3 = object ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_5093 (temp_3.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_5093.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5229 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 140)) ;
    GALGAS_bool var_firstConstant_5262 = GALGAS_bool (true) ;
    GALGAS_templateAnalysisContext var_analysisContext_5293 = constinArgument_inAnalysisContext ;
    cEnumerator_lstringlist enumerator_5330 (enumerator_5093.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_5330.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_enumConstantMap_4789.getter_hasKey (enumerator_5330.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 144)).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_constantsNamedInSwitchInstruction_4890.getter_hasKey (enumerator_5330.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 145)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 147)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 147)), fixItArray6  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_4890.addAssign_operation (enumerator_5330.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 149)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5756 ;
          GALGAS_uint joker_5706 ; // Joker input parameter
          var_enumConstantMap_4789.method_searchKey (enumerator_5330.current_mValue (HERE), joker_5706, var_associatedTypeList_5756, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 150)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5093.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 151)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)), fixItArray8  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5093.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)), fixItArray10  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 157)).objectCompare (enumerator_5093.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 157)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string temp_12 ;
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    temp_12 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_13) {
                    temp_12 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 159)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)), fixItArray14  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)) ;
                }
              }
              if (kBoolFalse == test_11) {
                GALGAS_uint var_associatedValueIndex_6490 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_6515 (var_associatedTypeList_5756, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_6586 (enumerator_5093.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_6515.hasCurrentObject () && enumerator_6586.hasCurrentObject ()) {
                  enumGalgasBool test_15 = kBoolTrue ;
                  if (kBoolTrue == test_15) {
                    test_15 = GALGAS_bool (kIsNotEqual, enumerator_6586.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsNotEqual, enumerator_6515.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)).objectCompare (enumerator_6586.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (enumerator_6586.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (enumerator_6515.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)), fixItArray17  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_18 = kBoolTrue ;
                  if (kBoolTrue == test_18) {
                    test_18 = var_firstConstant_5262.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6586.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      GALGAS_string var_cppName_6989 = GALGAS_string ("extractedValue_").add_operation (enumerator_6586.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).add_operation (enumerator_6586.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)) ;
                      var_extractedAssociatedValuesForGeneration_5229.addAssign_operation (enumerator_6515.current_mType (HERE), var_cppName_6989, var_associatedValueIndex_6490  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)) ;
                      {
                      var_analysisContext_5293.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_6586.current_mExtractedValueName (HERE), enumerator_6515.current_mType (HERE), var_cppName_6989, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172)) ;
                      }
                    }
                  }
                  var_associatedValueIndex_6490.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 174)) ;
                  enumerator_6515.gotoNextObject () ;
                  enumerator_6586.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (var_switchExpression_4362.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)), fixItArray19  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)) ;
      }
      var_firstConstant_5262 = GALGAS_bool (false) ;
      enumerator_5330.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_7614 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 183)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5293, enumerator_5093.current_mInstructionList (HERE), var_instructionList_7614, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 184)) ;
    }
    var_templateInstructionSwitchBranchList_5009.addAssign_operation (enumerator_5093.current_mConstantList (HERE), var_extractedAssociatedValuesForGeneration_5229, enumerator_5093.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 194)), var_instructionList_7614  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 191)) ;
    enumerator_5093.gotoNextObject () ;
  }
  GALGAS_stringset var_forgottenConstants_8041 = var_enumConstantMap_4789.getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 198)).substract_operation (var_constantsNamedInSwitchInstruction_4890, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 198)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_8041.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 199)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_string var_s_8163 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_8181 (var_forgottenConstants_8041, kENUMERATION_UP) ;
      while (enumerator_8181.hasCurrentObject ()) {
        var_s_8163.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_8181.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 202)) ;
        enumerator_8181.gotoNextObject () ;
      }
      const GALGAS_templateInstructionSwitchAST temp_21 = object ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mSwitchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8163, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 205)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_4362.readProperty_mResultType (), var_switchExpression_4362, var_templateInstructionSwitchBranchList_5009  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 208))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 208)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                    extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchForGeneration * object = (const cPtr_templateInstructionSwitchForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchForGeneration) ;
  GALGAS_string var_switchVarCppName_10119 ;
  const GALGAS_templateInstructionSwitchForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_10119, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 244)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_10119, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_2 = object ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_10466 (temp_2.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_10466.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10531 (enumerator_10466.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10531.hasCurrentObject ()) {
      const GALGAS_templateInstructionSwitchForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)).add_operation (enumerator_10531.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 259)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)) ;
      enumerator_10531.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 262)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_10466.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 263)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateInstructionSwitchForGeneration temp_5 = object ;
        GALGAS_string var_type_10902 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (temp_5.readProperty_mEnumType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).add_operation (enumerator_10466.current_mConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)) ;
        GALGAS_string var_varPtr_11058 = GALGAS_string ("extractPtr_").add_operation (enumerator_10466.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_10902, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (var_varPtr_11058, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (var_type_10902, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (var_switchVarCppName_10119, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_11257 (enumerator_10466.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_11257.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_11257.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (enumerator_11257.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_varPtr_11058, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)).add_operation (enumerator_11257.current_mIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)) ;
          enumerator_11257.gotoNextObject () ;
        }
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, enumerator_10466.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 273)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 274)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction (enumerator_10466.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 283)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 285)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 286)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 287)) ;
    }
    enumerator_10466.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 290)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                               extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_outLexicalTypeMap ; // Returned variable
  result_outLexicalTypeMap = GALGAS_lexicalTypeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 488)) ;
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)) ;
  }
//---
  return result_outLexicalTypeMap ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (NULL,
                                                                 releaseOnceFunctionResult_buildLexicalTypeMap) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                       const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                       GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_20980 (constinArgument_inLexicalAttributeList, kENUMERATION_UP) ;
  while (enumerator_20980.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_20980.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_lexicalTypeEnum var_lexicalType_21145 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_20980.current_mTypeName (HERE), var_lexicalType_21145, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 517)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_20980.current_mName (HERE), var_lexicalType_21145, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 518)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_m_21237 = GALGAS_string::makeEmptyString () ;
      var_m_21237.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_20980.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)) ;
      GALGAS_bool var_firstLoop_21361 = GALGAS_bool (true) ;
      cEnumerator_lexicalTypeMap enumerator_21386 (constinArgument_inLexicalTypeMap, kENUMERATION_UP) ;
      while (enumerator_21386.hasCurrentObject ()) {
        var_m_21237.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_21386.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 524)) ;
        if (enumerator_21386.hasNextObject ()) {
          var_m_21237.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 526)) ;
        }
        enumerator_21386.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_20980.current_mTypeName (HERE).readProperty_location (), var_m_21237, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 528)) ;
    }
    enumerator_20980.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis (const GALGAS_lexicalFunctionListAST constinArgument_inLexicalFunctionListAST,
                                                 GALGAS_stringset & outArgument_outUnicodeTestFunctions,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  cEnumerator_lexicalFunctionListAST enumerator_7639 (constinArgument_inLexicalFunctionListAST, kENUMERATION_UP) ;
  while (enumerator_7639.hasCurrentObject ()) {
    callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) enumerator_7639.current (HERE).readProperty_mLexicalExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 180)) ;
    enumerator_7639.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 187)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 188)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 189)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 190)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 191)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 192)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 193)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 194)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
  GALGAS_bool var_progress_8088 = GALGAS_bool (true) ;
  GALGAS_lexicalFunctionListAST var_lexicalFunctionListAST_8124 = constinArgument_inLexicalFunctionListAST ;
  if (constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).isValid ()) {
    uint32_t variant_8158 = constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).uintValue () ;
    bool loop_8158 = true ;
    while (loop_8158) {
      loop_8158 = var_progress_8088.isValid () ;
      if (loop_8158) {
        loop_8158 = var_progress_8088.boolValue () ;
      }
      if (loop_8158 && (0 == variant_8158)) {
        loop_8158 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)) ;
      }
      if (loop_8158) {
        variant_8158 -- ;
        var_progress_8088 = GALGAS_bool (false) ;
        GALGAS_lexicalFunctionListAST var_temporaryLexicalFunctionListAST_8277 = var_lexicalFunctionListAST_8124 ;
        var_lexicalFunctionListAST_8124 = GALGAS_lexicalFunctionListAST::constructor_emptyList (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 202)) ;
        cEnumerator_lexicalFunctionListAST enumerator_8393 (var_temporaryLexicalFunctionListAST_8277, kENUMERATION_UP) ;
        while (enumerator_8393.hasCurrentObject ()) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = outArgument_outUnicodeTestFunctions.getter_hasKey (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_string () COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 204)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Unicode test function already defined"), fixItArray2  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 205)) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_8393.current (HERE).readProperty_mLexicalExpression ().ptr (), outArgument_outUnicodeTestFunctions, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 206)).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_outUnicodeTestFunctions.addAssign_operation (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_string ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 207)) ;
                var_progress_8088 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_3) {
              var_temporaryLexicalFunctionListAST_8277.addAssign_operation (enumerator_8393.current (HERE).readProperty_mFunctionName (), enumerator_8393.current (HERE).readProperty_mLexicalExpression ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 210)) ;
            }
          }
          enumerator_8393.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_lexicalFunctionListAST enumerator_8955 (var_lexicalFunctionListAST_8124, kENUMERATION_UP) ;
  while (enumerator_8955.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (enumerator_8955.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Circular definition of this lexical Unicode test function"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 215)) ;
    enumerator_8955.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionOrExpressionAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 228)) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                              extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCallAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                              extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCallAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCharacterMatchAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCharacterIntervalMatchAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * object = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_1 = object ;
    const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_2 = object ;
    test_0 = GALGAS_bool (kIsStrictInf, temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 245)).objectCompare (temp_2.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 245)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mUpperBound ().readProperty_location (), GALGAS_string ("Upper bound code point should be greater or equal to lower bound code point"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 246)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionOrExpressionAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                    const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  result_result = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 261)).operator_and (callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 262)) COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 261)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                                         extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCallAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionCallAST * object = (const cPtr_lexicalFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCallAST) ;
  const GALGAS_lexicalFunctionCallAST temp_0 = object ;
  result_result = constinArgument_inDefinedUnicodeFunctionSet.getter_hasKey (temp_0.readProperty_mCalledFunctionName ().readProperty_string () COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 270)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions, NULL) ;

