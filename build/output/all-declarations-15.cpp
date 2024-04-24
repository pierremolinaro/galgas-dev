#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::GALGAS_localVarMapListForLLVM_2D_element (void) :
mProperty_mMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::~ GALGAS_localVarMapListForLLVM_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::init_21_ (const GALGAS_scopeLocalVarMap & in_mMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::GALGAS_localVarMapListForLLVM_2D_element (const GALGAS_scopeLocalVarMap & inOperand0) :
mProperty_mMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::class_func_new (const GALGAS_scopeLocalVarMap & in_mMap,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarMapListForLLVM_2D_element::isValid (void) const {
  return mProperty_mMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::drop (void) {
  mProperty_mMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarMapListForLLVM-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVarMapListForLLVM-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ("localVarMapListForLLVM-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarMapListForLLVM_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarMapListForLLVM_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarMapListForLLVM_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM_2D_element result ;
  const GALGAS_localVarMapListForLLVM_2D_element * p = (const GALGAS_localVarMapListForLLVM_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVarMapListForLLVM_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarMapListForLLVM-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch::GALGAS_overrideKind_2D_selectOverrideFirstBranch (void) :
mProperty_savedManager () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch::~ GALGAS_overrideKind_2D_selectOverrideFirstBranch (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch GALGAS_overrideKind_2D_selectOverrideFirstBranch::init_21_ (const GALGAS_currentVarManager & in_savedManager,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideFirstBranch result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideFirstBranch::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch::GALGAS_overrideKind_2D_selectOverrideFirstBranch (const GALGAS_currentVarManager & inOperand0) :
mProperty_savedManager (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch GALGAS_overrideKind_2D_selectOverrideFirstBranch::class_func_new (const GALGAS_currentVarManager & in_savedManager,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideFirstBranch result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_overrideKind_2D_selectOverrideFirstBranch::isValid (void) const {
  return mProperty_savedManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideFirstBranch::drop (void) {
  mProperty_savedManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideFirstBranch::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind-selectOverrideFirstBranch:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_savedManager.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overrideKind-selectOverrideFirstBranch generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideFirstBranch ("overrideKind-selectOverrideFirstBranch",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideKind_2D_selectOverrideFirstBranch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideKind_2D_selectOverrideFirstBranch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideKind_2D_selectOverrideFirstBranch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch GALGAS_overrideKind_2D_selectOverrideFirstBranch::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideFirstBranch result ;
  const GALGAS_overrideKind_2D_selectOverrideFirstBranch * p = (const GALGAS_overrideKind_2D_selectOverrideFirstBranch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overrideKind_2D_selectOverrideFirstBranch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind-selectOverrideFirstBranch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @overrideKind_2D_selectOverrideFirstBranch_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ (const GALGAS_overrideKind_2D_selectOverrideFirstBranch & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::init_nil (void) {
  GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::isValid (void) const {
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

bool GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_overrideKind_2D_selectOverrideFirstBranch () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::description (String & ioString,
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
//
//     @overrideKind-selectOverrideFirstBranch? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ ("overrideKind-selectOverrideFirstBranch?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ result ;
  const GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ * p = (const GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overrideKind_2D_selectOverrideFirstBranch_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind-selectOverrideFirstBranch?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches::GALGAS_overrideKind_2D_selectOverrideNextBranches (void) :
mProperty_savedManager (),
mProperty_referenceManager () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches::~ GALGAS_overrideKind_2D_selectOverrideNextBranches (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches GALGAS_overrideKind_2D_selectOverrideNextBranches::init_21__21_ (const GALGAS_currentVarManager & in_savedManager,
                                                                                                                   const GALGAS_currentVarManager & in_referenceManager,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideNextBranches result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  result.mProperty_referenceManager = in_referenceManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideNextBranches::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches::GALGAS_overrideKind_2D_selectOverrideNextBranches (const GALGAS_currentVarManager & inOperand0,
                                                                                                      const GALGAS_currentVarManager & inOperand1) :
mProperty_savedManager (inOperand0),
mProperty_referenceManager (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches GALGAS_overrideKind_2D_selectOverrideNextBranches::class_func_new (const GALGAS_currentVarManager & in_savedManager,
                                                                                                                     const GALGAS_currentVarManager & in_referenceManager,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideNextBranches result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  result.mProperty_referenceManager = in_referenceManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_overrideKind_2D_selectOverrideNextBranches::isValid (void) const {
  return mProperty_savedManager.isValid () && mProperty_referenceManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideNextBranches::drop (void) {
  mProperty_savedManager.drop () ;
  mProperty_referenceManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideNextBranches::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind-selectOverrideNextBranches:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_savedManager.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_referenceManager.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overrideKind-selectOverrideNextBranches generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideNextBranches ("overrideKind-selectOverrideNextBranches",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideKind_2D_selectOverrideNextBranches::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideNextBranches ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideKind_2D_selectOverrideNextBranches::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideKind_2D_selectOverrideNextBranches (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches GALGAS_overrideKind_2D_selectOverrideNextBranches::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideNextBranches result ;
  const GALGAS_overrideKind_2D_selectOverrideNextBranches * p = (const GALGAS_overrideKind_2D_selectOverrideNextBranches *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overrideKind_2D_selectOverrideNextBranches *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind-selectOverrideNextBranches", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @overrideKind_2D_selectOverrideNextBranches_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ (const GALGAS_overrideKind_2D_selectOverrideNextBranches & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::init_nil (void) {
  GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::isValid (void) const {
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

bool GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_overrideKind_2D_selectOverrideNextBranches () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::description (String & ioString,
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
//
//     @overrideKind-selectOverrideNextBranches? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ ("overrideKind-selectOverrideNextBranches?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ result ;
  const GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ * p = (const GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overrideKind_2D_selectOverrideNextBranches_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind-selectOverrideNextBranches?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::GALGAS_openedOverrideList_2D_element (void) :
mProperty_mOverrideKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::~ GALGAS_openedOverrideList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::init_21_ (const GALGAS_overrideKind & in_mOverrideKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_openedOverrideList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::GALGAS_openedOverrideList_2D_element (const GALGAS_overrideKind & inOperand0) :
mProperty_mOverrideKind (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::class_func_new (const GALGAS_overrideKind & in_mOverrideKind,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_openedOverrideList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_openedOverrideList_2D_element::isValid (void) const {
  return mProperty_mOverrideKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::drop (void) {
  mProperty_mOverrideKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @openedOverrideList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOverrideKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @openedOverrideList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList_2D_element ("openedOverrideList-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedOverrideList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedOverrideList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedOverrideList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_openedOverrideList_2D_element result ;
  const GALGAS_openedOverrideList_2D_element * p = (const GALGAS_openedOverrideList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_openedOverrideList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedOverrideList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element::GALGAS_unifiedTypeMapEntry_2D_element (void) :
mProperty_weakElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element::~ GALGAS_unifiedTypeMapEntry_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element GALGAS_unifiedTypeMapEntry_2D_element::init_21_ (const GALGAS_unifiedTypeMapElementClass_2D_weak & in_weakElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element::GALGAS_unifiedTypeMapEntry_2D_element (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0) :
mProperty_weakElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element GALGAS_unifiedTypeMapEntry_2D_element::class_func_new (const GALGAS_unifiedTypeMapElementClass_2D_weak & in_weakElement,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unifiedTypeMapEntry_2D_element::objectCompare (const GALGAS_unifiedTypeMapEntry_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_weakElement.objectCompare (inOperand.mProperty_weakElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry_2D_element::isValid (void) const {
  return mProperty_weakElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element::drop (void) {
  mProperty_weakElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntry-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntry-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element ("unifiedTypeMapEntry-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntry_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntry_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntry_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element GALGAS_unifiedTypeMapEntry_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element result ;
  const GALGAS_unifiedTypeMapEntry_2D_element * p = (const GALGAS_unifiedTypeMapEntry_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntry_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @unifiedTypeMapEntry_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_::GALGAS_unifiedTypeMapEntry_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_::GALGAS_unifiedTypeMapEntry_2D_element_3F_ (const GALGAS_unifiedTypeMapEntry_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_ GALGAS_unifiedTypeMapEntry_2D_element_3F_::init_nil (void) {
  GALGAS_unifiedTypeMapEntry_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry_2D_element_3F_::isValid (void) const {
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

bool GALGAS_unifiedTypeMapEntry_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_unifiedTypeMapEntry_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry_2D_element_3F_::description (String & ioString,
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
//
//     @unifiedTypeMapEntry-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element_3F_ ("unifiedTypeMapEntry-element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntry_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntry_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntry_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry_2D_element_3F_ GALGAS_unifiedTypeMapEntry_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry_2D_element_3F_ result ;
  const GALGAS_unifiedTypeMapEntry_2D_element_3F_ * p = (const GALGAS_unifiedTypeMapEntry_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntry_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::~ GALGAS_actualParameterListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::init_21_ (const GALGAS_actualParameterAST & in_mActualParameter,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (const GALGAS_actualParameterAST & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::class_func_new (const GALGAS_actualParameterAST & in_mActualParameter,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actualParameterListAST_2D_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualParameterListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ("actualParameterListAST-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  const GALGAS_actualParameterListAST_2D_element * p = (const GALGAS_actualParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element::GALGAS_syntaxExtensionsDictionary_2D_element (void) :
mProperty_key (),
mProperty_extensionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element::~ GALGAS_syntaxExtensionsDictionary_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element GALGAS_syntaxExtensionsDictionary_2D_element::init_21__21_ (const GALGAS_string & in_key,
                                                                                                         const GALGAS_galgas_33_SyntaxExtensionListAST & in_extensionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxExtensionsDictionary_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_extensionList = in_extensionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensionsDictionary_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element::GALGAS_syntaxExtensionsDictionary_2D_element (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1) :
mProperty_key (inOperand0),
mProperty_extensionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element GALGAS_syntaxExtensionsDictionary_2D_element::class_func_new (const GALGAS_string & in_key,
                                                                                                           const GALGAS_galgas_33_SyntaxExtensionListAST & in_extensionList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxExtensionsDictionary_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_extensionList = in_extensionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_syntaxExtensionsDictionary_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_extensionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensionsDictionary_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_extensionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensionsDictionary_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensionsDictionary-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_extensionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxExtensionsDictionary-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2D_element ("syntaxExtensionsDictionary-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxExtensionsDictionary_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxExtensionsDictionary_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensionsDictionary_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element GALGAS_syntaxExtensionsDictionary_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxExtensionsDictionary_2D_element result ;
  const GALGAS_syntaxExtensionsDictionary_2D_element * p = (const GALGAS_syntaxExtensionsDictionary_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxExtensionsDictionary_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @syntaxExtensionsDictionary_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element_3F_::GALGAS_syntaxExtensionsDictionary_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element_3F_::GALGAS_syntaxExtensionsDictionary_2D_element_3F_ (const GALGAS_syntaxExtensionsDictionary_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element_3F_ GALGAS_syntaxExtensionsDictionary_2D_element_3F_::init_nil (void) {
  GALGAS_syntaxExtensionsDictionary_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_syntaxExtensionsDictionary_2D_element_3F_::isValid (void) const {
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

bool GALGAS_syntaxExtensionsDictionary_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensionsDictionary_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_syntaxExtensionsDictionary_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensionsDictionary_2D_element_3F_::description (String & ioString,
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
//
//     @syntaxExtensionsDictionary-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2D_element_3F_ ("syntaxExtensionsDictionary-element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxExtensionsDictionary_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxExtensionsDictionary_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensionsDictionary_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensionsDictionary_2D_element_3F_ GALGAS_syntaxExtensionsDictionary_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syntaxExtensionsDictionary_2D_element_3F_ result ;
  const GALGAS_syntaxExtensionsDictionary_2D_element_3F_ * p = (const GALGAS_syntaxExtensionsDictionary_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxExtensionsDictionary_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::~ GALGAS_semanticInstructionListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::init_21_ (const GALGAS_semanticInstructionAST & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (const GALGAS_semanticInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::class_func_new (const GALGAS_semanticInstructionAST & in_mInstruction,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticInstructionListAST_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ("semanticInstructionListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  const GALGAS_semanticInstructionListAST_2D_element * p = (const GALGAS_semanticInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (void) :
mProperty_mSemanticDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::~ GALGAS_semanticDeclarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::init_21_ (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticDeclaration = in_mSemanticDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (const GALGAS_semanticDeclarationAST & inOperand0) :
mProperty_mSemanticDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::class_func_new (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticDeclaration = in_mSemanticDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mSemanticDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::drop (void) {
  mProperty_mSemanticDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ("semanticDeclarationListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  const GALGAS_semanticDeclarationListAST_2D_element * p = (const GALGAS_semanticDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some::GALGAS_propertyInCollectionInitializationAST_2D_some (void) :
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some::~ GALGAS_propertyInCollectionInitializationAST_2D_some (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some GALGAS_propertyInCollectionInitializationAST_2D_some::init_21_ (const GALGAS_semanticExpressionAST & in_expression,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionInitializationAST_2D_some result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionInitializationAST_2D_some::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some::GALGAS_propertyInCollectionInitializationAST_2D_some (const GALGAS_semanticExpressionAST & inOperand0) :
mProperty_expression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some GALGAS_propertyInCollectionInitializationAST_2D_some::class_func_new (const GALGAS_semanticExpressionAST & in_expression,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionInitializationAST_2D_some result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyInCollectionInitializationAST_2D_some::objectCompare (const GALGAS_propertyInCollectionInitializationAST_2D_some & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyInCollectionInitializationAST_2D_some::isValid (void) const {
  return mProperty_expression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionInitializationAST_2D_some::drop (void) {
  mProperty_expression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionInitializationAST_2D_some::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyInCollectionInitializationAST-some:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyInCollectionInitializationAST-some generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2D_some ("propertyInCollectionInitializationAST-some",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyInCollectionInitializationAST_2D_some::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2D_some ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyInCollectionInitializationAST_2D_some::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionInitializationAST_2D_some (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some GALGAS_propertyInCollectionInitializationAST_2D_some::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionInitializationAST_2D_some result ;
  const GALGAS_propertyInCollectionInitializationAST_2D_some * p = (const GALGAS_propertyInCollectionInitializationAST_2D_some *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyInCollectionInitializationAST_2D_some *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST-some", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyInCollectionInitializationAST_2D_some_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ (const GALGAS_propertyInCollectionInitializationAST_2D_some & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::init_nil (void) {
  GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::isValid (void) const {
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

bool GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_propertyInCollectionInitializationAST_2D_some () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::description (String & ioString,
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
//
//     @propertyInCollectionInitializationAST-some? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ ("propertyInCollectionInitializationAST-some?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ GALGAS_propertyInCollectionInitializationAST_2D_some_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ result ;
  const GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ * p = (const GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyInCollectionInitializationAST_2D_some_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST-some?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::~ GALGAS_syntaxInstructionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::init_21_ (const GALGAS_syntaxInstructionAST & in_mInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::class_func_new (const GALGAS_syntaxInstructionAST & in_mInstruction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_syntaxInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ("syntaxInstructionList-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  const GALGAS_syntaxInstructionList_2D_element * p = (const GALGAS_syntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (void) :
mProperty_mSyntaxInstructionList (),
mProperty_mEndOf_5F_instructions () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::~ GALGAS_listOfSyntaxInstructionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::init_21__21_ (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                           const GALGAS_location & in_mEndOf_5F_instructions,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_5F_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                              const GALGAS_location & inOperand1) :
mProperty_mSyntaxInstructionList (inOperand0),
mProperty_mEndOf_5F_instructions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::class_func_new (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                             const GALGAS_location & in_mEndOf_instructions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_listOfSyntaxInstructionList_2D_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOf_5F_instructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOf_5F_instructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @listOfSyntaxInstructionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @listOfSyntaxInstructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ("listOfSyntaxInstructionList-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  const GALGAS_listOfSyntaxInstructionList_2D_element * p = (const GALGAS_listOfSyntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listOfSyntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element::~ GALGAS_prologueEpilogueList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::init_21__21_ (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                             const GALGAS_location & in_mEndOfInstructionList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                const GALGAS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::class_func_new (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                               const GALGAS_location & in_mEndOfInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prologueEpilogueList_2D_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList_2D_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prologueEpilogueList-element:") ;
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
//
//     @prologueEpilogueList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ("prologueEpilogueList-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prologueEpilogueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prologueEpilogueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prologueEpilogueList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  const GALGAS_prologueEpilogueList_2D_element * p = (const GALGAS_prologueEpilogueList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prologueEpilogueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (void) :
mProperty_mEnumeratedType (),
mProperty_mEnumerationName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::~ GALGAS_enumerationDescriptorList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                                       const GALGAS_string & in_mEnumerationName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumeratedType = in_mEnumeratedType ;
  result.mProperty_mEnumerationName = in_mEnumerationName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                          const GALGAS_string & inOperand1) :
mProperty_mEnumeratedType (inOperand0),
mProperty_mEnumerationName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                                         const GALGAS_string & in_mEnumerationName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumeratedType = in_mEnumeratedType ;
  result.mProperty_mEnumerationName = in_mEnumerationName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_enumerationDescriptorList_2D_element::isValid (void) const {
  return mProperty_mEnumeratedType.isValid () && mProperty_mEnumerationName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList_2D_element::drop (void) {
  mProperty_mEnumeratedType.drop () ;
  mProperty_mEnumerationName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationDescriptorList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEnumeratedType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumerationDescriptorList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ("enumerationDescriptorList-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  const GALGAS_enumerationDescriptorList_2D_element * p = (const GALGAS_enumerationDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_associatedValueDescriptorList_2D_element::GALGAS_associatedValueDescriptorList_2D_element (void) :
mProperty_type (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_associatedValueDescriptorList_2D_element::~ GALGAS_associatedValueDescriptorList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_associatedValueDescriptorList_2D_element GALGAS_associatedValueDescriptorList_2D_element::init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_type,
                                                                                                               const GALGAS_string & in_name,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_associatedValueDescriptorList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_associatedValueDescriptorList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_associatedValueDescriptorList_2D_element::GALGAS_associatedValueDescriptorList_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                  const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_name (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_associatedValueDescriptorList_2D_element GALGAS_associatedValueDescriptorList_2D_element::class_func_new (const GALGAS_unifiedTypeMapEntry & in_type,
                                                                                                                 const GALGAS_string & in_name,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_associatedValueDescriptorList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_associatedValueDescriptorList_2D_element::objectCompare (const GALGAS_associatedValueDescriptorList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_associatedValueDescriptorList_2D_element::isValid (void) const {
  return mProperty_type.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_associatedValueDescriptorList_2D_element::drop (void) {
  mProperty_type.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_associatedValueDescriptorList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValueDescriptorList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @associatedValueDescriptorList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_associatedValueDescriptorList_2D_element ("associatedValueDescriptorList-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_associatedValueDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValueDescriptorList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_associatedValueDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_associatedValueDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_associatedValueDescriptorList_2D_element GALGAS_associatedValueDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_associatedValueDescriptorList_2D_element result ;
  const GALGAS_associatedValueDescriptorList_2D_element * p = (const GALGAS_associatedValueDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_associatedValueDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValueDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_acceptableParameterList_2D_element::GALGAS_acceptableParameterList_2D_element (void) :
mProperty_mRoutineSignature (),
mProperty_mIsFilePrivate () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_acceptableParameterList_2D_element::~ GALGAS_acceptableParameterList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_acceptableParameterList_2D_element GALGAS_acceptableParameterList_2D_element::init_21__21_ (const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                                                                   const GALGAS_bool & in_mIsFilePrivate,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_acceptableParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineSignature = in_mRoutineSignature ;
  result.mProperty_mIsFilePrivate = in_mIsFilePrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_acceptableParameterList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_acceptableParameterList_2D_element::GALGAS_acceptableParameterList_2D_element (const GALGAS_formalParameterSignature & inOperand0,
                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mRoutineSignature (inOperand0),
mProperty_mIsFilePrivate (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_acceptableParameterList_2D_element GALGAS_acceptableParameterList_2D_element::class_func_new (const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                                                                     const GALGAS_bool & in_mIsFilePrivate,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_acceptableParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineSignature = in_mRoutineSignature ;
  result.mProperty_mIsFilePrivate = in_mIsFilePrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_acceptableParameterList_2D_element::isValid (void) const {
  return mProperty_mRoutineSignature.isValid () && mProperty_mIsFilePrivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_acceptableParameterList_2D_element::drop (void) {
  mProperty_mRoutineSignature.drop () ;
  mProperty_mIsFilePrivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_acceptableParameterList_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @acceptableParameterList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsFilePrivate.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @acceptableParameterList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_acceptableParameterList_2D_element ("acceptableParameterList-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_acceptableParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_acceptableParameterList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_acceptableParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_acceptableParameterList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_acceptableParameterList_2D_element GALGAS_acceptableParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_acceptableParameterList_2D_element result ;
  const GALGAS_acceptableParameterList_2D_element * p = (const GALGAS_acceptableParameterList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_acceptableParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("acceptableParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element::~ GALGAS_templateInstructionListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::init_21_ (const GALGAS_templateInstructionForGeneration & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::class_func_new (const GALGAS_templateInstructionForGeneration & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ("templateInstructionListForGeneration-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  const GALGAS_templateInstructionListForGeneration_2D_element * p = (const GALGAS_templateInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::~ GALGAS_actualParameterListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::init_21_ (const GALGAS_actualParameterForGeneration & in_mActualParameter,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::class_func_new (const GALGAS_actualParameterForGeneration & in_mActualParameter,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actualParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualParameterListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ("actualParameterListForGeneration-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  const GALGAS_actualParameterListForGeneration_2D_element * p = (const GALGAS_actualParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element::~ GALGAS_semanticInstructionListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::init_21_ (const GALGAS_semanticInstructionForGeneration & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::class_func_new (const GALGAS_semanticInstructionForGeneration & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ("semanticInstructionListForGeneration-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  const GALGAS_semanticInstructionListForGeneration_2D_element * p = (const GALGAS_semanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::~ GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::init_21__21_ (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                         const GALGAS_location & in_mEndOfInstructionList,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                            const GALGAS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::class_func_new (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                           const GALGAS_location & in_mEndOfInstructionList,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_listOfSemanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @listOfSemanticInstructionListForGeneration-element:") ;
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
//
//     @listOfSemanticInstructionListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ("listOfSemanticInstructionListForGeneration-element",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSemanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  const GALGAS_listOfSemanticInstructionListForGeneration_2D_element * p = (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element::GALGAS_semanticDeclarationListForGeneration_2D_element (void) :
mProperty_infoMessage (),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element::~ GALGAS_semanticDeclarationListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element GALGAS_semanticDeclarationListForGeneration_2D_element::init_21_infoMessage_21_ (const GALGAS_string & in_infoMessage,
                                                                                                                                        const GALGAS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_infoMessage = in_infoMessage ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element::GALGAS_semanticDeclarationListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_semanticDeclarationForGeneration & inOperand1) :
mProperty_infoMessage (inOperand0),
mProperty_mDeclaration (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element GALGAS_semanticDeclarationListForGeneration_2D_element::class_func_new (const GALGAS_string & in_infoMessage,
                                                                                                                               const GALGAS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_infoMessage = in_infoMessage ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticDeclarationListForGeneration_2D_element::isValid (void) const {
  return mProperty_infoMessage.isValid () && mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration_2D_element::drop (void) {
  mProperty_infoMessage.drop () ;
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticDeclarationListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_infoMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2D_element ("semanticDeclarationListForGeneration-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element GALGAS_semanticDeclarationListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration_2D_element result ;
  const GALGAS_semanticDeclarationListForGeneration_2D_element * p = (const GALGAS_semanticDeclarationListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonTerminalToAddCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element::~ GALGAS_nonTerminalToAddList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::init_21__21_ (const GALGAS_string & in_mSyntaxComponentName,
                                                                                             const GALGAS_uint & in_mNonTerminalToAddCount,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_uint & inOperand1) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonTerminalToAddCount (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::class_func_new (const GALGAS_string & in_mSyntaxComponentName,
                                                                                               const GALGAS_uint & in_mNonTerminalToAddCount,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalToAddList_2D_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonTerminalToAddCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList_2D_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonTerminalToAddCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalToAddList-element:") ;
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
//
//     @nonTerminalToAddList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ("nonTerminalToAddList-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalToAddList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalToAddList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalToAddList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  const GALGAS_nonTerminalToAddList_2D_element * p = (const GALGAS_nonTerminalToAddList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalToAddList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mTargetVarCppName (),
mProperty_mSourceLexicalAttributeName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element::~ GALGAS_terminalCheckAssignementList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::init_21__21__21_ (const GALGAS_string & in_mTypeName,
                                                                                                                 const GALGAS_string & in_mTargetVarCppName,
                                                                                                                 const GALGAS_string & in_mSourceLexicalAttributeName,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mProperty_mTypeName (inOperand0),
mProperty_mTargetVarCppName (inOperand1),
mProperty_mSourceLexicalAttributeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::class_func_new (const GALGAS_string & in_mTypeName,
                                                                                                               const GALGAS_string & in_mTargetVarCppName,
                                                                                                               const GALGAS_string & in_mSourceLexicalAttributeName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_terminalCheckAssignementList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mTargetVarCppName.isValid () && mProperty_mSourceLexicalAttributeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mTargetVarCppName.drop () ;
  mProperty_mSourceLexicalAttributeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalCheckAssignementList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckAssignementList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ("terminalCheckAssignementList-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalCheckAssignementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalCheckAssignementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckAssignementList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  const GALGAS_terminalCheckAssignementList_2D_element * p = (const GALGAS_terminalCheckAssignementList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalCheckAssignementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplateFormalInputParameters (),
mProperty_mTemplateInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element::~ GALGAS_filewrapperTemplateListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::init_21__21__21_ (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                                                 const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                                 const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand1),
mProperty_mTemplateInstructionListForGeneration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::class_func_new (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                                               const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                               const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperTemplateListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () && mProperty_mTemplateInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration_2D_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
  mProperty_mTemplateInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateListForGeneration-element:") ;
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
//
//     @filewrapperTemplateListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ("filewrapperTemplateListForGeneration-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  const GALGAS_filewrapperTemplateListForGeneration_2D_element * p = (const GALGAS_filewrapperTemplateListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperTemplateListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (void) :
mProperty_mNonterminalName (),
mProperty_mRuleIndex (),
mProperty_mLabelImplementationList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element::~ GALGAS_ruleDeclarationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::init_21__21__21_ (const GALGAS_string & in_mNonterminalName,
                                                                                               const GALGAS_uint & in_mRuleIndex,
                                                                                               const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_uint & inOperand1,
                                                                              const GALGAS_ruleLabelImplementationList & inOperand2) :
mProperty_mNonterminalName (inOperand0),
mProperty_mRuleIndex (inOperand1),
mProperty_mLabelImplementationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::class_func_new (const GALGAS_string & in_mNonterminalName,
                                                                                             const GALGAS_uint & in_mRuleIndex,
                                                                                             const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ruleDeclarationList_2D_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mRuleIndex.isValid () && mProperty_mLabelImplementationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList_2D_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mRuleIndex.drop () ;
  mProperty_mLabelImplementationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleDeclarationList-element:") ;
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
//
//     @ruleDeclarationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ("ruleDeclarationList-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ruleDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ruleDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  const GALGAS_ruleDeclarationList_2D_element * p = (const GALGAS_ruleDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ruleDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (void) :
mProperty_mExpression (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element::~ GALGAS_collectionValueElementList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::init_21__21_ (const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                                         const GALGAS_location & in_location,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                            const GALGAS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::class_func_new (const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                                           const GALGAS_location & in_location,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_collectionValueElementList_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @collectionValueElementList-element:") ;
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
//
//     @collectionValueElementList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ("collectionValueElementList-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueElementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueElementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  const GALGAS_collectionValueElementList_2D_element * p = (const GALGAS_collectionValueElementList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_collectionValueElementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available::GALGAS_selfAvailability_2D_available (void) :
mProperty_type (),
mProperty_selfMutability () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available::~ GALGAS_selfAvailability_2D_available (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_selfAvailability_2D_available GALGAS_selfAvailability_2D_available::init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_type,
                                                                                         const GALGAS_selfMutability & in_selfMutability,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selfAvailability_2D_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability_2D_available::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available::GALGAS_selfAvailability_2D_available (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const GALGAS_selfMutability & inOperand1) :
mProperty_type (inOperand0),
mProperty_selfMutability (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available GALGAS_selfAvailability_2D_available::class_func_new (const GALGAS_unifiedTypeMapEntry & in_type,
                                                                                           const GALGAS_selfMutability & in_selfMutability,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selfAvailability_2D_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfAvailability_2D_available::objectCompare (const GALGAS_selfAvailability_2D_available & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_selfMutability.objectCompare (inOperand.mProperty_selfMutability) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_selfAvailability_2D_available::isValid (void) const {
  return mProperty_type.isValid () && mProperty_selfMutability.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability_2D_available::drop (void) {
  mProperty_type.drop () ;
  mProperty_selfMutability.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability_2D_available::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selfAvailability-available:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfMutability.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfAvailability-available generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability_2D_available ("selfAvailability-available",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfAvailability_2D_available::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2D_available ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfAvailability_2D_available::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfAvailability_2D_available (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available GALGAS_selfAvailability_2D_available::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfAvailability_2D_available result ;
  const GALGAS_selfAvailability_2D_available * p = (const GALGAS_selfAvailability_2D_available *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfAvailability_2D_available *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability-available", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @selfAvailability_2D_available_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available_3F_::GALGAS_selfAvailability_2D_available_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available_3F_::GALGAS_selfAvailability_2D_available_3F_ (const GALGAS_selfAvailability_2D_available & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available_3F_ GALGAS_selfAvailability_2D_available_3F_::init_nil (void) {
  GALGAS_selfAvailability_2D_available_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_selfAvailability_2D_available_3F_::isValid (void) const {
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

bool GALGAS_selfAvailability_2D_available_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability_2D_available_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_selfAvailability_2D_available () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability_2D_available_3F_::description (String & ioString,
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
//
//     @selfAvailability-available? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability_2D_available_3F_ ("selfAvailability-available?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfAvailability_2D_available_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2D_available_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfAvailability_2D_available_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfAvailability_2D_available_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAvailability_2D_available_3F_ GALGAS_selfAvailability_2D_available_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selfAvailability_2D_available_3F_ result ;
  const GALGAS_selfAvailability_2D_available_3F_ * p = (const GALGAS_selfAvailability_2D_available_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfAvailability_2D_available_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability-available?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (void) :
mProperty_mTypeComparisonKind (),
mProperty_mType (),
mProperty_mCastedVarCppName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::~ GALGAS_castInstructionBranchListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::init_21__21__21__21_ (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                                         const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                                         const GALGAS_string & in_mCastedVarCppName,
                                                                                                                                         const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCastedVarCppName = in_mCastedVarCppName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                    const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mTypeComparisonKind (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCastedVarCppName (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::class_func_new (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                                   const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                                   const GALGAS_string & in_mCastedVarCppName,
                                                                                                                                   const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCastedVarCppName = in_mCastedVarCppName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_castInstructionBranchListForGeneration_2D_element::isValid (void) const {
  return mProperty_mTypeComparisonKind.isValid () && mProperty_mType.isValid () && mProperty_mCastedVarCppName.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration_2D_element::drop (void) {
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCastedVarCppName.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration_2D_element::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @castInstructionBranchListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCastedVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @castInstructionBranchListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ("castInstructionBranchListForGeneration-element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  const GALGAS_castInstructionBranchListForGeneration_2D_element * p = (const GALGAS_castInstructionBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace::GALGAS_fixitElementAST_2D_fixItReplace (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace::~ GALGAS_fixitElementAST_2D_fixItReplace (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace GALGAS_fixitElementAST_2D_fixItReplace::init_21__21_ (const GALGAS_semanticExpressionAST & in_exp,
                                                                                             const GALGAS_location & in_errorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace::GALGAS_fixitElementAST_2D_fixItReplace (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                const GALGAS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace GALGAS_fixitElementAST_2D_fixItReplace::class_func_new (const GALGAS_semanticExpressionAST & in_exp,
                                                                                               const GALGAS_location & in_errorLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST_2D_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItReplace::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST-fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST-fixItReplace generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItReplace ("fixitElementAST-fixItReplace",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST_2D_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST_2D_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST_2D_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace GALGAS_fixitElementAST_2D_fixItReplace::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItReplace result ;
  const GALGAS_fixitElementAST_2D_fixItReplace * p = (const GALGAS_fixitElementAST_2D_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementAST_2D_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST-fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementAST_2D_fixItReplace_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace_3F_::GALGAS_fixitElementAST_2D_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace_3F_::GALGAS_fixitElementAST_2D_fixItReplace_3F_ (const GALGAS_fixitElementAST_2D_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace_3F_ GALGAS_fixitElementAST_2D_fixItReplace_3F_::init_nil (void) {
  GALGAS_fixitElementAST_2D_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST_2D_fixItReplace_3F_::isValid (void) const {
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

bool GALGAS_fixitElementAST_2D_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_fixitElementAST_2D_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItReplace_3F_::description (String & ioString,
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
//
//     @fixitElementAST-fixItReplace? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItReplace_3F_ ("fixitElementAST-fixItReplace?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST_2D_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST_2D_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST_2D_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItReplace_3F_ GALGAS_fixitElementAST_2D_fixItReplace_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItReplace_3F_ result ;
  const GALGAS_fixitElementAST_2D_fixItReplace_3F_ * p = (const GALGAS_fixitElementAST_2D_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementAST_2D_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST-fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter::GALGAS_fixitElementAST_2D_fixItInsertAfter (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter::~ GALGAS_fixitElementAST_2D_fixItInsertAfter (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter GALGAS_fixitElementAST_2D_fixItInsertAfter::init_21__21_ (const GALGAS_semanticExpressionAST & in_exp,
                                                                                                     const GALGAS_location & in_errorLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter::GALGAS_fixitElementAST_2D_fixItInsertAfter (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                        const GALGAS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter GALGAS_fixitElementAST_2D_fixItInsertAfter::class_func_new (const GALGAS_semanticExpressionAST & in_exp,
                                                                                                       const GALGAS_location & in_errorLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST_2D_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertAfter::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST-fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST-fixItInsertAfter generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertAfter ("fixitElementAST-fixItInsertAfter",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST_2D_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST_2D_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST_2D_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter GALGAS_fixitElementAST_2D_fixItInsertAfter::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertAfter result ;
  const GALGAS_fixitElementAST_2D_fixItInsertAfter * p = (const GALGAS_fixitElementAST_2D_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementAST_2D_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST-fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementAST_2D_fixItInsertAfter_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ (const GALGAS_fixitElementAST_2D_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::init_nil (void) {
  GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::isValid (void) const {
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

bool GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_fixitElementAST_2D_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::description (String & ioString,
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
//
//     @fixitElementAST-fixItInsertAfter? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ ("fixitElementAST-fixItInsertAfter?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ result ;
  const GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ * p = (const GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementAST_2D_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST-fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore::GALGAS_fixitElementAST_2D_fixItInsertBefore (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore::~ GALGAS_fixitElementAST_2D_fixItInsertBefore (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore GALGAS_fixitElementAST_2D_fixItInsertBefore::init_21__21_ (const GALGAS_semanticExpressionAST & in_exp,
                                                                                                       const GALGAS_location & in_errorLocation,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore::GALGAS_fixitElementAST_2D_fixItInsertBefore (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                          const GALGAS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore GALGAS_fixitElementAST_2D_fixItInsertBefore::class_func_new (const GALGAS_semanticExpressionAST & in_exp,
                                                                                                         const GALGAS_location & in_errorLocation,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST_2D_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertBefore::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST-fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST-fixItInsertBefore generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertBefore ("fixitElementAST-fixItInsertBefore",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST_2D_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST_2D_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST_2D_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore GALGAS_fixitElementAST_2D_fixItInsertBefore::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertBefore result ;
  const GALGAS_fixitElementAST_2D_fixItInsertBefore * p = (const GALGAS_fixitElementAST_2D_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementAST_2D_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST-fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementAST_2D_fixItInsertBefore_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ (const GALGAS_fixitElementAST_2D_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::init_nil (void) {
  GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::isValid (void) const {
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

bool GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_fixitElementAST_2D_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::description (String & ioString,
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
//
//     @fixitElementAST-fixItInsertBefore? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ ("fixitElementAST-fixItInsertBefore?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ result ;
  const GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ * p = (const GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitElementAST_2D_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST-fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element::GALGAS_fixitListAST_2D_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element::~ GALGAS_fixitListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_fixitListAST_2D_element GALGAS_fixitListAST_2D_element::init_21_ (const GALGAS_fixitElementAST & in_mElement,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element::GALGAS_fixitListAST_2D_element (const GALGAS_fixitElementAST & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element GALGAS_fixitListAST_2D_element::class_func_new (const GALGAS_fixitElementAST & in_mElement,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitListAST_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST_2D_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST_2D_element ("fixitListAST-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element GALGAS_fixitListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST_2D_element result ;
  const GALGAS_fixitListAST_2D_element * p = (const GALGAS_fixitListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element::GALGAS_fixitListForGeneration_2D_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element::~ GALGAS_fixitListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element GALGAS_fixitListForGeneration_2D_element::init_21_ (const GALGAS_fixitElementForGeneration & in_mElement,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element::GALGAS_fixitListForGeneration_2D_element (const GALGAS_fixitElementForGeneration & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element GALGAS_fixitListForGeneration_2D_element::class_func_new (const GALGAS_fixitElementForGeneration & in_mElement,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fixitListForGeneration_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ("fixitListForGeneration-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element GALGAS_fixitListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration_2D_element result ;
  const GALGAS_fixitListForGeneration_2D_element * p = (const GALGAS_fixitListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) :
mProperty_mAscending (),
mProperty_mEnumeratedCollection () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::~ GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::init_21__21_ (const GALGAS_bool & in_mAscending,
                                                                                                                               const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                                                                  const GALGAS_abstractEnumeratedCollectionAST & inOperand1) :
mProperty_mAscending (inOperand0),
mProperty_mEnumeratedCollection (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::class_func_new (const GALGAS_bool & in_mAscending,
                                                                                                                                 const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_forInstructionEnumeratedObjectListAST_2D_element::isValid (void) const {
  return mProperty_mAscending.isValid () && mProperty_mEnumeratedCollection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::drop (void) {
  mProperty_mAscending.drop () ;
  mProperty_mEnumeratedCollection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAscending.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ("forInstructionEnumeratedObjectListAST-element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectListAST_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp::GALGAS_ifExpressionKind_2D_regularExp (void) :
mProperty_exp (),
mProperty_endOfExp () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp::~ GALGAS_ifExpressionKind_2D_regularExp (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp GALGAS_ifExpressionKind_2D_regularExp::init_21__21_ (const GALGAS_semanticExpressionAST & in_exp,
                                                                                           const GALGAS_location & in_endOfExp,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifExpressionKind_2D_regularExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind_2D_regularExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp::GALGAS_ifExpressionKind_2D_regularExp (const GALGAS_semanticExpressionAST & inOperand0,
                                                                              const GALGAS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_endOfExp (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp GALGAS_ifExpressionKind_2D_regularExp::class_func_new (const GALGAS_semanticExpressionAST & in_exp,
                                                                                             const GALGAS_location & in_endOfExp,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifExpressionKind_2D_regularExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifExpressionKind_2D_regularExp::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_endOfExp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind_2D_regularExp::drop (void) {
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind_2D_regularExp::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind-regularExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionKind-regularExp generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2D_regularExp ("ifExpressionKind-regularExp",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionKind_2D_regularExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2D_regularExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionKind_2D_regularExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionKind_2D_regularExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp GALGAS_ifExpressionKind_2D_regularExp::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind_2D_regularExp result ;
  const GALGAS_ifExpressionKind_2D_regularExp * p = (const GALGAS_ifExpressionKind_2D_regularExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionKind_2D_regularExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind-regularExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ifExpressionKind_2D_regularExp_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp_3F_::GALGAS_ifExpressionKind_2D_regularExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp_3F_::GALGAS_ifExpressionKind_2D_regularExp_3F_ (const GALGAS_ifExpressionKind_2D_regularExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp_3F_ GALGAS_ifExpressionKind_2D_regularExp_3F_::init_nil (void) {
  GALGAS_ifExpressionKind_2D_regularExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifExpressionKind_2D_regularExp_3F_::isValid (void) const {
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

bool GALGAS_ifExpressionKind_2D_regularExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind_2D_regularExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_ifExpressionKind_2D_regularExp () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind_2D_regularExp_3F_::description (String & ioString,
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
//
//     @ifExpressionKind-regularExp? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2D_regularExp_3F_ ("ifExpressionKind-regularExp?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionKind_2D_regularExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2D_regularExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionKind_2D_regularExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionKind_2D_regularExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp_3F_ GALGAS_ifExpressionKind_2D_regularExp_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind_2D_regularExp_3F_ result ;
  const GALGAS_ifExpressionKind_2D_regularExp_3F_ * p = (const GALGAS_ifExpressionKind_2D_regularExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionKind_2D_regularExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind-regularExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element::GALGAS_ifExpressionList_2D_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element::~ GALGAS_ifExpressionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element GALGAS_ifExpressionList_2D_element::init_21_ (const GALGAS_ifExpressionKind & in_mExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifExpressionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element::GALGAS_ifExpressionList_2D_element (const GALGAS_ifExpressionKind & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element GALGAS_ifExpressionList_2D_element::class_func_new (const GALGAS_ifExpressionKind & in_mExpression,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifExpressionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifExpressionList_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList_2D_element ("ifExpressionList-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element GALGAS_ifExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList_2D_element result ;
  const GALGAS_ifExpressionList_2D_element * p = (const GALGAS_ifExpressionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element::GALGAS_ifTestListForGeneration_2D_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element::~ GALGAS_ifTestListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element GALGAS_ifTestListForGeneration_2D_element::init_21_ (const GALGAS_ifTestForGeneration & in_mExpression,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element::GALGAS_ifTestListForGeneration_2D_element (const GALGAS_ifTestForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element GALGAS_ifTestListForGeneration_2D_element::class_func_new (const GALGAS_ifTestForGeneration & in_mExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ifTestListForGeneration_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifTestListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration_2D_element ("ifTestListForGeneration-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifTestListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifTestListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifTestListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element GALGAS_ifTestListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration_2D_element result ;
  const GALGAS_ifTestListForGeneration_2D_element * p = (const GALGAS_ifTestListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifTestListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructions (),
mProperty_mEndOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element::~ GALGAS_switchBranchesAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::init_21__21__21__21_ (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                               const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                               const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                                                               const GALGAS_location & in_mEndOfBranch,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (const GALGAS__5B_lstring_5D_ & inOperand0,
                                                                          const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                          const GALGAS_semanticInstructionListAST & inOperand2,
                                                                          const GALGAS_location & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructions (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::class_func_new (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                         const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                         const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                                                         const GALGAS_location & in_mEndOfBranch,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_switchBranchesAST_2D_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructions.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST_2D_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructions.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesAST-element:") ;
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
//
//     @switchBranchesAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ("switchBranchesAST-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchBranchesAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchBranchesAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  const GALGAS_switchBranchesAST_2D_element * p = (const GALGAS_switchBranchesAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchBranchesAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) :
mProperty_mType (),
mProperty_mCppName (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::~ GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                                     const GALGAS_string & in_mCppName,
                                                                                                                                     const GALGAS_string & in_name,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mCppName (inOperand1),
mProperty_name (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                                   const GALGAS_string & in_mCppName,
                                                                                                                                   const GALGAS_string & in_name,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extractedAssociatedValuesForGeneration_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extractedAssociatedValuesForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extractedAssociatedValuesForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ("extractedAssociatedValuesForGeneration-element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  const GALGAS_extractedAssociatedValuesForGeneration_2D_element * p = (const GALGAS_extractedAssociatedValuesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extractedAssociatedValuesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructions () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element::~ GALGAS_switchBranchesForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::init_21__21__21__21_ (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                                   const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                   const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                   const GALGAS_semanticInstructionListForGeneration & in_mInstructions,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (const GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                              const GALGAS_uint & inOperand2,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructions (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::class_func_new (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                             const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                             const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                             const GALGAS_semanticInstructionListForGeneration & in_mInstructions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_switchBranchesForGeneration_2D_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration_2D_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesForGeneration-element:") ;
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
//
//     @switchBranchesForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ("switchBranchesForGeneration-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchBranchesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchBranchesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  const GALGAS_switchBranchesForGeneration_2D_element * p = (const GALGAS_switchBranchesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchBranchesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::~ GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::init_21_ (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::class_func_new (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionListForGrammarAnalysis-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionListForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ("syntaxInstructionListForGrammarAnalysis-element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element * p = (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (void) :
mProperty_mSyntaxInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::~ GALGAS_branchListForGrammarAnalysis_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::init_21_ (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0) :
mProperty_mSyntaxInstructionList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::class_func_new (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_branchListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @branchListForGrammarAnalysis-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @branchListForGrammarAnalysis-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ("branchListForGrammarAnalysis-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  const GALGAS_branchListForGrammarAnalysis_2D_element * p = (const GALGAS_branchListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_branchListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (void) :
mProperty_columns () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::~ GALGAS_rowList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::init_21_ (const GALGAS__32_stringlist & in_columns,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (const GALGAS__32_stringlist & inOperand0) :
mProperty_columns (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::class_func_new (const GALGAS__32_stringlist & in_columns,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_rowList_2D_element::isValid (void) const {
  return mProperty_columns.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList_2D_element::drop (void) {
  mProperty_columns.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList_2D_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @rowList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_columns.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @rowList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList_2D_element ("rowList-element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rowList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rowList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rowList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  const GALGAS_rowList_2D_element * p = (const GALGAS_rowList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_rowList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::~ GALGAS_programListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::init_21_ (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (const GALGAS_semanticDeclarationForGeneration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::class_func_new (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_programListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @programListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @programListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration_2D_element ("programListForGeneration-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  const GALGAS_programListForGeneration_2D_element * p = (const GALGAS_programListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element::GALGAS_genericExtensionMethodListMapDictionary_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element::~ GALGAS_genericExtensionMethodListMapDictionary_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element GALGAS_genericExtensionMethodListMapDictionary_2D_element::init_21__21_ (const GALGAS_string & in_key,
                                                                                                                                   const GALGAS_lstringlist & in_mList,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMapDictionary_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMapDictionary_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element::GALGAS_genericExtensionMethodListMapDictionary_2D_element (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_lstringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element GALGAS_genericExtensionMethodListMapDictionary_2D_element::class_func_new (const GALGAS_string & in_key,
                                                                                                                                     const GALGAS_lstringlist & in_mList,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMapDictionary_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericExtensionMethodListMapDictionary_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMapDictionary_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMapDictionary_2D_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericExtensionMethodListMapDictionary-element:") ;
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
//
//     @genericExtensionMethodListMapDictionary-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2D_element ("genericExtensionMethodListMapDictionary-element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMapDictionary_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericExtensionMethodListMapDictionary_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMapDictionary_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element GALGAS_genericExtensionMethodListMapDictionary_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMapDictionary_2D_element result ;
  const GALGAS_genericExtensionMethodListMapDictionary_2D_element * p = (const GALGAS_genericExtensionMethodListMapDictionary_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericExtensionMethodListMapDictionary_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMapDictionary-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @genericExtensionMethodListMapDictionary_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ (const GALGAS_genericExtensionMethodListMapDictionary_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::init_nil (void) {
  GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::isValid (void) const {
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

bool GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_genericExtensionMethodListMapDictionary_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::description (String & ioString,
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
//
//     @genericExtensionMethodListMapDictionary-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ ("genericExtensionMethodListMapDictionary-element?",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ result ;
  const GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ * p = (const GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericExtensionMethodListMapDictionary_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMapDictionary-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::GALGAS_unifiedTypeMapEntryList_2D_element (void) :
mProperty_mEntry () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::~ GALGAS_unifiedTypeMapEntryList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::init_21_ (const GALGAS_unifiedTypeMapEntry & in_mEntry,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntry = in_mEntry ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::GALGAS_unifiedTypeMapEntryList_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0) :
mProperty_mEntry (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mEntry,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntry = in_mEntry ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unifiedTypeMapEntryList_2D_element::objectCompare (const GALGAS_unifiedTypeMapEntryList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEntry.objectCompare (inOperand.mProperty_mEntry) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntryList_2D_element::isValid (void) const {
  return mProperty_mEntry.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList_2D_element::drop (void) {
  mProperty_mEntry.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntryList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEntry.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntryList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ("unifiedTypeMapEntryList-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntryList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntryList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntryList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList_2D_element result ;
  const GALGAS_unifiedTypeMapEntryList_2D_element * p = (const GALGAS_unifiedTypeMapEntryList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntryList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element::GALGAS_descendantClassListMapDictionary_2D_element (void) :
mProperty_key (),
mProperty_typeList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element::~ GALGAS_descendantClassListMapDictionary_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element GALGAS_descendantClassListMapDictionary_2D_element::init_21__21_ (const GALGAS_string & in_key,
                                                                                                                     const GALGAS_unifiedTypeMapEntryList & in_typeList,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_descendantClassListMapDictionary_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_typeList = in_typeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMapDictionary_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element::GALGAS_descendantClassListMapDictionary_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_unifiedTypeMapEntryList & inOperand1) :
mProperty_key (inOperand0),
mProperty_typeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element GALGAS_descendantClassListMapDictionary_2D_element::class_func_new (const GALGAS_string & in_key,
                                                                                                                       const GALGAS_unifiedTypeMapEntryList & in_typeList,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_descendantClassListMapDictionary_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_typeList = in_typeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_descendantClassListMapDictionary_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_typeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMapDictionary_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_typeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMapDictionary_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @descendantClassListMapDictionary-element:") ;
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
//
//     @descendantClassListMapDictionary-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2D_element ("descendantClassListMapDictionary-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_descendantClassListMapDictionary_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_descendantClassListMapDictionary_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMapDictionary_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element GALGAS_descendantClassListMapDictionary_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMapDictionary_2D_element result ;
  const GALGAS_descendantClassListMapDictionary_2D_element * p = (const GALGAS_descendantClassListMapDictionary_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_descendantClassListMapDictionary_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMapDictionary-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @descendantClassListMapDictionary_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element_3F_::GALGAS_descendantClassListMapDictionary_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element_3F_::GALGAS_descendantClassListMapDictionary_2D_element_3F_ (const GALGAS_descendantClassListMapDictionary_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element_3F_ GALGAS_descendantClassListMapDictionary_2D_element_3F_::init_nil (void) {
  GALGAS_descendantClassListMapDictionary_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_descendantClassListMapDictionary_2D_element_3F_::isValid (void) const {
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

bool GALGAS_descendantClassListMapDictionary_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMapDictionary_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_descendantClassListMapDictionary_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMapDictionary_2D_element_3F_::description (String & ioString,
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
//
//     @descendantClassListMapDictionary-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2D_element_3F_ ("descendantClassListMapDictionary-element?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_descendantClassListMapDictionary_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_descendantClassListMapDictionary_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMapDictionary_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMapDictionary_2D_element_3F_ GALGAS_descendantClassListMapDictionary_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMapDictionary_2D_element_3F_ result ;
  const GALGAS_descendantClassListMapDictionary_2D_element_3F_ * p = (const GALGAS_descendantClassListMapDictionary_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_descendantClassListMapDictionary_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMapDictionary-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess::GALGAS_AccessControlAST_2D_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess::~ GALGAS_AccessControlAST_2D_fileprivateAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess GALGAS_AccessControlAST_2D_fileprivateAccess::init_21_ (const GALGAS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess::GALGAS_AccessControlAST_2D_fileprivateAccess (const GALGAS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess GALGAS_AccessControlAST_2D_fileprivateAccess::class_func_new (const GALGAS_location & in_declarationLocation,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST_2D_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateAccess::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST-fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControlAST-fileprivateAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateAccess ("AccessControlAST-fileprivateAccess",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControlAST_2D_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControlAST_2D_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControlAST_2D_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess GALGAS_AccessControlAST_2D_fileprivateAccess::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateAccess result ;
  const GALGAS_AccessControlAST_2D_fileprivateAccess * p = (const GALGAS_AccessControlAST_2D_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControlAST_2D_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST-fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControlAST_2D_fileprivateAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ (const GALGAS_AccessControlAST_2D_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::init_nil (void) {
  GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControlAST_2D_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::description (String & ioString,
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
//
//     @AccessControlAST-fileprivateAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ ("AccessControlAST-fileprivateAccess?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ GALGAS_AccessControlAST_2D_fileprivateAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ result ;
  const GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ * p = (const GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControlAST_2D_fileprivateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST-fileprivateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess::GALGAS_AccessControlAST_2D_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess::~ GALGAS_AccessControlAST_2D_fileprivateSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess GALGAS_AccessControlAST_2D_fileprivateSetAccess::init_21_ (const GALGAS_location & in_declarationLocation,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess::GALGAS_AccessControlAST_2D_fileprivateSetAccess (const GALGAS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess GALGAS_AccessControlAST_2D_fileprivateSetAccess::class_func_new (const GALGAS_location & in_declarationLocation,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST_2D_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateSetAccess::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST-fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControlAST-fileprivateSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateSetAccess ("AccessControlAST-fileprivateSetAccess",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControlAST_2D_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControlAST_2D_fileprivateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControlAST_2D_fileprivateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess GALGAS_AccessControlAST_2D_fileprivateSetAccess::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateSetAccess result ;
  const GALGAS_AccessControlAST_2D_fileprivateSetAccess * p = (const GALGAS_AccessControlAST_2D_fileprivateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControlAST_2D_fileprivateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST-fileprivateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControlAST_2D_fileprivateSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ (const GALGAS_AccessControlAST_2D_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::init_nil (void) {
  GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControlAST_2D_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::description (String & ioString,
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
//
//     @AccessControlAST-fileprivateSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ ("AccessControlAST-fileprivateSetAccess?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ result ;
  const GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ * p = (const GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControlAST_2D_fileprivateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST-fileprivateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess::GALGAS_AccessControl_2D_protectedAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess::~ GALGAS_AccessControl_2D_protectedAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess GALGAS_AccessControl_2D_protectedAccess::init_21_ (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess::GALGAS_AccessControl_2D_protectedAccess (const GALGAS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess GALGAS_AccessControl_2D_protectedAccess::class_func_new (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_protectedAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedAccess::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl-protectedAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl-protectedAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_protectedAccess ("AccessControl-protectedAccess",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_protectedAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_protectedAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_protectedAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_protectedAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess GALGAS_AccessControl_2D_protectedAccess::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedAccess result ;
  const GALGAS_AccessControl_2D_protectedAccess * p = (const GALGAS_AccessControl_2D_protectedAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_protectedAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-protectedAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2D_protectedAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess_3F_::GALGAS_AccessControl_2D_protectedAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess_3F_::GALGAS_AccessControl_2D_protectedAccess_3F_ (const GALGAS_AccessControl_2D_protectedAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess_3F_ GALGAS_AccessControl_2D_protectedAccess_3F_::init_nil (void) {
  GALGAS_AccessControl_2D_protectedAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_protectedAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControl_2D_protectedAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControl_2D_protectedAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedAccess_3F_::description (String & ioString,
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
//
//     @AccessControl-protectedAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_protectedAccess_3F_ ("AccessControl-protectedAccess?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_protectedAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_protectedAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_protectedAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_protectedAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedAccess_3F_ GALGAS_AccessControl_2D_protectedAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedAccess_3F_ result ;
  const GALGAS_AccessControl_2D_protectedAccess_3F_ * p = (const GALGAS_AccessControl_2D_protectedAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_protectedAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-protectedAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess::GALGAS_AccessControl_2D_protectedSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess::~ GALGAS_AccessControl_2D_protectedSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess GALGAS_AccessControl_2D_protectedSetAccess::init_21_ (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess::GALGAS_AccessControl_2D_protectedSetAccess (const GALGAS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess GALGAS_AccessControl_2D_protectedSetAccess::class_func_new (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_protectedSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedSetAccess::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl-protectedSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl-protectedSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_protectedSetAccess ("AccessControl-protectedSetAccess",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_protectedSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_protectedSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_protectedSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_protectedSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess GALGAS_AccessControl_2D_protectedSetAccess::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedSetAccess result ;
  const GALGAS_AccessControl_2D_protectedSetAccess * p = (const GALGAS_AccessControl_2D_protectedSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_protectedSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-protectedSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2D_protectedSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess_3F_::GALGAS_AccessControl_2D_protectedSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess_3F_::GALGAS_AccessControl_2D_protectedSetAccess_3F_ (const GALGAS_AccessControl_2D_protectedSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess_3F_ GALGAS_AccessControl_2D_protectedSetAccess_3F_::init_nil (void) {
  GALGAS_AccessControl_2D_protectedSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_protectedSetAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControl_2D_protectedSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControl_2D_protectedSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_protectedSetAccess_3F_::description (String & ioString,
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
//
//     @AccessControl-protectedSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_protectedSetAccess_3F_ ("AccessControl-protectedSetAccess?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_protectedSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_protectedSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_protectedSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_protectedSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_protectedSetAccess_3F_ GALGAS_AccessControl_2D_protectedSetAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_protectedSetAccess_3F_ result ;
  const GALGAS_AccessControl_2D_protectedSetAccess_3F_ * p = (const GALGAS_AccessControl_2D_protectedSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_protectedSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-protectedSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess::GALGAS_AccessControl_2D_privateAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess::~ GALGAS_AccessControl_2D_privateAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess GALGAS_AccessControl_2D_privateAccess::init_21_ (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess::GALGAS_AccessControl_2D_privateAccess (const GALGAS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess GALGAS_AccessControl_2D_privateAccess::class_func_new (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_privateAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateAccess::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl-privateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl-privateAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_privateAccess ("AccessControl-privateAccess",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_privateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_privateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_privateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_privateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess GALGAS_AccessControl_2D_privateAccess::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateAccess result ;
  const GALGAS_AccessControl_2D_privateAccess * p = (const GALGAS_AccessControl_2D_privateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_privateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-privateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2D_privateAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess_3F_::GALGAS_AccessControl_2D_privateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess_3F_::GALGAS_AccessControl_2D_privateAccess_3F_ (const GALGAS_AccessControl_2D_privateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess_3F_ GALGAS_AccessControl_2D_privateAccess_3F_::init_nil (void) {
  GALGAS_AccessControl_2D_privateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_privateAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControl_2D_privateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControl_2D_privateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateAccess_3F_::description (String & ioString,
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
//
//     @AccessControl-privateAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_privateAccess_3F_ ("AccessControl-privateAccess?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_privateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_privateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_privateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_privateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateAccess_3F_ GALGAS_AccessControl_2D_privateAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateAccess_3F_ result ;
  const GALGAS_AccessControl_2D_privateAccess_3F_ * p = (const GALGAS_AccessControl_2D_privateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_privateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-privateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess::GALGAS_AccessControl_2D_privateSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess::~ GALGAS_AccessControl_2D_privateSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess GALGAS_AccessControl_2D_privateSetAccess::init_21_ (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess::GALGAS_AccessControl_2D_privateSetAccess (const GALGAS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess GALGAS_AccessControl_2D_privateSetAccess::class_func_new (const GALGAS_unifiedTypeMapEntry & in_declaringType,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_privateSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateSetAccess::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl-privateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl-privateSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_privateSetAccess ("AccessControl-privateSetAccess",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_privateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_privateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_privateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_privateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess GALGAS_AccessControl_2D_privateSetAccess::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateSetAccess result ;
  const GALGAS_AccessControl_2D_privateSetAccess * p = (const GALGAS_AccessControl_2D_privateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_privateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-privateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2D_privateSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess_3F_::GALGAS_AccessControl_2D_privateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess_3F_::GALGAS_AccessControl_2D_privateSetAccess_3F_ (const GALGAS_AccessControl_2D_privateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess_3F_ GALGAS_AccessControl_2D_privateSetAccess_3F_::init_nil (void) {
  GALGAS_AccessControl_2D_privateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_privateSetAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControl_2D_privateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControl_2D_privateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_privateSetAccess_3F_::description (String & ioString,
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
//
//     @AccessControl-privateSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_privateSetAccess_3F_ ("AccessControl-privateSetAccess?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_privateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_privateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_privateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_privateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_privateSetAccess_3F_ GALGAS_AccessControl_2D_privateSetAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_privateSetAccess_3F_ result ;
  const GALGAS_AccessControl_2D_privateSetAccess_3F_ * p = (const GALGAS_AccessControl_2D_privateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_privateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-privateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess::GALGAS_AccessControl_2D_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess::~ GALGAS_AccessControl_2D_fileprivateAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess GALGAS_AccessControl_2D_fileprivateAccess::init_21_ (const GALGAS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess::GALGAS_AccessControl_2D_fileprivateAccess (const GALGAS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess GALGAS_AccessControl_2D_fileprivateAccess::class_func_new (const GALGAS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl-fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl-fileprivateAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateAccess ("AccessControl-fileprivateAccess",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess GALGAS_AccessControl_2D_fileprivateAccess::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateAccess result ;
  const GALGAS_AccessControl_2D_fileprivateAccess * p = (const GALGAS_AccessControl_2D_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2D_fileprivateAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess_3F_::GALGAS_AccessControl_2D_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess_3F_::GALGAS_AccessControl_2D_fileprivateAccess_3F_ (const GALGAS_AccessControl_2D_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess_3F_ GALGAS_AccessControl_2D_fileprivateAccess_3F_::init_nil (void) {
  GALGAS_AccessControl_2D_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_fileprivateAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControl_2D_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControl_2D_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateAccess_3F_::description (String & ioString,
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
//
//     @AccessControl-fileprivateAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateAccess_3F_ ("AccessControl-fileprivateAccess?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_fileprivateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_fileprivateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateAccess_3F_ GALGAS_AccessControl_2D_fileprivateAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateAccess_3F_ result ;
  const GALGAS_AccessControl_2D_fileprivateAccess_3F_ * p = (const GALGAS_AccessControl_2D_fileprivateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_fileprivateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-fileprivateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess::GALGAS_AccessControl_2D_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess::~ GALGAS_AccessControl_2D_fileprivateSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess GALGAS_AccessControl_2D_fileprivateSetAccess::init_21_ (const GALGAS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess::GALGAS_AccessControl_2D_fileprivateSetAccess (const GALGAS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess GALGAS_AccessControl_2D_fileprivateSetAccess::class_func_new (const GALGAS_location & in_declarationLocation,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateSetAccess::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl-fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl-fileprivateSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateSetAccess ("AccessControl-fileprivateSetAccess",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_fileprivateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_fileprivateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess GALGAS_AccessControl_2D_fileprivateSetAccess::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateSetAccess result ;
  const GALGAS_AccessControl_2D_fileprivateSetAccess * p = (const GALGAS_AccessControl_2D_fileprivateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_fileprivateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-fileprivateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2D_fileprivateSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ (const GALGAS_AccessControl_2D_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::init_nil (void) {
  GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::isValid (void) const {
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

bool GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_AccessControl_2D_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::description (String & ioString,
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
//
//     @AccessControl-fileprivateSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ ("AccessControl-fileprivateSetAccess?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ GALGAS_AccessControl_2D_fileprivateSetAccess_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ result ;
  const GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ * p = (const GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControl_2D_fileprivateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl-fileprivateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::init_21__21__21__21_ (const GALGAS_string & in_mGroupReference,
                                                                                         const GALGAS_string & in_mGroupName,
                                                                                         const GALGAS_string & in_mGroupPath,
                                                                                         const GALGAS_stringlist & in_mChildrenRefs,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupReference = in_mGroupReference ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mGroupPath = in_mGroupPath ;
  result.mProperty_mChildrenRefs = in_mChildrenRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::class_func_new (const GALGAS_string & in_mGroupReference,
                                                                                   const GALGAS_string & in_mGroupName,
                                                                                   const GALGAS_string & in_mGroupPath,
                                                                                   const GALGAS_stringlist & in_mChildrenRefs,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupReference = in_mGroupReference ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mGroupPath = in_mGroupPath ;
  result.mProperty_mChildrenRefs = in_mChildrenRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeGroupList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::init_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mTargetRef,
                                                                                                                               const GALGAS_string & in_mTargetName,
                                                                                                                               const GALGAS_string & in_mProductFileReference,
                                                                                                                               const GALGAS_string & in_mProductFileName,
                                                                                                                               const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                                                               const GALGAS_string & in_mBuildPhaseRef,
                                                                                                                               const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                                                               const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                               const GALGAS_string & in_mBuildConfigurationRef,
                                                                                                                               const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                                                               const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::class_func_new (const GALGAS_string & in_mTargetRef,
                                                                                             const GALGAS_string & in_mTargetName,
                                                                                             const GALGAS_string & in_mProductFileReference,
                                                                                             const GALGAS_string & in_mProductFileName,
                                                                                             const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                             const GALGAS_string & in_mBuildPhaseRef,
                                                                                             const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                             const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                             const GALGAS_string & in_mBuildConfigurationRef,
                                                                                             const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                             const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeToolTargetList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mTargetRef,
                                                                                                                                         const GALGAS_string & in_mTargetName,
                                                                                                                                         const GALGAS_string & in_mProductFileReference,
                                                                                                                                         const GALGAS_string & in_mProductFileName,
                                                                                                                                         const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                                                                         const GALGAS_string & in_mBuildPhaseRef,
                                                                                                                                         const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                                                                         const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                                         const GALGAS_string & in_mBuildConfigurationRef,
                                                                                                                                         const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                                                                         const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                                         const GALGAS__32_stringlist & in_mDependentTargets,
                                                                                                                                         const GALGAS_string & in_mResourceBuildRef,
                                                                                                                                         const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  result.mProperty_mDependentTargets = in_mDependentTargets ;
  result.mProperty_mResourceBuildRef = in_mResourceBuildRef ;
  result.mProperty_mResourceFileBuildRefs = in_mResourceFileBuildRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_stringlist & inOperand4,
                                                                            const GALGAS_string & inOperand5,
                                                                            const GALGAS_string & inOperand6,
                                                                            const GALGAS_stringlist & inOperand7,
                                                                            const GALGAS_string & inOperand8,
                                                                            const GALGAS_stringlist & inOperand9,
                                                                            const GALGAS_string & inOperand10,
                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                            const GALGAS_string & inOperand12,
                                                                            const GALGAS_stringlist & inOperand13) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::class_func_new (const GALGAS_string & in_mTargetRef,
                                                                                           const GALGAS_string & in_mTargetName,
                                                                                           const GALGAS_string & in_mProductFileReference,
                                                                                           const GALGAS_string & in_mProductFileName,
                                                                                           const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                           const GALGAS_string & in_mBuildPhaseRef,
                                                                                           const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                           const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                           const GALGAS_string & in_mBuildConfigurationRef,
                                                                                           const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                           const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                                           const GALGAS__32_stringlist & in_mDependentTargets,
                                                                                           const GALGAS_string & in_mResourceBuildRef,
                                                                                           const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  result.mProperty_mDependentTargets = in_mDependentTargets ;
  result.mProperty_mResourceBuildRef = in_mResourceBuildRef ;
  result.mProperty_mResourceFileBuildRefs = in_mResourceFileBuildRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeAppTargetList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::init_21__21__21_ (const GALGAS_string & in_mFileReference,
                                                                                   const GALGAS_string & in_mFileName,
                                                                                   const GALGAS_string & in_mBuildReference,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileReference = in_mFileReference ;
  result.mProperty_mFileName = in_mFileName ;
  result.mProperty_mBuildReference = in_mBuildReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::class_func_new (const GALGAS_string & in_mFileReference,
                                                                                 const GALGAS_string & in_mFileName,
                                                                                 const GALGAS_string & in_mBuildReference,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileReference = in_mFileReference ;
  result.mProperty_mFileName = in_mFileName ;
  result.mProperty_mBuildReference = in_mBuildReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @BuildFileList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @BuildFileList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceFileName
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_33_ (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceString,
                                                              const String & inStringForError
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_33_ (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__A_ = {
  TO_UNICODE (10),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__25_ = {
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_ = {
  TO_UNICODE ('\\'),
} ;

//--- Unicode string for '$\\%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__25_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$\\\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__5C_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
} ;

//--- Unicode string for '$\\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_n = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateDefinitionArray [1] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__25_, 1, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateReplacementArray [3] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__25_, 2, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C_n, 2, kUnicodeString_galgasTemplateScanner__A_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, kUnicodeString_galgasTemplateScanner__5C_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark
//--------------------------------------------------------------------------------------------------

static const bool galgasTemplateScanner_kEndOfScriptInTemplateArray [190] = {
  false /* identifier */,
  false /* double.xxx */,
  false /* literalInt */,
  false /* . */,
  false /* ... */,
  false /* ..< */,
  false /* @type */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* comment */,
  false /* commentMark */,
  false /* ?selector: */,
  false /* ? */,
  false /* ?!selector: */,
  false /* ?! */,
  false /* !selector: */,
  false /* ! */,
  false /* !?selector: */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* abstract */,
  false /* after */,
  false /* as */,
  false /* bang */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* cast */,
  false /* case */,
  false /* class */,
  false /* default */,
  false /* dict */,
  false /* do */,
  false /* drop */,
  false /* else */,
  false /* elsif */,
  false /* end */,
  false /* enum */,
  false /* error */,
  false /* extension */,
  false /* extern */,
  false /* false */,
  false /* fileprivate */,
  false /* filewrapper */,
  false /* for */,
  false /* final */,
  false /* fixit */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* init */,
  false /* insert */,
  false /* is */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* message */,
  false /* method */,
  false /* mod */,
  false /* mutating */,
  false /* nil */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* refclass */,
  false /* remove */,
  false /* repeat */,
  false /* replace */,
  false /* rewind */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* spoil */,
  false /* struct */,
  false /* style */,
  false /* super */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* typealias */,
  false /* unused */,
  false /* valueclass */,
  false /* var */,
  false /* warning */,
  false /* while */,
  false /* with */,
  false /* %app-link */,
  false /* %app-source */,
  false /* %applicationBundleBase */,
  false /* %clonable */,
  false /* %codeblocks-linux32 */,
  false /* %codeblocks-linux64 */,
  false /* %codeblocks-windows */,
  false /* %comparable */,
  false /* %equatable */,
  false /* %from */,
  false /* %generatedInSeparateFile */,
  false /* %initArgLabel */,
  false /* %libpmAtPath */,
  false /* %MacOS */,
  false /* %MacOSDeployment */,
  false /* %macCodeSign */,
  false /* %makefile-macosx */,
  false /* %makefile-unix */,
  false /* %makefile-x86linux32-on-macosx */,
  false /* %makefile-x86linux64-on-macosx */,
  false /* %makefile-win32-on-macosx */,
  false /* %nonAtomicSelection */,
  false /* %once */,
  false /* %preserved */,
  false /* %quietOutputByDefault */,
  false /* %templateEndMark */,
  false /* %tool-source */,
  false /* %translate */,
  false /* %usefull */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* -- */,
  false /* ++ */,
  false /* &-- */,
  false /* &++ */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */,
  false /* §[ */
} ;

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N
//--------------------------------------------------------------------------------------------------

bool Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
        && (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
        && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                               true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {
            token.mTemplateStringBeforeToken.appendString (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString) ;
          }else{
            String s ;
            while (notTestForInputUTF32String (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendChar (previousChar ()) ;
            }
            galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      internalParseLexicalToken (token) ;
    }
    if ((token.mTokenCode > 0) && galgasTemplateScanner_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist Lexique_galgasTemplateScanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("literalInt") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("$terminal$") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<non_terminal>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bang") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("dict") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("drop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fileprivate") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("filewrapper") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("final") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("indexing") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("init") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("insert") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("is") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("lexique") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("list") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("log") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("message") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mutating") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("nil") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("protected") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("refclass") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("remove") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("replace") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("setter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("spoil") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("super") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("typealias") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("valueclass") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%app-link") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%app-source") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%applicationBundleBase") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%clonable") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux32") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux64") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-windows") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%comparable") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%equatable") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%from") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%generatedInSeparateFile") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%initArgLabel") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%libpmAtPath") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOS") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOSDeployment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%macCodeSign") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-unix") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%nonAtomicSelection") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%once") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%preserved") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%quietOutputByDefault") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%templateEndMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%tool-source") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%translate") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%usefull") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("`") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("===") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("§[") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasTemplateScanner (TC_UniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasTemplateScanner (const String & /* inIdentifier */,
                                                            bool & /* ioFound */,
                                                            TC_UniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgasTemplateScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasTemplateScanner, getKeywordsForIdentifier_galgasTemplateScanner) ;

//--------------------------------------------------------------------------------------------------
// @templateClassFunctionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
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

ComparisonResult GALGAS_templateClassFunctionAST::objectCompare (const GALGAS_templateClassFunctionAST & inOperand) const {
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

GALGAS_templateClassFunctionAST::GALGAS_templateClassFunctionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateClassFunctionAST GALGAS_templateClassFunctionAST::
init_21__21__21_ (const GALGAS_lstring & in_mTypeName,
                  const GALGAS_lstring & in_mClassFunctionName,
                  const GALGAS_templateExpressionListAST & in_mExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateClassFunctionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateClassFunctionAST (inCompiler COMMA_THERE)) ;
  object->templateClassFunctionAST_init_21__21__21_ (in_mTypeName, in_mClassFunctionName, in_mExpressionList, inCompiler) ;
  const GALGAS_templateClassFunctionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::
templateClassFunctionAST_init_21__21__21_ (const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mClassFunctionName,
                                           const GALGAS_templateExpressionListAST & in_mExpressionList,
                                           Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateClassFunctionAST::GALGAS_templateClassFunctionAST (const cPtr_templateClassFunctionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateClassFunctionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateClassFunctionAST GALGAS_templateClassFunctionAST::class_func_new (const GALGAS_lstring & in_mTypeName,
                                                                                 const GALGAS_lstring & in_mClassFunctionName,
                                                                                 const GALGAS_templateExpressionListAST & in_mExpressionList
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_templateClassFunctionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateClassFunctionAST (in_mTypeName, in_mClassFunctionName, in_mExpressionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateClassFunctionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateClassFunctionAST::readProperty_mClassFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mClassFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateClassFunctionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateClassFunctionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (const GALGAS_lstring & in_mTypeName,
                                                              const GALGAS_lstring & in_mClassFunctionName,
                                                              const GALGAS_templateExpressionListAST & in_mExpressionList
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateClassFunctionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_templateClassFunctionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateClassFunctionAST (mProperty_mTypeName, mProperty_mClassFunctionName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateClassFunctionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateClassFunctionAST ("templateClassFunctionAST",
                                                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateClassFunctionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateClassFunctionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateClassFunctionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateClassFunctionAST GALGAS_templateClassFunctionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateClassFunctionAST result ;
  const GALGAS_templateClassFunctionAST * p = (const GALGAS_templateClassFunctionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateClassFunctionAST *> (p)) {
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

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
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

ComparisonResult GALGAS_templateFileWrapperTemplateCallAST::objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const {
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

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::
init_21__21__21_ (const GALGAS_lstring & in_mFileWrapperName,
                  const GALGAS_lstring & in_mTemplateName,
                  const GALGAS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateFileWrapperTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFileWrapperTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateFileWrapperTemplateCallAST_init_21__21__21_ (in_mFileWrapperName, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GALGAS_templateFileWrapperTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::
templateFileWrapperTemplateCallAST_init_21__21__21_ (const GALGAS_lstring & in_mFileWrapperName,
                                                     const GALGAS_lstring & in_mTemplateName,
                                                     const GALGAS_templateExpressionListAST & in_mOutExpressionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::class_func_new (const GALGAS_lstring & in_mFileWrapperName,
                                                                                                     const GALGAS_lstring & in_mTemplateName,
                                                                                                     const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateFileWrapperTemplateCallAST (in_mFileWrapperName, in_mTemplateName, in_mOutExpressionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::readProperty_mFileWrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mFileWrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateFileWrapperTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFileWrapperTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                                                  const GALGAS_lstring & in_mTemplateName,
                                                                                  const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
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

acPtr_class * cPtr_templateFileWrapperTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mProperty_mFileWrapperName, mProperty_mTemplateName, mProperty_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateFileWrapperTemplateCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  const GALGAS_templateFileWrapperTemplateCallAST * p = (const GALGAS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateFileWrapperTemplateCallAST *> (p)) {
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

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
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

ComparisonResult GALGAS_templateExtensionTemplateCallAST::objectCompare (const GALGAS_templateExtensionTemplateCallAST & inOperand) const {
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

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::
init_21__21__21_ (const GALGAS_templateExpressionAST & in_mExpressionValue,
                  const GALGAS_lstring & in_mTemplateName,
                  const GALGAS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateExtensionTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateExtensionTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateExtensionTemplateCallAST_init_21__21__21_ (in_mExpressionValue, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GALGAS_templateExtensionTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::
templateExtensionTemplateCallAST_init_21__21__21_ (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                   const GALGAS_lstring & in_mTemplateName,
                                                   const GALGAS_templateExpressionListAST & in_mOutExpressionList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::class_func_new (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                                                                 const GALGAS_lstring & in_mTemplateName,
                                                                                                 const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateExtensionTemplateCallAST (in_mExpressionValue, in_mTemplateName, in_mOutExpressionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateExtensionTemplateCallAST::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateExtensionTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExtensionTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateExtensionTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                                              const GALGAS_lstring & in_mTemplateName,
                                                                              const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
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

acPtr_class * cPtr_templateExtensionTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mProperty_mExpressionValue, mProperty_mTemplateName, mProperty_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateExtensionTemplateCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                                                        & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  const GALGAS_templateExtensionTemplateCallAST * p = (const GALGAS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralStringList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralStringExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralStringList.printNonNullClassInstanceProperties ("mLiteralStringList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateLiteralStringExpressionAST::objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const {
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

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::
init_21__21_ (const GALGAS_stringlist & in_mLiteralStringList,
              const GALGAS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralStringExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralStringExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralStringExpressionAST_init_21__21_ (in_mLiteralStringList, in_mLocation, inCompiler) ;
  const GALGAS_templateLiteralStringExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::
templateLiteralStringExpressionAST_init_21__21_ (const GALGAS_stringlist & in_mLiteralStringList,
                                                 const GALGAS_location & in_mLocation,
                                                 Compiler * /* inCompiler */) {
  mProperty_mLiteralStringList = in_mLiteralStringList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralStringExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::class_func_new (const GALGAS_stringlist & in_mLiteralStringList,
                                                                                                     const GALGAS_location & in_mLocation
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralStringExpressionAST (in_mLiteralStringList, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_templateLiteralStringExpressionAST::readProperty_mLiteralStringList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLiteralStringList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateLiteralStringExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralStringExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (const GALGAS_stringlist & in_mLiteralStringList,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralStringList (),
mProperty_mLocation () {
  mProperty_mLiteralStringList = in_mLiteralStringList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

void cPtr_templateLiteralStringExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralStringExpressionAST:") ;
  mProperty_mLiteralStringList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralStringExpressionAST (mProperty_mLiteralStringList, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateLiteralStringExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ("templateLiteralStringExpressionAST",
                                                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralStringExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  const GALGAS_templateLiteralStringExpressionAST * p = (const GALGAS_templateLiteralStringExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateLiteralStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
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

ComparisonResult GALGAS_structFieldAccessTemplateExpressionAST::objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const {
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

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::
init_21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                  const GALGAS_templateExpressionAST & in_mExpression,
                  const GALGAS_lstring & in_mStructFieldName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structFieldAccessTemplateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structFieldAccessTemplateExpressionAST (inCompiler COMMA_THERE)) ;
  object->structFieldAccessTemplateExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mExpression, in_mStructFieldName, inCompiler) ;
  const GALGAS_structFieldAccessTemplateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::
structFieldAccessTemplateExpressionAST_init_21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                                                         const GALGAS_templateExpressionAST & in_mExpression,
                                                         const GALGAS_lstring & in_mStructFieldName,
                                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::class_func_new (const GALGAS_location & in_mOperatorLocation,
                                                                                                             const GALGAS_templateExpressionAST & in_mExpression,
                                                                                                             const GALGAS_lstring & in_mStructFieldName
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structFieldAccessTemplateExpressionAST (in_mOperatorLocation, in_mExpression, in_mStructFieldName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_structFieldAccessTemplateExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structFieldAccessTemplateExpressionAST::readProperty_mStructFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mStructFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                                          const GALGAS_templateExpressionAST & in_mExpression,
                                                                                          const GALGAS_lstring & in_mStructFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_structFieldAccessTemplateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structFieldAccessTemplateExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  const GALGAS_structFieldAccessTemplateExpressionAST * p = (const GALGAS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structFieldAccessTemplateExpressionAST *> (p)) {
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

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
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

ComparisonResult GALGAS_templateOptionAccessAST::objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const {
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

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::
init_21__21__21_ (const GALGAS_lstring & in_mOptionComponentName,
                  const GALGAS_lstring & in_mOptionName,
                  const GALGAS_lstring & in_mGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateOptionAccessAST * object = nullptr ;
  macroMyNew (object, cPtr_templateOptionAccessAST (inCompiler COMMA_THERE)) ;
  object->templateOptionAccessAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionName, in_mGetterName, inCompiler) ;
  const GALGAS_templateOptionAccessAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::
templateOptionAccessAST_init_21__21__21_ (const GALGAS_lstring & in_mOptionComponentName,
                                          const GALGAS_lstring & in_mOptionName,
                                          const GALGAS_lstring & in_mGetterName,
                                          Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::class_func_new (const GALGAS_lstring & in_mOptionComponentName,
                                                                               const GALGAS_lstring & in_mOptionName,
                                                                               const GALGAS_lstring & in_mGetterName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateOptionAccessAST (in_mOptionComponentName, in_mOptionName, in_mGetterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::readProperty_mOptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                                            const GALGAS_lstring & in_mOptionName,
                                                            const GALGAS_lstring & in_mGetterName
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
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

acPtr_class * cPtr_templateOptionAccessAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateOptionAccessAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  const GALGAS_templateOptionAccessAST * p = (const GALGAS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateOptionAccessAST *> (p)) {
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

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
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

ComparisonResult GALGAS_templateTestDynamicClassAST::objectCompare (const GALGAS_templateTestDynamicClassAST & inOperand) const {
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

GALGAS_templateTestDynamicClassAST::GALGAS_templateTestDynamicClassAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST::
init_21__21__21__21_ (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                      const GALGAS_location & in_mEndOfReceiverExpression,
                      const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                      const GALGAS_lstring & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateTestDynamicClassAST * object = nullptr ;
  macroMyNew (object, cPtr_templateTestDynamicClassAST (inCompiler COMMA_THERE)) ;
  object->templateTestDynamicClassAST_init_21__21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName, inCompiler) ;
  const GALGAS_templateTestDynamicClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::
templateTestDynamicClassAST_init_21__21__21__21_ (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                  const GALGAS_location & in_mEndOfReceiverExpression,
                                                  const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST::GALGAS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST::class_func_new (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                                       const GALGAS_location & in_mEndOfReceiverExpression,
                                                                                       const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                       const GALGAS_lstring & in_mTypeName
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateTestDynamicClassAST (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateTestDynamicClassAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateTestDynamicClassAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_templateTestDynamicClassAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateTestDynamicClassAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                                                    const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GALGAS_lstring & in_mTypeName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
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

const C_galgas_type_descriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
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

acPtr_class * cPtr_templateTestDynamicClassAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateTestDynamicClassAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateTestDynamicClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTestDynamicClassAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST result ;
  const GALGAS_templateTestDynamicClassAST * p = (const GALGAS_templateTestDynamicClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateTestDynamicClassAST *> (p)) {
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

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
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

ComparisonResult GALGAS_templateFunctionCallAST::objectCompare (const GALGAS_templateFunctionCallAST & inOperand) const {
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

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::
init_21__21_ (const GALGAS_lstring & in_mFunctionName,
              const GALGAS_templateExpressionListAST & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateFunctionCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFunctionCallAST (inCompiler COMMA_THERE)) ;
  object->templateFunctionCallAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GALGAS_templateFunctionCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::
templateFunctionCallAST_init_21__21_ (const GALGAS_lstring & in_mFunctionName,
                                      const GALGAS_templateExpressionListAST & in_mExpressionList,
                                      Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::class_func_new (const GALGAS_lstring & in_mFunctionName,
                                                                               const GALGAS_templateExpressionListAST & in_mExpressionList
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateFunctionCallAST (in_mFunctionName, in_mExpressionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFunctionCallAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateFunctionCallAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GALGAS_lstring & in_mFunctionName,
                                                            const GALGAS_templateExpressionListAST & in_mExpressionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
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

acPtr_class * cPtr_templateFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mProperty_mFunctionName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateFunctionCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  const GALGAS_templateFunctionCallAST * p = (const GALGAS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateFunctionCallAST *> (p)) {
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

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateVarInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateVarInExpressionAST::objectCompare (const GALGAS_templateVarInExpressionAST & inOperand) const {
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

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::
init_21_ (const GALGAS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateVarInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateVarInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateVarInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GALGAS_templateVarInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::
templateVarInExpressionAST_init_21_ (const GALGAS_lstring & in_mVarName,
                                     Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::class_func_new (const GALGAS_lstring & in_mVarName
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateVarInExpressionAST (in_mVarName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateVarInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GALGAS_lstring & in_mVarName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateVarInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateVarInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateVarInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  const GALGAS_templateVarInExpressionAST * p = (const GALGAS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionStringAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionStringAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateString.printNonNullClassInstanceProperties ("mTemplateString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionStringAST::objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const {
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

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (void) :
GALGAS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::
init_21_ (const GALGAS_string & in_mTemplateString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionStringAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionStringAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionStringAST_init_21_ (in_mTemplateString, inCompiler) ;
  const GALGAS_templateInstructionStringAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::
templateInstructionStringAST_init_21_ (const GALGAS_string & in_mTemplateString,
                                       Compiler * /* inCompiler */) {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::class_func_new (const GALGAS_string & in_mTemplateString
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringAST (in_mTemplateString COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionStringAST::readProperty_mTemplateString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionStringAST * p = (cPtr_templateInstructionStringAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
    return p->mProperty_mTemplateString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mTemplateString () {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionStringAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

void cPtr_templateInstructionStringAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionStringAST:") ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionStringAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionStringAST (mProperty_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionStringAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ("templateInstructionStringAST",
                                                                                    & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  const GALGAS_templateInstructionStringAST * p = (const GALGAS_templateInstructionStringAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionStringAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_tpl_i0_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                        Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1752 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      GALGAS_templateExpressionAST var_leftOperand_1825 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_1884 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_1884, inCompiler) ;
      outArgument_outExpression = GALGAS_templateOrOperationAST::init_21__21__21_ (var_operatorLocation_1752, var_leftOperand_1825, var_rightOperand_1884, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2052 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 46)) ;
      GALGAS_templateExpressionAST var_leftOperand_2125 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_2184 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_2184, inCompiler) ;
      outArgument_outExpression = GALGAS_templateXorOperationAST::init_21__21__21_ (var_operatorLocation_2052, var_leftOperand_2125, var_rightOperand_2184, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_tpl_i0_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      nt_relation_5F_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 46)) ;
      nt_relation_5F_term_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_tpl_i0_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 46)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                              Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      GALGAS_location var_operatorLocation_2711 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 66)) ;
      GALGAS_templateExpressionAST var_leftOperand_2784 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightOperand_2842 ;
      nt_relation_5F_factor_5F_tpl_ (var_rightOperand_2842, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAndOperationAST::init_21__21__21_ (var_operatorLocation_2711, var_leftOperand_2784, var_rightOperand_2842, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 66)) ;
      nt_relation_5F_factor_5F_tpl_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 66)) ;
      nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                                Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_operatorLocation_3376 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 85)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    GALGAS_templateExpressionAST var_leftExpression_3450 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_3512 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3512, inCompiler) ;
    outArgument_outExpression = GALGAS_templateEqualTestAST::init_21__21__21_ (var_operatorLocation_3376, var_leftExpression_3450, var_rightExpression_3512, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GALGAS_location var_operatorLocation_3691 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 92)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    GALGAS_templateExpressionAST var_leftExpression_3765 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_3827 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3827, inCompiler) ;
    outArgument_outExpression = GALGAS_templateNonEqualTestAST::init_21__21__21_ (var_operatorLocation_3691, var_leftExpression_3765, var_rightExpression_3827, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GALGAS_location var_operatorLocation_4009 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 99)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    GALGAS_templateExpressionAST var_leftExpression_4083 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_4145 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4145, inCompiler) ;
    outArgument_outExpression = GALGAS_templateInfOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4009, var_leftExpression_4083, var_rightExpression_4145, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GALGAS_location var_operatorLocation_4329 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 106)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    GALGAS_templateExpressionAST var_leftExpression_4403 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_4465 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4465, inCompiler) ;
    outArgument_outExpression = GALGAS_templateSupOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4329, var_leftExpression_4403, var_rightExpression_4465, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    GALGAS_location var_operatorLocation_4649 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 113)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    GALGAS_templateExpressionAST var_leftExpression_4722 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_4784 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4784, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictSupTestAST::init_21__21__21_ (var_operatorLocation_4649, var_leftExpression_4722, var_rightExpression_4784, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    GALGAS_location var_operatorLocation_4967 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 120)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 121)) ;
    GALGAS_templateExpressionAST var_leftExpression_5040 = outArgument_outExpression ;
    GALGAS_templateExpressionAST var_rightExpression_5102 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_5102, inCompiler) ;
    outArgument_outExpression = GALGAS_templateStrictInfTestAST::init_21__21__21_ (var_operatorLocation_4967, var_leftExpression_5040, var_rightExpression_5102, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 121)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 121)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_5645 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 139)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 140)) ;
      GALGAS_templateExpressionAST var_leftExpression_5719 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_5781 ;
      nt_term_5F_tpl_ (var_rightExpression_5781, inCompiler) ;
      outArgument_outExpression = GALGAS_templateLeftShiftOperationAST::init_21__21__21_ (var_operatorLocation_5645, var_leftExpression_5719, var_rightExpression_5781, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_5959 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 146)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 147)) ;
      GALGAS_templateExpressionAST var_leftExpression_6033 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_6095 ;
      nt_term_5F_tpl_ (var_rightExpression_6095, inCompiler) ;
      outArgument_outExpression = GALGAS_templateRightShiftOperationAST::init_21__21__21_ (var_operatorLocation_5959, var_leftExpression_6033, var_rightExpression_6095, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_6274 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 153)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 154)) ;
      GALGAS_templateExpressionAST var_leftExpression_6347 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_6409 ;
      nt_term_5F_tpl_ (var_rightExpression_6409, inCompiler) ;
      outArgument_outExpression = GALGAS_templateAddOperationAST::init_21__21__21_ (var_operatorLocation_6274, var_leftExpression_6347, var_rightExpression_6409, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_6581 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 160)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 161)) ;
      GALGAS_templateExpressionAST var_leftExpression_6654 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_6716 ;
      nt_term_5F_tpl_ (var_rightExpression_6716, inCompiler) ;
      outArgument_outExpression = GALGAS_templateSubOperationAST::init_21__21__21_ (var_operatorLocation_6581, var_leftExpression_6654, var_rightExpression_6716, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 140)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 147)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 154)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 161)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 140)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 147)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 154)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 161)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_7209 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 180)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 181)) ;
      GALGAS_templateExpressionAST var_leftExpression_7282 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_7344 ;
      nt_factor_5F_tpl_ (var_rightExpression_7344, inCompiler) ;
      outArgument_outExpression = GALGAS_templateMultiplyOperationAST::init_21__21__21_ (var_operatorLocation_7209, var_leftExpression_7282, var_rightExpression_7344, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_7523 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 187)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 188)) ;
      GALGAS_templateExpressionAST var_leftExpression_7596 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_7658 ;
      nt_factor_5F_tpl_ (var_rightExpression_7658, inCompiler) ;
      outArgument_outExpression = GALGAS_templateDivideOperationAST::init_21__21__21_ (var_operatorLocation_7523, var_leftExpression_7596, var_rightExpression_7658, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_7835 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 194)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 195)) ;
      GALGAS_templateExpressionAST var_leftExpression_7910 = outArgument_outExpression ;
      GALGAS_templateExpressionAST var_rightExpression_7972 ;
      nt_factor_5F_tpl_ (var_rightExpression_7972, inCompiler) ;
      outArgument_outExpression = GALGAS_templateModuloOperationAST::init_21__21__21_ (var_operatorLocation_7835, var_leftExpression_7910, var_rightExpression_7972, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 181)) ;
      nt_factor_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 188)) ;
      nt_factor_5F_tpl_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 195)) ;
      nt_factor_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 181)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 188)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 195)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 213)) ;
      GALGAS_lstring var_structFieldName_8524 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 214)) ;
      outArgument_outExpression = GALGAS_structFieldAccessTemplateExpressionAST::init_21__21__21_ (var_structFieldName_8524.readProperty_location (), outArgument_outExpression, var_structFieldName_8524, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 214)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 214)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_9003 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 230)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 231)) ;
  GALGAS_templateExpressionAST var_expression_9072 ;
  nt_factor_5F_tpl_ (var_expression_9072, inCompiler) ;
  outArgument_outExpression = GALGAS_templateUnaryMinusOperationAST::init_21__21_ (var_operatorLocation_9003, var_expression_9072, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 231)) ;
  nt_factor_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 231)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_9507 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 245)) ;
  GALGAS_templateExpressionAST var_ifCondition_9578 ;
  nt_factor_5F_tpl_ (var_ifCondition_9578, inCompiler) ;
  outArgument_outExpression = GALGAS_templateNotOperatorAST::init_21__21_ (var_operatorLocation_9507, var_ifCondition_9578, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 245)) ;
  nt_factor_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 245)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_10008 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 259)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 260)) ;
  GALGAS_templateExpressionAST var_ifCondition_10077 ;
  nt_factor_5F_tpl_ (var_ifCondition_10077, inCompiler) ;
  outArgument_outExpression = GALGAS_templateLogicalNegateAST::init_21__21_ (var_operatorLocation_10008, var_ifCondition_10077, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 260)) ;
  nt_factor_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 260)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_10518 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 273)) ;
  outArgument_outExpression = GALGAS_templateVarInExpressionAST::init_21_ (var_identifier_10518, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 273)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 273)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 284)) ;
  nt_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 286)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 284)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 286)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 284)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 286)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 296)) ;
  outArgument_outExpression = GALGAS_templateTrueBoolAST::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 297)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 296)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 296)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 307)) ;
  outArgument_outExpression = GALGAS_templateFalseBoolAST::init_21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 308)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 307)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 307)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_11995 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas", 318)) ;
  outArgument_outExpression = GALGAS_templateLiteralUIntExpressionAST::init_21_ (var_literalInt_11995, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas", 318)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas", 318)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_12391 ;
  var_literalDouble_12391 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 330)) ;
  outArgument_outExpression = GALGAS_templateLiteralDoubleExpressionAST::init_21_ (var_literalDouble_12391, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 330)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 330)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_12848 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 341)) ;
  outArgument_outExpression = GALGAS_templateLiteralCharExpressionAST::init_21_ (var_literalChar_12848, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 341)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 341)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_13260 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_13321 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 354)) ;
    var_literalStringList_13260.addAssign_operation (var_literalString_13321.readProperty_string ()  COMMA_SOURCE_FILE ("templateSyntax.galgas", 355)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GALGAS_templateLiteralStringExpressionAST::init_21__21_ (var_literalStringList_13260, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 358)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 354)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 354)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 374)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 377)) ;
    GALGAS_templateExpressionAST var_receiverExpression_14269 ;
    nt_expression_5F_tpl_ (var_receiverExpression_14269, inCompiler) ;
    GALGAS_lstring var_templateName_14360 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 380)) ;
    GALGAS_templateExpressionListAST var_expressionList_14408 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_14408, inCompiler) ;
    outArgument_outExpression = GALGAS_templateExtensionTemplateCallAST::init_21__21__21_ (var_receiverExpression_14269, var_templateName_14360, var_expressionList_14408, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 388)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_14672 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 390)) ;
    GALGAS_lstring var_constructorName_14712 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 391)) ;
    GALGAS_templateExpressionListAST var_expressionList_14793 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_14793, inCompiler) ;
    outArgument_outExpression = GALGAS_templateClassFunctionAST::init_21__21__21_ (var_typeName_14672, var_constructorName_14712, var_expressionList_14793, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 398)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 400)) ;
    GALGAS_lstring var_filewrapperName_15032 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 401)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 402)) ;
    GALGAS_lstring var_templateName_15087 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 403)) ;
    GALGAS_templateExpressionListAST var_expressionList_15135 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15135, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 406)) ;
    outArgument_outExpression = GALGAS_templateFileWrapperTemplateCallAST::init_21__21__21_ (var_filewrapperName_15032, var_templateName_15087, var_expressionList_15135, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GALGAS_location var_startLocation_15372 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 409)) ;
    GALGAS_templateExpressionAST var_receiverExpression_15434 ;
    nt_expression_5F_tpl_ (var_receiverExpression_15434, inCompiler) ;
    GALGAS_lstring var_getterName_15525 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 412)) ;
    GALGAS_templateExpressionListAST var_expressionList_15571 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15571, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 415)) ;
    GALGAS_location var_endLocation_15651 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 416)) ;
    outArgument_outExpression = GALGAS_templateGetterCallInExpressionAST::init_21__21__21__21_ (var_receiverExpression_15434, var_getterName_15525, var_expressionList_15571, var_startLocation_15372.getter_union (var_endLocation_15651, inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas", 421)), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 424)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
      GALGAS_lstring var_optionName_15923 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
      GALGAS_lstring var_getterName_15967 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("galgas_builtin_options"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)), inCompiler COMMA_HERE), var_optionName_15923, var_getterName_15967, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GALGAS_lstring var_optionComponentName_16145 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 431)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
      GALGAS_lstring var_optionName_16208 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 433)) ;
      GALGAS_lstring var_getterName_16252 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 434)) ;
      outArgument_outExpression = GALGAS_templateOptionAccessAST::init_21__21__21_ (var_optionComponentName_16145, var_optionName_16208, var_getterName_16252, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 437)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 374)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 377)) ;
    nt_expression_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 380)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 388)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 390)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 391)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 398)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 400)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 401)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 403)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 406)) ;
  } break ;
  case 4: {
    nt_expression_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 412)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 415)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 424)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 431)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 433)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 434)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 437)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 374)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 377)) ;
    nt_expression_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 380)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 388)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 390)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 391)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 398)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 400)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 401)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 403)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 406)) ;
  } break ;
  case 4: {
    nt_expression_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 412)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 415)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 424)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 426)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 431)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 433)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 434)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 437)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_16762 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 450)) ;
  GALGAS_templateExpressionListAST var_expressionList_16844 ;
  nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_16844, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
  outArgument_outExpression = GALGAS_templateFunctionCallAST::init_21__21_ (var_functionName_16762, var_expressionList_16844, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 450)) ;
  nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 449)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 450)) ;
  nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 452)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_ (GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_17149 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 460)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 461)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_17230 ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 464)) ;
    var_kind_17230 = GALGAS_dynamicTypeComparisonKind::class_func_equal (SOURCE_FILE ("templateSyntax.galgas", 465)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 467)) ;
    var_kind_17230 = GALGAS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("templateSyntax.galgas", 468)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 470)) ;
    var_kind_17230 = GALGAS_dynamicTypeComparisonKind::class_func_strictlyInherited (SOURCE_FILE ("templateSyntax.galgas", 471)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_typeName_17380 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 473)) ;
  outArgument_outExpression = GALGAS_templateTestDynamicClassAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_17149, var_kind_17230, var_typeName_17380, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 461)) ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 464)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 467)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 470)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 473)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 461)) ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 464)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 467)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 470)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 473)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GALGAS_templateExpressionListAST & outArgument_outExpressionList,
                                                                                           Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_templateExpressionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_17916 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 492)) ;
      GALGAS_templateExpressionAST var_expression_17974 ;
      nt_expression_5F_tpl_ (var_expression_17974, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_17916, var_expression_17974, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 494))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 494)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 496)) ;
      GALGAS_lstring var_selector_18072 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas", 497)) ;
      GALGAS_templateExpressionAST var_expression_18142 ;
      nt_expression_5F_tpl_ (var_expression_18142, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_18072, var_expression_18142, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 499))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 499)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 492)) ;
      nt_expression_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 496)) ;
      nt_expression_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 492)) ;
      nt_expression_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 496)) ;
      nt_expression_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 510)) ;
  GALGAS_templateExpressionAST var_expression_18597 ;
  nt_expression_5F_tpl_ (var_expression_18597, inCompiler) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionAST::init_21__21_ (var_expression_18597, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 512)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 512)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 510)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 510)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 518)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 519)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 518)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 518)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 525)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 525)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 525)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 532)) ;
  GALGAS_templateExpressionAST var_expression_19501 ;
  nt_expression_5F_tpl_ (var_expression_19501, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 534)) ;
  GALGAS_templateInstructionListAST var_blockInstructionList_19546 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (var_blockInstructionList_19546, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 538)) ;
    }
    if (select_templateSyntax_11 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_blockInstructionList_19546, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 543)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateBlockInstructionAST::init_21__21__21_ (var_expression_19501, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 546)), var_blockInstructionList_19546, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 532)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 534)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_11 (inCompiler) == 2) {
      nt_template_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 543)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 532)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 534)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_11 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 543)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 553)) ;
  GALGAS_templateInstructionIfBranchListAST var_templateInstructionIfBranchList_20062 = GALGAS_templateInstructionIfBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_templateExpressionAST var_expression_20170 ;
    nt_expression_5F_tpl_ (var_expression_20170, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 557)) ;
    GALGAS_templateInstructionListAST var_instructionList_20228 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      {
      routine_enterTemplateString_26_ (var_instructionList_20228, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 560)) ;
      }
      if (select_templateSyntax_13 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_instructionList_20228, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_templateInstructionIfBranchList_20062.addAssign_operation (var_expression_20170, var_instructionList_20228  COMMA_SOURCE_FILE ("templateSyntax.galgas", 564)) ;
    if (select_templateSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 566)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_templateInstructionListAST var_elseInstructionList_20509 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 572)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_elseInstructionList_20509, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 574)) ;
      }
      if (select_templateSyntax_15 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_elseInstructionList_20509, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 580)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionIfAST::init_21__21_ (var_templateInstructionIfBranchList_20062, var_elseInstructionList_20509, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 553)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 557)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_templateSyntax_13 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_templateSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 566)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 572)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_15 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 580)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 553)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 557)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_templateSyntax_13 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_templateSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 566)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 572)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_15 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 580)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GALGAS_templateInstructionListAST & outArgument_outResultingInstructionList,
                                                                                             Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outResultingInstructionList.drop () ; // Release 'out' argument
  outArgument_outResultingInstructionList = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 591)) ;
    }
    if (select_templateSyntax_16 (inCompiler) == 2) {
      nt_template_5F_instruction_ (outArgument_outResultingInstructionList, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_16 (inCompiler) == 2) {
      nt_template_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_16 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GALGAS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GALGAS_lbigint var_count_2533 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 50)) ;
  GALGAS_uint var_n_2555 = var_count_2533.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 51)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, var_n_2555.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_2533.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 53)) ;
    }
  }
  if (var_n_2555.isValid ()) {
    uint32_t variant_2656 = var_n_2555.uintValue () ;
    bool loop_2656 = true ;
    while (loop_2656) {
      loop_2656 = GALGAS_bool (ComparisonKind::greaterThan, var_n_2555.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_2656) {
        loop_2656 = GALGAS_bool (ComparisonKind::greaterThan, var_n_2555.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_2656 && (0 == variant_2656)) {
        loop_2656 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("template-for-instruction.galgas", 55)) ;
      }
      if (loop_2656) {
        variant_2656 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas", 56))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 56)) ;
        var_n_2555.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 57)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GALGAS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 64)) ;
  ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas", 65))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GALGAS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GALGAS_lstring var_constantName_3141 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 71)) ;
  ioArgument_ioElementList.addAssign_operation (var_constantName_3141  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 71)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GALGAS_templateInstructionForEnumerationAST & outArgument_outEnumeratedObject,
                                                                                                  GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 79)) ;
  GALGAS_location var_start_3495 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 81)) ;
  GALGAS_location var_endLocation_3534 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 83)) ;
  nt_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  GALGAS_string var_foreachPrefix_3624 ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
    var_foreachPrefix_3624 = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 89)) ;
    GALGAS_lstring var_prefixString_3724 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 90)) ;
    var_foreachPrefix_3624 = var_prefixString_3724.readProperty_string () ;
  } break ;
  default:
    break ;
  }
  outArgument_outEnumeratedObject = GALGAS_templateInstructionForEnumerationAST::class_func_implicit (var_foreachPrefix_3624, var_start_3495.getter_union (var_endLocation_3534, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 93))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 83)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 89)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 83)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 89)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GALGAS_templateInstructionForEnumerationAST & outArgument_outEnumeratedObject,
                                                                                                  GALGAS_templateExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstringlist var_enumeration_4193 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (var_enumeration_4193, inCompiler) ;
    if (select_templateSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_location var_endOfProperties_4314 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 108)) ;
  nt_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 112)) ;
    GALGAS_location var_startLocation_4438 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 113)) ;
    GALGAS_lstring var_prefixString_4502 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 114)) ;
    TC_Array <FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string::makeEmptyString ()) ;
    inCompiler->emitSemanticError (var_prefixString_4502.readProperty_location ().getter_union (var_startLocation_4438, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 115)), GALGAS_string ("useless prefix"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outEnumeratedObject = GALGAS_templateInstructionForEnumerationAST::class_func_explicit (var_enumeration_4193, var_endOfProperties_4314  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 118)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_parse (inCompiler) ;
    if (select_templateSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 108)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 112)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_templateSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 108)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 112)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 114)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas", 124)) ;
  GALGAS_bool var_ascending_4942 ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
    var_ascending_4942 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 129)) ;
    var_ascending_4942 = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 132)) ;
    var_ascending_4942 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionForEnumerationAST var_enumeratedProperties_5120 ;
  GALGAS_templateExpressionAST var_expression_5146 ;
  nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedProperties_5120, var_expression_5146, inCompiler) ;
  GALGAS_templateInstructionListAST var_beforeInstructionList_5213 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas", 140)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      {
      routine_enterTemplateString_26_ (var_beforeInstructionList_5213, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 142)) ;
      }
      if (select_templateSyntax_22 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_5213, inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas", 148)) ;
  GALGAS_lstring var_indexIdentifier_5467 ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
    var_indexIdentifier_5467 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 151)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 153)) ;
    var_indexIdentifier_5467 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 154)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_doInstructionList_5657 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    {
    routine_enterTemplateString_26_ (var_doInstructionList_5657, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 159)) ;
    }
    if (select_templateSyntax_24 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_doInstructionList_5657, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_templateInstructionListAST var_betweenInstructionList_5863 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas", 167)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_betweenInstructionList_5863, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 169)) ;
      }
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_betweenInstructionList_5863, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_templateInstructionListAST var_afterInstructionList_6134 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas", 178)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      {
      routine_enterTemplateString_26_ (var_afterInstructionList_6134, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 180)) ;
      }
      if (select_templateSyntax_28 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_5213, inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas", 186)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionForeachAST::init_21__21__21__21__21__21__21__21_ (var_ascending_4942, var_expression_5146, var_enumeratedProperties_5120, var_beforeInstructionList_5213, var_doInstructionList_5657, var_indexIdentifier_5467, var_betweenInstructionList_5863, var_afterInstructionList_6134, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas", 124)) ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 129)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas", 140)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_templateSyntax_22 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas", 148)) ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 153)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 154)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_templateSyntax_24 (inCompiler) == 2) {
      nt_template_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas", 167)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas", 178)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_templateSyntax_28 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas", 186)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas", 124)) ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 129)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 132)) ;
  } break ;
  default:
    break ;
  }
  nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas", 140)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_templateSyntax_22 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas", 148)) ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 153)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 154)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_templateSyntax_24 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas", 167)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas", 178)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_templateSyntax_28 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas", 186)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i33_ (GALGAS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 46)) ;
  GALGAS_templateExpressionAST var_switchExpression_2409 ;
  nt_expression_5F_tpl_ (var_switchExpression_2409, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_2444 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 49)) ;
  GALGAS_templateInstructionSwitchBranchListAST var_templateInstructionSwitchBranchList_2552 = GALGAS_templateInstructionSwitchBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 54)) ;
      GALGAS__5B_lstring_5D_ var_constantNameList_2671 ;
      GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_2731 ;
      nt_switch_5F_case_ (var_constantNameList_2671, var_associatedValuesExtraction_2731, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 58)) ;
      GALGAS_templateInstructionListAST var_instructionList_2806 = GALGAS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        {
        routine_enterTemplateString_26_ (var_instructionList_2806, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 61)) ;
        }
        if (select_templateSyntax_30 (inCompiler) == 2) {
          nt_template_5F_instruction_ (var_instructionList_2806, inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_templateInstructionSwitchBranchList_2552.addAssign_operation (var_constantNameList_2671, var_associatedValuesExtraction_2731, var_instructionList_2806, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 65))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchAST::init_21__21__21_ (var_switchExpression_2409, var_endOfSwitchExpression_2444, var_templateInstructionSwitchBranchList_2552, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i33_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 46)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 54)) ;
      nt_switch_5F_case_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 58)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_templateSyntax_30 (inCompiler) == 2) {
          nt_template_5F_instruction_parse (inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i33_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 46)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 54)) ;
      nt_switch_5F_case_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 58)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_templateSyntax_30 (inCompiler) == 2) {
          nt_template_5F_instruction_indexing (inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i34_ (GALGAS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                      GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_3583 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 82)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_3583, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 83)) ;
    }
    if (select_templateSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 90)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_34 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_n_3798 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 93)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 94)) ;
        cEnumerator_range enumerator_3841 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_n_3798.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 95)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 95))), EnumerationOrder::up) ;
        while (enumerator_3841.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 96)), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 96)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 96)) ;
          enumerator_3841.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 99)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_4072 ;
        switch (select_templateSyntax_35 (inCompiler)) {
        case 1: {
          var_typeName_4072 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 104)) ;
        } break ;
        case 2: {
          var_typeName_4072 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 106)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_4208 ;
        switch (select_templateSyntax_36 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_4208 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 112)) ;
          var_constantMarkedAsUnused_4208 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_4418 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 115)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_4072, var_constantName_4418, var_constantMarkedAsUnused_4208  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 116)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_33 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i34_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 82)) ;
    if (select_templateSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 90)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_34 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 93)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 94)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 99)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_35 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 104)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_templateSyntax_36 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 112)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 115)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_33 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i34_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 82)) ;
    if (select_templateSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 90)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_34 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 93)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 94)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 99)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_35 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 104)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_templateSyntax_36 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 112)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 115)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_33 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionStringForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringForGeneration::cPtr_templateInstructionStringForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionStringForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateString.printNonNullClassInstanceProperties ("mTemplateString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionStringForGeneration::objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const {
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

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::
init_21_ (const GALGAS_string & in_mTemplateString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionStringForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionStringForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionStringForGeneration_init_21_ (in_mTemplateString, inCompiler) ;
  const GALGAS_templateInstructionStringForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::
templateInstructionStringForGeneration_init_21_ (const GALGAS_string & in_mTemplateString,
                                                 Compiler * /* inCompiler */) {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration::GALGAS_templateInstructionStringForGeneration (const cPtr_templateInstructionStringForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::class_func_new (const GALGAS_string & in_mTemplateString
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringForGeneration (in_mTemplateString COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionStringForGeneration::readProperty_mTemplateString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionStringForGeneration * p = (cPtr_templateInstructionStringForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
    return p->mProperty_mTemplateString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringForGeneration::cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mTemplateString () {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionStringForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

void cPtr_templateInstructionStringForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionStringForGeneration:") ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionStringForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionStringForGeneration (mProperty_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionStringForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ("templateInstructionStringForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration result ;
  const GALGAS_templateInstructionStringForGeneration * p = (const GALGAS_templateInstructionStringForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionStringForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionStringForGeneration_2D_weak::objectCompare (const GALGAS_templateInstructionStringForGeneration_2D_weak & inOperand) const {
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

GALGAS_templateInstructionStringForGeneration_2D_weak::GALGAS_templateInstructionStringForGeneration_2D_weak (void) :
GALGAS_templateInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak & GALGAS_templateInstructionStringForGeneration_2D_weak::operator = (const GALGAS_templateInstructionStringForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak::GALGAS_templateInstructionStringForGeneration_2D_weak (const GALGAS_templateInstructionStringForGeneration & inSource) :
GALGAS_templateInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak GALGAS_templateInstructionStringForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration GALGAS_templateInstructionStringForGeneration_2D_weak::bang_templateInstructionStringForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionStringForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionStringForGeneration) ;
      result = GALGAS_templateInstructionStringForGeneration ((cPtr_templateInstructionStringForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionStringForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ("templateInstructionStringForGeneration-weak",
                                                                                                      & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionStringForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionStringForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionStringForGeneration_2D_weak GALGAS_templateInstructionStringForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringForGeneration_2D_weak result ;
  const GALGAS_templateInstructionStringForGeneration_2D_weak * p = (const GALGAS_templateInstructionStringForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionStringForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionForGeneration::cPtr_semanticExpressionForGeneration (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mResultType (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticExpressionForGeneration::objectCompare (const GALGAS_semanticExpressionForGeneration & inOperand) const {
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

GALGAS_semanticExpressionForGeneration::GALGAS_semanticExpressionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration::GALGAS_semanticExpressionForGeneration (const cPtr_semanticExpressionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_semanticExpressionForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_semanticExpressionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionForGeneration::cPtr_semanticExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                            const GALGAS_location & in_mLocation
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mResultType (),
mProperty_mLocation () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ("semanticExpressionForGeneration",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration result ;
  const GALGAS_semanticExpressionForGeneration * p = (const GALGAS_semanticExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
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

ComparisonResult GALGAS_templateBlockInstructionForGeneration::objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const {
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

GALGAS_templateBlockInstructionForGeneration::GALGAS_templateBlockInstructionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration::
init_21__21__21_ (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateBlockInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateBlockInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateBlockInstructionForGeneration_init_21__21__21_ (in_mExpression, in_mLocation, in_mBlockInstructionList, inCompiler) ;
  const GALGAS_templateBlockInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::
templateBlockInstructionForGeneration_init_21__21__21_ (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                        const GALGAS_location & in_mLocation,
                                                        const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration::GALGAS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration::class_func_new (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                           const GALGAS_location & in_mLocation,
                                                                                                           const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateBlockInstructionForGeneration (in_mExpression, in_mLocation, in_mBlockInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateBlockInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateBlockInstructionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateBlockInstructionForGeneration::readProperty_mBlockInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mBlockInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                        const GALGAS_location & in_mLocation,
                                                                                        const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateBlockInstructionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_templateBlockInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateBlockInstructionForGeneration (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateBlockInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ("templateBlockInstructionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateBlockInstructionForGeneration GALGAS_templateBlockInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateBlockInstructionForGeneration result ;
  const GALGAS_templateBlockInstructionForGeneration * p = (const GALGAS_templateBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateBlockInstructionForGeneration *> (p)) {
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

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
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

ComparisonResult GALGAS_templateGetterCallInExpressionAST::objectCompare (const GALGAS_templateGetterCallInExpressionAST & inOperand) const {
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

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::
init_21__21__21__21_ (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                      const GALGAS_lstring & in_mGetterName,
                      const GALGAS_templateExpressionListAST & in_mExpressionList,
                      const GALGAS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateGetterCallInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateGetterCallInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateGetterCallInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mGetterName, in_mExpressionList, in_mExpressionLocation, inCompiler) ;
  const GALGAS_templateGetterCallInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::
templateGetterCallInExpressionAST_init_21__21__21__21_ (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                        const GALGAS_lstring & in_mGetterName,
                                                        const GALGAS_templateExpressionListAST & in_mExpressionList,
                                                        const GALGAS_location & in_mExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::class_func_new (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                                                   const GALGAS_lstring & in_mGetterName,
                                                                                                   const GALGAS_templateExpressionListAST & in_mExpressionList,
                                                                                                   const GALGAS_location & in_mExpressionLocation
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateGetterCallInExpressionAST (in_mReceiverExpression, in_mGetterName, in_mExpressionList, in_mExpressionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateGetterCallInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateGetterCallInExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateGetterCallInExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateGetterCallInExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateGetterCallInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GALGAS_lstring & in_mGetterName,
                                                                                const GALGAS_templateExpressionListAST & in_mExpressionList,
                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
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

const C_galgas_type_descriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_templateGetterCallInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mProperty_mReceiverExpression, mProperty_mGetterName, mProperty_mExpressionList, mProperty_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateGetterCallInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  const GALGAS_templateGetterCallInExpressionAST * p = (const GALGAS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratedObjectProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeratedObjectProperties.printNonNullClassInstanceProperties ("mEnumeratedObjectProperties") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexIdentifier.printNonNullClassInstanceProperties ("mIndexIdentifier") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionForeachAST::objectCompare (const GALGAS_templateInstructionForeachAST & inOperand) const {
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

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (void) :
GALGAS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::
init_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_mIsAscending,
                                      const GALGAS_templateExpressionAST & in_mExpression,
                                      const GALGAS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                      const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                      const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                      const GALGAS_lstring & in_mIndexIdentifier,
                                      const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                      const GALGAS_templateInstructionListAST & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachAST_init_21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeratedObjectProperties, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexIdentifier, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GALGAS_templateInstructionForeachAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::
templateInstructionForeachAST_init_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_mIsAscending,
                                                                    const GALGAS_templateExpressionAST & in_mExpression,
                                                                    const GALGAS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                                                    const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                    const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                                                    const GALGAS_lstring & in_mIndexIdentifier,
                                                                    const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                    const GALGAS_templateInstructionListAST & in_mAfterInstructionList,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratedObjectProperties = in_mEnumeratedObjectProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::class_func_new (const GALGAS_bool & in_mIsAscending,
                                                                                           const GALGAS_templateExpressionAST & in_mExpression,
                                                                                           const GALGAS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                                                                           const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                                           const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                                                                           const GALGAS_lstring & in_mIndexIdentifier,
                                                                                           const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                                           const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachAST (in_mIsAscending, in_mExpression, in_mEnumeratedObjectProperties, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexIdentifier, in_mBetweenInstructionList, in_mAfterInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateInstructionForeachAST::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionForeachAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForEnumerationAST GALGAS_templateInstructionForeachAST::readProperty_mEnumeratedObjectProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionForEnumerationAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEnumeratedObjectProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateInstructionForeachAST::readProperty_mIndexIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIndexIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                                        const GALGAS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                                                        const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GALGAS_lstring & in_mIndexIdentifier,
                                                                        const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratedObjectProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratedObjectProperties = in_mEnumeratedObjectProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachAST:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedObjectProperties.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_templateInstructionForeachAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratedObjectProperties, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexIdentifier, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionForeachAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  const GALGAS_templateInstructionForeachAST * p = (const GALGAS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

