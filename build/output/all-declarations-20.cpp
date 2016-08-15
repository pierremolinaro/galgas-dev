#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-20.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (void) :
mAttribute_mEnumeratedType (),
mAttribute_mEnumerationName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element::~ GALGAS_enumerationDescriptorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                          const GALGAS_string & inOperand1) :
mAttribute_mEnumeratedType (inOperand0),
mAttribute_mEnumerationName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationDescriptorList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                      GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                          const GALGAS_string & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationDescriptorList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumerationDescriptorList_2D_element::objectCompare (const GALGAS_enumerationDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratedType.objectCompare (inOperand.mAttribute_mEnumeratedType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumerationName.objectCompare (inOperand.mAttribute_mEnumerationName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumerationDescriptorList_2D_element::isValid (void) const {
  return mAttribute_mEnumeratedType.isValid () && mAttribute_mEnumerationName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList_2D_element::drop (void) {
  mAttribute_mEnumeratedType.drop () ;
  mAttribute_mEnumerationName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @enumerationDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumeratedType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumerationName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_enumerationDescriptorList_2D_element::getter_mEnumeratedType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumerationDescriptorList_2D_element::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @enumerationDescriptorList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ("enumerationDescriptorList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  const GALGAS_enumerationDescriptorList_2D_element * p = (const GALGAS_enumerationDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element::GALGAS_typedPropertyList_2D_element (void) :
mAttribute_mAttributeTypeProxy (),
mAttribute_mAttributeName (),
mAttribute_mHasSetter (),
mAttribute_mHasGetter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element::~ GALGAS_typedPropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element::GALGAS_typedPropertyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2,
                                                                          const GALGAS_bool & inOperand3) :
mAttribute_mAttributeTypeProxy (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mHasSetter (inOperand2),
mAttribute_mHasGetter (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element GALGAS_typedPropertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typedPropertyList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element GALGAS_typedPropertyList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_bool & inOperand2,
                                                                                          const GALGAS_bool & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_typedPropertyList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typedPropertyList_2D_element::objectCompare (const GALGAS_typedPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeTypeProxy.objectCompare (inOperand.mAttribute_mAttributeTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasSetter.objectCompare (inOperand.mAttribute_mHasSetter) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasGetter.objectCompare (inOperand.mAttribute_mHasGetter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typedPropertyList_2D_element::isValid (void) const {
  return mAttribute_mAttributeTypeProxy.isValid () && mAttribute_mAttributeName.isValid () && mAttribute_mHasSetter.isValid () && mAttribute_mHasGetter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList_2D_element::drop (void) {
  mAttribute_mAttributeTypeProxy.drop () ;
  mAttribute_mAttributeName.drop () ;
  mAttribute_mHasSetter.drop () ;
  mAttribute_mHasGetter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @typedPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasSetter.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasGetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typedPropertyList_2D_element::getter_mAttributeTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedPropertyList_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList_2D_element::getter_mHasSetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasSetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList_2D_element::getter_mHasGetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasGetter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @typedPropertyList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedPropertyList_2D_element ("typedPropertyList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element GALGAS_typedPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList_2D_element result ;
  const GALGAS_typedPropertyList_2D_element * p = (const GALGAS_typedPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element::GALGAS_attributeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAttributeType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element::~ GALGAS_attributeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element::GALGAS_attributeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mAttributeType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element GALGAS_attributeMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_attributeMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element GALGAS_attributeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_attributeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_attributeMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_attributeMap_2D_element::objectCompare (const GALGAS_attributeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeType.objectCompare (inOperand.mAttribute_mAttributeType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_attributeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAttributeType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @attributeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeMap_2D_element::getter_mAttributeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @attributeMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeMap_2D_element ("attributeMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element GALGAS_attributeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap_2D_element result ;
  const GALGAS_attributeMap_2D_element * p = (const GALGAS_attributeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element::GALGAS_constantIndexMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex (),
mAttribute_mAssociatedTypeList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element::~ GALGAS_constantIndexMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element::GALGAS_constantIndexMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_unifiedTypeMapProxyList & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1),
mAttribute_mAssociatedTypeList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantIndexMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_unifiedTypeMapProxyList & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantIndexMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constantIndexMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constantIndexMap_2D_element::objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAssociatedTypeList.objectCompare (inOperand.mAttribute_mAssociatedTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constantIndexMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mAssociatedTypeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
  mAttribute_mAssociatedTypeList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @constantIndexMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAssociatedTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantIndexMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constantIndexMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_constantIndexMap_2D_element::getter_mAssociatedTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedTypeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @constantIndexMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap_2D_element ("constantIndexMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantIndexMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantIndexMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap_2D_element result ;
  const GALGAS_constantIndexMap_2D_element * p = (const GALGAS_constantIndexMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantIndexMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element::GALGAS_grammarLabelMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelSignature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element::~ GALGAS_grammarLabelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element::GALGAS_grammarLabelMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_formalParameterSignature & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelSignature (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_grammarLabelMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_formalParameterSignature::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_formalParameterSignature & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarLabelMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_grammarLabelMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_grammarLabelMap_2D_element::objectCompare (const GALGAS_grammarLabelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelSignature.objectCompare (inOperand.mAttribute_mLabelSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_grammarLabelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelSignature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @grammarLabelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarLabelMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_grammarLabelMap_2D_element::getter_mLabelSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @grammarLabelMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ("grammarLabelMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarLabelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarLabelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarLabelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap_2D_element result ;
  const GALGAS_grammarLabelMap_2D_element * p = (const GALGAS_grammarLabelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarLabelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element::GALGAS_grammarMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelMap (),
mAttribute_mHasIndexing (),
mAttribute_mHasTranslateFeature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element::~ GALGAS_grammarMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element::GALGAS_grammarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_grammarLabelMap & inOperand1,
                                                            const GALGAS_bool & inOperand2,
                                                            const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelMap (inOperand1),
mAttribute_mHasIndexing (inOperand2),
mAttribute_mHasTranslateFeature (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_grammarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_grammarLabelMap::constructor_emptyMap (HERE),
                                       GALGAS_bool::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_grammarLabelMap & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_grammarMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_grammarMap_2D_element::objectCompare (const GALGAS_grammarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelMap.objectCompare (inOperand.mAttribute_mLabelMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasIndexing.objectCompare (inOperand.mAttribute_mHasIndexing) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasTranslateFeature.objectCompare (inOperand.mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_grammarMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelMap.isValid () && mAttribute_mHasIndexing.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelMap.drop () ;
  mAttribute_mHasIndexing.drop () ;
  mAttribute_mHasTranslateFeature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @grammarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarMap_2D_element::getter_mLabelMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap_2D_element::getter_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap_2D_element::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @grammarMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarMap_2D_element ("grammarMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap_2D_element result ;
  const GALGAS_grammarMap_2D_element * p = (const GALGAS_grammarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineSignature (),
mAttribute_mIsInternal () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::~ GALGAS_routineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_formalParameterSignature & inOperand1,
                                                            const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineSignature (inOperand1),
mAttribute_mIsInternal (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_formalParameterSignature & inOperand1,
                                                                            const GALGAS_bool & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMap_2D_element::objectCompare (const GALGAS_routineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineSignature.objectCompare (inOperand.mAttribute_mRoutineSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsInternal.objectCompare (inOperand.mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineSignature.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineSignature.drop () ;
  mAttribute_mIsInternal.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @routineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_routineMap_2D_element::getter_mRoutineSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap_2D_element::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @routineMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap_2D_element ("routineMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  const GALGAS_routineMap_2D_element * p = (const GALGAS_routineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFunctionSignature (),
mAttribute_mResultType (),
mAttribute_mIsInternal () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_functionSignature & inOperand1,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                              const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mFunctionSignature (inOperand1),
mAttribute_mResultType (inOperand2),
mAttribute_mIsInternal (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_functionSignature::constructor_emptyList (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_functionSignature & inOperand1,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                              const GALGAS_bool & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMap_2D_element::objectCompare (const GALGAS_functionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionSignature.objectCompare (inOperand.mAttribute_mFunctionSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsInternal.objectCompare (inOperand.mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionSignature.isValid () && mAttribute_mResultType.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFunctionSignature.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mIsInternal.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @functionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionMap_2D_element::getter_mFunctionSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionMap_2D_element::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @functionMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  const GALGAS_functionMap_2D_element * p = (const GALGAS_functionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element::GALGAS_wrapperFileMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAbsoluteFilePath (),
mAttribute_mIsTextFile (),
mAttribute_mWrapperDirectoryIndex (),
mAttribute_mWrapperFileIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element::~ GALGAS_wrapperFileMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element::GALGAS_wrapperFileMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_uint & inOperand3,
                                                                    const GALGAS_uint & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mAbsoluteFilePath (inOperand1),
mAttribute_mIsTextFile (inOperand2),
mAttribute_mWrapperDirectoryIndex (inOperand3),
mAttribute_mWrapperFileIndex (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperFileMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_uint & inOperand3,
                                                                                    const GALGAS_uint & inOperand4 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperFileMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_wrapperFileMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_wrapperFileMap_2D_element::objectCompare (const GALGAS_wrapperFileMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAbsoluteFilePath.objectCompare (inOperand.mAttribute_mAbsoluteFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsTextFile.objectCompare (inOperand.mAttribute_mIsTextFile) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (inOperand.mAttribute_mWrapperDirectoryIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWrapperFileIndex.objectCompare (inOperand.mAttribute_mWrapperFileIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_wrapperFileMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAbsoluteFilePath.isValid () && mAttribute_mIsTextFile.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () && mAttribute_mWrapperFileIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAbsoluteFilePath.drop () ;
  mAttribute_mIsTextFile.drop () ;
  mAttribute_mWrapperDirectoryIndex.drop () ;
  mAttribute_mWrapperFileIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @wrapperFileMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAbsoluteFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsTextFile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWrapperFileIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_wrapperFileMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_wrapperFileMap_2D_element::getter_mAbsoluteFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbsoluteFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_wrapperFileMap_2D_element::getter_mIsTextFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsTextFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap_2D_element::getter_mWrapperDirectoryIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWrapperDirectoryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap_2D_element::getter_mWrapperFileIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWrapperFileIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @wrapperFileMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ("wrapperFileMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperFileMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperFileMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperFileMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap_2D_element result ;
  const GALGAS_wrapperFileMap_2D_element * p = (const GALGAS_wrapperFileMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperFileMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegularFileMap (),
mAttribute_mDirectoryMap (),
mAttribute_mWrapperDirectoryIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element::~ GALGAS_wrapperDirectoryMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_wrapperFileMap & inOperand1,
                                                                              const GALGAS_wrapperDirectoryMap & inOperand2,
                                                                              const GALGAS_uint & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mRegularFileMap (inOperand1),
mAttribute_mDirectoryMap (inOperand2),
mAttribute_mWrapperDirectoryIndex (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperDirectoryMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                                GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                                GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_wrapperFileMap & inOperand1,
                                                                                              const GALGAS_wrapperDirectoryMap & inOperand2,
                                                                                              const GALGAS_uint & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_wrapperDirectoryMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_wrapperDirectoryMap_2D_element::objectCompare (const GALGAS_wrapperDirectoryMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularFileMap.objectCompare (inOperand.mAttribute_mRegularFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDirectoryMap.objectCompare (inOperand.mAttribute_mDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (inOperand.mAttribute_mWrapperDirectoryIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_wrapperDirectoryMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegularFileMap.isValid () && mAttribute_mDirectoryMap.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegularFileMap.drop () ;
  mAttribute_mDirectoryMap.drop () ;
  mAttribute_mWrapperDirectoryIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperDirectoryMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_wrapperDirectoryMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperDirectoryMap_2D_element::getter_mRegularFileMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap_2D_element::getter_mDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperDirectoryMap_2D_element::getter_mWrapperDirectoryIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWrapperDirectoryIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @wrapperDirectoryMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ("wrapperDirectoryMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperDirectoryMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperDirectoryMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperDirectoryMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap_2D_element result ;
  const GALGAS_wrapperDirectoryMap_2D_element * p = (const GALGAS_wrapperDirectoryMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperDirectoryMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTemplateSignature (),
mAttribute_mFilewrapperTemplatePath () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element::~ GALGAS_filewrapperTemplateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mTemplateSignature (inOperand1),
mAttribute_mFilewrapperTemplatePath (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_functionSignature::constructor_emptyList (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_filewrapperTemplateMap_2D_element::objectCompare (const GALGAS_filewrapperTemplateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateSignature.objectCompare (inOperand.mAttribute_mTemplateSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplatePath.objectCompare (inOperand.mAttribute_mFilewrapperTemplatePath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_filewrapperTemplateMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTemplateSignature.isValid () && mAttribute_mFilewrapperTemplatePath.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTemplateSignature.drop () ;
  mAttribute_mFilewrapperTemplatePath.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_filewrapperTemplateMap_2D_element::getter_mTemplateSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateMap_2D_element::getter_mFilewrapperTemplatePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplatePath ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @filewrapperTemplateMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ("filewrapperTemplateMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap_2D_element result ;
  const GALGAS_filewrapperTemplateMap_2D_element * p = (const GALGAS_filewrapperTemplateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFilewrapperPath (),
mAttribute_mFilewrapperExtensionList (),
mAttribute_mFilewrapperFileMap (),
mAttribute_mFilewrapperDirectoryMap (),
mAttribute_mFilewrapperTemplateMap (),
mAttribute_mIsInternal () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element::~ GALGAS_filewrapperMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_lstringlist & inOperand2,
                                                                    const GALGAS_wrapperFileMap & inOperand3,
                                                                    const GALGAS_wrapperDirectoryMap & inOperand4,
                                                                    const GALGAS_filewrapperTemplateMap & inOperand5,
                                                                    const GALGAS_bool & inOperand6) :
mAttribute_lkey (inOperand0),
mAttribute_mFilewrapperPath (inOperand1),
mAttribute_mFilewrapperExtensionList (inOperand2),
mAttribute_mFilewrapperFileMap (inOperand3),
mAttribute_mFilewrapperDirectoryMap (inOperand4),
mAttribute_mFilewrapperTemplateMap (inOperand5),
mAttribute_mIsInternal (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                           GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                           GALGAS_filewrapperTemplateMap::constructor_emptyMap (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstringlist & inOperand2,
                                                                                    const GALGAS_wrapperFileMap & inOperand3,
                                                                                    const GALGAS_wrapperDirectoryMap & inOperand4,
                                                                                    const GALGAS_filewrapperTemplateMap & inOperand5,
                                                                                    const GALGAS_bool & inOperand6 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_filewrapperMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_filewrapperMap_2D_element::objectCompare (const GALGAS_filewrapperMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperPath.objectCompare (inOperand.mAttribute_mFilewrapperPath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperExtensionList.objectCompare (inOperand.mAttribute_mFilewrapperExtensionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperFileMap.objectCompare (inOperand.mAttribute_mFilewrapperFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperDirectoryMap.objectCompare (inOperand.mAttribute_mFilewrapperDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateMap.objectCompare (inOperand.mAttribute_mFilewrapperTemplateMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsInternal.objectCompare (inOperand.mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_filewrapperMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFilewrapperPath.isValid () && mAttribute_mFilewrapperExtensionList.isValid () && mAttribute_mFilewrapperFileMap.isValid () && mAttribute_mFilewrapperDirectoryMap.isValid () && mAttribute_mFilewrapperTemplateMap.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFilewrapperPath.drop () ;
  mAttribute_mFilewrapperExtensionList.drop () ;
  mAttribute_mFilewrapperFileMap.drop () ;
  mAttribute_mFilewrapperDirectoryMap.drop () ;
  mAttribute_mFilewrapperTemplateMap.drop () ;
  mAttribute_mIsInternal.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @filewrapperMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperExtensionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplateMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperMap_2D_element::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperMap_2D_element::getter_mFilewrapperExtensionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_filewrapperMap_2D_element::getter_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_filewrapperMap_2D_element::getter_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperMap_2D_element::getter_mFilewrapperTemplateMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_filewrapperMap_2D_element::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @filewrapperMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperMap_2D_element ("filewrapperMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap_2D_element result ;
  const GALGAS_filewrapperMap_2D_element * p = (const GALGAS_filewrapperMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsPredefined (),
mAttribute_mBoolOptionMap (),
mAttribute_mUIntOptionMap (),
mAttribute_mStringOptionMap (),
mAttribute_mStringListOptionMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand3,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand4,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mIsPredefined (inOperand1),
mAttribute_mBoolOptionMap (inOperand2),
mAttribute_mUIntOptionMap (inOperand3),
mAttribute_mStringOptionMap (inOperand4),
mAttribute_mStringListOptionMap (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand3,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand4,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand5 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_optionComponentMapForSemanticAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_optionComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsPredefined.objectCompare (inOperand.mAttribute_mIsPredefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoolOptionMap.objectCompare (inOperand.mAttribute_mBoolOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUIntOptionMap.objectCompare (inOperand.mAttribute_mUIntOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStringOptionMap.objectCompare (inOperand.mAttribute_mStringOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStringListOptionMap.objectCompare (inOperand.mAttribute_mStringListOptionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_optionComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mBoolOptionMap.isValid () && mAttribute_mUIntOptionMap.isValid () && mAttribute_mStringOptionMap.isValid () && mAttribute_mStringListOptionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsPredefined.drop () ;
  mAttribute_mBoolOptionMap.drop () ;
  mAttribute_mUIntOptionMap.drop () ;
  mAttribute_mStringOptionMap.drop () ;
  mAttribute_mStringListOptionMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @optionComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoolOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUIntOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStringOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStringListOptionMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mBoolOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoolOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mUIntOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUIntOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mStringOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mStringListOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringListOptionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @optionComponentMapForSemanticAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ("optionComponentMapForSemanticAnalysis-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis_2D_element result ;
  const GALGAS_optionComponentMapForSemanticAnalysis_2D_element * p = (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForSemanticAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTerminalMap (),
mAttribute_mIndexingListAST (),
mAttribute_mIndexingDirectory () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_terminalMap & inOperand1,
                                                                                                                    const GALGAS_indexingListAST & inOperand2,
                                                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mTerminalMap (inOperand1),
mAttribute_mIndexingListAST (inOperand2),
mAttribute_mIndexingDirectory (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_terminalMap::constructor_emptyMap (HERE),
                                                                   GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_terminalMap & inOperand1,
                                                                                                                                    const GALGAS_indexingListAST & inOperand2,
                                                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalMap.objectCompare (inOperand.mAttribute_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndexingListAST.objectCompare (inOperand.mAttribute_mIndexingListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndexingDirectory.objectCompare (inOperand.mAttribute_mIndexingDirectory) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminalMap.isValid () && mAttribute_mIndexingListAST.isValid () && mAttribute_mIndexingDirectory.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTerminalMap.drop () ;
  mAttribute_mIndexingListAST.drop () ;
  mAttribute_mIndexingDirectory.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @lexiqueComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndexingListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndexingDirectory.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_mTerminalMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingDirectory ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexiqueComponentMapForSemanticAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ("lexiqueComponentMapForSemanticAnalysis-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element result ;
  const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element * p = (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element::GALGAS_syntaxComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexiqueName (),
mAttribute_mNonterminalDeclarationList (),
mAttribute_mRuleList (),
mAttribute_mHasTranslateFeature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element::~ GALGAS_syntaxComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element::GALGAS_syntaxComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                            const GALGAS_syntaxRuleListAST & inOperand3,
                                                                            const GALGAS_bool & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mLexiqueName (inOperand1),
mAttribute_mNonterminalDeclarationList (inOperand2),
mAttribute_mRuleList (inOperand3),
mAttribute_mHasTranslateFeature (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element GALGAS_syntaxComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                               GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                               GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element GALGAS_syntaxComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                            const GALGAS_syntaxRuleListAST & inOperand3,
                                                                                            const GALGAS_bool & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_syntaxComponentMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxComponentMap_2D_element::objectCompare (const GALGAS_syntaxComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueName.objectCompare (inOperand.mAttribute_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalDeclarationList.objectCompare (inOperand.mAttribute_mNonterminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRuleList.objectCompare (inOperand.mAttribute_mRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasTranslateFeature.objectCompare (inOperand.mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () && mAttribute_mNonterminalDeclarationList.isValid () && mAttribute_mRuleList.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexiqueName.drop () ;
  mAttribute_mNonterminalDeclarationList.drop () ;
  mAttribute_mRuleList.drop () ;
  mAttribute_mHasTranslateFeature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @syntaxComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxComponentMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxComponentMap_2D_element::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_syntaxComponentMap_2D_element::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxComponentMap_2D_element::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_syntaxComponentMap_2D_element::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @syntaxComponentMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ("syntaxComponentMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element GALGAS_syntaxComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap_2D_element result ;
  const GALGAS_syntaxComponentMap_2D_element * p = (const GALGAS_syntaxComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType_2D_element::~ GALGAS_extensionMethodMapForType_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalParameterList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_formalParameterListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionMethodMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionMethodMapForType_2D_element::objectCompare (const GALGAS_extensionMethodMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterList.objectCompare (inOperand.mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionMethodMapForType_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForType_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionMethodMapForType_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_extensionMethodMapForType_2D_element::getter_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @extensionMethodMapForType-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ("extensionMethodMapForType-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForType_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  const GALGAS_extensionMethodMapForType_2D_element * p = (const GALGAS_extensionMethodMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mExtensionMethodMapForType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext_2D_element::~ GALGAS_extensionMethodMapForBuildingContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionMethodMapForType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mExtensionMethodMapForType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionMethodMapForType::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionMethodMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionMethodMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionMethodMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionMethodMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtensionMethodMapForType.objectCompare (inOperand.mAttribute_mExtensionMethodMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionMethodMapForBuildingContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExtensionMethodMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForBuildingContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mExtensionMethodMapForType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtensionMethodMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionMethodMapForBuildingContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForBuildingContext_2D_element::getter_mExtensionMethodMapForType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionMethodMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @extensionMethodMapForBuildingContext-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ("extensionMethodMapForBuildingContext-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  const GALGAS_extensionMethodMapForBuildingContext_2D_element * p = (const GALGAS_extensionMethodMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType_2D_element::~ GALGAS_extensionSetterMapForType_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalParameterList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_formalParameterListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionSetterMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionSetterMapForType_2D_element::objectCompare (const GALGAS_extensionSetterMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterList.objectCompare (inOperand.mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionSetterMapForType_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForType_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionSetterMapForType_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_extensionSetterMapForType_2D_element::getter_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @extensionSetterMapForType-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ("extensionSetterMapForType-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  const GALGAS_extensionSetterMapForType_2D_element * p = (const GALGAS_extensionSetterMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mExtensionSetterMapForType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext_2D_element::~ GALGAS_extensionSetterMapForBuildingContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionSetterMapForType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mExtensionSetterMapForType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionSetterMapForType::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionSetterMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionSetterMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionSetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionSetterMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtensionSetterMapForType.objectCompare (inOperand.mAttribute_mExtensionSetterMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionSetterMapForBuildingContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExtensionSetterMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForBuildingContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mExtensionSetterMapForType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtensionSetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionSetterMapForBuildingContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForBuildingContext_2D_element::getter_mExtensionSetterMapForType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionSetterMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @extensionSetterMapForBuildingContext-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ("extensionSetterMapForBuildingContext-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  const GALGAS_extensionSetterMapForBuildingContext_2D_element * p = (const GALGAS_extensionSetterMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (void) :
mAttribute_lkey (),
mAttribute_mResultTypeName (),
mAttribute_mInputFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType_2D_element::~ GALGAS_extensionGetterMapForType_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_formalInputParameterListAST & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mResultTypeName (inOperand1),
mAttribute_mInputFormalParameterList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalInputParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_formalInputParameterListAST & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_extensionGetterMapForType_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionGetterMapForType_2D_element::objectCompare (const GALGAS_extensionGetterMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultTypeName.objectCompare (inOperand.mAttribute_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInputFormalParameterList.objectCompare (inOperand.mAttribute_mInputFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionGetterMapForType_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mInputFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForType_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mInputFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInputFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterMapForType_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterMapForType_2D_element::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_extensionGetterMapForType_2D_element::getter_mInputFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @extensionGetterMapForType-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ("extensionGetterMapForType-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType_2D_element result ;
  const GALGAS_extensionGetterMapForType_2D_element * p = (const GALGAS_extensionGetterMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mExtensionGetterMapForType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext_2D_element::~ GALGAS_extensionGetterMapForBuildingContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionGetterMapForType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mExtensionGetterMapForType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionGetterMapForType::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionGetterMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionGetterMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionGetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionGetterMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtensionGetterMapForType.objectCompare (inOperand.mAttribute_mExtensionGetterMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionGetterMapForBuildingContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExtensionGetterMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForBuildingContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mExtensionGetterMapForType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtensionGetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterMapForBuildingContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForBuildingContext_2D_element::getter_mExtensionGetterMapForType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtensionGetterMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @extensionGetterMapForBuildingContext-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ("extensionGetterMapForBuildingContext-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element::~ GALGAS_wrapperExtensionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperExtensionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_wrapperExtensionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_wrapperExtensionMap_2D_element::objectCompare (const GALGAS_wrapperExtensionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_wrapperExtensionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperExtensionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperExtensionMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperExtensionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_wrapperExtensionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @wrapperExtensionMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ("wrapperExtensionMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperExtensionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperExtensionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperExtensionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName (),
mAttribute_mFormalArgumentCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element::~ GALGAS_formalParameterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_string & inOperand4) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentPassingMode (inOperand1),
mAttribute_mFormalArgumentType (inOperand2),
mAttribute_mFormalArgumentName (inOperand3),
mAttribute_mFormalArgumentCppName (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentCppName.objectCompare (inOperand.mAttribute_mFormalArgumentCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalParameterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () && mAttribute_mFormalArgumentCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
  mAttribute_mFormalArgumentCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @formalParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @formalParameterListForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ("formalParameterListForGeneration-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentCppName (),
mAttribute_mFormalArgumentName (),
mAttribute_mIsConstant () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element::~ GALGAS_formalInputParameterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                  const GALGAS_bool & inOperand4) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentCppName (inOperand2),
mAttribute_mFormalArgumentName (inOperand3),
mAttribute_mIsConstant (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalInputParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalInputParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentCppName.objectCompare (inOperand.mAttribute_mFormalArgumentCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsConstant.objectCompare (inOperand.mAttribute_mIsConstant) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalInputParameterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentCppName.isValid () && mAttribute_mFormalArgumentName.isValid () && mAttribute_mIsConstant.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentCppName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
  mAttribute_mIsConstant.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @formalInputParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalArgumentCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListForGeneration_2D_element::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @formalInputParameterListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ("formalInputParameterListForGeneration-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (void) :
mAttribute_mActualParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element::~ GALGAS_actualParameterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & inOperand0) :
mAttribute_mActualParameter (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::constructor_new (const GALGAS_actualParameterForGeneration & inOperand0 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualParameterListForGeneration_2D_element::objectCompare (const GALGAS_actualParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualParameter.objectCompare (inOperand.mAttribute_mActualParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualParameterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mActualParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration_2D_element::drop (void) {
  mAttribute_mActualParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration GALGAS_actualParameterListForGeneration_2D_element::getter_mActualParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @actualParameterListForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ("actualParameterListForGeneration-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (void) :
mAttribute_mFormalArgumentPassingModeForGrammarAnalysis (),
mAttribute_mGalgasTypeNameForGrammarAnalysis () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element::~ GALGAS_signatureForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mFormalArgumentPassingModeForGrammarAnalysis (inOperand0),
mAttribute_mGalgasTypeNameForGrammarAnalysis (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::constructor_new (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_signatureForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_signatureForGrammarAnalysis_2D_element::objectCompare (const GALGAS_signatureForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.objectCompare (inOperand.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGalgasTypeNameForGrammarAnalysis.objectCompare (inOperand.mAttribute_mGalgasTypeNameForGrammarAnalysis) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_signatureForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.isValid () && mAttribute_mGalgasTypeNameForGrammarAnalysis.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.drop () ;
  mAttribute_mGalgasTypeNameForGrammarAnalysis.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @signatureForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_signatureForGrammarAnalysis_2D_element::getter_mFormalArgumentPassingModeForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_signatureForGrammarAnalysis_2D_element::getter_mGalgasTypeNameForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGalgasTypeNameForGrammarAnalysis ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @signatureForGrammarAnalysis-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ("signatureForGrammarAnalysis-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_signatureForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_signatureForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_signatureForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalParametersList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalParametersList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                        GALGAS_signatureForGrammarAnalysis::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParametersList.objectCompare (inOperand.mAttribute_mFormalParametersList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParametersList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalParametersList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @nonterminalSymbolLabelMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParametersList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::getter_mFormalParametersList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParametersList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @nonterminalSymbolLabelMapForGrammarAnalysis-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ("nonterminalSymbolLabelMapForGrammarAnalysis-element",
                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mNonTerminalIndex (),
mAttribute_mNonterminalSymbolParametersMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mNonTerminalIndex (inOperand1),
mAttribute_mNonterminalSymbolParametersMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE),
                                                                   GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalIndex.objectCompare (inOperand.mAttribute_mNonTerminalIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalSymbolParametersMap.objectCompare (inOperand.mAttribute_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mNonTerminalIndex.isValid () && mAttribute_mNonterminalSymbolParametersMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mNonTerminalIndex.drop () ;
  mAttribute_mNonterminalSymbolParametersMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_mNonterminalSymbolParametersMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalSymbolParametersMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @nonTerminalSymbolMapForGrammarAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ("nonTerminalSymbolMapForGrammarAnalysis-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (void) :
mAttribute_mType (),
mAttribute_mName (),
mAttribute_mNoWarningIfUnused (),
mAttribute_mCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element::~ GALGAS_localConstantList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2,
                                                                          const GALGAS_string & inOperand3) :
mAttribute_mType (inOperand0),
mAttribute_mName (inOperand1),
mAttribute_mNoWarningIfUnused (inOperand2),
mAttribute_mCppName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localConstantList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE),
                                              GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_localConstantList_2D_element::objectCompare (const GALGAS_localConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNoWarningIfUnused.objectCompare (inOperand.mAttribute_mNoWarningIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppName.objectCompare (inOperand.mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_localConstantList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mName.isValid () && mAttribute_mNoWarningIfUnused.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mName.drop () ;
  mAttribute_mNoWarningIfUnused.drop () ;
  mAttribute_mCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @localConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNoWarningIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localConstantList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localConstantList_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localConstantList_2D_element::getter_mNoWarningIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNoWarningIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localConstantList_2D_element::getter_mCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @localConstantList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantList_2D_element ("localConstantList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (void) :
mAttribute_mType (),
mAttribute_mName (),
mAttribute_mCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element::~ GALGAS_localInitializedVariableList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mAttribute_mType (inOperand0),
mAttribute_mName (inOperand1),
mAttribute_mCppName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localInitializedVariableList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_localInitializedVariableList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_localInitializedVariableList_2D_element::objectCompare (const GALGAS_localInitializedVariableList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppName.objectCompare (inOperand.mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_localInitializedVariableList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mName.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mName.drop () ;
  mAttribute_mCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @localInitializedVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_localInitializedVariableList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localInitializedVariableList_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localInitializedVariableList_2D_element::getter_mCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @localInitializedVariableList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ("localInitializedVariableList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localInitializedVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localInitializedVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localInitializedVariableList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element::GALGAS_attributeIndexMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAttributeTypeIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element::~ GALGAS_attributeIndexMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element::GALGAS_attributeIndexMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mAttributeTypeIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element GALGAS_attributeIndexMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_attributeIndexMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element GALGAS_attributeIndexMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_attributeIndexMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_attributeIndexMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_attributeIndexMap_2D_element::objectCompare (const GALGAS_attributeIndexMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeTypeIndex.objectCompare (inOperand.mAttribute_mAttributeTypeIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_attributeIndexMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeTypeIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAttributeTypeIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @attributeIndexMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeIndexMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeIndexMap_2D_element::getter_mAttributeTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @attributeIndexMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeIndexMap_2D_element ("attributeIndexMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeIndexMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeIndexMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeIndexMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeIndexMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element GALGAS_attributeIndexMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_attributeIndexMap_2D_element result ;
  const GALGAS_attributeIndexMap_2D_element * p = (const GALGAS_attributeIndexMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeIndexMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeIndexMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSignatureForGeneration (),
mAttribute_mSignature (),
mAttribute_mEndOfArgumentLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element::~ GALGAS_nonterminalLabelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                              const GALGAS_location & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mSignatureForGeneration (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mEndOfArgumentLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalLabelMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonterminalLabelMap_2D_element::objectCompare (const GALGAS_nonterminalLabelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignatureForGeneration.objectCompare (inOperand.mAttribute_mSignatureForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfArgumentLocation.objectCompare (inOperand.mAttribute_mEndOfArgumentLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonterminalLabelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSignatureForGeneration.isValid () && mAttribute_mSignature.isValid () && mAttribute_mEndOfArgumentLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSignatureForGeneration.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mEndOfArgumentLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @nonterminalLabelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalLabelMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_nonterminalLabelMap_2D_element::getter_mSignatureForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignatureForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_nonterminalLabelMap_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_nonterminalLabelMap_2D_element::getter_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArgumentLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @nonterminalLabelMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ("nonterminalLabelMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalLabelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalLabelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalLabelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element::~ GALGAS_nonterminalMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_nonterminalLabelMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_nonterminalLabelMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_nonterminalLabelMap & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonterminalMap_2D_element::objectCompare (const GALGAS_nonterminalMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelMap.objectCompare (inOperand.mAttribute_mLabelMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonterminalMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @nonterminalMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap GALGAS_nonterminalMap_2D_element::getter_mLabelMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @nonterminalMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalMap_2D_element ("nonterminalMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element::GALGAS_ruleLabelImplementationList_2D_element (void) :
mAttribute_mLabelName (),
mAttribute_mSignatureForGeneration (),
mAttribute_mSignature (),
mAttribute_mEndOfArgumentLocation (),
mAttribute_mInstructionListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element::~ GALGAS_ruleLabelImplementationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element::GALGAS_ruleLabelImplementationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                                              const GALGAS_location & inOperand3,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand4) :
mAttribute_mLabelName (inOperand0),
mAttribute_mSignatureForGeneration (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mEndOfArgumentLocation (inOperand3),
mAttribute_mInstructionListForGeneration (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleLabelImplementationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ruleLabelImplementationList_2D_element::objectCompare (const GALGAS_ruleLabelImplementationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLabelName.objectCompare (inOperand.mAttribute_mLabelName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignatureForGeneration.objectCompare (inOperand.mAttribute_mSignatureForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfArgumentLocation.objectCompare (inOperand.mAttribute_mEndOfArgumentLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionListForGeneration.objectCompare (inOperand.mAttribute_mInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ruleLabelImplementationList_2D_element::isValid (void) const {
  return mAttribute_mLabelName.isValid () && mAttribute_mSignatureForGeneration.isValid () && mAttribute_mSignature.isValid () && mAttribute_mEndOfArgumentLocation.isValid () && mAttribute_mInstructionListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList_2D_element::drop (void) {
  mAttribute_mLabelName.drop () ;
  mAttribute_mSignatureForGeneration.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mEndOfArgumentLocation.drop () ;
  mAttribute_mInstructionListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @ruleLabelImplementationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLabelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ruleLabelImplementationList_2D_element::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_ruleLabelImplementationList_2D_element::getter_mSignatureForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignatureForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_ruleLabelImplementationList_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ruleLabelImplementationList_2D_element::getter_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArgumentLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_ruleLabelImplementationList_2D_element::getter_mInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @ruleLabelImplementationList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ("ruleLabelImplementationList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ruleLabelImplementationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ruleLabelImplementationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleLabelImplementationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element::GALGAS_castInstructionBranchListAST_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mConstantVarName (),
mAttribute_mInstructionList (),
mAttribute_mTypeComparisonKind (),
mAttribute_mEndOfInstructions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element::~ GALGAS_castInstructionBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element::GALGAS_castInstructionBranchListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                const GALGAS_location & inOperand4) :
mAttribute_mTypeName (inOperand0),
mAttribute_mConstantVarName (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mTypeComparisonKind (inOperand3),
mAttribute_mEndOfInstructions (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_castInstructionBranchListAST_2D_element::objectCompare (const GALGAS_castInstructionBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantVarName.objectCompare (inOperand.mAttribute_mConstantVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeComparisonKind.objectCompare (inOperand.mAttribute_mTypeComparisonKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructions.objectCompare (inOperand.mAttribute_mEndOfInstructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_castInstructionBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mConstantVarName.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mTypeComparisonKind.isValid () && mAttribute_mEndOfInstructions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mConstantVarName.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mTypeComparisonKind.drop () ;
  mAttribute_mEndOfInstructions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @castInstructionBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_castInstructionBranchListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_castInstructionBranchListAST_2D_element::getter_mConstantVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST_2D_element::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_castInstructionBranchListAST_2D_element::getter_mEndOfInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @castInstructionBranchListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ("castInstructionBranchListAST-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_castInstructionBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (void) :
mAttribute_mTypeComparisonKind (),
mAttribute_mType (),
mAttribute_mCastedVarCppName (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element::~ GALGAS_castInstructionBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mAttribute_mTypeComparisonKind (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mCastedVarCppName (inOperand2),
mAttribute_mInstructionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::constructor_new (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_castInstructionBranchListForGeneration_2D_element::objectCompare (const GALGAS_castInstructionBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeComparisonKind.objectCompare (inOperand.mAttribute_mTypeComparisonKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCastedVarCppName.objectCompare (inOperand.mAttribute_mCastedVarCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_castInstructionBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mTypeComparisonKind.isValid () && mAttribute_mType.isValid () && mAttribute_mCastedVarCppName.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mTypeComparisonKind.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mCastedVarCppName.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @castInstructionBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCastedVarCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mCastedVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastedVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @castInstructionBranchListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ("castInstructionBranchListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) :
mAttribute_mOptionalTypeName (),
mAttribute_mOptionalConstantName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::~ GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mOptionalTypeName (inOperand0),
mAttribute_mOptionalConstantName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                const GALGAS_lstring & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionalTypeName.objectCompare (inOperand.mAttribute_mOptionalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionalConstantName.objectCompare (inOperand.mAttribute_mOptionalConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::isValid (void) const {
  return mAttribute_mOptionalTypeName.isValid () && mAttribute_mOptionalConstantName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::drop (void) {
  mAttribute_mOptionalTypeName.drop () ;
  mAttribute_mOptionalConstantName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectElementListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::getter_mOptionalConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalConstantName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @forInstructionEnumeratedObjectElementListAST-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ("forInstructionEnumeratedObjectElementListAST-element",
                                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (void) :
mAttribute_mLogMessage (),
mAttribute_mLogExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element::~ GALGAS_logListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_semanticExpressionAST & inOperand1) :
mAttribute_mLogMessage (inOperand0),
mAttribute_mLogExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_semanticExpressionAST & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_logListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_logListAST_2D_element::objectCompare (const GALGAS_logListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLogMessage.objectCompare (inOperand.mAttribute_mLogMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLogExpression.objectCompare (inOperand.mAttribute_mLogExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_logListAST_2D_element::isValid (void) const {
  return mAttribute_mLogMessage.isValid () && mAttribute_mLogExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST_2D_element::drop (void) {
  mAttribute_mLogMessage.drop () ;
  mAttribute_mLogExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @logListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLogMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_logListAST_2D_element::getter_mLogMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLogMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_logListAST_2D_element::getter_mLogExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLogExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @logListAST-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logListAST_2D_element ("logListAST-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_logListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_logListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element::GALGAS_matchEntryListAST_2D_element (void) :
mAttribute_mIsType (),
mAttribute_mTypeNameOrEnumerationConstantName (),
mAttribute_mLocalConstantName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element::~ GALGAS_matchEntryListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element::GALGAS_matchEntryListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_lstring & inOperand2) :
mAttribute_mIsType (inOperand0),
mAttribute_mTypeNameOrEnumerationConstantName (inOperand1),
mAttribute_mLocalConstantName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element GALGAS_matchEntryListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchEntryListAST_2D_element (GALGAS_bool::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchEntryListAST_2D_element::objectCompare (const GALGAS_matchEntryListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsType.objectCompare (inOperand.mAttribute_mIsType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeNameOrEnumerationConstantName.objectCompare (inOperand.mAttribute_mTypeNameOrEnumerationConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocalConstantName.objectCompare (inOperand.mAttribute_mLocalConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchEntryListAST_2D_element::isValid (void) const {
  return mAttribute_mIsType.isValid () && mAttribute_mTypeNameOrEnumerationConstantName.isValid () && mAttribute_mLocalConstantName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST_2D_element::drop (void) {
  mAttribute_mIsType.drop () ;
  mAttribute_mTypeNameOrEnumerationConstantName.drop () ;
  mAttribute_mLocalConstantName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @matchEntryListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_matchEntryListAST_2D_element::getter_mIsType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_matchEntryListAST_2D_element::getter_mTypeNameOrEnumerationConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeNameOrEnumerationConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_matchEntryListAST_2D_element::getter_mLocalConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocalConstantName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @matchEntryListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchEntryListAST_2D_element ("matchEntryListAST-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchEntryListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchEntryListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchEntryListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchEntryListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST_2D_element::GALGAS_switchExtractedValuesListAST_2D_element (void) :
mAttribute_mExtractedValueTypeName (),
mAttribute_mExtractedValueName (),
mAttribute_mMarkedAsUnused () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST_2D_element::~ GALGAS_switchExtractedValuesListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST_2D_element::GALGAS_switchExtractedValuesListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_bool & inOperand2) :
mAttribute_mExtractedValueTypeName (inOperand0),
mAttribute_mExtractedValueName (inOperand1),
mAttribute_mMarkedAsUnused (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchExtractedValuesListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_switchExtractedValuesListAST_2D_element::objectCompare (const GALGAS_switchExtractedValuesListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExtractedValueTypeName.objectCompare (inOperand.mAttribute_mExtractedValueTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtractedValueName.objectCompare (inOperand.mAttribute_mExtractedValueName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMarkedAsUnused.objectCompare (inOperand.mAttribute_mMarkedAsUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_switchExtractedValuesListAST_2D_element::isValid (void) const {
  return mAttribute_mExtractedValueTypeName.isValid () && mAttribute_mExtractedValueName.isValid () && mAttribute_mMarkedAsUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST_2D_element::drop (void) {
  mAttribute_mExtractedValueTypeName.drop () ;
  mAttribute_mExtractedValueName.drop () ;
  mAttribute_mMarkedAsUnused.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchExtractedValuesListAST_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @switchExtractedValuesListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_switchExtractedValuesListAST_2D_element::getter_mExtractedValueTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtractedValueTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_switchExtractedValuesListAST_2D_element::getter_mExtractedValueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtractedValueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_switchExtractedValuesListAST_2D_element::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMarkedAsUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @switchExtractedValuesListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ("switchExtractedValuesListAST-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchExtractedValuesListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchExtractedValuesListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchExtractedValuesListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) :
mAttribute_mType (),
mAttribute_mCppName (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element::~ GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_uint & inOperand2) :
mAttribute_mType (inOperand0),
mAttribute_mCppName (inOperand1),
mAttribute_mIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extractedAssociatedValuesForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_uint & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_extractedAssociatedValuesForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extractedAssociatedValuesForGeneration_2D_element::objectCompare (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppName.objectCompare (inOperand.mAttribute_mCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extractedAssociatedValuesForGeneration_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mCppName.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mCppName.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @extractedAssociatedValuesForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extractedAssociatedValuesForGeneration_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extractedAssociatedValuesForGeneration_2D_element::getter_mCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_extractedAssociatedValuesForGeneration_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @extractedAssociatedValuesForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ("extractedAssociatedValuesForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element::GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) :
mAttribute_mLeftNonterminalSymbol (),
mAttribute_mLeftNonterminalSymbolIndex (),
mAttribute_mInstructionList (),
mAttribute_mProductionIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element::~ GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element::GALGAS_productionRuleListForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1,
                                                                                                                const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                                const GALGAS_uint & inOperand3) :
mAttribute_mLeftNonterminalSymbol (inOperand0),
mAttribute_mLeftNonterminalSymbolIndex (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mProductionIndex (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element GALGAS_productionRuleListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_productionRuleListForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE),
                                                                 GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element GALGAS_productionRuleListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1,
                                                                                                                                const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                                                const GALGAS_uint & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_productionRuleListForGrammarAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_productionRuleListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLeftNonterminalSymbol.objectCompare (inOperand.mAttribute_mLeftNonterminalSymbol) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLeftNonterminalSymbolIndex.objectCompare (inOperand.mAttribute_mLeftNonterminalSymbolIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductionIndex.objectCompare (inOperand.mAttribute_mProductionIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_productionRuleListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mLeftNonterminalSymbol.isValid () && mAttribute_mLeftNonterminalSymbolIndex.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mProductionIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mLeftNonterminalSymbol.drop () ;
  mAttribute_mLeftNonterminalSymbolIndex.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mProductionIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @productionRuleListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLeftNonterminalSymbol.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLeftNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductionIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_productionRuleListForGrammarAnalysis_2D_element::getter_mLeftNonterminalSymbol (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftNonterminalSymbol ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis_2D_element::getter_mLeftNonterminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftNonterminalSymbolIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis_2D_element::getter_mProductionIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductionIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @productionRuleListForGrammarAnalysis-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2D_element ("productionRuleListForGrammarAnalysis-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_productionRuleListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_productionRuleListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_productionRuleListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element GALGAS_productionRuleListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis_2D_element result ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element * p = (const GALGAS_productionRuleListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_productionRuleListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mNonTerminalIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mNonTerminalIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                const GALGAS_uint & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalIndex.objectCompare (inOperand.mAttribute_mNonTerminalIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mNonTerminalIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mNonTerminalIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @unusedNonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @unusedNonTerminalSymbolMapForGrammarAnalysis-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ("unusedNonTerminalSymbolMapForGrammarAnalysis-element",
                                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) :
mAttribute_mNonTerminalSymbol (),
mAttribute_mNonTerminalIndex (),
mAttribute_mNonterminalSymbolParametersMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mAttribute_mNonTerminalSymbol (inOperand0),
mAttribute_mNonTerminalIndex (inOperand1),
mAttribute_mNonterminalSymbolParametersMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_uint::constructor_default (HERE),
                                                                          GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalSymbol.objectCompare (inOperand.mAttribute_mNonTerminalSymbol) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalIndex.objectCompare (inOperand.mAttribute_mNonTerminalIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalSymbolParametersMap.objectCompare (inOperand.mAttribute_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mNonTerminalSymbol.isValid () && mAttribute_mNonTerminalIndex.isValid () && mAttribute_mNonterminalSymbolParametersMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mNonTerminalSymbol.drop () ;
  mAttribute_mNonTerminalIndex.drop () ;
  mAttribute_mNonterminalSymbolParametersMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalSymbolSortedListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mNonTerminalSymbol.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::getter_mNonTerminalSymbol (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalSymbol ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::getter_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::getter_mNonterminalSymbolParametersMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalSymbolParametersMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @nonTerminalSymbolSortedListForGrammarAnalysis-element type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ("nonTerminalSymbolSortedListForGrammarAnalysis-element",
                                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) :
mAttribute_mProductionRulesList (),
mAttribute_mSyntaxComponentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::~ GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1) :
mAttribute_mProductionRulesList (inOperand0),
mAttribute_mSyntaxComponentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProductionRulesList.objectCompare (inOperand.mAttribute_mProductionRulesList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentName.objectCompare (inOperand.mAttribute_mSyntaxComponentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mProductionRulesList.isValid () && mAttribute_mSyntaxComponentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mProductionRulesList.drop () ;
  mAttribute_mSyntaxComponentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @syntaxComponentListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProductionRulesList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::getter_mProductionRulesList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductionRulesList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @syntaxComponentListForGrammarAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ("syntaxComponentListForGrammarAnalysis-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTerminalIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::~ GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mTerminalIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalIndex.objectCompare (inOperand.mAttribute_mTerminalIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminalIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTerminalIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @terminalSymbolsMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::getter_mTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @terminalSymbolsMapForGrammarAnalysis-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ("terminalSymbolsMapForGrammarAnalysis-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::~ GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::GALGAS_extensionMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_extensionMethodMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionMethodMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionMethodMapForGlobalCheckings_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForGlobalCheckings_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionMethodMapForGlobalCheckings_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @extensionMethodMapForGlobalCheckings-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ("extensionMethodMapForGlobalCheckings-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::~ GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::GALGAS_extensionSetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_extensionSetterMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionSetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionSetterMapForGlobalCheckings_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForGlobalCheckings_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionSetterMapForGlobalCheckings_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @extensionSetterMapForGlobalCheckings-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ("extensionSetterMapForGlobalCheckings-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::~ GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::GALGAS_extensionGetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_extensionGetterMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionGetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionGetterMapForGlobalCheckings_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForGlobalCheckings_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterMapForGlobalCheckings_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @extensionGetterMapForGlobalCheckings-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ("extensionGetterMapForGlobalCheckings-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) :
mAttribute_mFeatureName (),
mAttribute_mFeatureValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element::~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1) :
mAttribute_mFeatureName (inOperand0),
mAttribute_mFeatureValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_QualifiedFeatureList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_lstring & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_galgas_33_QualifiedFeatureList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_QualifiedFeatureList_2D_element::objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureName.objectCompare (inOperand.mAttribute_mFeatureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureValue.objectCompare (inOperand.mAttribute_mFeatureValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_QualifiedFeatureList_2D_element::isValid (void) const {
  return mAttribute_mFeatureName.isValid () && mAttribute_mFeatureValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::drop (void) {
  mAttribute_mFeatureName.drop () ;
  mAttribute_mFeatureValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @galgas3QualifiedFeatureList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFeatureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList_2D_element::getter_mFeatureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList_2D_element::getter_mFeatureValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @galgas3QualifiedFeatureList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ("galgas3QualifiedFeatureList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInclusion (),
mAttribute_mHeaderString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element::~ GALGAS_headerCompositionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_stringset & inOperand1,
                                                                                const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mInclusion (inOperand1),
mAttribute_mHeaderString (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_headerCompositionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_stringset::constructor_emptySet (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_headerCompositionMap_2D_element::objectCompare (const GALGAS_headerCompositionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInclusion.objectCompare (inOperand.mAttribute_mInclusion) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHeaderString.objectCompare (inOperand.mAttribute_mHeaderString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_headerCompositionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInclusion.isValid () && mAttribute_mHeaderString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerCompositionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInclusion.drop () ;
  mAttribute_mHeaderString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerCompositionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @headerCompositionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInclusion.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHeaderString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_headerCompositionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_headerCompositionMap_2D_element::getter_mInclusion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInclusion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_headerCompositionMap_2D_element::getter_mHeaderString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @headerCompositionMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ("headerCompositionMap-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_headerCompositionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_headerCompositionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerCompositionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHeaderFileName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element::~ GALGAS_headerRepartitionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHeaderFileName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_headerRepartitionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_string & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_headerRepartitionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_headerRepartitionMap_2D_element::objectCompare (const GALGAS_headerRepartitionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHeaderFileName.objectCompare (inOperand.mAttribute_mHeaderFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_headerRepartitionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHeaderFileName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerRepartitionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHeaderFileName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerRepartitionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @headerRepartitionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHeaderFileName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_headerRepartitionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_headerRepartitionMap_2D_element::getter_mHeaderFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderFileName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @headerRepartitionMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ("headerRepartitionMap-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_headerRepartitionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_headerRepartitionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerRepartitionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFeatureValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element::~ GALGAS_projectQualifiedFeatureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFeatureValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_projectQualifiedFeatureMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_projectQualifiedFeatureMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_projectQualifiedFeatureMap_2D_element::objectCompare (const GALGAS_projectQualifiedFeatureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureValue.objectCompare (inOperand.mAttribute_mFeatureValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_projectQualifiedFeatureMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFeatureValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectQualifiedFeatureMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFeatureValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectQualifiedFeatureMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @projectQualifiedFeatureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_projectQualifiedFeatureMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_projectQualifiedFeatureMap_2D_element::getter_mFeatureValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @projectQualifiedFeatureMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ("projectQualifiedFeatureMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_projectQualifiedFeatureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_projectQualifiedFeatureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectQualifiedFeatureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (void) :
mAttribute_mSemanticContext (),
mAttribute_mPredefinedTypes (),
mAttribute_mTemplateVariableMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext::~ GALGAS_templateAnalysisContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_templateVariableMap & inOperand2) :
mAttribute_mSemanticContext (inOperand0),
mAttribute_mPredefinedTypes (inOperand1),
mAttribute_mTemplateVariableMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateAnalysisContext (GALGAS_semanticContext::constructor_default (HERE),
                                         GALGAS_predefinedTypes::constructor_default (HERE),
                                         GALGAS_templateVariableMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateAnalysisContext::objectCompare (const GALGAS_templateAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticContext.objectCompare (inOperand.mAttribute_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPredefinedTypes.objectCompare (inOperand.mAttribute_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateVariableMap.objectCompare (inOperand.mAttribute_mTemplateVariableMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateAnalysisContext::isValid (void) const {
  return mAttribute_mSemanticContext.isValid () && mAttribute_mPredefinedTypes.isValid () && mAttribute_mTemplateVariableMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateAnalysisContext::drop (void) {
  mAttribute_mSemanticContext.drop () ;
  mAttribute_mPredefinedTypes.drop () ;
  mAttribute_mTemplateVariableMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateAnalysisContext::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @templateAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_templateAnalysisContext::getter_mSemanticContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_templateAnalysisContext::getter_mPredefinedTypes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateAnalysisContext::getter_mTemplateVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateVariableMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateAnalysisContext type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAnalysisContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@semanticExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_semanticExpressionForGeneration_generateExpression> gExtensionMethodTable_semanticExpressionForGeneration_generateExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateExpression (const int32_t inClassIndex,
                                              extensionMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) {
  gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_semanticExpressionForGeneration_generateExpression (void) {
  gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticExpressionForGeneration_generateExpression (NULL,
                                                                               freeExtensionMethod_semanticExpressionForGeneration_generateExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                             GALGAS_string & io_ioGeneratedCode,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             GALGAS_string & out_outCppExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticExpressionForGeneration_generateExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.count ()) {
      f = gExtensionMethodTable_semanticExpressionForGeneration_generateExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.count ()) {
           f = gExtensionMethodTable_semanticExpressionForGeneration_generateExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@semanticExpressionForGeneration isTrueExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression> gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isTrueExpression (const int32_t inClassIndex,
                                            enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression inGetter) {
  gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression f = NULL ;
    if (classIndex < gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression.count ()) {
      f = gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression.count ()) {
           f = gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_semanticExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_semanticExpressionForGeneration_isTrueExpression (void) {
  enterExtensionGetter_isTrueExpression (kTypeDescriptor_GALGAS_semanticExpressionForGeneration.mSlotID,
                                         extensionGetter_semanticExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_semanticExpressionForGeneration_isTrueExpression (void) {
  gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticExpressionForGeneration_isTrueExpression (defineExtensionGetter_semanticExpressionForGeneration_isTrueExpression,
                                                                             freeExtensionGetter_semanticExpressionForGeneration_isTrueExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addICNS_file'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 20)) ;
  }
  ioObject.mAttribute_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 21)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) :
mAttribute_mExpression (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::~ GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::GALGAS_templateInstructionIfBranchListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand1) :
mAttribute_mExpression (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element GALGAS_templateInstructionIfBranchListForGeneration_2D_element::constructor_new (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionIfBranchListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionIfBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionIfBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionIfBranchListForGeneration_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfBranchListForGeneration_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @templateInstructionIfBranchListForGeneration-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ("templateInstructionIfBranchListForGeneration-element",
                                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element GALGAS_templateInstructionIfBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration_2D_element result ;
  const GALGAS_templateInstructionIfBranchListForGeneration_2D_element * p = (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (void) :
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element::~ GALGAS_semanticExpressionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0) :
mAttribute_mExpression (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::constructor_new (const GALGAS_semanticExpressionForGeneration & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticExpressionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticExpressionListForGeneration_2D_element::objectCompare (const GALGAS_semanticExpressionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticExpressionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @semanticExpressionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionListForGeneration_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @semanticExpressionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ("semanticExpressionListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListForGeneration_2D_element::GALGAS_fixitListForGeneration_2D_element (void) :
mAttribute_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListForGeneration_2D_element::~ GALGAS_fixitListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListForGeneration_2D_element::GALGAS_fixitListForGeneration_2D_element (const GALGAS_fixitElementForGeneration & inOperand0) :
mAttribute_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListForGeneration_2D_element GALGAS_fixitListForGeneration_2D_element::constructor_new (const GALGAS_fixitElementForGeneration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_fixitListForGeneration_2D_element::objectCompare (const GALGAS_fixitListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElement.objectCompare (inOperand.mAttribute_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_fixitListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fixitListForGeneration_2D_element::drop (void) {
  mAttribute_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fixitListForGeneration_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @fixitListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitElementForGeneration GALGAS_fixitListForGeneration_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @fixitListForGeneration-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ("fixitListForGeneration-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fixitListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fixitListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListForGeneration_2D_element GALGAS_fixitListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration_2D_element result ;
  const GALGAS_fixitListForGeneration_2D_element * p = (const GALGAS_fixitListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) :
mAttribute_mEnumerationOrder (),
mAttribute_mEnumeratedExpression (),
mAttribute_mEnumeratorCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::~ GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2) :
mAttribute_mEnumerationOrder (inOperand0),
mAttribute_mEnumeratedExpression (inOperand1),
mAttribute_mEnumeratorCppName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumerationOrder.objectCompare (inOperand.mAttribute_mEnumerationOrder) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratedExpression.objectCompare (inOperand.mAttribute_mEnumeratedExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratorCppName.objectCompare (inOperand.mAttribute_mEnumeratorCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEnumerationOrder.isValid () && mAttribute_mEnumeratedExpression.isValid () && mAttribute_mEnumeratorCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::drop (void) {
  mAttribute_mEnumerationOrder.drop () ;
  mAttribute_mEnumeratedExpression.drop () ;
  mAttribute_mEnumeratorCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::getter_mEnumerationOrder (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationOrder ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::getter_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::getter_mEnumeratorCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratorCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @forInstructionEnumeratedObjectListForGeneration-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ("forInstructionEnumeratedObjectListForGeneration-element",
                                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateGetterCallInExpressionAST * object = (const cPtr_templateGetterCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateGetterCallInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4323 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inAnalysisContext, var_receiverExpression_4323, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 56)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_4454 = var_receiverExpression_4323.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 57)) ;
  GALGAS_getterMap var_getterMap_4536 = var_receiverType_4454.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 59)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList_4637 ;
  GALGAS_methodKind var_kind_4656 ;
  GALGAS_bool var_hasCompilerArgument_4684 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_4721 ;
  GALGAS_stringlist var_fieldList_4737 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 65)) ;
  const enumGalgasBool test_0 = var_getterMap_4536.getter_hasKey (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 66)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 66)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location joker_4898 ; // Joker input parameter
    GALGAS_methodQualifier joker_4954_2 ; // Joker input parameter
    GALGAS_string joker_4954_1 ; // Joker input parameter
    var_getterMap_4536.method_searchKey (object->mAttribute_mGetterName, var_kind_4656, var_getterFormalArgumentTypeList_4637, joker_4898, var_hasCompilerArgument_4684, var_returnedType_4721, joker_4954_2, joker_4954_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 67)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_matchingReaderCount_4999 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_receiverType_4454.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 77)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 77)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_getterFormalArgumentTypeList_4637 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 78)) ;
      var_hasCompilerArgument_4684 = GALGAS_bool (true) ;
      var_returnedType_4721 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
      var_kind_4656 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 81)) ;
      cEnumerator_typedPropertyList enumerator_5294 (var_receiverType_4454.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 82)), kEnumeration_up) ;
      while (enumerator_5294.hasCurrentObject ()) {
        GALGAS_getterMap var_aMap_5325 = enumerator_5294.current_mAttributeTypeProxy (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)) ;
        const cMapElement_getterMap * objectArray_5373 = (const cMapElement_getterMap *) var_aMap_5325.readAccessForWithInstruction (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 84))) ;
        if (NULL != objectArray_5373) {
            macroValidSharedObject (objectArray_5373, cMapElement_getterMap) ;
          var_matchingReaderCount_4999.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 85)) ;
          var_getterFormalArgumentTypeList_4637 = objectArray_5373->mAttribute_mArgumentTypeList ;
          var_hasCompilerArgument_4684 = objectArray_5373->mAttribute_mHasCompilerArgument ;
          var_returnedType_4721 = objectArray_5373->mAttribute_mReturnedType ;
          var_kind_4656 = objectArray_5373->mAttribute_mKind ;
          var_fieldList_4737.addAssign_operation (enumerator_5294.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 90))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 90)) ;
        }
        enumerator_5294.gotoNextObject () ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_matchingReaderCount_4999.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 94)), GALGAS_string ("the '@").add_operation (var_receiverType_4454.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 95)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 95)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 95)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 95)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 94)) ;
        var_getterFormalArgumentTypeList_4637.drop () ; // Release error dropped variable
        var_hasCompilerArgument_4684.drop () ; // Release error dropped variable
        var_returnedType_4721.drop () ; // Release error dropped variable
        var_kind_4656.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_4999.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_string var_s_6045 = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_6078 (var_fieldList_4737, kEnumeration_up) ;
          while (enumerator_6078.hasCurrentObject ()) {
            var_s_6045.plusAssign_operation(enumerator_6078.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)) ;
            if (enumerator_6078.hasNextObject ()) {
              var_s_6045.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 102)) ;
            }
            enumerator_6078.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 104)), GALGAS_string ("the '@").add_operation (var_receiverType_4454.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).add_operation (var_s_6045, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 106)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 106)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 104)) ;
          var_getterFormalArgumentTypeList_4637.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4684.drop () ; // Release error dropped variable
          var_returnedType_4721.drop () ; // Release error dropped variable
          var_kind_4656.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_getterMap_4536.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 109)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 110)), GALGAS_string ("the '@").add_operation (var_receiverType_4454.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 110)) ;
        var_getterFormalArgumentTypeList_4637.drop () ; // Release error dropped variable
        var_hasCompilerArgument_4684.drop () ; // Release error dropped variable
        var_returnedType_4721.drop () ; // Release error dropped variable
        var_kind_4656.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        GALGAS_string var_s_6707 = GALGAS_string::makeEmptyString () ;
        cEnumerator_getterMap enumerator_6738 (var_getterMap_4536, kEnumeration_up) ;
        while (enumerator_6738.hasCurrentObject ()) {
          var_s_6707.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_6738.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 116)) ;
          cEnumerator_functionSignature enumerator_6806 (enumerator_6738.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_6806.hasCurrentObject ()) {
            var_s_6707.plusAssign_operation(GALGAS_string (" \?@").add_operation (enumerator_6806.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)) ;
            enumerator_6806.gotoNextObject () ;
          }
          var_s_6707.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_6738.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 120)) ;
          enumerator_6738.gotoNextObject () ;
        }
        GALGAS_string temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_getterMap_4536.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 124)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = GALGAS_string ("getters are") ;
        }else if (kBoolFalse == test_9) {
          temp_8 = GALGAS_string ("getter is") ;
        }
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 122)), GALGAS_string ("the '@").add_operation (var_receiverType_4454.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 123)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 123)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 123)).add_operation (GALGAS_string ("' getter; available "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 123)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 123)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 124)).add_operation (var_s_6707, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 125)), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 122)) ;
        var_getterFormalArgumentTypeList_4637.drop () ; // Release error dropped variable
        var_hasCompilerArgument_4684.drop () ; // Release error dropped variable
        var_returnedType_4721.drop () ; // Release error dropped variable
        var_kind_4656.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 130)).objectCompare (var_getterFormalArgumentTypeList_4637.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 130)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 131)), GALGAS_string ("calling the '").add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)).add_operation (var_receiverType_4454.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)).add_operation (var_getterFormalArgumentTypeList_4637.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 132)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 133)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)), fixItArray12  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_11) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_7695 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 135)) ;
    cEnumerator_templateExpressionListAST enumerator_7730 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_7766 (var_getterFormalArgumentTypeList_4637, kEnumeration_up) ;
    while (enumerator_7730.hasCurrentObject () && enumerator_7766.hasCurrentObject ()) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_7766.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_7730.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_7766.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_7730.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 138)), GALGAS_string ("the selector should be '!").add_operation (enumerator_7766.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 138)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 138)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 138)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 138)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp_8084 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_7730.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_exp_8084, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 140)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7766.current_mFormalArgumentType (HERE), var_exp_8084.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 141)), enumerator_7730.current_mEndOfExpressionLocation (HERE), var_exp_8084, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 141)) ;
      }
      var_constructorEffectiveParameterList_7695.addAssign_operation (var_exp_8084  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 142)) ;
      enumerator_7730.gotoNextObject () ;
      enumerator_7766.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_4721, object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 146)), var_kind_4656, var_receiverExpression_4323, var_fieldList_4737, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 150)), var_constructorEffectiveParameterList_7695, var_hasCompilerArgument_4684  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 144)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST.mSlotID,
                                                   extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateConstructorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateConstructorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateConstructorAST * object = (const cPtr_templateConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateConstructorAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType_9113 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)) ;
  GALGAS_constructorMap var_constructorMap_9282 = var_constructorType_9113.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 165)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_9378 ;
  GALGAS_bool var_hasCompilerArgument_9406 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_9461 ;
  const cMapElement_constructorMap * objectArray_9468 = (const cMapElement_constructorMap *) var_constructorMap_9282.readAccessForWithInstruction (object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 170))) ;
  if (NULL != objectArray_9468) {
      macroValidSharedObject (objectArray_9468, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_9461 = objectArray_9468->mAttribute_mArgumentTypeList ;
    var_hasCompilerArgument_9406 = objectArray_9468->mAttribute_mHasCompilerArgument ;
    var_returnedType_9378 = objectArray_9468->mAttribute_mReturnedType ;
  }else{
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_constructorMap_9282.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 176)), GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 177)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 177)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)) ;
      var_constructorFormalArgumentTypeList_9461.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9406.drop () ; // Release error dropped variable
      var_returnedType_9378.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s_9903 = GALGAS_string::makeEmptyString () ;
      cEnumerator_constructorMap enumerator_9939 (var_constructorMap_9282, kEnumeration_up) ;
      while (enumerator_9939.hasCurrentObject ()) {
        var_s_9903.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_9939.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)) ;
        cEnumerator_functionSignature enumerator_10007 (enumerator_9939.current_mArgumentTypeList (HERE), kEnumeration_up) ;
        while (enumerator_10007.hasCurrentObject ()) {
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_10007.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = enumerator_10007.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string::makeEmptyString () ;
          }
          var_s_9903.plusAssign_operation(GALGAS_string (" \?").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)).add_operation (enumerator_10007.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
          enumerator_10007.gotoNextObject () ;
        }
        var_s_9903.plusAssign_operation(GALGAS_string (" -> @").add_operation (enumerator_9939.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)) ;
        enumerator_9939.gotoNextObject () ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_constructorMap_9282.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 190)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("available constructors are") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string ("available constructor is") ;
      }
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 188)), GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 189)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 189)).add_operation (object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 189)).add_operation (GALGAS_string ("' constructor; "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 189)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 189)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)).add_operation (var_s_9903, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)) ;
      var_constructorFormalArgumentTypeList_9461.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9406.drop () ; // Release error dropped variable
      var_returnedType_9378.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10650 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 197)).objectCompare (var_constructorFormalArgumentTypeList_9461.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 197)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 198)), GALGAS_string ("calling the '").add_operation (object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (var_constructorFormalArgumentTypeList_9461.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 200)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 201)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 201)), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 198)) ;
    var_constructorEffectiveParameterList_10650.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_7) {
    var_constructorEffectiveParameterList_10650 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 204)) ;
    cEnumerator_templateExpressionListAST enumerator_11172 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_11213 (var_constructorFormalArgumentTypeList_9461, kEnumeration_up) ;
    while (enumerator_11172.hasCurrentObject () && enumerator_11213.hasCurrentObject ()) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_11213.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_11172.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_string temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_11213.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_11) {
          temp_10 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_11172.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 207)), GALGAS_string ("the selector should be '!").add_operation (enumerator_11213.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 208)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 208)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 208)), fixItArray12  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 207)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp_11541 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_11172.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_exp_11541, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 210)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_11213.current_mFormalArgumentType (HERE), var_exp_11541.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 211)), enumerator_11172.current_mEndOfExpressionLocation (HERE), var_exp_11541, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 211)) ;
      }
      var_constructorEffectiveParameterList_10650.addAssign_operation (var_exp_11541  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 212)) ;
      enumerator_11172.gotoNextObject () ;
      enumerator_11213.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_9378, object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 218)), var_constructorType_9113, object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 220)), var_constructorEffectiveParameterList_10650, var_hasCompilerArgument_9406  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 216)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateConstructorAST.mSlotID,
                                                   extensionMethod_templateConstructorAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateConstructorAST_templateExpressionAnalysis (defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperTemplateCallAST * object = (const cPtr_templateFileWrapperTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperTemplateCallAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_mFileWrapperName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 232)), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray0  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                   extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_13247 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_13247, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13411 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_13411, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 247)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_13565 = var_leftExpression_13247.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 249)) ;
  {
  routine_checkDiadicOperator (var_leftType_13565, var_rightExpression_13411.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 252)), GALGAS_bool (kIsNotEqual, var_leftType_13565.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression_13411, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType_13565, object->mAttribute_mOperatorLocation, var_leftExpression_13247, var_rightExpression_13411  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                   extensionMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_14327 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_14327, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 273)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14491 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_14491, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 276)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_14645 = var_leftExpression_14327.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 278)) ;
  {
  routine_checkDiadicOperator (var_leftType_14645, var_rightExpression_14491.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 281)), GALGAS_bool (kIsNotEqual, var_leftType_14645.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 282)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 282)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 282)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression_14491, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 279)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType_14645, object->mAttribute_mOperatorLocation, var_leftExpression_14327, var_rightExpression_14491  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 288)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                   extensionMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_15406 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_15406, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 302)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15570 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_15570, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 305)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_15724 = var_leftExpression_15406.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 307)) ;
  {
  routine_checkDiadicOperator (var_leftType_15724, var_rightExpression_15570.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 310)), GALGAS_bool (kIsNotEqual, var_leftType_15724.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 311)).operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 311)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 311)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression_15570, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 308)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType_15724, object->mAttribute_mOperatorLocation, var_leftExpression_15406, var_rightExpression_15570  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 317)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                   extensionMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 329)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                   extensionMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 337)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                   extensionMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s_17236 = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_17272 (object->mAttribute_mLiteralStringList, kEnumeration_up) ;
  while (enumerator_17272.hasCurrentObject ()) {
    var_s_17236.plusAssign_operation(enumerator_17272.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 347)) ;
    enumerator_17272.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s_17236  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 349)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 359)), object->mAttribute_mLiteralInt.getter_uint (SOURCE_FILE ("templateAnalysis.galgas", 360))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 357)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 370)), object->mAttribute_mLiteralInt.getter_sint (SOURCE_FILE ("templateAnalysis.galgas", 371))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 368)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 381)), object->mAttribute_mLiteralInt.getter_uint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 382))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 379)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 392)), object->mAttribute_mLiteralInt.getter_sint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 393))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 390)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mLiteralChar.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 403)), object->mAttribute_mLiteralChar.getter_char (SOURCE_FILE ("templateAnalysis.galgas", 404))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 401)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mLiteralDouble.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 414)), object->mAttribute_mLiteralDouble.getter_double (SOURCE_FILE ("templateAnalysis.galgas", 415))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 412)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_20626 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression_20626, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 425)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_20766 = var_expression_20626.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 427)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_20766.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 428)).operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 428)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 428)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_20766.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 430)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 430)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 429)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_20766, object->mAttribute_mOperatorLocation, var_expression_20626  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 434)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                   extensionMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_21512 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression_21512, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 448)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_21652 = var_expression_21512.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 450)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_21652.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)).operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_21652.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 453)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 453)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 452)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_21652, object->mAttribute_mOperatorLocation, var_expression_21512  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 457)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                   extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOptionAccessAST * object = (const cPtr_templateOptionAccessAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOptionAccessAST) ;
  GALGAS_bool var_optionComponentIsPredefined_22484 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_22529 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_22574 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_22621 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_22672 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined_22484, var_boolOptionMap_22529, var_uintOptionMap_22574, var_stringOptionMap_22621, var_stringListOptionMap_22672, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 470)) ;
  GALGAS_bool var_found_22688 = var_boolOptionMap_22529.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_22770 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found_22688.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 480)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found_22688 = var_uintOptionMap_22574.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 481)) ;
    var_returnedType_22770 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found_22688.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 484)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found_22688 = var_stringOptionMap_22621.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 485)) ;
    var_returnedType_22770 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found_22688.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 488)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found_22688 = var_stringListOptionMap_22672.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 489)) ;
    var_returnedType_22770 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringListType ;
  }
  const enumGalgasBool test_3 = var_found_22688.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 493)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_22770, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 496)), var_optionComponentIsPredefined_22484, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 498)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 494)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 501)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 504)), var_optionComponentIsPredefined_22484, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 506)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 502)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 509)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 512)), var_optionComponentIsPredefined_22484, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 514)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 510)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 517)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 520)), var_optionComponentIsPredefined_22484, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 522)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 518)) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 526)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 526)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_string var_s_24691 = GALGAS_string::makeEmptyString () ;
    cEnumerator_commandLineOptionMap enumerator_24724 (var_boolOptionMap_22529, kEnumeration_up) ;
    while (enumerator_24724.hasCurrentObject ()) {
      var_s_24691.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_24724.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 531)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 531)) ;
      enumerator_24724.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_24810 (var_uintOptionMap_22574, kEnumeration_up) ;
    while (enumerator_24810.hasCurrentObject ()) {
      var_s_24691.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_24810.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 534)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 534)) ;
      enumerator_24810.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_24898 (var_stringOptionMap_22621, kEnumeration_up) ;
    while (enumerator_24898.hasCurrentObject ()) {
      var_s_24691.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_24898.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 537)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 537)) ;
      enumerator_24898.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mAttribute_mOptionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 539)), GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)).add_operation (object->mAttribute_mOptionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)).add_operation (var_s_24691, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 539)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                   extensionMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFunctionCallAST * object = (const cPtr_templateFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFunctionCallAST) ;
  GALGAS_functionSignature var_functionSignature_25834 ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_25876 ;
  GALGAS_bool var_isInternal_25902 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature_25834, var_resultType_25876, var_isInternal_25902, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 553)) ;
  const enumGalgasBool test_0 = var_isInternal_25902.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_25979 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.getter_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 561)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 562)).objectCompare (var_procDeclarationLocation_25979.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 562)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 563)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_25979.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 563)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 563)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 563)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature_25834.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 567)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 567)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 568)), GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 569)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 569)).add_operation (var_functionSignature_25834.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 569)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 569)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 569)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 570)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 570)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 570)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 568)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_26683 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 574)) ;
    cEnumerator_functionSignature enumerator_26756 (var_functionSignature_25834, kEnumeration_up) ;
    cEnumerator_templateExpressionListAST enumerator_26779 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_26756.hasCurrentObject () && enumerator_26779.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_26892 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_26779.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression_26892, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 576)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_26756.current_mFormalArgumentType (HERE), var_expression_26892.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 577)), enumerator_26779.current_mEndOfExpressionLocation (HERE), var_expression_26892, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 577)) ;
      }
      var_semanticExpressionListForGeneration_26683.addAssign_operation (var_expression_26892  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_26756.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_26779.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_26756.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_26756.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_26779.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 580)), GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580)), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580)) ;
      }
      enumerator_26756.gotoNextObject () ;
      enumerator_26779.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_25876, object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 585)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 586)), var_semanticExpressionListForGeneration_26683  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                   extensionMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateExtensionTemplateCallAST * object = (const cPtr_templateExtensionTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateExtensionTemplateCallAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_mTemplateName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 598)), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray0  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 598)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST.mSlotID,
                                                   extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateVarInExpressionAST * object = (const cPtr_templateVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateVarInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_28771 ;
  GALGAS_string var_sourceVariableCppName_28803 ;
  constinArgument_inAnalysisContext.mAttribute_mTemplateVariableMap.method_searchKey (object->mAttribute_mVarName, var_type_28771, var_sourceVariableCppName_28803, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)) ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_28771, object->mAttribute_mVarName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 615)), var_sourceVariableCppName_28803, var_sourceVariableCppName_28803  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                   extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_29656 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_29656, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_29820 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_29820, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 632)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_29974 = var_leftExpression_29656.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 634)) ;
  {
  routine_checkDiadicOperator (var_leftType_29974, var_rightExpression_29820.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 637)), GALGAS_bool (kIsNotEqual, var_leftType_29974.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 638)).operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 638)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 638)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression_29820, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 635)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType_29974, object->mAttribute_mOperatorLocation, var_leftExpression_29656, var_rightExpression_29820  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 644)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                   extensionMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_30978 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_30978, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 660)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_31142 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_31142, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 663)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_31296 = var_leftExpression_30978.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 665)) ;
  {
  routine_checkDiadicOperator (var_leftType_31296, var_rightExpression_31142.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 668)), GALGAS_bool (kIsNotEqual, var_leftType_31296.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 669)).operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 669)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 669)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression_31142, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 666)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType_31296, object->mAttribute_mOperatorLocation, var_leftExpression_30978, var_rightExpression_31142  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 675)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                   extensionMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_32305 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_32305, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 691)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_32469 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_32469, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 694)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_32623 = var_leftExpression_32305.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 696)) ;
  {
  routine_checkDiadicOperator (var_leftType_32623, var_rightExpression_32469.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 699)), GALGAS_bool (kIsNotEqual, var_leftType_32623.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 700)).operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 700)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 700)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression_32469, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 697)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType_32623, object->mAttribute_mOperatorLocation, var_leftExpression_32305, var_rightExpression_32469  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 706)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                   extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_33641 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_33641, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 722)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_33805 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_33805, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 725)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_33959 = var_leftExpression_33641.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 727)) ;
  {
  routine_checkDiadicOperator (var_leftType_33959, var_rightExpression_33805.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 730)), GALGAS_bool (kIsNotEqual, var_leftType_33959.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 731)).operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 731)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 731)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression_33805, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType_33959, object->mAttribute_mOperatorLocation, var_leftExpression_33641, var_rightExpression_33805  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 737)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                   extensionMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_34971 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_34971, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_35135 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_35135, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_35289 = var_leftExpression_34971.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 758)) ;
  {
  routine_checkDiadicOperator (var_leftType_35289, var_rightExpression_35135.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 761)), GALGAS_bool (kIsNotEqual, var_leftType_35289.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 762)).operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 762)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 762)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression_35135, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType_35289, object->mAttribute_mOperatorLocation, var_leftExpression_34971, var_rightExpression_35135  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 768)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                   extensionMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_36296 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression_36296, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 784)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_36436 = var_expression_36296.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 786)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_36436.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_36436.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 789)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 789)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 788)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_36436, object->mAttribute_mOperatorLocation, var_expression_36296  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 793)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                   extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_37518 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression_37518, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 808)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_37585 = var_expression_37518.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 810)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type_37585.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 811)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 811)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mStructFieldName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 812)), GALGAS_string ("the '.' operator requires the receiver to be a struct"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 812)) ;
  }
  GALGAS_attributeMap var_attributeMap_37794 = var_type_37585.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 814)) ;
  var_attributeMap_37794.method_searchKey (object->mAttribute_mStructFieldName, var_type_37585, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 815)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type_37585, object->mAttribute_mOperatorLocation, var_expression_37518, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 824)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                   extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_38870 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_38870, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 840)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_39034 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_39034, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 843)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_39188 = var_leftExpression_38870.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 845)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_39257 = var_rightExpression_39034.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 846)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_39188.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 847)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 847)).objectCompare (var_rightType_39257.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 847)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 847)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_39188.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 849)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 849)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 849)).add_operation (var_rightType_39257.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 849)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 849)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 849)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 848)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_38870, var_rightExpression_39034  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 853)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                   extensionMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_40148 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_40148, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 868)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40312 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_40312, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 871)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_40466 = var_leftExpression_40148.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 873)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_40535 = var_rightExpression_40312.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 874)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_40466.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 875)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 875)).objectCompare (var_rightType_40535.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 875)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 875)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_40466.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)).add_operation (var_rightType_40535.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 876)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_40148, var_rightExpression_40312  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 881)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                   extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_41428 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_41428, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 896)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_41592 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_41592, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 899)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_41746 = var_leftExpression_41428.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 901)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_41815 = var_rightExpression_41592.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 902)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_41746.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 903)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 903)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 903)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_41746.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 905)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 905)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 904)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_41746.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 907)).objectCompare (var_rightType_41815.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 907)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_41746.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)).add_operation (var_rightType_41815.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 909)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 908)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_41428, var_rightExpression_41592  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 913)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                   extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_42902 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_42902, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 928)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_43066 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_43066, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 931)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_43220 = var_leftExpression_42902.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 933)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_43289 = var_rightExpression_43066.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 934)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_43220.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 935)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 935)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 935)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_43220.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 937)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 937)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 936)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_43220.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 939)).objectCompare (var_rightType_43289.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 939)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_43220.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)).add_operation (var_rightType_43289.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_42902, var_rightExpression_43066  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 945)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_44378 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_44378, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 960)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_44542 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_44542, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 963)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_44696 = var_leftExpression_44378.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 965)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_44765 = var_rightExpression_44542.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 966)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_44696.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 967)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 967)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 967)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_44696.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 969)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 969)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 969)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 968)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_44696.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 971)).objectCompare (var_rightType_44765.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 971)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_44696.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)).add_operation (var_rightType_44765.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_44378, var_rightExpression_44542  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 977)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                   extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_45854 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_45854, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 992)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_46018 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_46018, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 995)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_46172 = var_leftExpression_45854.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 997)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_46241 = var_rightExpression_46018.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 998)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_46172.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 999)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 999)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 999)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_46172.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1001)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1001)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1001)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1000)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_46172.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1003)).objectCompare (var_rightType_46241.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1003)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_46172.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1005)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1005)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1005)).add_operation (var_rightType_46241.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1005)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1005)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1005)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1004)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_45854, var_rightExpression_46018  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1009)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_47337 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_47337, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1024)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47501 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_47501, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1027)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_47655 = var_leftExpression_47337.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1029)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_47724 = var_rightExpression_47501.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1030)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_47655.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1031)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1031)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1031)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_47655.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1033)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1033)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1033)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_47724.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1035)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_47724.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1037)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1037)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1037)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType_47655, object->mAttribute_mOperatorLocation, var_leftExpression_47337, var_rightExpression_47501  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1041)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                   extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_48726 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression_48726, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1056)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_48890 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression_48890, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1059)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_49044 = var_leftExpression_48726.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1061)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_49113 = var_rightExpression_48890.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1062)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_49044.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1063)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1063)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1063)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_49044.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1065)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1065)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1065)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1064)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_49113.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1067)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_49113.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType_49044, object->mAttribute_mOperatorLocation, var_leftExpression_48726, var_rightExpression_48890  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1073)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                   extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (object->mAttribute_mTemplateString  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1107))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                    extensionMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_51737 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression_51737, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1116)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_51737.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1117)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1117)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression_51737.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1118)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1118)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1118)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1118)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_51737  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1120))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                    extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_52420 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression_52420, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1129)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_52420.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1130)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1130)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression_52420.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1131)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1131)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1131)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1131)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1131)) ;
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_52684 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1133)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBlockInstructionList, var_blockInstructionList_52684, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_52420, object->mAttribute_mLocation, var_blockInstructionList_52684  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                    extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1143))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                  const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1151))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_54143 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression_54143, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1161)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_54308 = var_expression_54143.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1163)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1163)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_54308.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 1164)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_expression_54143.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1165)), GALGAS_string ("expression of '@").add_operation (var_expression_54143.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1165)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165)) ;
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_54616 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1168)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBeforeInstructionList, var_beforeInstructionList_54616, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1169)) ;
  }
  GALGAS_string var_enumeratorCppName_54816 = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mIndexIdentifier.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1171)).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1171)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1171)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1171)) ;
  GALGAS_templateVariableMap var_doVariableMap_54924 = constinArgument_inAnalysisContext.mAttribute_mTemplateVariableMap ;
  GALGAS_string var_cppIndexVarName_54995 = GALGAS_string ("index_").add_operation (object->mAttribute_mIndexIdentifier.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1173)).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1173)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1173)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1173)).add_operation (object->mAttribute_mIndexIdentifier.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1173)).getter_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1173)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexIdentifier.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1174)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    var_doVariableMap_54924.setter_insertKey (object->mAttribute_mIndexIdentifier, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, var_cppIndexVarName_54995, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1175)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_55317 (var_enumerationDescriptor_54308, kEnumeration_up) ;
  while (enumerator_55317.hasCurrentObject ()) {
    {
    var_doVariableMap_54924.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.add_operation (enumerator_55317.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), var_expression_54143.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1179))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), enumerator_55317.current_mEnumeratedType (HERE), var_enumeratorCppName_54816.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1181)).add_operation (enumerator_55317.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1181)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1181)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1181)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
    }
    enumerator_55317.gotoNextObject () ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_55580 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes, var_doVariableMap_54924  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1184)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_55737 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1188)) ;
  {
  routine_templateInstructionListAnalysis (var_doAnalysisContext_55580, object->mAttribute_mDoInstructionList, var_doInstructionList_55737, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1189)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_55931 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1191)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBetweenInstructionList, var_betweenInstructionList_55931, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1192)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_56131 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1194)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mAfterInstructionList, var_afterInstructionList_56131, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1195)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (object->mAttribute_mIsAscending, var_expression_54143, var_enumeratorCppName_54816, var_beforeInstructionList_54616, var_doInstructionList_55737, var_cppIndexVarName_54995, var_betweenInstructionList_55931, var_afterInstructionList_56131  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1197))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1197)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                    extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_56880 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1213)) ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_56975 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_56975.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_57026 ;
    callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_56975.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression_57026, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1216)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_57026.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1217)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1217)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_expression_57026.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1218)), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression_57026.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1218)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1218)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1218)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1218)) ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_57315 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1220)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_56975.current_mInstructionList (HERE), var_instructionList_57315, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1221)) ;
    }
    var_templateInstructionIfBranchList_56880.addAssign_operation (var_expression_57026, var_instructionList_57315  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1222)) ;
    enumerator_56975.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_57557 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1225)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mElseInstructionList, var_elseInstructionList_57557, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1226)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_56880, var_elseInstructionList_57557  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1228))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1228)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                    extensionMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_58202 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), constinArgument_inAnalysisContext, var_switchExpression_58202, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1240)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression_58202.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1241)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1241)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("templateAnalysis.galgas", 1241)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_switchExpression_58202.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1242)), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_kind (var_switchExpression_58202.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1242)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1242)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1242)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1242)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1242)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1242)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap_58570 = var_switchExpression_58202.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1244)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1244)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_58669 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1246)) ;
  GALGAS_stringset var_namedConstantSet_58746 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 1247)) ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_58810 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_58810.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_58841 (enumerator_58810.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_58841.hasCurrentObject ()) {
      const enumGalgasBool test_2 = var_enumConstantMap_58570.getter_hasKey (enumerator_58841.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1250)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1250)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1250)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_58841.current_mValue (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1251)), GALGAS_string ("the '").add_operation (enumerator_58841.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1251)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1251)).add_operation (GALGAS_string ("' is not a contant of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1251)).add_operation (var_switchExpression_58202.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1251)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1251)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1251)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1251)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1251)) ;
      }
      const enumGalgasBool test_4 = var_namedConstantSet_58746.getter_hasKey (enumerator_58841.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1253)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1253)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_58841.current_mValue (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1254)), GALGAS_string ("the '").add_operation (enumerator_58841.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1254)).add_operation (GALGAS_string ("' constant is already named in the switch instruction"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1254)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1254)) ;
      }
      var_namedConstantSet_58746.addAssign_operation (enumerator_58841.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1256))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1256)) ;
      enumerator_58841.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_59285 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1258)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_58810.current_mInstructionList (HERE), var_instructionList_59285, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1259)) ;
    }
    var_templateInstructionSwitchBranchList_58669.addAssign_operation (enumerator_58810.current_mConstantList (HERE), var_instructionList_59285  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1260)) ;
    enumerator_58810.gotoNextObject () ;
  }
  GALGAS_stringset var_missingConstants_59568 = var_enumConstantMap_58570.getter_keySet (SOURCE_FILE ("templateAnalysis.galgas", 1263)).substract_operation (var_namedConstantSet_58746, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1263)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_missingConstants_59568.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 1264)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_string var_m_59667 = GALGAS_string ("all constants should be named in a switch instruction; the following constants are missing:") ;
    cEnumerator_stringset enumerator_59794 (var_missingConstants_59568, kEnumeration_up) ;
    while (enumerator_59794.hasCurrentObject ()) {
      var_m_59667.plusAssign_operation(GALGAS_string ("\n"
        "  - '").add_operation (enumerator_59794.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)) ;
      enumerator_59794.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mSwitchExpressionEndLocation, var_m_59667, fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_58202, var_templateInstructionSwitchBranchList_58669  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                    extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (object->mAttribute_mTemplateString.getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                               extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_cppName_3711 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3711, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName_3711, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                               extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_indendationVarCppName_4330 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 84)) ;
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mBlockInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                               extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_foreachVarCppName_6501 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_6501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_6501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mIsAscending.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_up") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_down") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 140)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (var_foreachVarCppName_6501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 143)).add_operation (object->mAttribute_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 146)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBeforeInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 161)) ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mDoInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 163)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 174)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBetweenInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 175)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 183)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 184)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mIndexCppName.add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 188)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mEnumeratorCppName.add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 191)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 192)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 193)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 195)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 197)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mAfterInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 198)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 206)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 207)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 210)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 211)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                               extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_9835 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_9835.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_9884 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9835.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_9884, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 225)) ;
    GALGAS_string var_testVar_10050 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (var_ifVarCppName_9884, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 229)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_9835.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 230)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 238)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 240)) ;
    }
    enumerator_9835.gotoNextObject () ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 243)) ;
  }
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_10982 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_10982.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 252)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 253)) ;
    enumerator_10982.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                               extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_switchVarCppName_11474 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11474, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_11474, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 270)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 271)) ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11909 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_11909.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11940 (enumerator_11909.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_11940.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (enumerator_11940.current_mValue (HERE).getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)) ;
      enumerator_11940.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 277)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_11909.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 278)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 279)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)) ;
      }
      {
      routine_templateCodeGenerationForListInstruction (enumerator_11909.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 281)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 289)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 290)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 292)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 293)) ;
    }
    enumerator_11909.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                               extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                   GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              extensionGetter_lexicalOrExpressionAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32CharRange (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mLowerBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 41)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 42)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mUpperBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 43)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@lexicalStringMatchAST generateConditionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (object->mAttribute_mString.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 53)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 54)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 54)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 55)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              extensionGetter_lexicalStringMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 64)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 65)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 66)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 66)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 67)) ;
  result_outGeneratedCode.plusAssign_operation(inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                              extensionGetter_lexicalStringNotMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32Char (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 79)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 79)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 80)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForCharWithFunction (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 89)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 90)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 111)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mUnsigned.getter_uint (SOURCE_FILE ("lexiqueGeneration.galgas", 118)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 118)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("previousChar ()") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_function_").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7628 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_7628.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7628.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
    enumerator_7628.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 150)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 157)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mDefaultSentTerminal.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       GALGAS_string inArgument_inScannerClassName,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (inArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (object->mAttribute_mDefaultErrorMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalStructuredSendInstructionAST generateInstructionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                  GALGAS_string inArgument_inScannerClassName,
                                                                                                  GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_11026 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_11026.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_11026.current_mSearchListName (HERE).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (enumerator_11026.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    enumerator_11026.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 208)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalDropInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                        GALGAS_string /* inArgument_inScannerClassName */,
                                                                                        GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 218)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 218)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionGetter_lexicalDropInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSimpleSendInstructionAST generateInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mSentTerminal.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRepeatInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 239)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12862 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_12862.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12862.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)) ;
    enumerator_12862.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_13021 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_13021.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 247)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13021.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13267 (enumerator_13021.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_13267.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13267.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)) ;
      enumerator_13267.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)) ;
    }
    if (enumerator_13021.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 256)) ;
    }
    enumerator_13021.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = false ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 258)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 261)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop) ;\n"
    "mLoop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 262)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode, NULL) ;

