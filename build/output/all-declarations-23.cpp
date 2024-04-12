#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList (),
mProperty_mQualifier () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::~ GALGAS_extensionMethodMapForType_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                           const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                                           const GALGAS_methodQualifier & in_mQualifier,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  result.mProperty_mQualifier = in_mQualifier ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element::GALGAS_extensionMethodMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1,
                                                                                          const GALGAS_methodQualifier & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1),
mProperty_mQualifier (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                                         const GALGAS_methodQualifier & in_mQualifier,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  result.mProperty_mQualifier = in_mQualifier ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionMethodMapForType_2D_element::objectCompare (const GALGAS_extensionMethodMapForType_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mQualifier.objectCompare (inOperand.mProperty_mQualifier) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () && mProperty_mQualifier.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
  mProperty_mQualifier.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionMethodMapForType-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForType-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ("extensionMethodMapForType-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForType_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element GALGAS_extensionMethodMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType_2D_element result ;
  const GALGAS_extensionMethodMapForType_2D_element * p = (const GALGAS_extensionMethodMapForType_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionMethodMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionMethodMapForType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::~ GALGAS_extensionMethodMapForBuildingContext_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                             const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionMethodMapForType = in_mExtensionMethodMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element::GALGAS_extensionMethodMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionMethodMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionMethodMapForType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                               const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionMethodMapForType = in_mExtensionMethodMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionMethodMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionMethodMapForBuildingContext_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExtensionMethodMapForType.objectCompare (inOperand.mProperty_mExtensionMethodMapForType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionMethodMapForType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionMethodMapForType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionMethodMapForBuildingContext-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtensionMethodMapForType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForBuildingContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ("extensionMethodMapForBuildingContext-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element GALGAS_extensionMethodMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext_2D_element result ;
  const GALGAS_extensionMethodMapForBuildingContext_2D_element * p = (const GALGAS_extensionMethodMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionMethodMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::~ GALGAS_extensionSetterMapForType_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element::GALGAS_extensionSetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_formalParameterListAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionSetterMapForType_2D_element::objectCompare (const GALGAS_extensionSetterMapForType_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalParameterList.objectCompare (inOperand.mProperty_mFormalParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionSetterMapForType-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForType-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ("extensionSetterMapForType-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element GALGAS_extensionSetterMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType_2D_element result ;
  const GALGAS_extensionSetterMapForType_2D_element * p = (const GALGAS_extensionSetterMapForType_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionSetterMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionSetterMapForType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::~ GALGAS_extensionSetterMapForBuildingContext_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                             const GALGAS_extensionSetterMapForType & in_mExtensionSetterMapForType,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionSetterMapForType = in_mExtensionSetterMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element::GALGAS_extensionSetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionSetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionSetterMapForType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                               const GALGAS_extensionSetterMapForType & in_mExtensionSetterMapForType,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionSetterMapForType = in_mExtensionSetterMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionSetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionSetterMapForBuildingContext_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExtensionSetterMapForType.objectCompare (inOperand.mProperty_mExtensionSetterMapForType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionSetterMapForType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionSetterMapForType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionSetterMapForBuildingContext-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtensionSetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForBuildingContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ("extensionSetterMapForBuildingContext-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element GALGAS_extensionSetterMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext_2D_element result ;
  const GALGAS_extensionSetterMapForBuildingContext_2D_element * p = (const GALGAS_extensionSetterMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionSetterMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (void) :
mProperty_lkey (),
mProperty_mResultTypeName (),
mProperty_mInputFormalParameterList (),
mProperty_mQualifier () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::~ GALGAS_extensionGetterMapForType_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                               const GALGAS_lstring & in_mResultTypeName,
                                                                                                               const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList,
                                                                                                               const GALGAS_methodQualifier & in_mQualifier,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mResultTypeName = in_mResultTypeName ;
  result.mProperty_mInputFormalParameterList = in_mInputFormalParameterList ;
  result.mProperty_mQualifier = in_mQualifier ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element::GALGAS_extensionGetterMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_formalInputParameterListAST & inOperand2,
                                                                                          const GALGAS_methodQualifier & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mResultTypeName (inOperand1),
mProperty_mInputFormalParameterList (inOperand2),
mProperty_mQualifier (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_lstring & in_mResultTypeName,
                                                                                                         const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList,
                                                                                                         const GALGAS_methodQualifier & in_mQualifier,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mResultTypeName = in_mResultTypeName ;
  result.mProperty_mInputFormalParameterList = in_mInputFormalParameterList ;
  result.mProperty_mQualifier = in_mQualifier ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionGetterMapForType_2D_element::objectCompare (const GALGAS_extensionGetterMapForType_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mResultTypeName.objectCompare (inOperand.mProperty_mResultTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInputFormalParameterList.objectCompare (inOperand.mProperty_mInputFormalParameterList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mQualifier.objectCompare (inOperand.mProperty_mQualifier) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForType_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mInputFormalParameterList.isValid () && mProperty_mQualifier.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultTypeName.drop () ;
  mProperty_mInputFormalParameterList.drop () ;
  mProperty_mQualifier.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionGetterMapForType-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputFormalParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForType-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ("extensionGetterMapForType-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForType_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element GALGAS_extensionGetterMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType_2D_element result ;
  const GALGAS_extensionGetterMapForType_2D_element * p = (const GALGAS_extensionGetterMapForType_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionGetterMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (void) :
mProperty_lkey (),
mProperty_mExtensionGetterMapForType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::~ GALGAS_extensionGetterMapForBuildingContext_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                             const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionGetterMapForType = in_mExtensionGetterMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element::GALGAS_extensionGetterMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_extensionGetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionGetterMapForType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                               const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionGetterMapForType = in_mExtensionGetterMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionGetterMapForBuildingContext_2D_element::objectCompare (const GALGAS_extensionGetterMapForBuildingContext_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExtensionGetterMapForType.objectCompare (inOperand.mProperty_mExtensionGetterMapForType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForBuildingContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionGetterMapForType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionGetterMapForType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionGetterMapForBuildingContext-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtensionGetterMapForType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForBuildingContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ("extensionGetterMapForBuildingContext-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element GALGAS_extensionGetterMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext_2D_element result ;
  const GALGAS_extensionGetterMapForBuildingContext_2D_element * p = (const GALGAS_extensionGetterMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionGetterMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::~ GALGAS_wrapperExtensionMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_wrapperExtensionMap_2D_element::objectCompare (const GALGAS_wrapperExtensionMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_wrapperExtensionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @wrapperExtensionMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @wrapperExtensionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ("wrapperExtensionMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperExtensionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperExtensionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperExtensionMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  const GALGAS_wrapperExtensionMap_2D_element * p = (const GALGAS_wrapperExtensionMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_wrapperExtensionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::~ GALGAS_semanticExpressionListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::init_21_ (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::class_func_new (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticExpressionListForGeneration_2D_element::objectCompare (const GALGAS_semanticExpressionListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticExpressionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration_2D_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticExpressionListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ("semanticExpressionListForGeneration-element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  const GALGAS_semanticExpressionListForGeneration_2D_element * p = (const GALGAS_semanticExpressionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticExpressionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName (),
mProperty_mFormalArgumentCppName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::~ GALGAS_formalParameterListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_mFormalSelector,
                                                                                                                                 const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                                                 const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                                 const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                                 const GALGAS_string & in_mFormalArgumentCppName,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mFormalArgumentCppName = in_mFormalArgumentCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                        const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_string & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mFormalArgumentCppName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::class_func_new (const GALGAS_lstring & in_mFormalSelector,
                                                                                                                       const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                                       const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                       const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                       const GALGAS_string & in_mFormalArgumentCppName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mFormalArgumentCppName = in_mFormalArgumentCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_formalParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalParameterListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentCppName.objectCompare (inOperand.mProperty_mFormalArgumentCppName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formalParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mFormalArgumentCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterListForGeneration-element:") ;
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
//
//     @formalParameterListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ("formalParameterListForGeneration-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  const GALGAS_formalParameterListForGeneration_2D_element * p = (const GALGAS_formalParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentCppName (),
mProperty_mFormalArgumentName (),
mProperty_mIsConstant () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::~ GALGAS_formalInputParameterListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_mFormalSelector,
                                                                                                                                           const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                                           const GALGAS_string & in_mFormalArgumentCppName,
                                                                                                                                           const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                                           const GALGAS_bool & in_mIsConstant,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentCppName = in_mFormalArgumentCppName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                  const GALGAS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentCppName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::class_func_new (const GALGAS_lstring & in_mFormalSelector,
                                                                                                                                 const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                                 const GALGAS_string & in_mFormalArgumentCppName,
                                                                                                                                 const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                                 const GALGAS_bool & in_mIsConstant,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentCppName = in_mFormalArgumentCppName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_formalInputParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalInputParameterListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalSelector.objectCompare (inOperand.mProperty_mFormalSelector) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentCppName.objectCompare (inOperand.mProperty_mFormalArgumentCppName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsConstant.objectCompare (inOperand.mProperty_mIsConstant) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formalInputParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentCppName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsConstant.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration_2D_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsConstant.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration_2D_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalInputParameterListForGeneration-element:") ;
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
//
//     @formalInputParameterListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ("formalInputParameterListForGeneration-element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  const GALGAS_formalInputParameterListForGeneration_2D_element * p = (const GALGAS_formalInputParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalInputParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (void) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (),
mProperty_mGalgasTypeNameForGrammarAnalysis () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::~ GALGAS_signatureForGrammarAnalysis_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::init_21__21_ (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                           const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = in_mFormalArgumentPassingModeForGrammarAnalysis ;
  result.mProperty_mGalgasTypeNameForGrammarAnalysis = in_mGalgasTypeNameForGrammarAnalysis ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (inOperand0),
mProperty_mGalgasTypeNameForGrammarAnalysis (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::class_func_new (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                             const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = in_mFormalArgumentPassingModeForGrammarAnalysis ;
  result.mProperty_mGalgasTypeNameForGrammarAnalysis = in_mGalgasTypeNameForGrammarAnalysis ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_signatureForGrammarAnalysis_2D_element::objectCompare (const GALGAS_signatureForGrammarAnalysis_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalArgumentPassingModeForGrammarAnalysis.objectCompare (inOperand.mProperty_mFormalArgumentPassingModeForGrammarAnalysis) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGalgasTypeNameForGrammarAnalysis.objectCompare (inOperand.mProperty_mGalgasTypeNameForGrammarAnalysis) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_signatureForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingModeForGrammarAnalysis.isValid () && mProperty_mGalgasTypeNameForGrammarAnalysis.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingModeForGrammarAnalysis.drop () ;
  mProperty_mGalgasTypeNameForGrammarAnalysis.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @signatureForGrammarAnalysis-element:") ;
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
//
//     @signatureForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ("signatureForGrammarAnalysis-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_signatureForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_signatureForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_signatureForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  const GALGAS_signatureForGrammarAnalysis_2D_element * p = (const GALGAS_signatureForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_signatureForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mFormalParametersList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                                           const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParametersList = in_mFormalParametersList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParametersList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                                             const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParametersList = in_mFormalParametersList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFormalParametersList.objectCompare (inOperand.mProperty_mFormalParametersList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParametersList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParametersList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::description (String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalSymbolLabelMapForGrammarAnalysis-element:") ;
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
//
//     @nonterminalSymbolLabelMapForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ("nonterminalSymbolLabelMapForGrammarAnalysis-element",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mProperty_lkey (),
mProperty_mNonTerminalIndex (),
mProperty_mNonterminalSymbolParametersMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                                     const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                     const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  result.mProperty_mNonterminalSymbolParametersMap = in_mNonterminalSymbolParametersMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1),
mProperty_mNonterminalSymbolParametersMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                                   const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                   const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  result.mProperty_mNonterminalSymbolParametersMap = in_mNonterminalSymbolParametersMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNonTerminalIndex.objectCompare (inOperand.mProperty_mNonTerminalIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNonterminalSymbolParametersMap.objectCompare (inOperand.mProperty_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () && mProperty_mNonterminalSymbolParametersMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
  mProperty_mNonterminalSymbolParametersMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalSymbolMapForGrammarAnalysis-element:") ;
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
//
//     @nonTerminalSymbolMapForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ("nonTerminalSymbolMapForGrammarAnalysis-element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mNoWarningIfUnused (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element::~ GALGAS_localConstantList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                               const GALGAS_lstring & in_mName,
                                                                                               const GALGAS_bool & in_mNoWarningIfUnused,
                                                                                               const GALGAS_string & in_mCppName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localConstantList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mNoWarningIfUnused = in_mNoWarningIfUnused ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2,
                                                                          const GALGAS_string & inOperand3) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mNoWarningIfUnused (inOperand2),
mProperty_mCppName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                         const GALGAS_lstring & in_mName,
                                                                                         const GALGAS_bool & in_mNoWarningIfUnused,
                                                                                         const GALGAS_string & in_mCppName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localConstantList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mNoWarningIfUnused = in_mNoWarningIfUnused ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localConstantList_2D_element::objectCompare (const GALGAS_localConstantList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNoWarningIfUnused.objectCompare (inOperand.mProperty_mNoWarningIfUnused) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localConstantList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mNoWarningIfUnused.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mNoWarningIfUnused.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localConstantList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNoWarningIfUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localConstantList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList_2D_element ("localConstantList-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localConstantList_2D_element result ;
  const GALGAS_localConstantList_2D_element * p = (const GALGAS_localConstantList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element::~ GALGAS_localInitializedVariableList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                 const GALGAS_lstring & in_mName,
                                                                                                                 const GALGAS_string & in_mCppName,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                               const GALGAS_lstring & in_mName,
                                                                                                               const GALGAS_string & in_mCppName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localInitializedVariableList_2D_element::objectCompare (const GALGAS_localInitializedVariableList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localInitializedVariableList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localInitializedVariableList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localInitializedVariableList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ("localInitializedVariableList-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localInitializedVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localInitializedVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localInitializedVariableList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  const GALGAS_localInitializedVariableList_2D_element * p = (const GALGAS_localInitializedVariableList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localInitializedVariableList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element::GALGAS_propertyIndexMap_2D_element (void) :
mProperty_lkey (),
mProperty_mPropertyTypeIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element::~ GALGAS_propertyIndexMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element GALGAS_propertyIndexMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyIndexMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mPropertyTypeIndex = in_mPropertyTypeIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element::GALGAS_propertyIndexMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMapEntry & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mPropertyTypeIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element GALGAS_propertyIndexMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyIndexMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mPropertyTypeIndex = in_mPropertyTypeIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyIndexMap_2D_element::objectCompare (const GALGAS_propertyIndexMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyTypeIndex.objectCompare (inOperand.mProperty_mPropertyTypeIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyIndexMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mPropertyTypeIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mPropertyTypeIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyIndexMap-element:") ;
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
//
//     @propertyIndexMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap_2D_element ("propertyIndexMap-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyIndexMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyIndexMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyIndexMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element GALGAS_propertyIndexMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyIndexMap_2D_element result ;
  const GALGAS_propertyIndexMap_2D_element * p = (const GALGAS_propertyIndexMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyIndexMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSignatureForGeneration (),
mProperty_mSignature (),
mProperty_mEndOfArgumentLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element::~ GALGAS_nonterminalLabelMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                   const GALGAS_formalParameterSignature & in_mSignature,
                                                                                                   const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignatureForGeneration = in_mSignatureForGeneration ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                              const GALGAS_location & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mSignatureForGeneration (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mEndOfArgumentLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                             const GALGAS_formalParameterSignature & in_mSignature,
                                                                                             const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignatureForGeneration = in_mSignatureForGeneration ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonterminalLabelMap_2D_element::objectCompare (const GALGAS_nonterminalLabelMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSignatureForGeneration.objectCompare (inOperand.mProperty_mSignatureForGeneration) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfArgumentLocation.objectCompare (inOperand.mProperty_mEndOfArgumentLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalLabelMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignatureForGeneration.isValid () && mProperty_mSignature.isValid () && mProperty_mEndOfArgumentLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignatureForGeneration.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalLabelMap-element:") ;
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
//
//     @nonterminalLabelMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ("nonterminalLabelMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalLabelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalLabelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalLabelMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap_2D_element result ;
  const GALGAS_nonterminalLabelMap_2D_element * p = (const GALGAS_nonterminalLabelMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalLabelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLabelMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element::~ GALGAS_nonterminalMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                 const GALGAS_nonterminalLabelMap & in_mLabelMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelMap = in_mLabelMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_nonterminalLabelMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_nonterminalLabelMap & in_mLabelMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelMap = in_mLabelMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonterminalMap_2D_element::objectCompare (const GALGAS_nonterminalMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLabelMap.objectCompare (inOperand.mProperty_mLabelMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalMap-element:") ;
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
//
//     @nonterminalMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap_2D_element ("nonterminalMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  const GALGAS_nonterminalMap_2D_element * p = (const GALGAS_nonterminalMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element::GALGAS_ruleLabelImplementationList_2D_element (void) :
mProperty_mLabelName (),
mProperty_mSignatureForGeneration (),
mProperty_mSignature (),
mProperty_mEndOfArgumentLocation (),
mProperty_mInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element::~ GALGAS_ruleLabelImplementationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_mLabelName,
                                                                                                                       const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                                       const GALGAS_formalParameterSignature & in_mSignature,
                                                                                                                       const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                                                       const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mSignatureForGeneration = in_mSignatureForGeneration ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  result.mProperty_mInstructionListForGeneration = in_mInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::class_func_new (const GALGAS_lstring & in_mLabelName,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                             const GALGAS_formalParameterSignature & in_mSignature,
                                                                                                             const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                                             const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mSignatureForGeneration = in_mSignatureForGeneration ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  result.mProperty_mInstructionListForGeneration = in_mInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ruleLabelImplementationList_2D_element::objectCompare (const GALGAS_ruleLabelImplementationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLabelName.objectCompare (inOperand.mProperty_mLabelName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSignatureForGeneration.objectCompare (inOperand.mProperty_mSignatureForGeneration) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfArgumentLocation.objectCompare (inOperand.mProperty_mEndOfArgumentLocation) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionListForGeneration.objectCompare (inOperand.mProperty_mInstructionListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ruleLabelImplementationList_2D_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mSignatureForGeneration.isValid () && mProperty_mSignature.isValid () && mProperty_mEndOfArgumentLocation.isValid () && mProperty_mInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList_2D_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mSignatureForGeneration.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
  mProperty_mInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleLabelImplementationList-element:") ;
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
//
//     @ruleLabelImplementationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ("ruleLabelImplementationList-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ruleLabelImplementationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ruleLabelImplementationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleLabelImplementationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList_2D_element result ;
  const GALGAS_ruleLabelImplementationList_2D_element * p = (const GALGAS_ruleLabelImplementationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ruleLabelImplementationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element::GALGAS_uselessEntityLocationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element::~ GALGAS_uselessEntityLocationMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element GALGAS_uselessEntityLocationMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_location & in_mLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element::GALGAS_uselessEntityLocationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_location & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element GALGAS_uselessEntityLocationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_location & in_mLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_uselessEntityLocationMap_2D_element::objectCompare (const GALGAS_uselessEntityLocationMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLocation.objectCompare (inOperand.mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_uselessEntityLocationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @uselessEntityLocationMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @uselessEntityLocationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2D_element ("uselessEntityLocationMap-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uselessEntityLocationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uselessEntityLocationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uselessEntityLocationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element GALGAS_uselessEntityLocationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap_2D_element result ;
  const GALGAS_uselessEntityLocationMap_2D_element * p = (const GALGAS_uselessEntityLocationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_uselessEntityLocationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element::GALGAS_scopeLocalVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mAttributes (),
mProperty_mState () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element::~ GALGAS_scopeLocalVarMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element GALGAS_scopeLocalVarMap_2D_element::init_21__21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                     const GALGAS_string & in_mCppName,
                                                                                                     const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                                     const GALGAS_localVariableAttributes & in_mAttributes,
                                                                                                     const GALGAS_localVarValuation & in_mState,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  result.mProperty_mAttributes = in_mAttributes ;
  result.mProperty_mState = in_mState ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element GALGAS_scopeLocalVarMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                       const GALGAS_string & in_mCppName,
                                                                                       const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                       const GALGAS_localVariableAttributes & in_mAttributes,
                                                                                       const GALGAS_localVarValuation & in_mState,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  result.mProperty_mAttributes = in_mAttributes ;
  result.mProperty_mState = in_mState ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_scopeLocalVarMap_2D_element::objectCompare (const GALGAS_scopeLocalVarMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (inOperand.mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAttributes.objectCompare (inOperand.mProperty_mAttributes) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mState.objectCompare (inOperand.mProperty_mState) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_scopeLocalVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_mNameForCheckingFormalParameterUsing.isValid () && mProperty_mAttributes.isValid () && mProperty_mState.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_mNameForCheckingFormalParameterUsing.drop () ;
  mProperty_mAttributes.drop () ;
  mProperty_mState.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @scopeLocalVarMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mState.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @scopeLocalVarMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2D_element ("scopeLocalVarMap-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeLocalVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeLocalVarMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeLocalVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeLocalVarMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element GALGAS_scopeLocalVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap_2D_element result ;
  const GALGAS_scopeLocalVarMap_2D_element * p = (const GALGAS_scopeLocalVarMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_scopeLocalVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeLocalVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::~ GALGAS_unifiedTypeMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                 const GALGAS_unifiedTypeMapElementClass & in_mElement,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_unifiedTypeMapElementClass & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mElement (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_unifiedTypeMapElementClass & in_mElement,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unifiedTypeMap_2D_element::objectCompare (const GALGAS_unifiedTypeMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ("unifiedTypeMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  const GALGAS_unifiedTypeMap_2D_element * p = (const GALGAS_unifiedTypeMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList_2D_element::GALGAS_actualOutputArgumentList_2D_element (void) :
mProperty_mActualSelector (),
mProperty_mExpression (),
mProperty_mEndOfExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList_2D_element::~ GALGAS_actualOutputArgumentList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_actualOutputArgumentList_2D_element GALGAS_actualOutputArgumentList_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                         const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                                         const GALGAS_location & in_mEndOfExpressionLocation,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualOutputArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualSelector = in_mActualSelector ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualOutputArgumentList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList_2D_element::GALGAS_actualOutputArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_semanticExpressionAST & inOperand1,
                                                                                        const GALGAS_location & inOperand2) :
mProperty_mActualSelector (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mEndOfExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList_2D_element GALGAS_actualOutputArgumentList_2D_element::class_func_new (const GALGAS_lstring & in_mActualSelector,
                                                                                                       const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                                       const GALGAS_location & in_mEndOfExpressionLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualOutputArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualSelector = in_mActualSelector ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_actualOutputArgumentList_2D_element::objectCompare (const GALGAS_actualOutputArgumentList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mActualSelector.objectCompare (inOperand.mProperty_mActualSelector) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfExpressionLocation.objectCompare (inOperand.mProperty_mEndOfExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actualOutputArgumentList_2D_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mExpression.isValid () && mProperty_mEndOfExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualOutputArgumentList_2D_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualOutputArgumentList_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualOutputArgumentList-element:") ;
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
//
//     @actualOutputArgumentList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputArgumentList_2D_element ("actualOutputArgumentList-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualOutputArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputArgumentList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualOutputArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualOutputArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList_2D_element GALGAS_actualOutputArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputArgumentList_2D_element result ;
  const GALGAS_actualOutputArgumentList_2D_element * p = (const GALGAS_actualOutputArgumentList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualOutputArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_mTypeName,
                                                                                                                         const GALGAS_lstring & in_mConstantVarName,
                                                                                                                         const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                                         const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                         const GALGAS_location & in_mEndOfInstructions,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mConstantVarName = in_mConstantVarName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mEndOfInstructions = in_mEndOfInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::class_func_new (const GALGAS_lstring & in_mTypeName,
                                                                                                               const GALGAS_lstring & in_mConstantVarName,
                                                                                                               const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                               const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                               const GALGAS_location & in_mEndOfInstructions,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mConstantVarName = in_mConstantVarName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mEndOfInstructions = in_mEndOfInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_castInstructionBranchListAST_2D_element::objectCompare (const GALGAS_castInstructionBranchListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantVarName.objectCompare (inOperand.mProperty_mConstantVarName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTypeComparisonKind.objectCompare (inOperand.mProperty_mTypeComparisonKind) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @castInstructionBranchListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantVarName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @castInstructionBranchListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ("castInstructionBranchListAST-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                                                 const GALGAS_bool & in_mDeclaredAsUnused,
                                                                                                                                                 const GALGAS_lstring & in_mOptionalConstantName,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  result.mProperty_mDeclaredAsUnused = in_mDeclaredAsUnused ;
  result.mProperty_mOptionalConstantName = in_mOptionalConstantName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::class_func_new (const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                                               const GALGAS_bool & in_mDeclaredAsUnused,
                                                                                                                                               const GALGAS_lstring & in_mOptionalConstantName,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  result.mProperty_mDeclaredAsUnused = in_mDeclaredAsUnused ;
  result.mProperty_mOptionalConstantName = in_mOptionalConstantName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionalTypeName.objectCompare (inOperand.mProperty_mOptionalTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDeclaredAsUnused.objectCompare (inOperand.mProperty_mDeclaredAsUnused) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectElementListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaredAsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectElementListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ("forInstructionEnumeratedObjectElementListAST-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::init_21__21__21_ (const GALGAS_string & in_mEnumerationOrder,
                                                                                                                                                       const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                                       const GALGAS_string & in_mEnumeratorCppName,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumerationOrder = in_mEnumerationOrder ;
  result.mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  result.mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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

GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::class_func_new (const GALGAS_string & in_mEnumerationOrder,
                                                                                                                                                     const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                                     const GALGAS_string & in_mEnumeratorCppName,
                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumerationOrder = in_mEnumerationOrder ;
  result.mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  result.mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEnumerationOrder.objectCompare (inOperand.mProperty_mEnumerationOrder) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEnumeratedExpression.objectCompare (inOperand.mProperty_mEnumeratedExpression) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListForGeneration-element:") ;
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
//
//     @forInstructionEnumeratedObjectListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ("forInstructionEnumeratedObjectListForGeneration-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element GALGAS_optionalMethodActualArgumentList_2D_element::init_21__21_ (const GALGAS_lstring & in_mSelector,
                                                                                                                     const GALGAS_optionalMethodActualArgument & in_mActualArgument,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mActualArgument = in_mActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element::GALGAS_optionalMethodActualArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_optionalMethodActualArgument & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mActualArgument (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentList_2D_element GALGAS_optionalMethodActualArgumentList_2D_element::class_func_new (const GALGAS_lstring & in_mSelector,
                                                                                                                       const GALGAS_optionalMethodActualArgument & in_mActualArgument,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mActualArgument = in_mActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionalMethodActualArgumentList_2D_element::objectCompare (const GALGAS_optionalMethodActualArgumentList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @optionalMethodActualArgumentList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionalMethodActualArgumentList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentList_2D_element ("optionalMethodActualArgumentList-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mLogMessage,
                                                                         const GALGAS_semanticExpressionAST & in_mLogExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::class_func_new (const GALGAS_lstring & in_mLogMessage,
                                                                           const GALGAS_semanticExpressionAST & in_mLogExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_logListAST_2D_element::objectCompare (const GALGAS_logListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLogMessage.objectCompare (inOperand.mProperty_mLogMessage) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @logListAST-element:") ;
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
//
//     @logListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST_2D_element ("logListAST-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                                                                 const GALGAS_lstring & in_mExtractedValueName,
                                                                                                                 const GALGAS_bool & in_mMarkedAsUnused,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExtractedValueTypeName = in_mExtractedValueTypeName ;
  result.mProperty_mExtractedValueName = in_mExtractedValueName ;
  result.mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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

GALGAS_switchExtractedValuesListAST_2D_element GALGAS_switchExtractedValuesListAST_2D_element::class_func_new (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                                                               const GALGAS_lstring & in_mExtractedValueName,
                                                                                                               const GALGAS_bool & in_mMarkedAsUnused,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExtractedValueTypeName = in_mExtractedValueTypeName ;
  result.mProperty_mExtractedValueName = in_mExtractedValueName ;
  result.mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchExtractedValuesListAST_2D_element::objectCompare (const GALGAS_switchExtractedValuesListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExtractedValueTypeName.objectCompare (inOperand.mProperty_mExtractedValueTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExtractedValueName.objectCompare (inOperand.mProperty_mExtractedValueName) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @switchExtractedValuesListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchExtractedValuesListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ("switchExtractedValuesListAST-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                                             const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                                               const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @unusedNonTerminalSymbolMapForGrammarAnalysis-element:") ;
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
//
//     @unusedNonTerminalSymbolMapForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ("unusedNonTerminalSymbolMapForGrammarAnalysis-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                                                                                                   const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                                   const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap,
                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonTerminalSymbol = in_mNonTerminalSymbol ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  result.mProperty_mNonterminalSymbolParametersMap = in_mNonterminalSymbolParametersMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::class_func_new (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                                                                                                 const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                                 const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonTerminalSymbol = in_mNonTerminalSymbol ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  result.mProperty_mNonterminalSymbolParametersMap = in_mNonterminalSymbolParametersMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNonTerminalSymbol.objectCompare (inOperand.mProperty_mNonTerminalSymbol) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNonTerminalIndex.objectCompare (inOperand.mProperty_mNonTerminalIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @nonTerminalSymbolSortedListForGrammarAnalysis-element:") ;
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
//
//     @nonTerminalSymbolSortedListForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ("nonTerminalSymbolSortedListForGrammarAnalysis-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::init_21__21_ (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                               const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProductionRulesList = in_mProductionRulesList ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1) :
mProperty_mProductionRulesList (inOperand0),
mProperty_mSyntaxComponentName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::class_func_new (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                                 const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProductionRulesList = in_mProductionRulesList ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mProductionRulesList.objectCompare (inOperand.mProperty_mProductionRulesList) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @syntaxComponentListForGrammarAnalysis-element:") ;
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
//
//     @syntaxComponentListForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ("syntaxComponentListForGrammarAnalysis-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                             const GALGAS_uint & in_mTerminalIndex,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTerminalIndex = in_mTerminalIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTerminalIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                               const GALGAS_uint & in_mTerminalIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTerminalIndex = in_mTerminalIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @terminalSymbolsMapForGrammarAnalysis-element:") ;
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
//
//     @terminalSymbolsMapForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ("terminalSymbolsMapForGrammarAnalysis-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element::GALGAS_extensionMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element GALGAS_extensionMethodMapForGlobalCheckings_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionMethodMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @extensionMethodMapForGlobalCheckings-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForGlobalCheckings-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ("extensionMethodMapForGlobalCheckings-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element::GALGAS_extensionSetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element GALGAS_extensionSetterMapForGlobalCheckings_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionSetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @extensionSetterMapForGlobalCheckings-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForGlobalCheckings-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ("extensionSetterMapForGlobalCheckings-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element::GALGAS_extensionGetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element GALGAS_extensionGetterMapForGlobalCheckings_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionGetterMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @extensionGetterMapForGlobalCheckings-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForGlobalCheckings-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ("extensionGetterMapForGlobalCheckings-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::init_21__21_ (const GALGAS_lstring & in_mFeatureName,
                                                                                                                 const GALGAS_lstring & in_mFeatureValue,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFeatureName = in_mFeatureName ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1) :
mProperty_mFeatureName (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::class_func_new (const GALGAS_lstring & in_mFeatureName,
                                                                                                                   const GALGAS_lstring & in_mFeatureValue,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFeatureName = in_mFeatureName ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_galgas_33_QualifiedFeatureList_2D_element::objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFeatureName.objectCompare (inOperand.mProperty_mFeatureName) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @galgas3QualifiedFeatureList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFeatureName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @galgas3QualifiedFeatureList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ("galgas3QualifiedFeatureList-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_stringset & in_mInclusion,
                                                                                                 const GALGAS_string & in_mHeaderString,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInclusion = in_mInclusion ;
  result.mProperty_mHeaderString = in_mHeaderString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_stringset & in_mInclusion,
                                                                                               const GALGAS_string & in_mHeaderString,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInclusion = in_mInclusion ;
  result.mProperty_mHeaderString = in_mHeaderString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_headerCompositionMap_2D_element::objectCompare (const GALGAS_headerCompositionMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInclusion.objectCompare (inOperand.mProperty_mInclusion) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @headerCompositionMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInclusion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderString.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @headerCompositionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ("headerCompositionMap-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_string & in_mHeaderFileName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mHeaderFileName = in_mHeaderFileName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mHeaderFileName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_string & in_mHeaderFileName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mHeaderFileName = in_mHeaderFileName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_headerRepartitionMap_2D_element::objectCompare (const GALGAS_headerRepartitionMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @headerRepartitionMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderFileName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @headerRepartitionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ("headerRepartitionMap-element",
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_lstring & in_mFeatureValue,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                           const GALGAS_lstring & in_mFeatureValue,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_projectQualifiedFeatureMap_2D_element::objectCompare (const GALGAS_projectQualifiedFeatureMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @projectQualifiedFeatureMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @projectQualifiedFeatureMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ("projectQualifiedFeatureMap-element",
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

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralUIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInt.printNonNullClassInstanceProperties ("mLiteralInt") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_templateLiteralUIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_templateLiteralUIntExpressionAST * p = (const cPtr_templateLiteralUIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralInt.objectCompare (p->mProperty_mLiteralInt) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_templateLiteralUIntExpressionAST::objectCompare (const GALGAS_templateLiteralUIntExpressionAST & inOperand) const {
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

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::
init_21_ (const GALGAS_lbigint & in_mLiteralInt,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralUIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralUIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralUIntExpressionAST_init_21_ (in_mLiteralInt, inCompiler) ;
  const GALGAS_templateLiteralUIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::
templateLiteralUIntExpressionAST_init_21_ (const GALGAS_lbigint & in_mLiteralInt,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST::GALGAS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralUIntExpressionAST GALGAS_templateLiteralUIntExpressionAST::class_func_new (const GALGAS_lbigint & in_mLiteralInt
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralUIntExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralUIntExpressionAST (in_mLiteralInt COMMA_THERE)) ;
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
mProperty_mLiteralInt () {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralUIntExpressionAST:") ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
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

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralChar () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralCharExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralChar.printNonNullClassInstanceProperties ("mLiteralChar") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_templateLiteralCharExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_templateLiteralCharExpressionAST * p = (const cPtr_templateLiteralCharExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralChar.objectCompare (p->mProperty_mLiteralChar) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_templateLiteralCharExpressionAST::objectCompare (const GALGAS_templateLiteralCharExpressionAST & inOperand) const {
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

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::
init_21_ (const GALGAS_lchar & in_mLiteralChar,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralCharExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralCharExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralCharExpressionAST_init_21_ (in_mLiteralChar, inCompiler) ;
  const GALGAS_templateLiteralCharExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::
templateLiteralCharExpressionAST_init_21_ (const GALGAS_lchar & in_mLiteralChar,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralChar = in_mLiteralChar ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST::GALGAS_templateLiteralCharExpressionAST (const cPtr_templateLiteralCharExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralCharExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralCharExpressionAST GALGAS_templateLiteralCharExpressionAST::class_func_new (const GALGAS_lchar & in_mLiteralChar
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralCharExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralCharExpressionAST (in_mLiteralChar COMMA_THERE)) ;
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
mProperty_mLiteralChar () {
  mProperty_mLiteralChar = in_mLiteralChar ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

void cPtr_templateLiteralCharExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralCharExpressionAST:") ;
  mProperty_mLiteralChar.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ("templateLiteralCharExpressionAST",
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

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralDouble () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralDouble.printNonNullClassInstanceProperties ("mLiteralDouble") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_templateLiteralDoubleExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_templateLiteralDoubleExpressionAST * p = (const cPtr_templateLiteralDoubleExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralDouble.objectCompare (p->mProperty_mLiteralDouble) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_templateLiteralDoubleExpressionAST::objectCompare (const GALGAS_templateLiteralDoubleExpressionAST & inOperand) const {
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

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::
init_21_ (const GALGAS_ldouble & in_mLiteralDouble,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralDoubleExpressionAST_init_21_ (in_mLiteralDouble, inCompiler) ;
  const GALGAS_templateLiteralDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::
templateLiteralDoubleExpressionAST_init_21_ (const GALGAS_ldouble & in_mLiteralDouble,
                                             Compiler * /* inCompiler */) {
  mProperty_mLiteralDouble = in_mLiteralDouble ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST::GALGAS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralDoubleExpressionAST GALGAS_templateLiteralDoubleExpressionAST::class_func_new (const GALGAS_ldouble & in_mLiteralDouble
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralDoubleExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralDoubleExpressionAST (in_mLiteralDouble COMMA_THERE)) ;
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
mProperty_mLiteralDouble () {
  mProperty_mLiteralDouble = in_mLiteralDouble ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

void cPtr_templateLiteralDoubleExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralDoubleExpressionAST:") ;
  mProperty_mLiteralDouble.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ("templateLiteralDoubleExpressionAST",
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
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (83)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S6 (index = 154)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (32)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_SHIFT (33)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (91)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S8 (index = 186)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (83)
, BOTTOM_UP_END ()
// State S9 (index = 203)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_ACCEPT ()
, BOTTOM_UP_END ()
// State S10 (index = 206)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S21 (index = 797)
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
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S24 (index = 944)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
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
, BOTTOM_UP_END ()
// State S25 (index = 993)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_SHIFT (53)
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
, BOTTOM_UP_END ()
// State S26 (index = 1044)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_SHIFT (55)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_SHIFT (56)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_SHIFT (57)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_SHIFT (58)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (59)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_SHIFT (60)
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
, BOTTOM_UP_END ()
// State S27 (index = 1107)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
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
, BOTTOM_UP_END ()
// State S28 (index = 1178)
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
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
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
, BOTTOM_UP_END ()
// State S29 (index = 1255)
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
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (71)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_SHIFT (72)
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
, BOTTOM_UP_END ()
// State S30 (index = 1336)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (74)
, BOTTOM_UP_END ()
// State S31 (index = 1339)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (75)
, BOTTOM_UP_END ()
// State S32 (index = 1342)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (93)
, BOTTOM_UP_END ()
// State S33 (index = 1345)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (92)
, BOTTOM_UP_END ()
// State S34 (index = 1348)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END ()
// State S35 (index = 1351)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (110)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END ()
// State S36 (index = 1356)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (84)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S38 (index = 1436)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S41 (index = 1599)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (84)
, BOTTOM_UP_END ()
// State S42 (index = 1602)
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
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S45 (index = 1791)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (87)
, BOTTOM_UP_END ()
// State S46 (index = 1794)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (88)
, BOTTOM_UP_END ()
// State S47 (index = 1797)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (89)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (90)
, BOTTOM_UP_END ()
// State S48 (index = 1802)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (92)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S71 (index = 2565)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (109)
, BOTTOM_UP_END ()
// State S72 (index = 2568)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_SHIFT (110)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_SHIFT (111)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S74 (index = 2652)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (73)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S75 (index = 2669)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S76 (index = 2690)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (120)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (121)
, BOTTOM_UP_END ()
// State S77 (index = 2699)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_SHIFT (123)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (94)
, BOTTOM_UP_END ()
// State S78 (index = 2704)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (125)
, BOTTOM_UP_END ()
// State S79 (index = 2707)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (127)
, BOTTOM_UP_END ()
// State S80 (index = 2710)
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
, BOTTOM_UP_END ()
// State S81 (index = 2735)
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
, BOTTOM_UP_END ()
// State S82 (index = 2760)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (130)
, BOTTOM_UP_END ()
// State S83 (index = 2763)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END ()
// State S84 (index = 2768)
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
, BOTTOM_UP_END ()
// State S85 (index = 2849)
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
, BOTTOM_UP_END ()
// State S86 (index = 2930)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (131)
, BOTTOM_UP_END ()
// State S87 (index = 2933)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
// State S88 (index = 2942)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (133)
, BOTTOM_UP_END ()
// State S89 (index = 2945)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (134)
, BOTTOM_UP_END ()
// State S90 (index = 2948)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (135)
, BOTTOM_UP_END ()
// State S91 (index = 2951)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (136)
, BOTTOM_UP_END ()
// State S92 (index = 2954)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
// State S93 (index = 2963)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
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
, BOTTOM_UP_END ()
// State S94 (index = 3012)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
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
, BOTTOM_UP_END ()
// State S95 (index = 3061)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_SHIFT (53)
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
, BOTTOM_UP_END ()
// State S96 (index = 3112)
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
, BOTTOM_UP_END ()
// State S97 (index = 3163)
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
, BOTTOM_UP_END ()
// State S98 (index = 3214)
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
, BOTTOM_UP_END ()
// State S99 (index = 3265)
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
, BOTTOM_UP_END ()
// State S100 (index = 3316)
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
, BOTTOM_UP_END ()
// State S101 (index = 3367)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
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
, BOTTOM_UP_END ()
// State S102 (index = 3418)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
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
, BOTTOM_UP_END ()
// State S103 (index = 3489)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
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
, BOTTOM_UP_END ()
// State S104 (index = 3560)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
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
, BOTTOM_UP_END ()
// State S105 (index = 3631)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
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
, BOTTOM_UP_END ()
// State S106 (index = 3702)
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
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
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
, BOTTOM_UP_END ()
// State S107 (index = 3779)
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
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
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
, BOTTOM_UP_END ()
// State S108 (index = 3856)
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
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
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
, BOTTOM_UP_END ()
// State S109 (index = 3933)
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
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (71)
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
, BOTTOM_UP_END ()
// State S110 (index = 4012)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (67)
, BOTTOM_UP_END ()
// State S111 (index = 4015)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (68)
, BOTTOM_UP_END ()
// State S112 (index = 4018)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (69)
, BOTTOM_UP_END ()
// State S113 (index = 4021)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (149)
, BOTTOM_UP_END ()
// State S114 (index = 4024)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (73)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S115 (index = 4041)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END ()
// State S116 (index = 4044)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S117 (index = 4065)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (75)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (153)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END ()
// State S118 (index = 4072)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END ()
// State S119 (index = 4081)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (29)
, BOTTOM_UP_END ()
// State S120 (index = 4090)
, Lexique_galgasTemplateScanner::kToken_in, BOTTOM_UP_SHIFT (155)
, BOTTOM_UP_END ()
// State S121 (index = 4093)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (156)
, BOTTOM_UP_END ()
// State S122 (index = 4096)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (87)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (121)
, BOTTOM_UP_END ()
// State S123 (index = 4105)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S124 (index = 4122)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_SHIFT (161)
, BOTTOM_UP_END ()
// State S125 (index = 4125)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (162)
, BOTTOM_UP_END ()
// State S126 (index = 4132)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (164)
, BOTTOM_UP_END ()
// State S127 (index = 4135)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (33)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END ()
// State S128 (index = 4166)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
// State S129 (index = 4175)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
// State S130 (index = 4184)
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
, BOTTOM_UP_END ()
// State S131 (index = 4265)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
// State S132 (index = 4274)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (168)
, BOTTOM_UP_END ()
// State S133 (index = 4277)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (169)
, BOTTOM_UP_END ()
// State S134 (index = 4280)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (170)
, BOTTOM_UP_END ()
// State S135 (index = 4283)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (171)
, BOTTOM_UP_END ()
// State S136 (index = 4286)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (64)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END ()
// State S137 (index = 4367)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (172)
, BOTTOM_UP_END ()
// State S138 (index = 4370)
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
, BOTTOM_UP_END ()
// State S139 (index = 4415)
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
, BOTTOM_UP_END ()
// State S140 (index = 4460)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (39)
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
, BOTTOM_UP_END ()
// State S141 (index = 4509)
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
, BOTTOM_UP_END ()
// State S142 (index = 4572)
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
, BOTTOM_UP_END ()
// State S143 (index = 4635)
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
, BOTTOM_UP_END ()
// State S144 (index = 4698)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
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
, BOTTOM_UP_END ()
// State S145 (index = 4761)
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
, BOTTOM_UP_END ()
// State S146 (index = 4832)
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
, BOTTOM_UP_END ()
// State S147 (index = 4903)
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
, BOTTOM_UP_END ()
// State S148 (index = 4974)
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
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (57)
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
, BOTTOM_UP_END ()
// State S149 (index = 5051)
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
, BOTTOM_UP_END ()
// State S150 (index = 5132)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END ()
// State S151 (index = 5135)
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
, BOTTOM_UP_END ()
// State S152 (index = 5166)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (78)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (78)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (78)
, BOTTOM_UP_END ()
// State S153 (index = 5173)
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
, BOTTOM_UP_END ()
// State S154 (index = 5198)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (79)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_SHIFT (174)
, BOTTOM_UP_END ()
// State S155 (index = 5203)
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
, BOTTOM_UP_END ()
// State S156 (index = 5228)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END ()
// State S157 (index = 5237)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (87)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (121)
, BOTTOM_UP_END ()
// State S158 (index = 5246)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (178)
, BOTTOM_UP_END ()
// State S159 (index = 5249)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S160 (index = 5266)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (95)
, BOTTOM_UP_END ()
// State S161 (index = 5269)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (180)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (98)
, BOTTOM_UP_END ()
// State S162 (index = 5292)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (182)
, BOTTOM_UP_END ()
// State S163 (index = 5295)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (183)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (116)
, BOTTOM_UP_END ()
// State S164 (index = 5300)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (112)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (112)
, BOTTOM_UP_END ()
// State S165 (index = 5319)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (71)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (71)
, BOTTOM_UP_END ()
// State S166 (index = 5324)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (72)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (72)
, BOTTOM_UP_END ()
// State S167 (index = 5329)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (187)
, BOTTOM_UP_END ()
// State S168 (index = 5332)
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
, BOTTOM_UP_END ()
// State S169 (index = 5413)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
// State S170 (index = 5422)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (65)
, BOTTOM_UP_END ()
// State S171 (index = 5425)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (189)
, BOTTOM_UP_END ()
// State S172 (index = 5428)
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
, BOTTOM_UP_END ()
// State S173 (index = 5509)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (190)
, BOTTOM_UP_END ()
// State S174 (index = 5512)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (81)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S175 (index = 5529)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (193)
, BOTTOM_UP_END ()
// State S176 (index = 5532)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (194)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (85)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (85)
, BOTTOM_UP_END ()
// State S177 (index = 5539)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (88)
, BOTTOM_UP_END ()
// State S178 (index = 5542)
, Lexique_galgasTemplateScanner::kToken_in, BOTTOM_UP_SHIFT (196)
, BOTTOM_UP_END ()
// State S179 (index = 5545)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (97)
, BOTTOM_UP_END ()
// State S180 (index = 5548)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (197)
, BOTTOM_UP_END ()
// State S181 (index = 5551)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S182 (index = 5572)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (162)
, BOTTOM_UP_END ()
// State S183 (index = 5579)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (201)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (124)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (202)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (203)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END ()
// State S184 (index = 5590)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END ()
// State S185 (index = 5593)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (112)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (112)
, BOTTOM_UP_END ()
// State S186 (index = 5612)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (110)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END ()
// State S187 (index = 5617)
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
, BOTTOM_UP_END ()
// State S188 (index = 5698)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (208)
, BOTTOM_UP_END ()
// State S189 (index = 5701)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (66)
, BOTTOM_UP_END ()
// State S190 (index = 5704)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S191 (index = 5725)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (81)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S192 (index = 5742)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (80)
, BOTTOM_UP_END ()
// State S193 (index = 5745)
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
, BOTTOM_UP_END ()
// State S194 (index = 5776)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (211)
, BOTTOM_UP_END ()
// State S195 (index = 5779)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (30)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END ()
// State S196 (index = 5784)
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
, BOTTOM_UP_END ()
// State S197 (index = 5809)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (213)
, BOTTOM_UP_END ()
// State S198 (index = 5812)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S199 (index = 5833)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (102)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_SHIFT (215)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (102)
, BOTTOM_UP_END ()
// State S200 (index = 5840)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (115)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (115)
, BOTTOM_UP_END ()
// State S201 (index = 5845)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END ()
// State S202 (index = 5858)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (217)
, BOTTOM_UP_END ()
// State S203 (index = 5861)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (123)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (123)
, BOTTOM_UP_END ()
// State S204 (index = 5866)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (201)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (124)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (202)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (203)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END ()
// State S205 (index = 5879)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (125)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_SHIFT (220)
, BOTTOM_UP_END ()
// State S206 (index = 5884)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (113)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (113)
, BOTTOM_UP_END ()
// State S207 (index = 5889)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (111)
, BOTTOM_UP_END ()
// State S208 (index = 5892)
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
, BOTTOM_UP_END ()
// State S209 (index = 5973)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (75)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (153)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END ()
// State S210 (index = 5980)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END ()
// State S211 (index = 5983)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (86)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (86)
, BOTTOM_UP_END ()
// State S212 (index = 5988)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (223)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (89)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (89)
, BOTTOM_UP_END ()
// State S213 (index = 5995)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (99)
, BOTTOM_UP_END ()
// State S214 (index = 6016)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (101)
, BOTTOM_UP_END ()
// State S215 (index = 6023)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (104)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (104)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S216 (index = 6042)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (106)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_SHIFT (227)
, BOTTOM_UP_END ()
// State S217 (index = 6047)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (120)
, BOTTOM_UP_END ()
// State S218 (index = 6060)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (229)
, BOTTOM_UP_END ()
// State S219 (index = 6063)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (201)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (124)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (202)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (203)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END ()
// State S220 (index = 6076)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (126)
, BOTTOM_UP_END ()
// State S221 (index = 6079)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (231)
, BOTTOM_UP_END ()
// State S222 (index = 6082)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, BOTTOM_UP_END ()
// State S223 (index = 6087)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (232)
, BOTTOM_UP_END ()
// State S224 (index = 6090)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END ()
// State S225 (index = 6095)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (104)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (104)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S226 (index = 6114)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (103)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (103)
, BOTTOM_UP_END ()
// State S227 (index = 6119)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (108)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S228 (index = 6136)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (236)
, BOTTOM_UP_END ()
// State S229 (index = 6139)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (117)
, BOTTOM_UP_END ()
// State S230 (index = 6142)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (119)
, BOTTOM_UP_END ()
// State S231 (index = 6145)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (122)
, BOTTOM_UP_END ()
// State S232 (index = 6158)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (90)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (90)
, BOTTOM_UP_END ()
// State S233 (index = 6163)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (105)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (105)
, BOTTOM_UP_END ()
// State S234 (index = 6168)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (108)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END ()
// State S235 (index = 6185)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (107)
, BOTTOM_UP_END ()
// State S236 (index = 6188)
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
, BOTTOM_UP_END ()
// State S237 (index = 6219)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END ()} ;

static const uint32_t gActionTableIndex_templateGrammar [238] = {
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
, 2699  // S77
, 2704  // S78
, 2707  // S79
, 2710  // S80
, 2735  // S81
, 2760  // S82
, 2763  // S83
, 2768  // S84
, 2849  // S85
, 2930  // S86
, 2933  // S87
, 2942  // S88
, 2945  // S89
, 2948  // S90
, 2951  // S91
, 2954  // S92
, 2963  // S93
, 3012  // S94
, 3061  // S95
, 3112  // S96
, 3163  // S97
, 3214  // S98
, 3265  // S99
, 3316  // S100
, 3367  // S101
, 3418  // S102
, 3489  // S103
, 3560  // S104
, 3631  // S105
, 3702  // S106
, 3779  // S107
, 3856  // S108
, 3933  // S109
, 4012  // S110
, 4015  // S111
, 4018  // S112
, 4021  // S113
, 4024  // S114
, 4041  // S115
, 4044  // S116
, 4065  // S117
, 4072  // S118
, 4081  // S119
, 4090  // S120
, 4093  // S121
, 4096  // S122
, 4105  // S123
, 4122  // S124
, 4125  // S125
, 4132  // S126
, 4135  // S127
, 4166  // S128
, 4175  // S129
, 4184  // S130
, 4265  // S131
, 4274  // S132
, 4277  // S133
, 4280  // S134
, 4283  // S135
, 4286  // S136
, 4367  // S137
, 4370  // S138
, 4415  // S139
, 4460  // S140
, 4509  // S141
, 4572  // S142
, 4635  // S143
, 4698  // S144
, 4761  // S145
, 4832  // S146
, 4903  // S147
, 4974  // S148
, 5051  // S149
, 5132  // S150
, 5135  // S151
, 5166  // S152
, 5173  // S153
, 5198  // S154
, 5203  // S155
, 5228  // S156
, 5237  // S157
, 5246  // S158
, 5249  // S159
, 5266  // S160
, 5269  // S161
, 5292  // S162
, 5295  // S163
, 5300  // S164
, 5319  // S165
, 5324  // S166
, 5329  // S167
, 5332  // S168
, 5413  // S169
, 5422  // S170
, 5425  // S171
, 5428  // S172
, 5509  // S173
, 5512  // S174
, 5529  // S175
, 5532  // S176
, 5539  // S177
, 5542  // S178
, 5545  // S179
, 5548  // S180
, 5551  // S181
, 5572  // S182
, 5579  // S183
, 5590  // S184
, 5593  // S185
, 5612  // S186
, 5617  // S187
, 5698  // S188
, 5701  // S189
, 5704  // S190
, 5725  // S191
, 5742  // S192
, 5745  // S193
, 5776  // S194
, 5779  // S195
, 5784  // S196
, 5809  // S197
, 5812  // S198
, 5833  // S199
, 5840  // S200
, 5845  // S201
, 5858  // S202
, 5861  // S203
, 5866  // S204
, 5879  // S205
, 5884  // S206
, 5889  // S207
, 5892  // S208
, 5973  // S209
, 5980  // S210
, 5983  // S211
, 5988  // S212
, 5995  // S213
, 6016  // S214
, 6023  // S215
, 6042  // S216
, 6047  // S217
, 6060  // S218
, 6063  // S219
, 6076  // S220
, 6079  // S221
, 6082  // S222
, 6087  // S223
, 6090  // S224
, 6095  // S225
, 6114  // S226
, 6119  // S227
, 6136  // S228
, 6139  // S229
, 6142  // S230
, 6145  // S231
, 6158  // S232
, 6163  // S233
, 6168  // S234
, 6185  // S235
, 6188  // S236
, 6219  // S237
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

static const int32_t gSuccessorTable_templateGrammar_76 [3] = {10, 122, -1} ;

static const int32_t gSuccessorTable_templateGrammar_77 [3] = {34, 124, -1} ;

static const int32_t gSuccessorTable_templateGrammar_78 [3] = {12, 126, -1} ;

static const int32_t gSuccessorTable_templateGrammar_80 [15] = {0, 128,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_81 [15] = {0, 129,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_87 [5] = {7, 132,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_92 [5] = {7, 137,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_93 [3] = {13, 138, -1} ;

static const int32_t gSuccessorTable_templateGrammar_94 [3] = {13, 139, -1} ;

static const int32_t gSuccessorTable_templateGrammar_95 [3] = {14, 140, -1} ;

static const int32_t gSuccessorTable_templateGrammar_102 [3] = {16, 141, -1} ;

static const int32_t gSuccessorTable_templateGrammar_103 [3] = {16, 142, -1} ;

static const int32_t gSuccessorTable_templateGrammar_104 [3] = {16, 143, -1} ;

static const int32_t gSuccessorTable_templateGrammar_105 [3] = {16, 144, -1} ;

static const int32_t gSuccessorTable_templateGrammar_106 [3] = {17, 145, -1} ;

static const int32_t gSuccessorTable_templateGrammar_107 [3] = {17, 146, -1} ;

static const int32_t gSuccessorTable_templateGrammar_108 [3] = {17, 147, -1} ;

static const int32_t gSuccessorTable_templateGrammar_109 [3] = {18, 148, -1} ;

static const int32_t gSuccessorTable_templateGrammar_114 [5] = {8, 114,
  24, 150, -1} ;

static const int32_t gSuccessorTable_templateGrammar_116 [5] = {8, 116,
  26, 152, -1} ;

static const int32_t gSuccessorTable_templateGrammar_117 [3] = {25, 154, -1} ;

static const int32_t gSuccessorTable_templateGrammar_122 [5] = {10, 157,
  31, 158, -1} ;

static const int32_t gSuccessorTable_templateGrammar_123 [5] = {8, 159,
  35, 160, -1} ;

static const int32_t gSuccessorTable_templateGrammar_125 [3] = {44, 163, -1} ;

static const int32_t gSuccessorTable_templateGrammar_128 [3] = {23, 165, -1} ;

static const int32_t gSuccessorTable_templateGrammar_129 [3] = {23, 166, -1} ;

static const int32_t gSuccessorTable_templateGrammar_131 [5] = {7, 167,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_153 [15] = {0, 173,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_154 [3] = {27, 175, -1} ;

static const int32_t gSuccessorTable_templateGrammar_155 [15] = {0, 176,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_157 [5] = {10, 157,
  31, 177, -1} ;

static const int32_t gSuccessorTable_templateGrammar_159 [5] = {8, 159,
  35, 179, -1} ;

static const int32_t gSuccessorTable_templateGrammar_161 [3] = {36, 181, -1} ;

static const int32_t gSuccessorTable_templateGrammar_163 [3] = {45, 184, -1} ;

static const int32_t gSuccessorTable_templateGrammar_164 [5] = {8, 185,
  43, 186, -1} ;

static const int32_t gSuccessorTable_templateGrammar_169 [5] = {7, 188,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_174 [5] = {8, 191,
  28, 192, -1} ;

static const int32_t gSuccessorTable_templateGrammar_176 [3] = {30, 195, -1} ;

static const int32_t gSuccessorTable_templateGrammar_181 [5] = {8, 198,
  37, 199, -1} ;

static const int32_t gSuccessorTable_templateGrammar_182 [3] = {44, 200, -1} ;

static const int32_t gSuccessorTable_templateGrammar_183 [5] = {47, 204,
  48, 205, -1} ;

static const int32_t gSuccessorTable_templateGrammar_185 [5] = {8, 185,
  43, 206, -1} ;

static const int32_t gSuccessorTable_templateGrammar_186 [3] = {42, 207, -1} ;

static const int32_t gSuccessorTable_templateGrammar_190 [5] = {8, 116,
  26, 209, -1} ;

static const int32_t gSuccessorTable_templateGrammar_191 [5] = {8, 191,
  28, 210, -1} ;

static const int32_t gSuccessorTable_templateGrammar_196 [15] = {0, 212,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_198 [5] = {8, 198,
  37, 214, -1} ;

static const int32_t gSuccessorTable_templateGrammar_199 [3] = {38, 216, -1} ;

static const int32_t gSuccessorTable_templateGrammar_204 [7] = {46, 218,
  47, 219,
  48, 205, -1} ;

static const int32_t gSuccessorTable_templateGrammar_205 [3] = {49, 221, -1} ;

static const int32_t gSuccessorTable_templateGrammar_209 [3] = {25, 222, -1} ;

static const int32_t gSuccessorTable_templateGrammar_212 [3] = {32, 224, -1} ;

static const int32_t gSuccessorTable_templateGrammar_215 [5] = {8, 225,
  39, 226, -1} ;

static const int32_t gSuccessorTable_templateGrammar_216 [3] = {40, 228, -1} ;

static const int32_t gSuccessorTable_templateGrammar_219 [7] = {46, 230,
  47, 219,
  48, 205, -1} ;

static const int32_t gSuccessorTable_templateGrammar_225 [5] = {8, 225,
  39, 233, -1} ;

static const int32_t gSuccessorTable_templateGrammar_227 [5] = {8, 234,
  41, 235, -1} ;

static const int32_t gSuccessorTable_templateGrammar_234 [5] = {8, 234,
  41, 237, -1} ;

static const int32_t * gSuccessorTable_templateGrammar [238] = {
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
  nullptr, nullptr, gSuccessorTable_templateGrammar_122, gSuccessorTable_templateGrammar_123, 
  nullptr, gSuccessorTable_templateGrammar_125, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_128, gSuccessorTable_templateGrammar_129, nullptr, gSuccessorTable_templateGrammar_131, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_153, gSuccessorTable_templateGrammar_154, gSuccessorTable_templateGrammar_155, 
  nullptr, gSuccessorTable_templateGrammar_157, nullptr, gSuccessorTable_templateGrammar_159, 
  nullptr, gSuccessorTable_templateGrammar_161, nullptr, gSuccessorTable_templateGrammar_163, 
  gSuccessorTable_templateGrammar_164, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_169, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_174, nullptr, 
  gSuccessorTable_templateGrammar_176, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_181, gSuccessorTable_templateGrammar_182, gSuccessorTable_templateGrammar_183, 
  nullptr, gSuccessorTable_templateGrammar_185, gSuccessorTable_templateGrammar_186, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_190, gSuccessorTable_templateGrammar_191, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_196, nullptr, gSuccessorTable_templateGrammar_198, gSuccessorTable_templateGrammar_199, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_204, gSuccessorTable_templateGrammar_205, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_209, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_212, nullptr, nullptr, gSuccessorTable_templateGrammar_215, 
  gSuccessorTable_templateGrammar_216, nullptr, nullptr, gSuccessorTable_templateGrammar_219, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_225, nullptr, gSuccessorTable_templateGrammar_227, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_234, nullptr, 
  nullptr, nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_templateGrammar [128 * 2] = {
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

//--------------------------------------------------------------------------------------------------
//
//                          'expression_tpl' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_expression_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_term_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
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

void cGrammar_templateGrammar::nt_factor_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_primary_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
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

void cGrammar_templateGrammar::nt_primary_5F_tpl_ (GALGAS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_ (GALGAS_templateExpressionListAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_template_5F_instruction_parse (Lexique_galgasTemplateScanner * inLexique) {
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

//--------------------------------------------------------------------------------------------------
//
//                   'template_parser_start_symbol' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST &  parameter_1,
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
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_templateInstructionListAST &  parameter_1
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

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_parse (Lexique_galgasTemplateScanner * inLexique) {
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

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_ (GALGAS_lstringlist &  parameter_1,
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

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasTemplateScanner * inLexique) {
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

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inLexique) {
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
                                Lexique_galgasTemplateScanner * inLexique) {
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

//--------------------------------------------------------------------------------------------------
//
//                           'switch_case' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_switch_5F_case_parse (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 34) {
  rule_templateSyntax_switch_5F_case_i34_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 34) {
  rule_templateSyntax_switch_5F_case_i34_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_ (GALGAS_lstringlist &  parameter_1,
                                GALGAS_switchExtractedValuesListAST &  parameter_2,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 34) {
  rule_templateSyntax_switch_5F_case_i34_(parameter_1, parameter_2, inLexique) ;
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
// Productions numbers:  35 36 37
  return inLexique->nextProductionIndex () - 34 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_1' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  38 39
  return inLexique->nextProductionIndex () - 37 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_2' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  40 41 42 43 44 45 46
  return inLexique->nextProductionIndex () - 39 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_3' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  47 48 49 50 51
  return inLexique->nextProductionIndex () - 46 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_4' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  52 53 54 55
  return inLexique->nextProductionIndex () - 51 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_5' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  56 57
  return inLexique->nextProductionIndex () - 55 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_6' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  58 59
  return inLexique->nextProductionIndex () - 57 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_7' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  60 61 62 63 64
  return inLexique->nextProductionIndex () - 59 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_8' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  65 66
  return inLexique->nextProductionIndex () - 64 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_9' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  67 68 69
  return inLexique->nextProductionIndex () - 66 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_10' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  70 71 72
  return inLexique->nextProductionIndex () - 69 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_11' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  73 74
  return inLexique->nextProductionIndex () - 72 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_12' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  75 76
  return inLexique->nextProductionIndex () - 74 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_13' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  77 78
  return inLexique->nextProductionIndex () - 76 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_14' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  79 80
  return inLexique->nextProductionIndex () - 78 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_15' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  81 82
  return inLexique->nextProductionIndex () - 80 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_16' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  83 84
  return inLexique->nextProductionIndex () - 82 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_17' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  85 86
  return inLexique->nextProductionIndex () - 84 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_18' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_19' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_20' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  91 92 93
  return inLexique->nextProductionIndex () - 90 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_21' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  94 95
  return inLexique->nextProductionIndex () - 93 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_22' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  96 97
  return inLexique->nextProductionIndex () - 95 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_23' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  98 99
  return inLexique->nextProductionIndex () - 97 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_24' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  100 101
  return inLexique->nextProductionIndex () - 99 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_25' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  102 103
  return inLexique->nextProductionIndex () - 101 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_26' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  104 105
  return inLexique->nextProductionIndex () - 103 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_27' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  106 107
  return inLexique->nextProductionIndex () - 105 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_28' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  108 109
  return inLexique->nextProductionIndex () - 107 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_29' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_29 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  110 111
  return inLexique->nextProductionIndex () - 109 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_30' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_30 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  112 113
  return inLexique->nextProductionIndex () - 111 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_31' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_31 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_32' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_32 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  116 117
  return inLexique->nextProductionIndex () - 115 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_33' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_33 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_34' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_34 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  120 121 122
  return inLexique->nextProductionIndex () - 119 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_35' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_35 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  123 124
  return inLexique->nextProductionIndex () - 122 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_36' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_36 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  125 126
  return inLexique->nextProductionIndex () - 124 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// @templateInstructionExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_templateInstructionExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_templateInstructionExpressionForGeneration * p = (const cPtr_templateInstructionExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_templateInstructionExpressionForGeneration::objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const {
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

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::
init_21_ (const GALGAS_semanticExpressionForGeneration & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionExpressionForGeneration_init_21_ (in_mExpression, inCompiler) ;
  const GALGAS_templateInstructionExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::
templateInstructionExpressionForGeneration_init_21_ (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::class_func_new (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionForGeneration (in_mExpression COMMA_THERE)) ;
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
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionExpressionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
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
mProperty_routineMap (),
mProperty_mFunctionMap (),
mProperty_mFilewrapperMap (),
mProperty_grammarMap (),
mProperty_mOptionComponentMapForSemanticAnalysis (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis (),
mProperty_galgas_34_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::init_21_galgas_34_ (const GALGAS_bool & in_galgas_34_,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_galgas_34_ = in_galgas_34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_routineMap = GALGAS_routineMap::init (inCompiler COMMA_HERE) ;
GALGAS_functionMap temp_0 = GALGAS_functionMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 210)) ;
  mProperty_mFunctionMap = temp_0 ;
GALGAS_filewrapperMap temp_1 = GALGAS_filewrapperMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 211)) ;
  mProperty_mFilewrapperMap = temp_1 ;
GALGAS_grammarMap temp_2 = GALGAS_grammarMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 212)) ;
  mProperty_grammarMap = temp_2 ;
GALGAS_optionComponentMapForSemanticAnalysis temp_3 = GALGAS_optionComponentMapForSemanticAnalysis::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 213)) ;
  mProperty_mOptionComponentMapForSemanticAnalysis = temp_3 ;
GALGAS_lexiqueComponentMapForSemanticAnalysis temp_4 = GALGAS_lexiqueComponentMapForSemanticAnalysis::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 214)) ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = temp_4 ;
GALGAS_syntaxComponentMap temp_5 = GALGAS_syntaxComponentMap::init (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 215)) ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = temp_5 ;
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
mProperty_routineMap (inOperand0),
mProperty_mFunctionMap (inOperand1),
mProperty_mFilewrapperMap (inOperand2),
mProperty_grammarMap (inOperand3),
mProperty_mOptionComponentMapForSemanticAnalysis (inOperand4),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand5),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand6),
mProperty_galgas_34_ (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::class_func_new (const GALGAS_bool & in_galgas4,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_galgas_34_ = in_galgas4 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_routineMap.objectCompare (inOperand.mProperty_routineMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFunctionMap.objectCompare (inOperand.mProperty_mFunctionMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFilewrapperMap.objectCompare (inOperand.mProperty_mFilewrapperMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_grammarMap.objectCompare (inOperand.mProperty_grammarMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mOptionComponentMapForSemanticAnalysis) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexiqueComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mLexiqueComponentMapForSemanticAnalysis) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSyntaxComponentMapForSemanticAnalysis.objectCompare (inOperand.mProperty_mSyntaxComponentMapForSemanticAnalysis) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_galgas_34_.objectCompare (inOperand.mProperty_galgas_34_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_routineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_grammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () && mProperty_galgas_34_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_routineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_grammarMap.drop () ;
  mProperty_mOptionComponentMapForSemanticAnalysis.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
  mProperty_galgas_34_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_routineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_grammarMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_galgas_34_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
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

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mBoolOptionSortedList (),
mProperty_mUIntOptionSortedList (),
mProperty_mStringOptionSortedList (),
mProperty_mStringListSortedList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsPredefined.printNonNullClassInstanceProperties ("mIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mBoolOptionSortedList.printNonNullClassInstanceProperties ("mBoolOptionSortedList") ;
    mProperty_mUIntOptionSortedList.printNonNullClassInstanceProperties ("mUIntOptionSortedList") ;
    mProperty_mStringOptionSortedList.printNonNullClassInstanceProperties ("mStringOptionSortedList") ;
    mProperty_mStringListSortedList.printNonNullClassInstanceProperties ("mStringListSortedList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_optionComponentForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_implementationCppFileName.objectCompare (p->mProperty_implementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBoolOptionSortedList.objectCompare (p->mProperty_mBoolOptionSortedList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUIntOptionSortedList.objectCompare (p->mProperty_mUIntOptionSortedList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStringOptionSortedList.objectCompare (p->mProperty_mStringOptionSortedList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStringListSortedList.objectCompare (p->mProperty_mStringListSortedList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_optionComponentForGeneration::objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const {
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

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                             const GALGAS_string & in_implementationCppFileName,
                                                                             const GALGAS_bool & in_mIsPredefined,
                                                                             const GALGAS_string & in_mOptionComponentName,
                                                                             const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                             const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                             const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                             const GALGAS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_optionComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, in_mStringListSortedList, inCompiler) ;
  const GALGAS_optionComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::
optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                          const GALGAS_string & in_implementationCppFileName,
                                                                                                          const GALGAS_bool & in_mIsPredefined,
                                                                                                          const GALGAS_string & in_mOptionComponentName,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
  mProperty_mStringListSortedList = in_mStringListSortedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                                         const GALGAS_bool & in_mIsPredefined,
                                                                                         const GALGAS_string & in_mOptionComponentName,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mStringListSortedList
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionComponentForGeneration (in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, in_mStringListSortedList COMMA_THERE)) ;
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

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mBoolOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mBoolOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mUIntOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mUIntOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mStringOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mStringListSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringListSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GALGAS_bool & in_generateHeader,
                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mOptionComponentName,
                                                                      const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                      const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                      const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                      const GALGAS_commandLineOptionSortedList & in_mStringListSortedList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mBoolOptionSortedList (),
mProperty_mUIntOptionSortedList (),
mProperty_mStringOptionSortedList (),
mProperty_mStringListSortedList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
  mProperty_mStringListSortedList = in_mStringListSortedList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

void cPtr_optionComponentForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@optionComponentForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBoolOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUIntOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringListSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionSortedList, mProperty_mUIntOptionSortedList, mProperty_mStringOptionSortedList, mProperty_mStringListSortedList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionComponentForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ("optionComponentForGeneration",
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

ComparisonResult GALGAS_optionComponentForGeneration_2D_weak::objectCompare (const GALGAS_optionComponentForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ("optionComponentForGeneration-weak",
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

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mFlagList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolsetTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_boolsetTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_boolsetTypeForGeneration::objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const {
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

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
              const GALGAS_lstringlist & in_mFlagList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_boolsetTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_boolsetTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->boolsetTypeForGeneration_init_21__21_ (in_mSelfTypeEntry, in_mFlagList, inCompiler) ;
  const GALGAS_boolsetTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::
boolsetTypeForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GALGAS_lstringlist & in_mFlagList,
                                       Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mFlagList = in_mFlagList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                 const GALGAS_lstringlist & in_mFlagList
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_boolsetTypeForGeneration (in_mSelfTypeEntry, in_mFlagList COMMA_THERE)) ;
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
mProperty_mFlagList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mFlagList = in_mFlagList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

void cPtr_boolsetTypeForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@boolsetTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration ("boolsetTypeForGeneration",
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

ComparisonResult GALGAS_boolsetTypeForGeneration_2D_weak::objectCompare (const GALGAS_boolsetTypeForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ("boolsetTypeForGeneration-weak",
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
  GALGAS_routineArgumentMap var_routineArgumentMap_2893 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_hasKey (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2893, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_routineArgumentMap temp_3 = GALGAS_routineArgumentMap::init (inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 75)) ;
    var_routineArgumentMap_2893 = temp_3 ;
  }
  GALGAS_string var_routineArguments_3107 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 77)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_routineArgumentMap_2893.getter_hasKey (var_routineArguments_3107 COMMA_SOURCE_FILE ("routineMap.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (var_routineArguments_3107, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (GALGAS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)), fixItArray5  COMMA_SOURCE_FILE ("routineMap.galgas", 79)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    var_routineArgumentMap_2893.setter_insertKey (GALGAS_lstring::init_21__21_ (var_routineArguments_3107, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 81)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2893 COMMA_SOURCE_FILE ("routineMap.galgas", 86)) ;
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_none (SOURCE_FILE ("variable-manager.galgas", 36)), GALGAS_localVarValuation::class_func_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 31)) ;
  }
}


//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mProperty_semanticContext (),
mProperty_predefinedTypes (),
mProperty_selfObjectCppName (),
mProperty_selfAvailability (),
mProperty_selfObjectCppPrefixForAccessingProperty (),
mProperty_requiresSelfForAccessingProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (const GALGAS_semanticContext & in_semanticContext,
                                                                                                                                                                                     const GALGAS_predefinedTypes & in_predefinedTypes,
                                                                                                                                                                                     const GALGAS_string & in_selfObjectCppName,
                                                                                                                                                                                     const GALGAS_selfAvailability & in_selfAvailability,
                                                                                                                                                                                     const GALGAS_string & in_selfObjectCppPrefixForAccessingProperty,
                                                                                                                                                                                     const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_semanticContext = in_semanticContext ;
  result.mProperty_predefinedTypes = in_predefinedTypes ;
  result.mProperty_selfObjectCppName = in_selfObjectCppName ;
  result.mProperty_selfAvailability = in_selfAvailability ;
  result.mProperty_selfObjectCppPrefixForAccessingProperty = in_selfObjectCppPrefixForAccessingProperty ;
  result.mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (const GALGAS_semanticContext & inOperand0,
                                                const GALGAS_predefinedTypes & inOperand1,
                                                const GALGAS_string & inOperand2,
                                                const GALGAS_selfAvailability & inOperand3,
                                                const GALGAS_string & inOperand4,
                                                const GALGAS_bool & inOperand5) :
mProperty_semanticContext (inOperand0),
mProperty_predefinedTypes (inOperand1),
mProperty_selfObjectCppName (inOperand2),
mProperty_selfAvailability (inOperand3),
mProperty_selfObjectCppPrefixForAccessingProperty (inOperand4),
mProperty_requiresSelfForAccessingProperty (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::class_func_new (const GALGAS_semanticContext & in_semanticContext,
                                                               const GALGAS_predefinedTypes & in_predefinedTypes,
                                                               const GALGAS_string & in_selfObjectCppName,
                                                               const GALGAS_selfAvailability & in_selfAvailability,
                                                               const GALGAS_string & in_selfObjectCppPrefixForAccessingProperty,
                                                               const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_semanticContext = in_semanticContext ;
  result.mProperty_predefinedTypes = in_predefinedTypes ;
  result.mProperty_selfObjectCppName = in_selfObjectCppName ;
  result.mProperty_selfAvailability = in_selfAvailability ;
  result.mProperty_selfObjectCppPrefixForAccessingProperty = in_selfObjectCppPrefixForAccessingProperty ;
  result.mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_analysisContext::objectCompare (const GALGAS_analysisContext & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_semanticContext.objectCompare (inOperand.mProperty_semanticContext) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_predefinedTypes.objectCompare (inOperand.mProperty_predefinedTypes) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_selfObjectCppName.objectCompare (inOperand.mProperty_selfObjectCppName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_selfAvailability.objectCompare (inOperand.mProperty_selfAvailability) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_selfObjectCppPrefixForAccessingProperty.objectCompare (inOperand.mProperty_selfObjectCppPrefixForAccessingProperty) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (inOperand.mProperty_requiresSelfForAccessingProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_analysisContext::isValid (void) const {
  return mProperty_semanticContext.isValid () && mProperty_predefinedTypes.isValid () && mProperty_selfObjectCppName.isValid () && mProperty_selfAvailability.isValid () && mProperty_selfObjectCppPrefixForAccessingProperty.isValid () && mProperty_requiresSelfForAccessingProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::drop (void) {
  mProperty_semanticContext.drop () ;
  mProperty_predefinedTypes.drop () ;
  mProperty_selfObjectCppName.drop () ;
  mProperty_selfAvailability.drop () ;
  mProperty_selfObjectCppPrefixForAccessingProperty.drop () ;
  mProperty_requiresSelfForAccessingProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @analysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_semanticContext.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_predefinedTypes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfObjectCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfAvailability.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfObjectCppPrefixForAccessingProperty.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @analysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
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
  GALGAS_string var_currentNode_5019 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_1.addAssign_operation (var_currentNode_5019, GALGAS_string ("[firstPoint] §[]")  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GALGAS_rowList var_rowArray_5058 = temp_0 ;
  GALGAS_string var_arrows_5123 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5149 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5179 = GALGAS_uint (uint32_t (1U)) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5202 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5244 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_5244.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5244.current_mInstruction (HERE).ptr (), var_rowArray_5058, GALGAS_uint (uint32_t (0U)), var_column_5179, var_currentNode_5019, var_arrowStyle_5149, var_arrows_5123, var_unusedMaxUsedRowIndex_5202, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 124)) ;
    enumerator_5244.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_5642 ;
  {
  extensionSetter_appendRow (var_rowArray_5058, GALGAS_string ("[lastPoint] §[]"), GALGAS_uint (uint32_t (0U)), var_column_5179, var_lastNodeName_5642, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)) ;
  }
  var_arrows_5123.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_5019, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (var_lastNodeName_5642, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_5761 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)).add_operation (function_escapeForTex (var_loc_5761.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).add_operation (function_escapeForTex (var_loc_5761.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)) ;
  cEnumerator_rowList enumerator_6183 (var_rowArray_5058, EnumerationOrder::down) ;
  while (enumerator_6183.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 149)) ;
    cEnumerator__32_stringlist enumerator_6255 (enumerator_6183.current_columns (HERE), EnumerationOrder::up) ;
    while (enumerator_6255.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_6255.current (HERE).readProperty_mValue_30_ ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6255.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (enumerator_6255.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
      }
      enumerator_6255.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 157)) ;
    enumerator_6183.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 159)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5123, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 161)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 162)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 32)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 33)) ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::init_21__21__21_ (const GALGAS_semanticContext & in_mSemanticContext,
                                                                                 const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                                                                 const GALGAS_templateVariableMap & in_mTemplateVariableMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
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

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::class_func_new (const GALGAS_semanticContext & in_mSemanticContext,
                                                                               const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                                                               const GALGAS_templateVariableMap & in_mTemplateVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateAnalysisContext::objectCompare (const GALGAS_templateAnalysisContext & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSemanticContext.objectCompare (inOperand.mProperty_mSemanticContext) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPredefinedTypes.objectCompare (inOperand.mProperty_mPredefinedTypes) ;
  }
  if (result == ComparisonResult::operandEqual) {
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
  ioString.appendCString ("<struct @templateAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateAnalysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
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

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ("galgas_cli_options",
                                         "propertyAccessRequiresSelf",
                                         0,
                                         "error-property-access-without-self",
                                         "'self' is required for accessing properties in getter, setter and methods") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ("galgas_cli_options",
                                         "checkEntityUsefulness",
                                         0,
                                         "check-usefulness",
                                         "Check Entity Usefulness") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ("galgas_cli_options",
                                         "displayUnicodeLexicalTestFunctions",
                                         0,
                                         "display-lexical-test-functions",
                                         "Display Unicode Lexical Test Functions") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ("galgas_cli_options",
                                         "emitClassGraph",
                                         0,
                                         "emit-class-graph",
                                         "Emit class graph in dot file") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ("galgas_cli_options",
                                         "emitSyntaxDiagrams",
                                         0,
                                         "emit-syntax-diagrams",
                                         "Emit grammar syntax diagrams in TEX files") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ("galgas_cli_options",
                                         "errorAnomynousForInstructionEnumeratedObject",
                                         0,
                                         "error-anonymous-for-instruction",
                                         "Error on anonymous 'for' instruction enumerated object ('for () in ...')") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall ("galgas_cli_options",
                                         "errorObsoleteGetterCall",
                                         0,
                                         "error-on-obsolete-getter-call",
                                         "Error on call of an obsolete getter") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ("galgas_cli_options",
                                         "errorPropertyGetterCall",
                                         0,
                                         "error-property-getter-call",
                                         "Error on calling property getter (instead of dot notation)") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ("galgas_cli_options",
                                         "errorEllipsisInEnumeratedObject",
                                         0,
                                         "error-ellipsis-in-for-instruction",
                                         "Error on ellipsis in enumerated object ('for (x y ...) in xxx')") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument ("galgas_cli_options",
                                         "errorOnGetterCallWithNoArgument",
                                         0,
                                         "error-on-getter-call-with-no-argument",
                                         "Error on getter call; with no argument (GGS4, suppress parenthesis)") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ("galgas_cli_options",
                                         "errorOldStyleCollectionInitializer",
                                         0,
                                         "error-old-syle-collection-initializer",
                                         "Error on old style collection initializer") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ("galgas_cli_options",
                                         "errorOldStyleLocalVarDeclaration",
                                         0,
                                         "error-old-style-local-var-declaration",
                                         "Error on old style local variable declaration") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ("galgas_cli_options",
                                         "errorOldStylePropertyDeclaration",
                                         0,
                                         "error-old-style-property-declaration",
                                         "Error on old style property declaration") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit ("galgas_cli_options",
                                         "errorUsingNewInsteadOfInit",
                                         0,
                                         "error-using-new-instead-of-init",
                                         "GGS3: error on using 'new' instead of 'init'") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ("galgas_cli_options",
                                         "generateManyFiles",
                                         0,
                                         "generate-many-cpp-files",
                                         "Generate many C++ implementation files") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ("galgas_cli_options",
                                         "generateOneHeader",
                                         0,
                                         "generate-one-cpp-header",
                                         "Generate one C++ header file for all declarations") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ("galgas_cli_options",
                                         "outputHTMLgrammarFile",
                                         0,
                                         "output-html-grammar-file",
                                         "Output a HTML file for every grammar component") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ("galgas_cli_options",
                                         "outputHTMLTypeListFile",
                                         84,
                                         "output-html-type-dump-file",
                                         "Output a HTML file that contains all defined types") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ("galgas_cli_options",
                                         "printPredefinedLexicalActions",
                                         0,
                                         "print-predefined-lexical-actions",
                                         "Print the list of predefined lexical routines and functions") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ("galgas_cli_options",
                                         "check_big_int",
                                         0,
                                         "check-big-int",
                                         "Run bit integers checks") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ("galgas_cli_options",
                                         "warningNotGalgas4Feature",
                                         0,
                                         "warns-on-feature-not-handled-in-galgas4",
                                         "Warns on feature not handled in galgas 4") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ("galgas_cli_options",
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

StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ("galgas_cli_options",
                                         "create_project",
                                         0,
                                         "create-project",
                                         "Create a new GALGAS Project",
                                         "") ;

StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ("galgas_cli_options",
                                         "extractLIBPMOption",
                                         0,
                                         "extract-libpm",
                                         "Extract embedded LIBPM at given path",
                                         "") ;

StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ("galgas_cli_options",
                                         "cppCompile",
                                         0,
                                         "compile",
                                         "Perform C++ compilation on 'string' target",
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
  result.appendString ("project (0:0:1) -> ") ;
  result.appendString (in_PROJECT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue ()) ;
  result.appendString (" {\n#--- Targets\n  %makefile-unix\n  %makefile-macosx\n  %makefile-x86linux32-on-macosx\n  %makefile-x86linux64-on-macosx\n  %makefile-win32-on-macosx\n  %MacOS\n  %applicationBundleBase : \"fr.what\"\n  %codeblocks-windows\n  %codeblocks-linux32\n  %codeblocks-linux64\n\n#--- Source files\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-lexique.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-options.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-semantics.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-syntax.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-grammar.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-cocoa.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-program.galgas\"\n}\n\n") ;
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
  result.appendString ("gui cocoa {\n  with option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options\n\n  with lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n    fileExtension: \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n    title: \"Source\"\n    blockComment : \"#\"\n  }\n\n}\n") ;
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
  result.appendString ("grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar \"LL1\" {\n  syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax\n  <start_symbol>\n}\n\n") ;
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
  result.appendString ("lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Identifiers and keywords                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString error message \"an identifier\"\n\n#--- This is the keyword list\nlist keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send search tokenString in keyWordList default $identifier$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal decimal integers                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n\nmessage decimalNumberTooLarge : \"decimal number too large\"\nmessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal character strings                                                                    \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n\n\nmessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Delimiters                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Comments                                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\nrule '#' {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Separators                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n") ;
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
  result.appendString ("option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options {\n\n# ADD YOUR CODE\n\n}\n") ;
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
  result.appendString ("#--- Prologue routine\nbefore {\n}\n\n#--- 'when' clauses\ncase . \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\nmessage \"a source text file with the .") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" extension\"\n%useGrammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar\n\?sourceFilePath:@lstring inSourceFile {\n  grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar () in inSourceFile\n}\n\n#--- Epilogue routine\nafter {\n}\n") ;
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
  result.appendString ("\n# ADD YOUR CODE\n\n") ;
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
  result.appendString ("syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax (") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique) {\n\nrule <start_symbol> {\n  # ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n# ADD OTHER RULES\n\n}\n") ;
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
  GALGAS_string var_projectName_2479 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2561 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  var_galgas_5F_sources_5F_DIR_2561.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 52))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 53))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 54))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 55))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 56))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 57))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)) ;
  {
  routine_println_3F_ (GALGAS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 59)) ;
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
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas", 65)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println_3F_ (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 66)).add_operation (GALGAS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 66)) ;
      }
      GALGAS_string var_projectName_4215 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 68)) ;
      GALGAS_bool var_ok_4277 = var_projectName_4215.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 69)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 69)) ;
      GALGAS_uint var_idx_4340 = GALGAS_uint (uint32_t (1U)) ;
      if (var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 71)).isValid ()) {
        uint32_t variant_4352 = var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 71)).uintValue () ;
        bool loop_4352 = true ;
        while (loop_4352) {
          loop_4352 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_4340.objectCompare (var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)))).operator_and (var_ok_4277 COMMA_SOURCE_FILE ("projectCreation.galgas", 72)).isValid () ;
          if (loop_4352) {
            loop_4352 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_4340.objectCompare (var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)))).operator_and (var_ok_4277 COMMA_SOURCE_FILE ("projectCreation.galgas", 72)).boolValue () ;
          }
          if (loop_4352 && (0 == variant_4352)) {
            loop_4352 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 71)) ;
          }
          if (loop_4352) {
            variant_4352 -- ;
            GALGAS_char var_c_4441 = var_projectName_4215.getter_characterAtIndex (var_idx_4340, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 73)) ;
            var_ok_4277 = var_c_4441.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 74)).operator_or (GALGAS_bool (ComparisonKind::equal, var_c_4441.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 74)) ;
            var_idx_4340.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 75)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4277.operator_not (SOURCE_FILE ("projectCreation.galgas", 77)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_println_3F_ (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4215, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 78)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 78)) ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4277.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4277 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 83)).operator_not (SOURCE_FILE ("projectCreation.galgas", 83)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4277.operator_not (SOURCE_FILE ("projectCreation.galgas", 84)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_println_3F_ (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 85)).add_operation (GALGAS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 85)) ;
              }
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4277.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 89)) ;
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
  GALGAS_string var_s_21513 = GALGAS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 604)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_s_21513.getter_count (SOURCE_FILE ("templateSyntax.galgas", 605)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::init_21_ (var_s_21513, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 606)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3806 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3806, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_3856 = var_receiverExpression_3806.readProperty_mResultType () ;
  GALGAS_string var_receiverTypeName_3908 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 88)).readProperty_typeName ().readProperty_string () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 90)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 90)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 90)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 90)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 91)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = this ;
        GALGAS_AccessControl var_accessControl_4252 ;
        GALGAS_bool var_unused_0_4267 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_4274 ;
        const bool optionalResult4219 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 92)).readProperty_propertyMap ().optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_accessControl_4252, var_unused_0_4267, var_propertyType_4274) ;
        if (!optionalResult4219) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = this ;
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 94)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_8 = this ;
          extensionMethod_checkSetAccess (var_accessControl_4252, GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas", 96)), temp_8.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 96)) ;
          const GALGAS_templateGetterCallInExpressionAST temp_9 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_10 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::init_21__21__21__21_ (var_propertyType_4274, temp_9.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3806, temp_10.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_4771 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).readProperty_getterMap () ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4871 ;
    GALGAS_methodKind var_kind_4920 ;
    GALGAS_bool var_hasCompilerArgument_4939 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4988 ;
    GALGAS_stringlist temp_11 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)) ;
    GALGAS_stringlist var_fieldList_5009 = temp_11 ;
    const GALGAS_templateGetterCallInExpressionAST temp_12 = this ;
    GALGAS_string var_actualGetterName_5045 = temp_12.readProperty_mGetterName ().readProperty_string () ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_templateGetterCallInExpressionAST temp_14 = this ;
      test_13 = var_getterMap_4771.getter_hasKey (temp_14.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 113)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string var_actualGetterNameString_5327 ;
        const GALGAS_templateGetterCallInExpressionAST temp_15 = this ;
        GALGAS_location joker_5249 ; // Joker input parameter
        GALGAS_methodQualifier joker_5311 ; // Joker input parameter
        var_getterMap_4771.method_searchKey (temp_15.readProperty_mGetterName (), var_kind_4920, var_getterFormalArgumentTypeList_4871, joker_5249, var_hasCompilerArgument_4939, var_returnedType_4988, joker_5311, var_actualGetterNameString_5327, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 114)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (ComparisonKind::notEqual, var_actualGetterNameString_5327.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            var_actualGetterName_5045 = var_actualGetterNameString_5327 ;
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              test_17 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()).boolEnum () ;
              if (kBoolTrue == test_17) {
                const GALGAS_templateGetterCallInExpressionAST temp_18 = this ;
                TC_Array <FixItDescription> fixItArray19 ;
                appendFixItActions (fixItArray19, kFixItReplace, var_actualGetterName_5045) ;
                inCompiler->emitSemanticError (temp_18.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray19  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 126)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_13) {
      GALGAS_uint var_matchingReaderCount_5660 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas", 131)))).boolEnum () ;
        if (kBoolTrue == test_20) {
          GALGAS_functionSignature temp_21 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
          var_getterFormalArgumentTypeList_4871 = temp_21 ;
          var_hasCompilerArgument_4939 = GALGAS_bool (true) ;
          var_returnedType_4988 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas", 134)) ;
          var_kind_4920 = GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 135)) ;
          cEnumerator_typedPropertyList enumerator_5978 (extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 136)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
          while (enumerator_5978.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6063 = extensionGetter_definition (enumerator_5978.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).readProperty_getterMap () ;
            const GALGAS_templateGetterCallInExpressionAST temp_22 = this ;
            const cMapElement_getterMap * objectArray_6122 = (const cMapElement_getterMap *) var_aMap_6063.readAccessForWithInstruction (temp_22.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_6122) {
                macroValidSharedObject (objectArray_6122, cMapElement_getterMap) ;
              var_matchingReaderCount_5660.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 139)) ;
              var_getterFormalArgumentTypeList_4871 = objectArray_6122->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_4939 = objectArray_6122->mProperty_mHasCompilerArgument ;
              var_returnedType_4988 = objectArray_6122->mProperty_mReturnedType ;
              var_kind_4920 = objectArray_6122->mProperty_mKind ;
              enumGalgasBool test_23 = kBoolTrue ;
              if (kBoolTrue == test_23) {
                test_23 = GALGAS_bool (ComparisonKind::notEqual, objectArray_6122->mProperty_mGetterNameThatObsoletesInvokationName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_23) {
                  var_actualGetterName_5045 = objectArray_6122->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
              var_fieldList_5009.addAssign_operation (enumerator_5978.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)) ;
            }
            enumerator_5978.gotoNextObject () ;
          }
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            test_24 = GALGAS_bool (ComparisonKind::equal, var_matchingReaderCount_5660.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_24) {
              const GALGAS_templateGetterCallInExpressionAST temp_25 = this ;
              const GALGAS_templateGetterCallInExpressionAST temp_26 = this ;
              TC_Array <FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (temp_25.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)).add_operation (temp_26.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)), fixItArray27  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 151)) ;
              var_getterFormalArgumentTypeList_4871.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4939.drop () ; // Release error dropped variable
              var_returnedType_4988.drop () ; // Release error dropped variable
              var_kind_4920.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_24) {
            enumGalgasBool test_28 = kBoolTrue ;
            if (kBoolTrue == test_28) {
              test_28 = GALGAS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_5660.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                GALGAS_string var_s_6993 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7015 (var_fieldList_5009, EnumerationOrder::up) ;
                while (enumerator_7015.hasCurrentObject ()) {
                  var_s_6993.plusAssign_operation(enumerator_7015.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)) ;
                  if (enumerator_7015.hasNextObject ()) {
                    var_s_6993.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)) ;
                  }
                  enumerator_7015.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_29 = this ;
                const GALGAS_templateGetterCallInExpressionAST temp_30 = this ;
                TC_Array <FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (var_s_6993, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 161)) ;
                var_getterFormalArgumentTypeList_4871.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4939.drop () ; // Release error dropped variable
                var_returnedType_4988.drop () ; // Release error dropped variable
                var_kind_4920.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_20) {
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          test_32 = GALGAS_bool (ComparisonKind::equal, var_getterMap_4771.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 166)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_32) {
            const GALGAS_templateGetterCallInExpressionAST temp_33 = this ;
            TC_Array <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)), fixItArray34  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)) ;
            var_getterFormalArgumentTypeList_4871.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4939.drop () ; // Release error dropped variable
            var_returnedType_4988.drop () ; // Release error dropped variable
            var_kind_4920.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_32) {
          const GALGAS_templateGetterCallInExpressionAST temp_35 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_36 = this ;
          TC_Array <FixItDescription> fixItArray37 ;
          appendFixItActions (fixItArray37, kFixItReplace, var_getterMap_4771.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 174))) ;
          inCompiler->emitSemanticError (temp_35.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)).add_operation (temp_36.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 171)) ;
          var_getterFormalArgumentTypeList_4871.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4939.drop () ; // Release error dropped variable
          var_returnedType_4988.drop () ; // Release error dropped variable
          var_kind_4920.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_38 = kBoolTrue ;
    if (kBoolTrue == test_38) {
      const GALGAS_templateGetterCallInExpressionAST temp_39 = this ;
      test_38 = GALGAS_bool (ComparisonKind::notEqual, temp_39.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 178)).objectCompare (var_getterFormalArgumentTypeList_4871.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 178)))).boolEnum () ;
      if (kBoolTrue == test_38) {
        const GALGAS_templateGetterCallInExpressionAST temp_40 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_41 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_42 = this ;
        TC_Array <FixItDescription> fixItArray43 ;
        inCompiler->emitSemanticError (temp_40.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (var_getterFormalArgumentTypeList_4871.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 180)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)).add_operation (temp_42.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 181)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)), fixItArray43  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_38) {
      GALGAS_semanticExpressionListForGeneration temp_44 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)) ;
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8417 = temp_44 ;
      const GALGAS_templateGetterCallInExpressionAST temp_45 = this ;
      cEnumerator_templateExpressionListAST enumerator_8496 (temp_45.readProperty_mExpressionList (), EnumerationOrder::up) ;
      cEnumerator_functionSignature enumerator_8595 (var_getterFormalArgumentTypeList_4871, EnumerationOrder::up) ;
      while (enumerator_8496.hasCurrentObject () && enumerator_8595.hasCurrentObject ()) {
        enumGalgasBool test_46 = kBoolTrue ;
        if (kBoolTrue == test_46) {
          test_46 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8595.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8496.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_46) {
            GALGAS_string temp_47 ;
            const enumGalgasBool test_48 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8595.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_48) {
              temp_47 = enumerator_8595.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 187)) ;
            }else if (kBoolFalse == test_48) {
              temp_47 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_8720 = GALGAS_string ("!").add_operation (temp_47, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 187)) ;
            TC_Array <FixItDescription> fixItArray49 ;
            appendFixItActions (fixItArray49, kFixItReplace, var_s_8720) ;
            inCompiler->emitSemanticError (enumerator_8496.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8720, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)), fixItArray49  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9128 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8496.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_9128, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8595.current_mFormalArgumentType (HERE), var_exp_9128.readProperty_mResultType (), enumerator_8496.current_mEndOfExpressionLocation (HERE), var_exp_9128, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 197)) ;
        }
        var_constructorEffectiveParameterList_8417.addAssign_operation (var_exp_9128  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 198)) ;
        enumerator_8496.gotoNextObject () ;
        enumerator_8595.gotoNextObject () ;
      }
      enumGalgasBool test_50 = kBoolTrue ;
      if (kBoolTrue == test_50) {
        const GALGAS_templateGetterCallInExpressionAST temp_51 = this ;
        GALGAS_bool test_52 = GALGAS_bool (ComparisonKind::notEqual, var_actualGetterName_5045.objectCompare (temp_51.readProperty_mGetterName ().readProperty_string ())) ;
        if (kBoolTrue == test_52.boolEnum ()) {
          test_52 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_50 = test_52.boolEnum () ;
        if (kBoolTrue == test_50) {
          const GALGAS_templateGetterCallInExpressionAST temp_53 = this ;
          TC_Array <FixItDescription> fixItArray54 ;
          appendFixItActions (fixItArray54, kFixItReplace, var_actualGetterName_5045) ;
          inCompiler->emitSemanticError (temp_53.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray54  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 201)) ;
        }
      }
      const GALGAS_templateGetterCallInExpressionAST temp_55 = this ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4988, temp_55.readProperty_mGetterName ().readProperty_location (), var_kind_4920, var_receiverExpression_3806, var_fieldList_5009, var_actualGetterName_5045, var_constructorEffectiveParameterList_8417, var_hasCompilerArgument_4939, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateClassFunctionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateClassFunctionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_constructorType_10386 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 228)) ;
  GALGAS_classFunctionMap var_classFunctionMap_10518 = extensionGetter_definition (var_constructorType_10386, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 230)).readProperty_classFunctionMap () ;
  GALGAS_unifiedTypeMapEntry var_returnedType_10637 ;
  GALGAS_bool var_hasCompilerArgument_10662 ;
  GALGAS_functionSignature var_classFuncFormalArgumentTypeList_10707 ;
  const GALGAS_templateClassFunctionAST temp_1 = this ;
  const cMapElement_classFunctionMap * objectArray_10741 = (const cMapElement_classFunctionMap *) var_classFunctionMap_10518.readAccessForWithInstruction (temp_1.readProperty_mClassFunctionName ().readProperty_string ()) ;
  if (nullptr != objectArray_10741) {
      macroValidSharedObject (objectArray_10741, cMapElement_classFunctionMap) ;
    var_classFuncFormalArgumentTypeList_10707 = objectArray_10741->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10662 = objectArray_10741->mProperty_mHasCompilerArgument ;
    var_returnedType_10637 = objectArray_10741->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, var_classFunctionMap_10518.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 240)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateClassFunctionAST temp_3 = this ;
        const GALGAS_templateClassFunctionAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mClassFunctionName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)) ;
        var_classFuncFormalArgumentTypeList_10707.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10662.drop () ; // Release error dropped variable
        var_returnedType_10637.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateClassFunctionAST temp_6 = this ;
      const GALGAS_templateClassFunctionAST temp_7 = this ;
      const GALGAS_templateClassFunctionAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_classFunctionMap_10518.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 248))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mClassFunctionName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (temp_8.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)) ;
      var_classFuncFormalArgumentTypeList_10707.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10662.drop () ; // Release error dropped variable
      var_returnedType_10637.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_classFunctionEffectiveParameterList_11535 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateClassFunctionAST temp_11 = this ;
    test_10 = GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 253)).objectCompare (var_classFuncFormalArgumentTypeList_10707.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 253)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateClassFunctionAST temp_12 = this ;
      const GALGAS_templateClassFunctionAST temp_13 = this ;
      const GALGAS_templateClassFunctionAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mClassFunctionName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (extensionGetter_definition (var_constructorType_10386, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (var_classFuncFormalArgumentTypeList_10707.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 256)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 256)).add_operation (temp_14.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 257)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 256)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 257)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
      var_classFunctionEffectiveParameterList_11535.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_semanticExpressionListForGeneration temp_16 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
    var_classFunctionEffectiveParameterList_11535 = temp_16 ;
    const GALGAS_templateClassFunctionAST temp_17 = this ;
    cEnumerator_templateExpressionListAST enumerator_12148 (temp_17.readProperty_mExpressionList (), EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_12237 (var_classFuncFormalArgumentTypeList_10707, EnumerationOrder::up) ;
    while (enumerator_12148.hasCurrentObject () && enumerator_12237.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (ComparisonKind::notEqual, enumerator_12237.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12148.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (ComparisonKind::notEqual, enumerator_12237.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_12237.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12361 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
          TC_Array <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_12361) ;
          inCompiler->emitSemanticError (enumerator_12148.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12361, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_12753 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_12148.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_12753, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 266)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12237.current_mFormalArgumentType (HERE), var_exp_12753.readProperty_mResultType (), enumerator_12148.current_mEndOfExpressionLocation (HERE), var_exp_12753, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 273)) ;
      }
      var_classFunctionEffectiveParameterList_11535.addAssign_operation (var_exp_12753  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 274)) ;
      enumerator_12148.gotoNextObject () ;
      enumerator_12237.gotoNextObject () ;
    }
  }
  const GALGAS_templateClassFunctionAST temp_22 = this ;
  const GALGAS_templateClassFunctionAST temp_23 = this ;
  outArgument_outExpression = GALGAS_classFuncExpressionForGeneration::init_21__21__21__21__21__21_ (var_returnedType_10637, temp_22.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_10386, temp_23.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_11535, var_hasCompilerArgument_10662, inCompiler COMMA_HERE) ;
}
