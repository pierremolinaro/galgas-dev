#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegularFileMap (),
mProperty_mDirectoryMap (),
mProperty_mWrapperDirectoryIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element::~ GALGAS_wrapperDirectoryMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_wrapperFileMap & inOperand1,
                                                                              const GALGAS_wrapperDirectoryMap & inOperand2,
                                                                              const GALGAS_uint & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mRegularFileMap (inOperand1),
mProperty_mDirectoryMap (inOperand2),
mProperty_mWrapperDirectoryIndex (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperDirectoryMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                                GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                                GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_wrapperDirectoryMap_2D_element::objectCompare (const GALGAS_wrapperDirectoryMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularFileMap.objectCompare (inOperand.mProperty_mRegularFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDirectoryMap.objectCompare (inOperand.mProperty_mDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWrapperDirectoryIndex.objectCompare (inOperand.mProperty_mWrapperDirectoryIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperDirectoryMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegularFileMap.isValid () && mProperty_mDirectoryMap.isValid () && mProperty_mWrapperDirectoryIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegularFileMap.drop () ;
  mProperty_mDirectoryMap.drop () ;
  mProperty_mWrapperDirectoryIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperDirectoryMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_wrapperDirectoryMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_wrapperDirectoryMap_2D_element::getter_mRegularFileMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularFileMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap_2D_element::getter_mDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDirectoryMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_wrapperDirectoryMap_2D_element::getter_mWrapperDirectoryIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWrapperDirectoryIndex ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperDirectoryMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ("wrapperDirectoryMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperDirectoryMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperDirectoryMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperDirectoryMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTemplateSignature (),
mProperty_mFilewrapperTemplatePath () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element::~ GALGAS_filewrapperTemplateMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mTemplateSignature (inOperand1),
mProperty_mFilewrapperTemplatePath (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_functionSignature::constructor_emptyList (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperTemplateMap_2D_element::objectCompare (const GALGAS_filewrapperTemplateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTemplateSignature.objectCompare (inOperand.mProperty_mTemplateSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplatePath.objectCompare (inOperand.mProperty_mFilewrapperTemplatePath) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperTemplateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTemplateSignature.isValid () && mProperty_mFilewrapperTemplatePath.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTemplateSignature.drop () ;
  mProperty_mFilewrapperTemplatePath.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTemplateSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_filewrapperTemplateMap_2D_element::getter_mTemplateSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateMap_2D_element::getter_mFilewrapperTemplatePath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperTemplatePath ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ("filewrapperTemplateMap-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (void) :
mProperty_lkey (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperExtensionList (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateMap (),
mProperty_mIsInternal () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element::~ GALGAS_filewrapperMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_lstringlist & inOperand2,
                                                                    const GALGAS_wrapperFileMap & inOperand3,
                                                                    const GALGAS_wrapperDirectoryMap & inOperand4,
                                                                    const GALGAS_filewrapperTemplateMap & inOperand5,
                                                                    const GALGAS_bool & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mFilewrapperPath (inOperand1),
mProperty_mFilewrapperExtensionList (inOperand2),
mProperty_mFilewrapperFileMap (inOperand3),
mProperty_mFilewrapperDirectoryMap (inOperand4),
mProperty_mFilewrapperTemplateMap (inOperand5),
mProperty_mIsInternal (inOperand6) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                           GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                           GALGAS_filewrapperTemplateMap::constructor_emptyMap (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperMap_2D_element::objectCompare (const GALGAS_filewrapperMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperPath.objectCompare (inOperand.mProperty_mFilewrapperPath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperExtensionList.objectCompare (inOperand.mProperty_mFilewrapperExtensionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperFileMap.objectCompare (inOperand.mProperty_mFilewrapperFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperDirectoryMap.objectCompare (inOperand.mProperty_mFilewrapperDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplateMap.objectCompare (inOperand.mProperty_mFilewrapperTemplateMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsInternal.objectCompare (inOperand.mProperty_mIsInternal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFilewrapperPath.isValid () && mProperty_mFilewrapperExtensionList.isValid () && mProperty_mFilewrapperFileMap.isValid () && mProperty_mFilewrapperDirectoryMap.isValid () && mProperty_mFilewrapperTemplateMap.isValid () && mProperty_mIsInternal.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFilewrapperPath.drop () ;
  mProperty_mFilewrapperExtensionList.drop () ;
  mProperty_mFilewrapperFileMap.drop () ;
  mProperty_mFilewrapperDirectoryMap.drop () ;
  mProperty_mFilewrapperTemplateMap.drop () ;
  mProperty_mIsInternal.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @filewrapperMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperExtensionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperTemplateMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperMap_2D_element::getter_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperMap_2D_element::getter_mFilewrapperExtensionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperExtensionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_filewrapperMap_2D_element::getter_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperFileMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_filewrapperMap_2D_element::getter_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperDirectoryMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap GALGAS_filewrapperMap_2D_element::getter_mFilewrapperTemplateMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilewrapperTemplateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperMap_2D_element::getter_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsInternal ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperMap_2D_element ("filewrapperMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPredefined (),
mProperty_mBoolOptionMap (),
mProperty_mUIntOptionMap (),
mProperty_mStringOptionMap (),
mProperty_mStringListOptionMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand3,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand4,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mIsPredefined (inOperand1),
mProperty_mBoolOptionMap (inOperand2),
mProperty_mUIntOptionMap (inOperand3),
mProperty_mStringOptionMap (inOperand4),
mProperty_mStringListOptionMap (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPredefined.objectCompare (inOperand.mProperty_mIsPredefined) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoolOptionMap.objectCompare (inOperand.mProperty_mBoolOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUIntOptionMap.objectCompare (inOperand.mProperty_mUIntOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringOptionMap.objectCompare (inOperand.mProperty_mStringOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStringListOptionMap.objectCompare (inOperand.mProperty_mStringListOptionMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPredefined.isValid () && mProperty_mBoolOptionMap.isValid () && mProperty_mUIntOptionMap.isValid () && mProperty_mStringOptionMap.isValid () && mProperty_mStringListOptionMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPredefined.drop () ;
  mProperty_mBoolOptionMap.drop () ;
  mProperty_mUIntOptionMap.drop () ;
  mProperty_mStringOptionMap.drop () ;
  mProperty_mStringListOptionMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @optionComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoolOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUIntOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStringListOptionMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPredefined ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mBoolOptionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoolOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mUIntOptionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUIntOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mStringOptionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::getter_mStringListOptionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringListOptionMap ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentMapForSemanticAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ("optionComponentMapForSemanticAnalysis-element",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mTerminalMap (),
mProperty_mIndexingListAST (),
mProperty_mIndexingDirectory () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_terminalMap & inOperand1,
                                                                                                                    const GALGAS_indexingListAST & inOperand2,
                                                                                                                    const GALGAS_lstring & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mTerminalMap (inOperand1),
mProperty_mIndexingListAST (inOperand2),
mProperty_mIndexingDirectory (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_terminalMap::constructor_emptyMap (HERE),
                                                                   GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalMap.objectCompare (inOperand.mProperty_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndexingListAST.objectCompare (inOperand.mProperty_mIndexingListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndexingDirectory.objectCompare (inOperand.mProperty_mIndexingDirectory) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mIndexingListAST.isValid () && mProperty_mIndexingDirectory.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mIndexingListAST.drop () ;
  mProperty_mIndexingDirectory.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @lexiqueComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndexingDirectory.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_mTerminalMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexingListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::getter_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexingDirectory ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentMapForSemanticAnalysis-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ("lexiqueComponentMapForSemanticAnalysis-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element::GALGAS_syntaxComponentMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element::~ GALGAS_syntaxComponentMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element::GALGAS_syntaxComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                            const GALGAS_syntaxRuleListAST & inOperand3,
                                                                            const GALGAS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mLexiqueName (inOperand1),
mProperty_mNonterminalDeclarationList (inOperand2),
mProperty_mRuleList (inOperand3),
mProperty_mHasTranslateFeature (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element GALGAS_syntaxComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                               GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                               GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxComponentMap_2D_element::objectCompare (const GALGAS_syntaxComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueName.objectCompare (inOperand.mProperty_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalDeclarationList.objectCompare (inOperand.mProperty_mNonterminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRuleList.objectCompare (inOperand.mProperty_mRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasTranslateFeature.objectCompare (inOperand.mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxComponentMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexiqueName.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @syntaxComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxComponentMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxComponentMap_2D_element::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexiqueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_syntaxComponentMap_2D_element::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonterminalDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxComponentMap_2D_element::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRuleList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_syntaxComponentMap_2D_element::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasTranslateFeature ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxComponentMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ("syntaxComponentMap-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::~ GALGAS_extensionMethodMapForType_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_formalParameterListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionMethodMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodMapForType_2D_element::objectCompare (const GALGAS_extensionMethodMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionMethodMapForType_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_extensionMethodMapForType_2D_element::getter_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalParameterList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForType-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ("extensionMethodMapForType-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForType_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionMethodMapForType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::~ GALGAS_extensionMethodMapForBuildingContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionMethodMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionMethodMapForType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMethodMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionMethodMapForType::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionMethodMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionMethodMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionMethodMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionMethodMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionMethodMapForType.objectCompare (inOperand.mProperty_mExtensionMethodMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionMethodMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionMethodMapForType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionMethodMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtensionMethodMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionMethodMapForBuildingContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForBuildingContext_2D_element::getter_mExtensionMethodMapForType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionMethodMapForType ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForBuildingContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ("extensionMethodMapForBuildingContext-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::~ GALGAS_extensionSetterMapForType_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_formalParameterListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionSetterMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterMapForType_2D_element::objectCompare (const GALGAS_extensionSetterMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionSetterMapForType_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_extensionSetterMapForType_2D_element::getter_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalParameterList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForType-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ("extensionSetterMapForType-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionSetterMapForType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::~ GALGAS_extensionSetterMapForBuildingContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionSetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionSetterMapForType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionSetterMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_extensionSetterMapForType::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_extensionSetterMapForType & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionSetterMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionSetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionSetterMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtensionSetterMapForType.objectCompare (inOperand.mProperty_mExtensionSetterMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionSetterMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionSetterMapForType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @extensionSetterMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtensionSetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionSetterMapForBuildingContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForBuildingContext_2D_element::getter_mExtensionSetterMapForType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionSetterMapForType ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForBuildingContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ("extensionSetterMapForBuildingContext-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mResultTypeName (),
mProperty_mInputFormalParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::~ GALGAS_extensionGetterMapForType_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_formalInputParameterListAST & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultTypeName (inOperand1),
mProperty_mInputFormalParameterList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionGetterMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formalInputParameterListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterMapForType_2D_element::objectCompare (const GALGAS_extensionGetterMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultTypeName.objectCompare (inOperand.mProperty_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInputFormalParameterList.objectCompare (inOperand.mProperty_mInputFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mInputFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultTypeName.drop () ;
  mProperty_mInputFormalParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @extensionGetterMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInputFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterMapForType_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterMapForType_2D_element::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_extensionGetterMapForType_2D_element::getter_mInputFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInputFormalParameterList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForType-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ("extensionGetterMapForType-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_lstring GALGAS_extensionGetterMapForBuildingContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForBuildingContext_2D_element::getter_mExtensionGetterMapForType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtensionGetterMapForType ;
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

GALGAS_lstring GALGAS_wrapperExtensionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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

GALGAS_lstring GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_formalParameterListForGeneration_2D_element::getter_mFormalArgumentCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentCppName ;
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

GALGAS_lstring GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalArgumentCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalInputParameterListForGeneration_2D_element::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsConstant ;
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

GALGAS_actualParameterForGeneration GALGAS_actualParameterListForGeneration_2D_element::getter_mActualParameter (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameter ;
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

GALGAS_formalArgumentPassingModeAST GALGAS_signatureForGrammarAnalysis_2D_element::getter_mFormalArgumentPassingModeForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_signatureForGrammarAnalysis_2D_element::getter_mGalgasTypeNameForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGalgasTypeNameForGrammarAnalysis ;
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

GALGAS_lstring GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::getter_mFormalParametersList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFormalParametersList ;
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

GALGAS_lstring GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonTerminalIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_mNonterminalSymbolParametersMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonterminalSymbolParametersMap ;
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_localConstantList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localConstantList_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localConstantList_2D_element::getter_mNoWarningIfUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNoWarningIfUnused ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localConstantList_2D_element::getter_mCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppName ;
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_localInitializedVariableList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localInitializedVariableList_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localInitializedVariableList_2D_element::getter_mCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppName ;
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

GALGAS_lstring GALGAS_propertyIndexMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_propertyIndexMap_2D_element::getter_mPropertyTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeIndex ;
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

GALGAS_lstring GALGAS_nonterminalLabelMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_nonterminalLabelMap_2D_element::getter_mSignatureForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_nonterminalLabelMap_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_nonterminalLabelMap_2D_element::getter_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArgumentLocation ;
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

GALGAS_lstring GALGAS_nonterminalMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap GALGAS_nonterminalMap_2D_element::getter_mLabelMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelMap ;
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

GALGAS_lstring GALGAS_ruleLabelImplementationList_2D_element::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_ruleLabelImplementationList_2D_element::getter_mSignatureForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_ruleLabelImplementationList_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ruleLabelImplementationList_2D_element::getter_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArgumentLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_ruleLabelImplementationList_2D_element::getter_mInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionListForGeneration ;
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

GALGAS_lstring GALGAS_uselessEntityLocationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_uselessEntityLocationMap_2D_element::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
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

GALGAS_lstring GALGAS_actualOutputExpressionList_2D_element::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_actualOutputExpressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_actualOutputExpressionList_2D_element::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpressionLocation ;
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

GALGAS_lstring GALGAS_castInstructionBranchListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInstructionBranchListAST_2D_element::getter_mConstantVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST_2D_element::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeComparisonKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_castInstructionBranchListAST_2D_element::getter_mEndOfInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInstructions ;
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

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeComparisonKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mCastedVarCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCastedVarCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
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

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::getter_mDeclaredAsUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclaredAsUnused ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::getter_mOptionalConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalConstantName ;
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

GALGAS_lstring GALGAS_optionalMethodActualArgumentList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgument GALGAS_optionalMethodActualArgumentList_2D_element::getter_mActualArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualArgument ;
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

GALGAS_lstring GALGAS_logListAST_2D_element::getter_mLogMessage (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLogMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_logListAST_2D_element::getter_mLogExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLogExpression ;
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

GALGAS_bool GALGAS_matchEntryListAST_2D_element::getter_mIsType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_matchEntryListAST_2D_element::getter_mTypeNameOrEnumerationConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeNameOrEnumerationConstantName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_matchEntryListAST_2D_element::getter_mLocalConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalConstantName ;
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

GALGAS_lstring GALGAS_switchExtractedValuesListAST_2D_element::getter_mExtractedValueTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtractedValueTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_switchExtractedValuesListAST_2D_element::getter_mExtractedValueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtractedValueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_switchExtractedValuesListAST_2D_element::getter_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMarkedAsUnused ;
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_extractedAssociatedValuesForGeneration_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extractedAssociatedValuesForGeneration_2D_element::getter_mCppName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_extractedAssociatedValuesForGeneration_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
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

GALGAS_lstring GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::getter_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonTerminalIndex ;
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

GALGAS_lstring GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::getter_mNonTerminalSymbol (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonTerminalSymbol ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::getter_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonTerminalIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::getter_mNonterminalSymbolParametersMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonterminalSymbolParametersMap ;
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

GALGAS_productionRuleListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::getter_mProductionRulesList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductionRulesList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponentName ;
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

GALGAS_lstring GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::getter_mTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTerminalIndex ;
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

GALGAS_lstring GALGAS_extensionMethodMapForGlobalCheckings_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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

GALGAS_lstring GALGAS_extensionSetterMapForGlobalCheckings_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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

GALGAS_lstring GALGAS_extensionGetterMapForGlobalCheckings_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
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

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList_2D_element::getter_mFeatureName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFeatureName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList_2D_element::getter_mFeatureValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFeatureValue ;
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

GALGAS_lstring GALGAS_headerCompositionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_headerCompositionMap_2D_element::getter_mInclusion (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInclusion ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerCompositionMap_2D_element::getter_mHeaderString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHeaderString ;
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

GALGAS_lstring GALGAS_headerRepartitionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerRepartitionMap_2D_element::getter_mHeaderFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHeaderFileName ;
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

GALGAS_lstring GALGAS_projectQualifiedFeatureMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_projectQualifiedFeatureMap_2D_element::getter_mFeatureValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFeatureValue ;
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

GALGAS_luint GALGAS_templateLiteralUIntExpressionAST::getter_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralUIntExpressionAST * p = (const cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    result = p->mProperty_mLiteralInt ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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

GALGAS_lsint GALGAS_templateLiteralSIntExpressionAST::getter_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_lsint result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralSIntExpressionAST * p = (const cPtr_templateLiteralSIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralSIntExpressionAST) ;
    result = p->mProperty_mLiteralInt ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint GALGAS_templateLiteralSIntExpressionAST::readProperty_mLiteralInt (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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

GALGAS_luint_36__34_ GALGAS_templateLiteralUInt_36__34_ExpressionAST::getter_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralUInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
    result = p->mProperty_mLiteralInt ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ GALGAS_templateLiteralUInt_36__34_ExpressionAST::readProperty_mLiteralInt (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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

GALGAS_lsint_36__34_ GALGAS_templateLiteralSInt_36__34_ExpressionAST::getter_mLiteralInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_lsint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralSInt_36__34_ExpressionAST * p = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
    result = p->mProperty_mLiteralInt ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ GALGAS_templateLiteralSInt_36__34_ExpressionAST::readProperty_mLiteralInt (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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

GALGAS_lchar GALGAS_templateLiteralCharExpressionAST::getter_mLiteralChar (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralCharExpressionAST * p = (const cPtr_templateLiteralCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
    result = p->mProperty_mLiteralChar ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_templateLiteralCharExpressionAST::readProperty_mLiteralChar (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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

GALGAS_ldouble GALGAS_templateLiteralDoubleExpressionAST::getter_mLiteralDouble (UNUSED_LOCATION_ARGS) const {
  GALGAS_ldouble result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralDoubleExpressionAST * p = (const cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
    result = p->mProperty_mLiteralDouble ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_templateLiteralDoubleExpressionAST::readProperty_mLiteralDouble (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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
// @semanticExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticExpressionForGeneration::objectCompare (const GALGAS_semanticExpressionForGeneration & inOperand) const {
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

GALGAS_semanticExpressionForGeneration::GALGAS_semanticExpressionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration::GALGAS_semanticExpressionForGeneration (const cPtr_semanticExpressionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_semanticExpressionForGeneration::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticExpressionForGeneration * p = (const cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_semanticExpressionForGeneration::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticExpressionForGeneration * p = (const cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionForGeneration::setter_setMResultType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    p->mProperty_mResultType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionForGeneration::setter_setMLocation (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_semanticExpressionForGeneration::readProperty_mResultType (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_semanticExpressionForGeneration::readProperty_mLocation (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticExpressionForGeneration::cPtr_semanticExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                            const GALGAS_location & in_mLocation
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mResultType (in_mResultType),
mProperty_mLocation (in_mLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionForGeneration ("semanticExpressionForGeneration",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration result ;
  const GALGAS_semanticExpressionForGeneration * p = (const GALGAS_semanticExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateBlockInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateBlockInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlockInstructionList.objectCompare (p->mProperty_mBlockInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateBlockInstructionForGeneration::objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const {
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

GALGAS_templateBlockInstructionForGeneration::GALGAS_templateBlockInstructionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration::GALGAS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                                            const GALGAS_templateInstructionListForGeneration & inAttribute_mBlockInstructionList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mLocation.isValid () && inAttribute_mBlockInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateBlockInstructionForGeneration (inAttribute_mExpression, inAttribute_mLocation, inAttribute_mBlockInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateBlockInstructionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateBlockInstructionForGeneration::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateBlockInstructionForGeneration::getter_mBlockInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateBlockInstructionForGeneration * p = (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    result = p->mProperty_mBlockInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateBlockInstructionForGeneration::readProperty_mExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateBlockInstructionForGeneration::readProperty_mLocation (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateBlockInstructionForGeneration::readProperty_mBlockInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mBlockInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                        const GALGAS_location & in_mLocation,
                                                                                        const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mLocation (in_mLocation),
mProperty_mBlockInstructionList (in_mBlockInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

void cPtr_templateBlockInstructionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@templateBlockInstructionForGeneration:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateBlockInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateBlockInstructionForGeneration (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateBlockInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ("templateBlockInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration result ;
  const GALGAS_templateBlockInstructionForGeneration * p = (const GALGAS_templateBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateBlockInstructionForGeneration_2D_weak::objectCompare (const GALGAS_templateBlockInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateBlockInstructionForGeneration_2D_weak::GALGAS_templateBlockInstructionForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak & GALGAS_templateBlockInstructionForGeneration_2D_weak::operator = (const GALGAS_templateBlockInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak::GALGAS_templateBlockInstructionForGeneration_2D_weak (const GALGAS_templateBlockInstructionForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak GALGAS_templateBlockInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration_2D_weak::bang_templateBlockInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateBlockInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateBlockInstructionForGeneration) ;
      result = GALGAS_templateBlockInstructionForGeneration ((cPtr_templateBlockInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateBlockInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ("templateBlockInstructionForGeneration-weak",
                                                                      & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateBlockInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration_2D_weak GALGAS_templateBlockInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration_2D_weak result ;
  const GALGAS_templateBlockInstructionForGeneration_2D_weak * p = (const GALGAS_templateBlockInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateBlockInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateInstructionForeachForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionForeachForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsAscending.objectCompare (p->mProperty_mIsAscending) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratorCppName.objectCompare (p->mProperty_mEnumeratorCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexCppName.objectCompare (p->mProperty_mIndexCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionForeachForGeneration::objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const {
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

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration::constructor_new (const GALGAS_bool & inAttribute_mIsAscending,
                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                                const GALGAS_string & inAttribute_mEnumeratorCppName,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mBeforeInstructionList,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mDoInstructionList,
                                                                                                                const GALGAS_string & inAttribute_mIndexCppName,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mBetweenInstructionList,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inAttribute_mAfterInstructionList
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration result ;
  if (inAttribute_mIsAscending.isValid () && inAttribute_mExpression.isValid () && inAttribute_mEnumeratorCppName.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mIndexCppName.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachForGeneration (inAttribute_mIsAscending, inAttribute_mExpression, inAttribute_mEnumeratorCppName, inAttribute_mBeforeInstructionList, inAttribute_mDoInstructionList, inAttribute_mIndexCppName, inAttribute_mBetweenInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateInstructionForeachForGeneration::getter_mIsAscending (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mIsAscending ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionForeachForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::getter_mEnumeratorCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mEnumeratorCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mBeforeInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::getter_mIndexCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mIndexCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mBetweenInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachForGeneration * p = (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    result = p->mProperty_mAfterInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateInstructionForeachForGeneration::readProperty_mIsAscending (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIsAscending ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::readProperty_mEnumeratorCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mEnumeratorCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mBeforeInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mDoInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::readProperty_mIndexCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIndexCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mBetweenInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mAfterInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                                                            const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                            const GALGAS_string & in_mEnumeratorCppName,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                            const GALGAS_string & in_mIndexCppName,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mIsAscending (in_mIsAscending),
mProperty_mExpression (in_mExpression),
mProperty_mEnumeratorCppName (in_mEnumeratorCppName),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mIndexCppName (in_mIndexCppName),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mAfterInstructionList (in_mAfterInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

void cPtr_templateInstructionForeachForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@templateInstructionForeachForGeneration:" ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionForeachForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratorCppName, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexCppName, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForeachForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration result ;
  const GALGAS_templateInstructionForeachForGeneration * p = (const GALGAS_templateInstructionForeachForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForeachForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionForeachForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionForeachForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateInstructionForeachForGeneration_2D_weak::GALGAS_templateInstructionForeachForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration_2D_weak & GALGAS_templateInstructionForeachForGeneration_2D_weak::operator = (const GALGAS_templateInstructionForeachForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration_2D_weak::GALGAS_templateInstructionForeachForGeneration_2D_weak (const GALGAS_templateInstructionForeachForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration_2D_weak GALGAS_templateInstructionForeachForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration_2D_weak::bang_templateInstructionForeachForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionForeachForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachForGeneration) ;
      result = GALGAS_templateInstructionForeachForGeneration ((cPtr_templateInstructionForeachForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionForeachForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2D_weak ("templateInstructionForeachForGeneration-weak",
                                                                        & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration_2D_weak GALGAS_templateInstructionForeachForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration_2D_weak result ;
  const GALGAS_templateInstructionForeachForGeneration_2D_weak * p = (const GALGAS_templateInstructionForeachForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForeachForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_semanticContext GALGAS_templateAnalysisContext::getter_mSemanticContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSemanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes GALGAS_templateAnalysisContext::getter_mPredefinedTypes (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPredefinedTypes ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateVariableMap GALGAS_templateAnalysisContext::getter_mTemplateVariableMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateVariableMap ;
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
// @templateInstructionSwitchForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionSwitchForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumType.objectCompare (p->mProperty_mEnumType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionSwitchBranchList.objectCompare (p->mProperty_mTemplateInstructionSwitchBranchList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionSwitchForGeneration::objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const {
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

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mEnumType,
                                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mSwitchExpression,
                                                                                                              const GALGAS_templateInstructionSwitchBranchListForGeneration & inAttribute_mTemplateInstructionSwitchBranchList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration result ;
  if (inAttribute_mEnumType.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mTemplateInstructionSwitchBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchForGeneration (inAttribute_mEnumType, inAttribute_mSwitchExpression, inAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_templateInstructionSwitchForGeneration::getter_mEnumType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    result = p->mProperty_mEnumType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionSwitchForGeneration::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchForGeneration::getter_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchForGeneration * p = (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    result = p->mProperty_mTemplateInstructionSwitchBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_templateInstructionSwitchForGeneration::readProperty_mEnumType (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mEnumType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionSwitchForGeneration::readProperty_mSwitchExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchForGeneration::readProperty_mTemplateInstructionSwitchBranchList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateInstructionSwitchBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mTemplateInstructionSwitchBranchList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mEnumType,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                                          const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mEnumType (in_mEnumType),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mTemplateInstructionSwitchBranchList (in_mTemplateInstructionSwitchBranchList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@templateInstructionSwitchForGeneration:" ;
  mProperty_mEnumType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionSwitchForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mProperty_mEnumType, mProperty_mSwitchExpression, mProperty_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration result ;
  const GALGAS_templateInstructionSwitchForGeneration * p = (const GALGAS_templateInstructionSwitchForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionSwitchForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionSwitchForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateInstructionSwitchForGeneration_2D_weak::GALGAS_templateInstructionSwitchForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration_2D_weak & GALGAS_templateInstructionSwitchForGeneration_2D_weak::operator = (const GALGAS_templateInstructionSwitchForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration_2D_weak::GALGAS_templateInstructionSwitchForGeneration_2D_weak (const GALGAS_templateInstructionSwitchForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration_2D_weak GALGAS_templateInstructionSwitchForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration_2D_weak::bang_templateInstructionSwitchForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionSwitchForGeneration) ;
      result = GALGAS_templateInstructionSwitchForGeneration ((cPtr_templateInstructionSwitchForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration_2D_weak ("templateInstructionSwitchForGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration_2D_weak GALGAS_templateInstructionSwitchForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration_2D_weak result ;
  const GALGAS_templateInstructionSwitchForGeneration_2D_weak * p = (const GALGAS_templateInstructionSwitchForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_bool GALGAS_optionComponentForGeneration::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mProperty_mIsPredefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionComponentForGeneration::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mProperty_mOptionComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::getter_mBoolOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mProperty_mBoolOptionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::getter_mUIntOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mProperty_mUIntOptionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::getter_mStringOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mProperty_mStringOptionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::getter_mStringListOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mProperty_mStringListOptionMap ;
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

GALGAS_bool GALGAS_optionComponentForGeneration::readProperty_mIsPredefined (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mIsPredefined ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionComponentForGeneration::readProperty_mOptionComponentName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mBoolOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mBoolOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mUIntOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mUIntOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mStringOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionMap () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::readProperty_mStringListOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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

GALGAS_unifiedTypeMap_2D_entry GALGAS_arrayTypeForGeneration::getter_mElementTypeEntry (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayTypeForGeneration * p = (const cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    result = p->mProperty_mElementTypeEntry ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_arrayTypeForGeneration::getter_mDimension (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayTypeForGeneration * p = (const cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    result = p->mProperty_mDimension ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_arrayTypeForGeneration::readProperty_mElementTypeEntry (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_arrayTypeForGeneration::readProperty_mDimension (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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

typeComparisonResult GALGAS_semanticExpressionForGeneration_2D_weak::objectCompare (const GALGAS_semanticExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_semanticExpressionForGeneration_2D_weak::GALGAS_semanticExpressionForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration_2D_weak & GALGAS_semanticExpressionForGeneration_2D_weak::operator = (const GALGAS_semanticExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration_2D_weak::GALGAS_semanticExpressionForGeneration_2D_weak (const GALGAS_semanticExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration_2D_weak GALGAS_semanticExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionForGeneration_2D_weak::bang_semanticExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionForGeneration) ;
      result = GALGAS_semanticExpressionForGeneration ((cPtr_semanticExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak ("semanticExpressionForGeneration-weak",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration_2D_weak GALGAS_semanticExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration_2D_weak result ;
  const GALGAS_semanticExpressionForGeneration_2D_weak * p = (const GALGAS_semanticExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticExpressionForGeneration_generateExpression> gExtensionMethodTable_semanticExpressionForGeneration_generateExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateExpression (const int32_t inClassIndex,
                                              extensionMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) {
  gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticExpressionForGeneration_generateExpression (void) {
  gExtensionMethodTable_semanticExpressionForGeneration_generateExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticExpressionForGeneration_generateExpression (NULL,
                                                                               freeExtensionMethod_semanticExpressionForGeneration_generateExpression) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @castInExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_castInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_castInExpressionForGeneration * p = (const cPtr_castInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastType.objectCompare (p->mProperty_mCastType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_castInExpressionForGeneration::objectCompare (const GALGAS_castInExpressionForGeneration & inOperand) const {
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

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                            const GALGAS_location & inAttribute_mLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                            const GALGAS_string & inAttribute_mTypeName,
                                                                                            const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mCastType
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mCastType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_castInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mReceiverExpression, inAttribute_mTypeName, inAttribute_mCastType COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_castInExpressionForGeneration::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_castInExpressionForGeneration * p = (const cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    result = p->mProperty_mReceiverExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInExpressionForGeneration::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_castInExpressionForGeneration * p = (const cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_castInExpressionForGeneration::getter_mCastType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != mObjectPtr) {
    const cPtr_castInExpressionForGeneration * p = (const cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    result = p->mProperty_mCastType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInExpressionForGeneration::setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    p->mProperty_mReceiverExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInExpressionForGeneration::setter_setMTypeName (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInExpressionForGeneration::setter_setMCastType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    p->mProperty_mCastType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_castInExpressionForGeneration::readProperty_mReceiverExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInExpressionForGeneration::readProperty_mTypeName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_castInExpressionForGeneration::readProperty_mCastType (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_string & in_mTypeName,
                                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mCastType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mCastType (in_mCastType) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

void cPtr_castInExpressionForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@castInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@castInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  const GALGAS_castInExpressionForGeneration * p = (const GALGAS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_castInExpressionForGeneration_2D_weak::objectCompare (const GALGAS_castInExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_castInExpressionForGeneration_2D_weak::GALGAS_castInExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration_2D_weak & GALGAS_castInExpressionForGeneration_2D_weak::operator = (const GALGAS_castInExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration_2D_weak::GALGAS_castInExpressionForGeneration_2D_weak (const GALGAS_castInExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration_2D_weak GALGAS_castInExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration_2D_weak::bang_castInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_castInExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_castInExpressionForGeneration) ;
      result = GALGAS_castInExpressionForGeneration ((cPtr_castInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@castInExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInExpressionForGeneration_2D_weak ("castInExpressionForGeneration-weak",
                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration_2D_weak GALGAS_castInExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration_2D_weak result ;
  const GALGAS_castInExpressionForGeneration_2D_weak * p = (const GALGAS_castInExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @outputActualParameterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputActualParameterForGeneration * p = (const cPtr_outputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutputActualParameterExpression.objectCompare (p->mProperty_mOutputActualParameterExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputActualParameterForGeneration::objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const {
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

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mFormalArgumentType,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mOutputActualParameterExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputActualParameterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputActualParameterExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_outputActualParameterForGeneration::getter_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterForGeneration * p = (const cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    result = p->mProperty_mOutputActualParameterExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputActualParameterForGeneration::setter_setMOutputActualParameterExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    p->mProperty_mOutputActualParameterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mOutputActualParameterExpression (in_mOutputActualParameterExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@outputActualParameterForGeneration:" ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputActualParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                           & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  const GALGAS_outputActualParameterForGeneration * p = (const GALGAS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outputActualParameterForGeneration_2D_weak::objectCompare (const GALGAS_outputActualParameterForGeneration_2D_weak & inOperand) const {
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

GALGAS_outputActualParameterForGeneration_2D_weak::GALGAS_outputActualParameterForGeneration_2D_weak (void) :
GALGAS_actualParameterForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration_2D_weak & GALGAS_outputActualParameterForGeneration_2D_weak::operator = (const GALGAS_outputActualParameterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration_2D_weak::GALGAS_outputActualParameterForGeneration_2D_weak (const GALGAS_outputActualParameterForGeneration & inSource) :
GALGAS_actualParameterForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration_2D_weak GALGAS_outputActualParameterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration_2D_weak::bang_outputActualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputActualParameterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputActualParameterForGeneration) ;
      result = GALGAS_outputActualParameterForGeneration ((cPtr_outputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outputActualParameterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2D_weak ("outputActualParameterForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration_2D_weak GALGAS_outputActualParameterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration_2D_weak result ;
  const GALGAS_outputActualParameterForGeneration_2D_weak * p = (const GALGAS_outputActualParameterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @ifExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ifExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifExpressionForGeneration * p = (const cPtr_ifExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ifExpressionForGeneration::objectCompare (const GALGAS_ifExpressionForGeneration & inOperand) const {
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

GALGAS_ifExpressionForGeneration::GALGAS_ifExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration::GALGAS_ifExpressionForGeneration (const cPtr_ifExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mIfExpression,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mThenExpression,
                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mElseExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mIfExpression.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mElseExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mIfExpression, inAttribute_mThenExpression, inAttribute_mElseExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionForGeneration * p = (const cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    result = p->mProperty_mIfExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionForGeneration * p = (const cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    result = p->mProperty_mThenExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionForGeneration * p = (const cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    result = p->mProperty_mElseExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionForGeneration::setter_setMIfExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    p->mProperty_mIfExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionForGeneration::setter_setMThenExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    p->mProperty_mThenExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionForGeneration::setter_setMElseExpression (GALGAS_semanticExpressionForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    p->mProperty_mElseExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mIfExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mIfExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mThenExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mThenExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mElseExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mElseExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                const GALGAS_location & in_mLocation,
                                                                const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                                                const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                                                const GALGAS_semanticExpressionForGeneration & in_mElseExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mIfExpression (in_mIfExpression),
mProperty_mThenExpression (in_mThenExpression),
mProperty_mElseExpression (in_mElseExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

void cPtr_ifExpressionForGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@ifExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ifExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionForGeneration ("ifExpressionForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration result ;
  const GALGAS_ifExpressionForGeneration * p = (const GALGAS_ifExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ifExpressionForGeneration_2D_weak::objectCompare (const GALGAS_ifExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_ifExpressionForGeneration_2D_weak::GALGAS_ifExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak & GALGAS_ifExpressionForGeneration_2D_weak::operator = (const GALGAS_ifExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak::GALGAS_ifExpressionForGeneration_2D_weak (const GALGAS_ifExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak GALGAS_ifExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration_2D_weak::bang_ifExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionForGeneration) ;
      result = GALGAS_ifExpressionForGeneration ((cPtr_ifExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ifExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionForGeneration_2D_weak ("ifExpressionForGeneration-weak",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak GALGAS_ifExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration_2D_weak result ;
  const GALGAS_ifExpressionForGeneration_2D_weak * p = (const GALGAS_ifExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @unaryMinusExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unaryMinusExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryMinusExpressionForGeneration * p = (const cPtr_unaryMinusExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_unaryMinusExpressionForGeneration::objectCompare (const GALGAS_unaryMinusExpressionForGeneration & inOperand) const {
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

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (const cPtr_unaryMinusExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_unaryMinusExpressionForGeneration * p = (const cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::readProperty_mExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

void cPtr_unaryMinusExpressionForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@unaryMinusExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryMinusExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unaryMinusExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ("unaryMinusExpressionForGeneration",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration result ;
  const GALGAS_unaryMinusExpressionForGeneration * p = (const GALGAS_unaryMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unaryMinusExpressionForGeneration_2D_weak::objectCompare (const GALGAS_unaryMinusExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_unaryMinusExpressionForGeneration_2D_weak::GALGAS_unaryMinusExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration_2D_weak & GALGAS_unaryMinusExpressionForGeneration_2D_weak::operator = (const GALGAS_unaryMinusExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration_2D_weak::GALGAS_unaryMinusExpressionForGeneration_2D_weak (const GALGAS_unaryMinusExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration_2D_weak GALGAS_unaryMinusExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration_2D_weak::bang_unaryMinusExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unaryMinusExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryMinusExpressionForGeneration) ;
      result = GALGAS_unaryMinusExpressionForGeneration ((cPtr_unaryMinusExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unaryMinusExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2D_weak ("unaryMinusExpressionForGeneration-weak",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryMinusExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration_2D_weak GALGAS_unaryMinusExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration_2D_weak result ;
  const GALGAS_unaryMinusExpressionForGeneration_2D_weak * p = (const GALGAS_unaryMinusExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryMinusExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @varInExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionForGeneration * p = (const cPtr_varInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVarName.objectCompare (p->mProperty_mCppVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varInExpressionForGeneration::objectCompare (const GALGAS_varInExpressionForGeneration & inOperand) const {
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

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                          const GALGAS_string & inAttribute_mCppVarName,
                                                                                          const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mCppVarName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mCppVarName, inAttribute_mNameForCheckingFormalParameterUsing COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::getter_mCppVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionForGeneration * p = (const cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    result = p->mProperty_mCppVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::getter_mNameForCheckingFormalParameterUsing (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionForGeneration * p = (const cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInExpressionForGeneration::setter_setMCppVarName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    p->mProperty_mCppVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInExpressionForGeneration::setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::readProperty_mCppVarName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mCppVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_string & in_mCppVarName,
                                                                      const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mCppVarName (in_mCppVarName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

void cPtr_varInExpressionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@varInExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCppVarName, mProperty_mNameForCheckingFormalParameterUsing COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration result ;
  const GALGAS_varInExpressionForGeneration * p = (const GALGAS_varInExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varInExpressionForGeneration_2D_weak::objectCompare (const GALGAS_varInExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_varInExpressionForGeneration_2D_weak::GALGAS_varInExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration_2D_weak & GALGAS_varInExpressionForGeneration_2D_weak::operator = (const GALGAS_varInExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration_2D_weak::GALGAS_varInExpressionForGeneration_2D_weak (const GALGAS_varInExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration_2D_weak GALGAS_varInExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration_2D_weak::bang_varInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varInExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpressionForGeneration) ;
      result = GALGAS_varInExpressionForGeneration ((cPtr_varInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionForGeneration_2D_weak ("varInExpressionForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration_2D_weak GALGAS_varInExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration_2D_weak result ;
  const GALGAS_varInExpressionForGeneration_2D_weak * p = (const GALGAS_varInExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @trueExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_trueExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_trueExpressionForGeneration * p = (const cPtr_trueExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_trueExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_trueExpressionForGeneration::objectCompare (const GALGAS_trueExpressionForGeneration & inOperand) const {
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

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_trueExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (const cPtr_trueExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                        const GALGAS_location & inAttribute_mLocation
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_trueExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_trueExpressionForGeneration::cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                    const GALGAS_location & in_mLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

void cPtr_trueExpressionForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@trueExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_trueExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionForGeneration ("trueExpressionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration result ;
  const GALGAS_trueExpressionForGeneration * p = (const GALGAS_trueExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_trueExpressionForGeneration_2D_weak::objectCompare (const GALGAS_trueExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_trueExpressionForGeneration_2D_weak::GALGAS_trueExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration_2D_weak & GALGAS_trueExpressionForGeneration_2D_weak::operator = (const GALGAS_trueExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration_2D_weak::GALGAS_trueExpressionForGeneration_2D_weak (const GALGAS_trueExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration_2D_weak GALGAS_trueExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration_2D_weak::bang_trueExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_trueExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpressionForGeneration) ;
      result = GALGAS_trueExpressionForGeneration ((cPtr_trueExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionForGeneration_2D_weak ("trueExpressionForGeneration-weak",
                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration_2D_weak GALGAS_trueExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration_2D_weak result ;
  const GALGAS_trueExpressionForGeneration_2D_weak * p = (const GALGAS_trueExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @falseExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_falseExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_falseExpressionForGeneration * p = (const cPtr_falseExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_falseExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_falseExpressionForGeneration::objectCompare (const GALGAS_falseExpressionForGeneration & inOperand) const {
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

GALGAS_falseExpressionForGeneration::GALGAS_falseExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_falseExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration::GALGAS_falseExpressionForGeneration (const cPtr_falseExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                          const GALGAS_location & inAttribute_mLocation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_falseExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_falseExpressionForGeneration::cPtr_falseExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration ;
}

void cPtr_falseExpressionForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@falseExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_falseExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_falseExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpressionForGeneration ("falseExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration result ;
  const GALGAS_falseExpressionForGeneration * p = (const GALGAS_falseExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_falseExpressionForGeneration_2D_weak::objectCompare (const GALGAS_falseExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_falseExpressionForGeneration_2D_weak::GALGAS_falseExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration_2D_weak & GALGAS_falseExpressionForGeneration_2D_weak::operator = (const GALGAS_falseExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration_2D_weak::GALGAS_falseExpressionForGeneration_2D_weak (const GALGAS_falseExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration_2D_weak GALGAS_falseExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration_2D_weak::bang_falseExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_falseExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpressionForGeneration) ;
      result = GALGAS_falseExpressionForGeneration ((cPtr_falseExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpressionForGeneration_2D_weak ("falseExpressionForGeneration-weak",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration_2D_weak GALGAS_falseExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration_2D_weak result ;
  const GALGAS_falseExpressionForGeneration_2D_weak * p = (const GALGAS_falseExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression> gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isTrueExpression (const int32_t inClassIndex,
                                            enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression inGetter) {
  gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticExpressionForGeneration_isTrueExpression (void) {
  enterExtensionGetter_isTrueExpression (kTypeDescriptor_GALGAS_semanticExpressionForGeneration.mSlotID,
                                         extensionGetter_semanticExpressionForGeneration_isTrueExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_semanticExpressionForGeneration_isTrueExpression (void) {
  gExtensionGetterTable_semanticExpressionForGeneration_isTrueExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticExpressionForGeneration_isTrueExpression (defineExtensionGetter_semanticExpressionForGeneration_isTrueExpression,
                                                                             freeExtensionGetter_semanticExpressionForGeneration_isTrueExpression) ;

//----------------------------------------------------------------------------------------------------------------------
// @literalStringExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalStringExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringExpressionForGeneration * p = (const cPtr_literalStringExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalStringExpressionForGeneration::objectCompare (const GALGAS_literalStringExpressionForGeneration & inOperand) const {
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

GALGAS_literalStringExpressionForGeneration::GALGAS_literalStringExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration::GALGAS_literalStringExpressionForGeneration (const cPtr_literalStringExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_string & inAttribute_mString
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_literalStringExpressionForGeneration::getter_mString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringExpressionForGeneration * p = (const cPtr_literalStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
    result = p->mProperty_mString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_literalStringExpressionForGeneration::readProperty_mString (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
    return p->mProperty_mString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_string & in_mString
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mString (in_mString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

void cPtr_literalStringExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@literalStringExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalStringExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ("literalStringExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration result ;
  const GALGAS_literalStringExpressionForGeneration * p = (const GALGAS_literalStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalStringExpressionForGeneration_2D_weak::objectCompare (const GALGAS_literalStringExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_literalStringExpressionForGeneration_2D_weak::GALGAS_literalStringExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration_2D_weak & GALGAS_literalStringExpressionForGeneration_2D_weak::operator = (const GALGAS_literalStringExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration_2D_weak::GALGAS_literalStringExpressionForGeneration_2D_weak (const GALGAS_literalStringExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration_2D_weak GALGAS_literalStringExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration_2D_weak::bang_literalStringExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalStringExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringExpressionForGeneration) ;
      result = GALGAS_literalStringExpressionForGeneration ((cPtr_literalStringExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalStringExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2D_weak ("literalStringExpressionForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration_2D_weak GALGAS_literalStringExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration_2D_weak result ;
  const GALGAS_literalStringExpressionForGeneration_2D_weak * p = (const GALGAS_literalStringExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalCharExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalCharExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalCharExpressionForGeneration * p = (const cPtr_literalCharExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalCharExpressionForGeneration::objectCompare (const GALGAS_literalCharExpressionForGeneration & inOperand) const {
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

GALGAS_literalCharExpressionForGeneration::GALGAS_literalCharExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalCharExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_char::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration::GALGAS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_char & inAttribute_mCharacter
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalCharExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_literalCharExpressionForGeneration::getter_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_char result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalCharExpressionForGeneration * p = (const cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    result = p->mProperty_mCharacter ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_literalCharExpressionForGeneration::readProperty_mCharacter (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_char () ;
  }else{
    cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_char & in_mCharacter
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

void cPtr_literalCharExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@literalCharExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalCharExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalCharExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ("literalCharExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration result ;
  const GALGAS_literalCharExpressionForGeneration * p = (const GALGAS_literalCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalCharExpressionForGeneration_2D_weak::objectCompare (const GALGAS_literalCharExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_literalCharExpressionForGeneration_2D_weak::GALGAS_literalCharExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration_2D_weak & GALGAS_literalCharExpressionForGeneration_2D_weak::operator = (const GALGAS_literalCharExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration_2D_weak::GALGAS_literalCharExpressionForGeneration_2D_weak (const GALGAS_literalCharExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration_2D_weak GALGAS_literalCharExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration_2D_weak::bang_literalCharExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalCharExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalCharExpressionForGeneration) ;
      result = GALGAS_literalCharExpressionForGeneration ((cPtr_literalCharExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalCharExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2D_weak ("literalCharExpressionForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration_2D_weak GALGAS_literalCharExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration_2D_weak result ;
  const GALGAS_literalCharExpressionForGeneration_2D_weak * p = (const GALGAS_literalCharExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalCharExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalDoubleExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalDoubleExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalDoubleExpressionForGeneration * p = (const cPtr_literalDoubleExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalDoubleExpressionForGeneration::objectCompare (const GALGAS_literalDoubleExpressionForGeneration & inOperand) const {
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

GALGAS_literalDoubleExpressionForGeneration::GALGAS_literalDoubleExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalDoubleExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_double::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration::GALGAS_literalDoubleExpressionForGeneration (const cPtr_literalDoubleExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                                          const GALGAS_double & inAttribute_mValue
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalDoubleExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_double GALGAS_literalDoubleExpressionForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalDoubleExpressionForGeneration * p = (const cPtr_literalDoubleExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_double GALGAS_literalDoubleExpressionForGeneration::readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_double () ;
  }else{
    cPtr_literalDoubleExpressionForGeneration * p = (cPtr_literalDoubleExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_double & in_mValue
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalDoubleExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

void cPtr_literalDoubleExpressionForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@literalDoubleExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalDoubleExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalDoubleExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ("literalDoubleExpressionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration result ;
  const GALGAS_literalDoubleExpressionForGeneration * p = (const GALGAS_literalDoubleExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalDoubleExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalDoubleExpressionForGeneration_2D_weak::objectCompare (const GALGAS_literalDoubleExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_literalDoubleExpressionForGeneration_2D_weak::GALGAS_literalDoubleExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration_2D_weak & GALGAS_literalDoubleExpressionForGeneration_2D_weak::operator = (const GALGAS_literalDoubleExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration_2D_weak::GALGAS_literalDoubleExpressionForGeneration_2D_weak (const GALGAS_literalDoubleExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration_2D_weak GALGAS_literalDoubleExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration_2D_weak::bang_literalDoubleExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalDoubleExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalDoubleExpressionForGeneration) ;
      result = GALGAS_literalDoubleExpressionForGeneration ((cPtr_literalDoubleExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalDoubleExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration_2D_weak ("literalDoubleExpressionForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration_2D_weak GALGAS_literalDoubleExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration_2D_weak result ;
  const GALGAS_literalDoubleExpressionForGeneration_2D_weak * p = (const GALGAS_literalDoubleExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalDoubleExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lbigint GALGAS_literalBigIntExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalBigIntExpressionAST * p = (const cPtr_literalBigIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_literalBigIntExpressionAST::readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
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
// @literalUIntExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalUIntExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUIntExpressionForGeneration * p = (const cPtr_literalUIntExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalUIntExpressionForGeneration::objectCompare (const GALGAS_literalUIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalUIntExpressionForGeneration::GALGAS_literalUIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalUIntExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_uint::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration::GALGAS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_uint & inAttribute_mValue
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUIntExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_literalUIntExpressionForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalUIntExpressionForGeneration * p = (const cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalUIntExpressionForGeneration::setter_setMValue (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_literalUIntExpressionForGeneration::readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_uint & in_mValue
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

void cPtr_literalUIntExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@literalUIntExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalUIntExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ("literalUIntExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration result ;
  const GALGAS_literalUIntExpressionForGeneration * p = (const GALGAS_literalUIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalUIntExpressionForGeneration_2D_weak::objectCompare (const GALGAS_literalUIntExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_literalUIntExpressionForGeneration_2D_weak::GALGAS_literalUIntExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration_2D_weak & GALGAS_literalUIntExpressionForGeneration_2D_weak::operator = (const GALGAS_literalUIntExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration_2D_weak::GALGAS_literalUIntExpressionForGeneration_2D_weak (const GALGAS_literalUIntExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration_2D_weak GALGAS_literalUIntExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration_2D_weak::bang_literalUIntExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalUIntExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUIntExpressionForGeneration) ;
      result = GALGAS_literalUIntExpressionForGeneration ((cPtr_literalUIntExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalUIntExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2D_weak ("literalUIntExpressionForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUIntExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUIntExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUIntExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration_2D_weak GALGAS_literalUIntExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration_2D_weak result ;
  const GALGAS_literalUIntExpressionForGeneration_2D_weak * p = (const GALGAS_literalUIntExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUIntExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalUInt_36__34_ExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalUInt_36__34_ExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUInt_36__34_ExpressionForGeneration * p = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalUInt_36__34_ExpressionForGeneration::objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inOperand) const {
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

GALGAS_literalUInt_36__34_ExpressionForGeneration::GALGAS_literalUInt_36__34_ExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                             GALGAS_location::constructor_nowhere (HERE),
                                                                             GALGAS_uint_36__34_::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration::GALGAS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                                      const GALGAS_uint_36__34_ & inAttribute_mValue
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUInt_36__34_ExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_ GALGAS_literalUInt_36__34_ExpressionForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalUInt_36__34_ExpressionForGeneration * p = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_ GALGAS_literalUInt_36__34_ExpressionForGeneration::readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                                  const GALGAS_location & in_mLocation,
                                                                                                  const GALGAS_uint_36__34_ & in_mValue
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalUInt_36__34_ExpressionForGeneration::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@literalUInt64ExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUInt_36__34_ExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalUInt64ExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ("literalUInt64ExpressionForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration result ;
  const GALGAS_literalUInt_36__34_ExpressionForGeneration * p = (const GALGAS_literalUInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUInt_36__34_ExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak & GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::operator = (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::bang_literalUInt_36__34_ExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalUInt_36__34_ExpressionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
      result = GALGAS_literalUInt_36__34_ExpressionForGeneration ((cPtr_literalUInt_36__34_ExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalUInt64ExpressionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak ("literalUInt64ExpressionForGeneration-weak",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak result ;
  const GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak * p = (const GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalSIntExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalSIntExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalSIntExpressionForGeneration * p = (const cPtr_literalSIntExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalSIntExpressionForGeneration::objectCompare (const GALGAS_literalSIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalSIntExpressionForGeneration::GALGAS_literalSIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalSIntExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_sint::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration::GALGAS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_sint & inAttribute_mValue
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalSIntExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_literalSIntExpressionForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalSIntExpressionForGeneration * p = (const cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_literalSIntExpressionForGeneration::readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sint () ;
  }else{
    cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_sint & in_mValue
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalSIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

void cPtr_literalSIntExpressionForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@literalSIntExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalSIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalSIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalSIntExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ("literalSIntExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionForGeneration result ;
  const GALGAS_literalSIntExpressionForGeneration * p = (const GALGAS_literalSIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

