#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

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

AC_GALGAS_root * GGS_propertyIndexMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyIndexMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_ GGS_propertyIndexMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap_2E_element_3F_ result ;
  const GGS_propertyIndexMap_2E_element_3F_ * p = (const GGS_propertyIndexMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyIndexMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonterminalLabelMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalLabelMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element GGS_nonterminalLabelMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap_2E_element result ;
  const GGS_nonterminalLabelMap_2E_element * p = (const GGS_nonterminalLabelMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalLabelMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonterminalLabelMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalLabelMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_ GGS_nonterminalLabelMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap_2E_element_3F_ result ;
  const GGS_nonterminalLabelMap_2E_element_3F_ * p = (const GGS_nonterminalLabelMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalLabelMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonterminalMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element GGS_nonterminalMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap_2E_element result ;
  const GGS_nonterminalMap_2E_element * p = (const GGS_nonterminalMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonterminalMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_ GGS_nonterminalMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap_2E_element_3F_ result ;
  const GGS_nonterminalMap_2E_element_3F_ * p = (const GGS_nonterminalMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_ruleLabelImplementationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleLabelImplementationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element GGS_ruleLabelImplementationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList_2E_element result ;
  const GGS_ruleLabelImplementationList_2E_element * p = (const GGS_ruleLabelImplementationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleLabelImplementationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element::GGS_semanticExpressionListForGeneration_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element::GGS_semanticExpressionListForGeneration_2E_element (const GGS_semanticExpressionListForGeneration_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element & GGS_semanticExpressionListForGeneration_2E_element::operator = (const GGS_semanticExpressionListForGeneration_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element GGS_semanticExpressionListForGeneration_2E_element::init_21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element::GGS_semanticExpressionListForGeneration_2E_element (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticExpressionListForGeneration_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticExpressionListForGeneration_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticExpressionListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticExpressionListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2E_element ("semanticExpressionListForGeneration.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticExpressionListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element GGS_semanticExpressionListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionListForGeneration_2E_element result ;
  const GGS_semanticExpressionListForGeneration_2E_element * p = (const GGS_semanticExpressionListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_formalParameterListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalParameterListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element GGS_formalParameterListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_formalParameterListForGeneration_2E_element result ;
  const GGS_formalParameterListForGeneration_2E_element * p = (const GGS_formalParameterListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalParameterListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_formalInputParameterListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalInputParameterListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element GGS_formalInputParameterListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_formalInputParameterListForGeneration_2E_element result ;
  const GGS_formalInputParameterListForGeneration_2E_element * p = (const GGS_formalInputParameterListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalInputParameterListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_signatureForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_signatureForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element GGS_signatureForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis_2E_element result ;
  const GGS_signatureForGrammarAnalysis_2E_element * p = (const GGS_signatureForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_signatureForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element result ;
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element * p = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ result ;
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ * p = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element result ;
  const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element * p = (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ * p = (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element::GGS_templateVariableMap_2E_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element::GGS_templateVariableMap_2E_element (const GGS_templateVariableMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mType (inSource.mProperty_mType),
mProperty_mCppName (inSource.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element & GGS_templateVariableMap_2E_element::operator = (const GGS_templateVariableMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateVariableMap_2E_element GGS_templateVariableMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_unifiedTypeMapEntry & in_mType,
                                                                                         const GGS_string & in_mCppName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateVariableMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element::GGS_templateVariableMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const GGS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateVariableMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateVariableMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateVariableMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVariableMap_2E_element ("templateVariableMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVariableMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVariableMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVariableMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element GGS_templateVariableMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap_2E_element result ;
  const GGS_templateVariableMap_2E_element * p = (const GGS_templateVariableMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVariableMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @templateVariableMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element_3F_::GGS_templateVariableMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element_3F_::GGS_templateVariableMap_2E_element_3F_ (const GGS_templateVariableMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element_3F_ GGS_templateVariableMap_2E_element_3F_::init_nil (void) {
  GGS_templateVariableMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateVariableMap_2E_element_3F_::isValid (void) const {
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

bool GGS_templateVariableMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_templateVariableMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap_2E_element_3F_::description (String & ioString,
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
//     @templateVariableMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVariableMap_2E_element_3F_ ("templateVariableMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVariableMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVariableMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVariableMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element_3F_ GGS_templateVariableMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap_2E_element_3F_ result ;
  const GGS_templateVariableMap_2E_element_3F_ * p = (const GGS_templateVariableMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVariableMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element::GGS_templateExpressionListAST_2E_element (void) :
mProperty_mActualSelector (),
mProperty_mExpression (),
mProperty_mEndOfExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element::GGS_templateExpressionListAST_2E_element (const GGS_templateExpressionListAST_2E_element & inSource) :
mProperty_mActualSelector (inSource.mProperty_mActualSelector),
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mEndOfExpressionLocation (inSource.mProperty_mEndOfExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element & GGS_templateExpressionListAST_2E_element::operator = (const GGS_templateExpressionListAST_2E_element & inSource) {
  mProperty_mActualSelector = inSource.mProperty_mActualSelector ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mEndOfExpressionLocation = inSource.mProperty_mEndOfExpressionLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element GGS_templateExpressionListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                                                                     const GGS_templateExpressionAST & in_mExpression,
                                                                                                     const GGS_location & in_mEndOfExpressionLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateExpressionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualSelector = in_mActualSelector ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element::GGS_templateExpressionListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_templateExpressionAST & inOperand1,
                                                                                    const GGS_location & inOperand2) :
mProperty_mActualSelector (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mEndOfExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateExpressionListAST_2E_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mExpression.isValid () && mProperty_mEndOfExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST_2E_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateExpressionListAST.element:") ;
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
//     @templateExpressionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionListAST_2E_element ("templateExpressionListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateExpressionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateExpressionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateExpressionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element GGS_templateExpressionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateExpressionListAST_2E_element result ;
  const GGS_templateExpressionListAST_2E_element * p = (const GGS_templateExpressionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateExpressionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element::GGS_templateInstructionIfBranchListForGeneration_2E_element (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element::GGS_templateInstructionIfBranchListForGeneration_2E_element (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element & GGS_templateInstructionIfBranchListForGeneration_2E_element::operator = (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element GGS_templateInstructionIfBranchListForGeneration_2E_element::init_21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                                       const GGS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element::GGS_templateInstructionIfBranchListForGeneration_2E_element (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                                                                          const GGS_templateInstructionListForGeneration & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionIfBranchListForGeneration_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionIfBranchListForGeneration.element:") ;
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
//     @templateInstructionIfBranchListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2E_element ("templateInstructionIfBranchListForGeneration.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfBranchListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfBranchListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfBranchListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element GGS_templateInstructionIfBranchListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration_2E_element result ;
  const GGS_templateInstructionIfBranchListForGeneration_2E_element * p = (const GGS_templateInstructionIfBranchListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfBranchListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element::GGS_headerCompositionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInclusion (),
mProperty_mHeaderString () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element::GGS_headerCompositionMap_2E_element (const GGS_headerCompositionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInclusion (inSource.mProperty_mInclusion),
mProperty_mHeaderString (inSource.mProperty_mHeaderString) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element & GGS_headerCompositionMap_2E_element::operator = (const GGS_headerCompositionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInclusion = inSource.mProperty_mInclusion ;
  mProperty_mHeaderString = inSource.mProperty_mHeaderString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_headerCompositionMap_2E_element GGS_headerCompositionMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                           const GGS_stringset & in_mInclusion,
                                                                                           const GGS_string & in_mHeaderString,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_headerCompositionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInclusion = in_mInclusion ;
  result.mProperty_mHeaderString = in_mHeaderString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element::GGS_headerCompositionMap_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_stringset & inOperand1,
                                                                          const GGS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInclusion (inOperand1),
mProperty_mHeaderString (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerCompositionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInclusion.isValid () && mProperty_mHeaderString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInclusion.drop () ;
  mProperty_mHeaderString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @headerCompositionMap.element:") ;
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
//     @headerCompositionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ("headerCompositionMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerCompositionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerCompositionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerCompositionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element GGS_headerCompositionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap_2E_element result ;
  const GGS_headerCompositionMap_2E_element * p = (const GGS_headerCompositionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerCompositionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @headerCompositionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_::GGS_headerCompositionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_::GGS_headerCompositionMap_2E_element_3F_ (const GGS_headerCompositionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_ GGS_headerCompositionMap_2E_element_3F_::init_nil (void) {
  GGS_headerCompositionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerCompositionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_headerCompositionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_headerCompositionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element_3F_::description (String & ioString,
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
//     @headerCompositionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ("headerCompositionMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerCompositionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerCompositionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerCompositionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_ GGS_headerCompositionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap_2E_element_3F_ result ;
  const GGS_headerCompositionMap_2E_element_3F_ * p = (const GGS_headerCompositionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerCompositionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element::GGS_headerRepartitionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mHeaderFileName () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element::GGS_headerRepartitionMap_2E_element (const GGS_headerRepartitionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mHeaderFileName (inSource.mProperty_mHeaderFileName) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element & GGS_headerRepartitionMap_2E_element::operator = (const GGS_headerRepartitionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mHeaderFileName = inSource.mProperty_mHeaderFileName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element GGS_headerRepartitionMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_string & in_mHeaderFileName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_headerRepartitionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mHeaderFileName = in_mHeaderFileName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element::GGS_headerRepartitionMap_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mHeaderFileName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerRepartitionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mHeaderFileName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mHeaderFileName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @headerRepartitionMap.element:") ;
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
//     @headerRepartitionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ("headerRepartitionMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerRepartitionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerRepartitionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerRepartitionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element GGS_headerRepartitionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap_2E_element result ;
  const GGS_headerRepartitionMap_2E_element * p = (const GGS_headerRepartitionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerRepartitionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @headerRepartitionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_::GGS_headerRepartitionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_::GGS_headerRepartitionMap_2E_element_3F_ (const GGS_headerRepartitionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_ GGS_headerRepartitionMap_2E_element_3F_::init_nil (void) {
  GGS_headerRepartitionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerRepartitionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_headerRepartitionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_headerRepartitionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element_3F_::description (String & ioString,
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
//     @headerRepartitionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ("headerRepartitionMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerRepartitionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerRepartitionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerRepartitionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_ GGS_headerRepartitionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap_2E_element_3F_ result ;
  const GGS_headerRepartitionMap_2E_element_3F_ * p = (const GGS_headerRepartitionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerRepartitionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element::GGS_templateDelimitorListAST_2E_element (void) :
mProperty_mStartString (),
mProperty_nonAtomicSelection (),
mProperty_mTemplateEndMark (),
mProperty_mPreserved (),
mProperty_mEndString () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element::GGS_templateDelimitorListAST_2E_element (const GGS_templateDelimitorListAST_2E_element & inSource) :
mProperty_mStartString (inSource.mProperty_mStartString),
mProperty_nonAtomicSelection (inSource.mProperty_nonAtomicSelection),
mProperty_mTemplateEndMark (inSource.mProperty_mTemplateEndMark),
mProperty_mPreserved (inSource.mProperty_mPreserved),
mProperty_mEndString (inSource.mProperty_mEndString) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element & GGS_templateDelimitorListAST_2E_element::operator = (const GGS_templateDelimitorListAST_2E_element & inSource) {
  mProperty_mStartString = inSource.mProperty_mStartString ;
  mProperty_nonAtomicSelection = inSource.mProperty_nonAtomicSelection ;
  mProperty_mTemplateEndMark = inSource.mProperty_mTemplateEndMark ;
  mProperty_mPreserved = inSource.mProperty_mPreserved ;
  mProperty_mEndString = inSource.mProperty_mEndString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element GGS_templateDelimitorListAST_2E_element::init_21__21_nonAtomicSelection_21__21__21_ (const GGS_lstring & in_mStartString,
                                                                                                                             const GGS_bool & in_nonAtomicSelection,
                                                                                                                             const GGS_bool & in_mTemplateEndMark,
                                                                                                                             const GGS_bool & in_mPreserved,
                                                                                                                             const GGS_lstring & in_mEndString,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateDelimitorListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStartString = in_mStartString ;
  result.mProperty_nonAtomicSelection = in_nonAtomicSelection ;
  result.mProperty_mTemplateEndMark = in_mTemplateEndMark ;
  result.mProperty_mPreserved = in_mPreserved ;
  result.mProperty_mEndString = in_mEndString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element::GGS_templateDelimitorListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_bool & inOperand1,
                                                                                  const GGS_bool & inOperand2,
                                                                                  const GGS_bool & inOperand3,
                                                                                  const GGS_lstring & inOperand4) :
mProperty_mStartString (inOperand0),
mProperty_nonAtomicSelection (inOperand1),
mProperty_mTemplateEndMark (inOperand2),
mProperty_mPreserved (inOperand3),
mProperty_mEndString (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateDelimitorListAST_2E_element::isValid (void) const {
  return mProperty_mStartString.isValid () && mProperty_nonAtomicSelection.isValid () && mProperty_mTemplateEndMark.isValid () && mProperty_mPreserved.isValid () && mProperty_mEndString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST_2E_element::drop (void) {
  mProperty_mStartString.drop () ;
  mProperty_nonAtomicSelection.drop () ;
  mProperty_mTemplateEndMark.drop () ;
  mProperty_mPreserved.drop () ;
  mProperty_mEndString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateDelimitorListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStartString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_nonAtomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateEndMark.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreserved.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndString.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateDelimitorListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorListAST_2E_element ("templateDelimitorListAST.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDelimitorListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateDelimitorListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateDelimitorListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element GGS_templateDelimitorListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorListAST_2E_element result ;
  const GGS_templateDelimitorListAST_2E_element * p = (const GGS_templateDelimitorListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateDelimitorListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element::GGS_templateReplacementListAST_2E_element (void) :
mProperty_mMatchString (),
mProperty_mReplacementString (),
mProperty_mReplacementFunction () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element::GGS_templateReplacementListAST_2E_element (const GGS_templateReplacementListAST_2E_element & inSource) :
mProperty_mMatchString (inSource.mProperty_mMatchString),
mProperty_mReplacementString (inSource.mProperty_mReplacementString),
mProperty_mReplacementFunction (inSource.mProperty_mReplacementFunction) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element & GGS_templateReplacementListAST_2E_element::operator = (const GGS_templateReplacementListAST_2E_element & inSource) {
  mProperty_mMatchString = inSource.mProperty_mMatchString ;
  mProperty_mReplacementString = inSource.mProperty_mReplacementString ;
  mProperty_mReplacementFunction = inSource.mProperty_mReplacementFunction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element GGS_templateReplacementListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mMatchString,
                                                                                                       const GGS_lstring & in_mReplacementString,
                                                                                                       const GGS_lstring & in_mReplacementFunction,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateReplacementListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMatchString = in_mMatchString ;
  result.mProperty_mReplacementString = in_mReplacementString ;
  result.mProperty_mReplacementFunction = in_mReplacementFunction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element::GGS_templateReplacementListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_lstring & inOperand1,
                                                                                      const GGS_lstring & inOperand2) :
mProperty_mMatchString (inOperand0),
mProperty_mReplacementString (inOperand1),
mProperty_mReplacementFunction (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateReplacementListAST_2E_element::isValid (void) const {
  return mProperty_mMatchString.isValid () && mProperty_mReplacementString.isValid () && mProperty_mReplacementFunction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST_2E_element::drop (void) {
  mProperty_mMatchString.drop () ;
  mProperty_mReplacementString.drop () ;
  mProperty_mReplacementFunction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateReplacementListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMatchString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReplacementString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReplacementFunction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateReplacementListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateReplacementListAST_2E_element ("templateReplacementListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateReplacementListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateReplacementListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateReplacementListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element GGS_templateReplacementListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateReplacementListAST_2E_element result ;
  const GGS_templateReplacementListAST_2E_element * p = (const GGS_templateReplacementListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateReplacementListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element::GGS_lexicalMessageDeclarationListAST_2E_element (void) :
mProperty_mMessageName (),
mProperty_mMessageValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element::GGS_lexicalMessageDeclarationListAST_2E_element (const GGS_lexicalMessageDeclarationListAST_2E_element & inSource) :
mProperty_mMessageName (inSource.mProperty_mMessageName),
mProperty_mMessageValue (inSource.mProperty_mMessageValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element & GGS_lexicalMessageDeclarationListAST_2E_element::operator = (const GGS_lexicalMessageDeclarationListAST_2E_element & inSource) {
  mProperty_mMessageName = inSource.mProperty_mMessageName ;
  mProperty_mMessageValue = inSource.mProperty_mMessageValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element GGS_lexicalMessageDeclarationListAST_2E_element::init_21__21_ (const GGS_lstring & in_mMessageName,
                                                                                                               const GGS_lstring & in_mMessageValue,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalMessageDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMessageName = in_mMessageName ;
  result.mProperty_mMessageValue = in_mMessageValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element::GGS_lexicalMessageDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_lstring & inOperand1) :
mProperty_mMessageName (inOperand0),
mProperty_mMessageValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mMessageName.isValid () && mProperty_mMessageValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST_2E_element::drop (void) {
  mProperty_mMessageName.drop () ;
  mProperty_mMessageValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalMessageDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMessageName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMessageValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalMessageDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2E_element ("lexicalMessageDeclarationListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalMessageDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalMessageDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalMessageDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element GGS_lexicalMessageDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageDeclarationListAST_2E_element result ;
  const GGS_lexicalMessageDeclarationListAST_2E_element * p = (const GGS_lexicalMessageDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalMessageDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element::GGS_lexicalAttributeListAST_2E_element (void) :
mProperty_mTypeName (),
mProperty_mName () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element::GGS_lexicalAttributeListAST_2E_element (const GGS_lexicalAttributeListAST_2E_element & inSource) :
mProperty_mTypeName (inSource.mProperty_mTypeName),
mProperty_mName (inSource.mProperty_mName) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element & GGS_lexicalAttributeListAST_2E_element::operator = (const GGS_lexicalAttributeListAST_2E_element & inSource) {
  mProperty_mTypeName = inSource.mProperty_mTypeName ;
  mProperty_mName = inSource.mProperty_mName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element GGS_lexicalAttributeListAST_2E_element::init_21__21_ (const GGS_lstring & in_mTypeName,
                                                                                             const GGS_lstring & in_mName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mName = in_mName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element::GGS_lexicalAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_lstring & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST_2E_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST_2E_element ("lexicalAttributeListAST.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element GGS_lexicalAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeListAST_2E_element result ;
  const GGS_lexicalAttributeListAST_2E_element * p = (const GGS_lexicalAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element::GGS_lexicalStyleListAST_2E_element (void) :
mProperty_mName (),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element::GGS_lexicalStyleListAST_2E_element (const GGS_lexicalStyleListAST_2E_element & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mComment (inSource.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element & GGS_lexicalStyleListAST_2E_element::operator = (const GGS_lexicalStyleListAST_2E_element & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mComment = inSource.mProperty_mComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element GGS_lexicalStyleListAST_2E_element::init_21__21_ (const GGS_lstring & in_mName,
                                                                                     const GGS_lstring & in_mComment,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalStyleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element::GGS_lexicalStyleListAST_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_lstring & inOperand1) :
mProperty_mName (inOperand0),
mProperty_mComment (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalStyleListAST_2E_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST_2E_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalStyleListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStyleListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStyleListAST_2E_element ("lexicalStyleListAST.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStyleListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStyleListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStyleListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element GGS_lexicalStyleListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalStyleListAST_2E_element result ;
  const GGS_lexicalStyleListAST_2E_element * p = (const GGS_lexicalStyleListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStyleListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element::GGS_terminalDeclarationListAST_2E_element (void) :
mProperty_mName (),
mProperty_mSentAttributeList (),
mProperty_mSyntaxErrorMessage (),
mProperty_mStyle (),
mProperty_nonAtomicSelection (),
mProperty_isEndOfTemplateMark () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element::GGS_terminalDeclarationListAST_2E_element (const GGS_terminalDeclarationListAST_2E_element & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList),
mProperty_mSyntaxErrorMessage (inSource.mProperty_mSyntaxErrorMessage),
mProperty_mStyle (inSource.mProperty_mStyle),
mProperty_nonAtomicSelection (inSource.mProperty_nonAtomicSelection),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element & GGS_terminalDeclarationListAST_2E_element::operator = (const GGS_terminalDeclarationListAST_2E_element & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  mProperty_mSyntaxErrorMessage = inSource.mProperty_mSyntaxErrorMessage ;
  mProperty_mStyle = inSource.mProperty_mStyle ;
  mProperty_nonAtomicSelection = inSource.mProperty_nonAtomicSelection ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element GGS_terminalDeclarationListAST_2E_element::init_21__21__21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const GGS_lstring & in_mName,
                                                                                                                                                        const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                                                                        const GGS_lstring & in_mSyntaxErrorMessage,
                                                                                                                                                        const GGS_lstring & in_mStyle,
                                                                                                                                                        const GGS_bool & in_nonAtomicSelection,
                                                                                                                                                        const GGS_bool & in_isEndOfTemplateMark,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mSentAttributeList = in_mSentAttributeList ;
  result.mProperty_mSyntaxErrorMessage = in_mSyntaxErrorMessage ;
  result.mProperty_mStyle = in_mStyle ;
  result.mProperty_nonAtomicSelection = in_nonAtomicSelection ;
  result.mProperty_isEndOfTemplateMark = in_isEndOfTemplateMark ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element::GGS_terminalDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_sentLexicalAttributeListAST & inOperand1,
                                                                                      const GGS_lstring & inOperand2,
                                                                                      const GGS_lstring & inOperand3,
                                                                                      const GGS_bool & inOperand4,
                                                                                      const GGS_bool & inOperand5) :
mProperty_mName (inOperand0),
mProperty_mSentAttributeList (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_mStyle (inOperand3),
mProperty_nonAtomicSelection (inOperand4),
mProperty_isEndOfTemplateMark (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_mStyle.isValid () && mProperty_nonAtomicSelection.isValid () && mProperty_isEndOfTemplateMark.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST_2E_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_mStyle.drop () ;
  mProperty_nonAtomicSelection.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_nonAtomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isEndOfTemplateMark.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST_2E_element ("terminalDeclarationListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element GGS_terminalDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalDeclarationListAST_2E_element result ;
  const GGS_terminalDeclarationListAST_2E_element * p = (const GGS_terminalDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element::GGS_lexicalListEntryListAST_2E_element (void) :
mProperty_mEntrySpelling (),
mProperty_mTerminalSpelling (),
mProperty_nonAtomicSelection (),
mProperty_isEndOfTemplateMark () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element::GGS_lexicalListEntryListAST_2E_element (const GGS_lexicalListEntryListAST_2E_element & inSource) :
mProperty_mEntrySpelling (inSource.mProperty_mEntrySpelling),
mProperty_mTerminalSpelling (inSource.mProperty_mTerminalSpelling),
mProperty_nonAtomicSelection (inSource.mProperty_nonAtomicSelection),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element & GGS_lexicalListEntryListAST_2E_element::operator = (const GGS_lexicalListEntryListAST_2E_element & inSource) {
  mProperty_mEntrySpelling = inSource.mProperty_mEntrySpelling ;
  mProperty_mTerminalSpelling = inSource.mProperty_mTerminalSpelling ;
  mProperty_nonAtomicSelection = inSource.mProperty_nonAtomicSelection ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element GGS_lexicalListEntryListAST_2E_element::init_21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const GGS_lstring & in_mEntrySpelling,
                                                                                                                                          const GGS_lstring & in_mTerminalSpelling,
                                                                                                                                          const GGS_bool & in_nonAtomicSelection,
                                                                                                                                          const GGS_bool & in_isEndOfTemplateMark,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalListEntryListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntrySpelling = in_mEntrySpelling ;
  result.mProperty_mTerminalSpelling = in_mTerminalSpelling ;
  result.mProperty_nonAtomicSelection = in_nonAtomicSelection ;
  result.mProperty_isEndOfTemplateMark = in_isEndOfTemplateMark ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element::GGS_lexicalListEntryListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_lstring & inOperand1,
                                                                                const GGS_bool & inOperand2,
                                                                                const GGS_bool & inOperand3) :
mProperty_mEntrySpelling (inOperand0),
mProperty_mTerminalSpelling (inOperand1),
mProperty_nonAtomicSelection (inOperand2),
mProperty_isEndOfTemplateMark (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalListEntryListAST_2E_element::isValid (void) const {
  return mProperty_mEntrySpelling.isValid () && mProperty_mTerminalSpelling.isValid () && mProperty_nonAtomicSelection.isValid () && mProperty_isEndOfTemplateMark.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST_2E_element::drop (void) {
  mProperty_mEntrySpelling.drop () ;
  mProperty_mTerminalSpelling.drop () ;
  mProperty_nonAtomicSelection.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListEntryListAST_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalListEntryListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEntrySpelling.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalSpelling.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_nonAtomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isEndOfTemplateMark.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalListEntryListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST_2E_element ("lexicalListEntryListAST.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalListEntryListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalListEntryListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalListEntryListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST_2E_element GGS_lexicalListEntryListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalListEntryListAST_2E_element result ;
  const GGS_lexicalListEntryListAST_2E_element * p = (const GGS_lexicalListEntryListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalListEntryListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element::GGS_sentLexicalAttributeListAST_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element::GGS_sentLexicalAttributeListAST_2E_element (const GGS_sentLexicalAttributeListAST_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mAttributeName (inSource.mProperty_mAttributeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element & GGS_sentLexicalAttributeListAST_2E_element::operator = (const GGS_sentLexicalAttributeListAST_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element GGS_sentLexicalAttributeListAST_2E_element::init_21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                     const GGS_lstring & in_mAttributeName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sentLexicalAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element::GGS_sentLexicalAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1) :
mProperty_mFormalSelector (inOperand0),
mProperty_mAttributeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_sentLexicalAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mAttributeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mAttributeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sentLexicalAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sentLexicalAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2E_element ("sentLexicalAttributeListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sentLexicalAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sentLexicalAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sentLexicalAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element GGS_sentLexicalAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_sentLexicalAttributeListAST_2E_element result ;
  const GGS_sentLexicalAttributeListAST_2E_element * p = (const GGS_sentLexicalAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sentLexicalAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element::GGS_lexicalListDeclarationListAST_2E_element (void) :
mProperty_mName (),
mProperty_mStyle (),
mProperty_mSyntaxErrorMessage (),
mProperty_mSentAttributeList (),
mProperty_mEntryList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element::GGS_lexicalListDeclarationListAST_2E_element (const GGS_lexicalListDeclarationListAST_2E_element & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mStyle (inSource.mProperty_mStyle),
mProperty_mSyntaxErrorMessage (inSource.mProperty_mSyntaxErrorMessage),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList),
mProperty_mEntryList (inSource.mProperty_mEntryList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element & GGS_lexicalListDeclarationListAST_2E_element::operator = (const GGS_lexicalListDeclarationListAST_2E_element & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mStyle = inSource.mProperty_mStyle ;
  mProperty_mSyntaxErrorMessage = inSource.mProperty_mSyntaxErrorMessage ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  mProperty_mEntryList = inSource.mProperty_mEntryList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element GGS_lexicalListDeclarationListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mName,
                                                                                                                     const GGS_lstring & in_mStyle,
                                                                                                                     const GGS_lstring & in_mSyntaxErrorMessage,
                                                                                                                     const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                                     const GGS_lexicalListEntryListAST & in_mEntryList,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalListDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mStyle = in_mStyle ;
  result.mProperty_mSyntaxErrorMessage = in_mSyntaxErrorMessage ;
  result.mProperty_mSentAttributeList = in_mSentAttributeList ;
  result.mProperty_mEntryList = in_mEntryList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element::GGS_lexicalListDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_lstring & inOperand1,
                                                                                            const GGS_lstring & inOperand2,
                                                                                            const GGS_sentLexicalAttributeListAST & inOperand3,
                                                                                            const GGS_lexicalListEntryListAST & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mStyle (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_mSentAttributeList (inOperand3),
mProperty_mEntryList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalListDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mStyle.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mEntryList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST_2E_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mStyle.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mEntryList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalListDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEntryList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalListDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2E_element ("lexicalListDeclarationListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalListDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalListDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalListDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element GGS_lexicalListDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalListDeclarationListAST_2E_element result ;
  const GGS_lexicalListDeclarationListAST_2E_element * p = (const GGS_lexicalListDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalListDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element::GGS_lexicalSendSearchListAST_2E_element (void) :
mProperty_mAttributeName (),
mProperty_mSearchListName () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element::GGS_lexicalSendSearchListAST_2E_element (const GGS_lexicalSendSearchListAST_2E_element & inSource) :
mProperty_mAttributeName (inSource.mProperty_mAttributeName),
mProperty_mSearchListName (inSource.mProperty_mSearchListName) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element & GGS_lexicalSendSearchListAST_2E_element::operator = (const GGS_lexicalSendSearchListAST_2E_element & inSource) {
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  mProperty_mSearchListName = inSource.mProperty_mSearchListName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element GGS_lexicalSendSearchListAST_2E_element::init_21__21_ (const GGS_lstring & in_mAttributeName,
                                                                                               const GGS_lstring & in_mSearchListName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSendSearchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mSearchListName = in_mSearchListName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element::GGS_lexicalSendSearchListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_lstring & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mSearchListName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalSendSearchListAST_2E_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mSearchListName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST_2E_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mSearchListName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSendSearchListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSendSearchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSearchListName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSendSearchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2E_element ("lexicalSendSearchListAST.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSendSearchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendSearchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendSearchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST_2E_element GGS_lexicalSendSearchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSendSearchListAST_2E_element result ;
  const GGS_lexicalSendSearchListAST_2E_element * p = (const GGS_lexicalSendSearchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendSearchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST_2E_element::GGS_indexingListAST_2E_element (void) :
mProperty_mIndexName (),
mProperty_mIndexComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST_2E_element::GGS_indexingListAST_2E_element (const GGS_indexingListAST_2E_element & inSource) :
mProperty_mIndexName (inSource.mProperty_mIndexName),
mProperty_mIndexComment (inSource.mProperty_mIndexComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST_2E_element & GGS_indexingListAST_2E_element::operator = (const GGS_indexingListAST_2E_element & inSource) {
  mProperty_mIndexName = inSource.mProperty_mIndexName ;
  mProperty_mIndexComment = inSource.mProperty_mIndexComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_indexingListAST_2E_element GGS_indexingListAST_2E_element::init_21__21_ (const GGS_lstring & in_mIndexName,
                                                                             const GGS_lstring & in_mIndexComment,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_indexingListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIndexName = in_mIndexName ;
  result.mProperty_mIndexComment = in_mIndexComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST_2E_element::GGS_indexingListAST_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mIndexName (inOperand0),
mProperty_mIndexComment (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_indexingListAST_2E_element::isValid (void) const {
  return mProperty_mIndexName.isValid () && mProperty_mIndexComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST_2E_element::drop (void) {
  mProperty_mIndexName.drop () ;
  mProperty_mIndexComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @indexingListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mIndexName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndexComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @indexingListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_indexingListAST_2E_element ("indexingListAST.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_indexingListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_indexingListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_indexingListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST_2E_element GGS_indexingListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_indexingListAST_2E_element result ;
  const GGS_indexingListAST_2E_element * p = (const GGS_indexingListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_indexingListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indexingListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element::GGS_lexicalSentValueList_2E_element (void) :
mProperty_mLexicalFormalSelector (),
mProperty_mLexicalAttributeName (),
mProperty_mLexicalType () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element::GGS_lexicalSentValueList_2E_element (const GGS_lexicalSentValueList_2E_element & inSource) :
mProperty_mLexicalFormalSelector (inSource.mProperty_mLexicalFormalSelector),
mProperty_mLexicalAttributeName (inSource.mProperty_mLexicalAttributeName),
mProperty_mLexicalType (inSource.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element & GGS_lexicalSentValueList_2E_element::operator = (const GGS_lexicalSentValueList_2E_element & inSource) {
  mProperty_mLexicalFormalSelector = inSource.mProperty_mLexicalFormalSelector ;
  mProperty_mLexicalAttributeName = inSource.mProperty_mLexicalAttributeName ;
  mProperty_mLexicalType = inSource.mProperty_mLexicalType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element GGS_lexicalSentValueList_2E_element::init_21__21__21_ (const GGS_lstring & in_mLexicalFormalSelector,
                                                                                           const GGS_string & in_mLexicalAttributeName,
                                                                                           const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSentValueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalSelector = in_mLexicalFormalSelector ;
  result.mProperty_mLexicalAttributeName = in_mLexicalAttributeName ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element::GGS_lexicalSentValueList_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_string & inOperand1,
                                                                          const GGS_lexicalTypeEnum & inOperand2) :
mProperty_mLexicalFormalSelector (inOperand0),
mProperty_mLexicalAttributeName (inOperand1),
mProperty_mLexicalType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalSentValueList_2E_element::isValid (void) const {
  return mProperty_mLexicalFormalSelector.isValid () && mProperty_mLexicalAttributeName.isValid () && mProperty_mLexicalType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList_2E_element::drop (void) {
  mProperty_mLexicalFormalSelector.drop () ;
  mProperty_mLexicalAttributeName.drop () ;
  mProperty_mLexicalType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValueList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSentValueList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSentValueList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSentValueList_2E_element ("lexicalSentValueList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSentValueList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSentValueList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSentValueList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValueList_2E_element GGS_lexicalSentValueList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSentValueList_2E_element result ;
  const GGS_lexicalSentValueList_2E_element * p = (const GGS_lexicalSentValueList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSentValueList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSentValueList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element::GGS_terminalMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSentAttributeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element::GGS_terminalMap_2E_element (const GGS_terminalMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element & GGS_terminalMap_2E_element::operator = (const GGS_terminalMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalMap_2E_element GGS_terminalMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                     const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSentAttributeList = in_mSentAttributeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element::GGS_terminalMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_lexicalSentValueList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mSentAttributeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSentAttributeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSentAttributeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalMap_2E_element ("terminalMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element GGS_terminalMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_terminalMap_2E_element result ;
  const GGS_terminalMap_2E_element * p = (const GGS_terminalMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @terminalMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element_3F_::GGS_terminalMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element_3F_::GGS_terminalMap_2E_element_3F_ (const GGS_terminalMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element_3F_ GGS_terminalMap_2E_element_3F_::init_nil (void) {
  GGS_terminalMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalMap_2E_element_3F_::isValid (void) const {
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

bool GGS_terminalMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_terminalMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalMap_2E_element_3F_::description (String & ioString,
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
//     @terminalMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalMap_2E_element_3F_ ("terminalMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap_2E_element_3F_ GGS_terminalMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_terminalMap_2E_element_3F_ result ;
  const GGS_terminalMap_2E_element_3F_ * p = (const GGS_terminalMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element::GGS_lexicalTypeMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalType () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element::GGS_lexicalTypeMap_2E_element (const GGS_lexicalTypeMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalType (inSource.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element & GGS_lexicalTypeMap_2E_element::operator = (const GGS_lexicalTypeMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalType = inSource.mProperty_mLexicalType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element GGS_lexicalTypeMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element::GGS_lexicalTypeMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_lexicalTypeEnum & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLexicalType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTypeMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalTypeMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalTypeMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element ("lexicalTypeMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTypeMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTypeMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTypeMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element GGS_lexicalTypeMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalTypeMap_2E_element result ;
  const GGS_lexicalTypeMap_2E_element * p = (const GGS_lexicalTypeMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTypeMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalTypeMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element_3F_::GGS_lexicalTypeMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element_3F_::GGS_lexicalTypeMap_2E_element_3F_ (const GGS_lexicalTypeMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element_3F_ GGS_lexicalTypeMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalTypeMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTypeMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalTypeMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalTypeMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTypeMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalTypeMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element_3F_ ("lexicalTypeMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTypeMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTypeMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTypeMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap_2E_element_3F_ GGS_lexicalTypeMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalTypeMap_2E_element_3F_ result ;
  const GGS_lexicalTypeMap_2E_element_3F_ * p = (const GGS_lexicalTypeMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTypeMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element::GGS_lexicalAttributeMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalType () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element::GGS_lexicalAttributeMap_2E_element (const GGS_lexicalAttributeMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalType (inSource.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element & GGS_lexicalAttributeMap_2E_element::operator = (const GGS_lexicalAttributeMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalType = inSource.mProperty_mLexicalType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element GGS_lexicalAttributeMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalAttributeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element::GGS_lexicalAttributeMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_lexicalTypeEnum & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLexicalType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalAttributeMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalAttributeMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2E_element ("lexicalAttributeMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element GGS_lexicalAttributeMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeMap_2E_element result ;
  const GGS_lexicalAttributeMap_2E_element * p = (const GGS_lexicalAttributeMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalAttributeMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element_3F_::GGS_lexicalAttributeMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element_3F_::GGS_lexicalAttributeMap_2E_element_3F_ (const GGS_lexicalAttributeMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element_3F_ GGS_lexicalAttributeMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalAttributeMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalAttributeMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalAttributeMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalAttributeMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalAttributeMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2E_element_3F_ ("lexicalAttributeMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeMap_2E_element_3F_ GGS_lexicalAttributeMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeMap_2E_element_3F_ result ;
  const GGS_lexicalAttributeMap_2E_element_3F_ * p = (const GGS_lexicalAttributeMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element::GGS_scopeLocalVarMap_2E_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mAttributes (),
mProperty_mState () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element::GGS_scopeLocalVarMap_2E_element (const GGS_scopeLocalVarMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mType (inSource.mProperty_mType),
mProperty_mCppName (inSource.mProperty_mCppName),
mProperty_mNameForCheckingFormalParameterUsing (inSource.mProperty_mNameForCheckingFormalParameterUsing),
mProperty_mAttributes (inSource.mProperty_mAttributes),
mProperty_mState (inSource.mProperty_mState) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element & GGS_scopeLocalVarMap_2E_element::operator = (const GGS_scopeLocalVarMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  mProperty_mNameForCheckingFormalParameterUsing = inSource.mProperty_mNameForCheckingFormalParameterUsing ;
  mProperty_mAttributes = inSource.mProperty_mAttributes ;
  mProperty_mState = inSource.mProperty_mState ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element GGS_scopeLocalVarMap_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_unifiedTypeMapEntry & in_mType,
                                                                                               const GGS_string & in_mCppName,
                                                                                               const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                               const GGS_localVariableAttributes & in_mAttributes,
                                                                                               const GGS_localVarValuation & in_mState,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeLocalVarMap_2E_element result ;
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

void GGS_scopeLocalVarMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element::GGS_scopeLocalVarMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_unifiedTypeMapEntry & inOperand1,
                                                                  const GGS_string & inOperand2,
                                                                  const GGS_string & inOperand3,
                                                                  const GGS_localVariableAttributes & inOperand4,
                                                                  const GGS_localVarValuation & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCppName (inOperand2),
mProperty_mNameForCheckingFormalParameterUsing (inOperand3),
mProperty_mAttributes (inOperand4),
mProperty_mState (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_scopeLocalVarMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_mNameForCheckingFormalParameterUsing.isValid () && mProperty_mAttributes.isValid () && mProperty_mState.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_mNameForCheckingFormalParameterUsing.drop () ;
  mProperty_mAttributes.drop () ;
  mProperty_mState.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @scopeLocalVarMap.element:") ;
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
//     @scopeLocalVarMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element ("scopeLocalVarMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_scopeLocalVarMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeLocalVarMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeLocalVarMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element GGS_scopeLocalVarMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_scopeLocalVarMap_2E_element result ;
  const GGS_scopeLocalVarMap_2E_element * p = (const GGS_scopeLocalVarMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeLocalVarMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeLocalVarMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @scopeLocalVarMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element_3F_::GGS_scopeLocalVarMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element_3F_::GGS_scopeLocalVarMap_2E_element_3F_ (const GGS_scopeLocalVarMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element_3F_ GGS_scopeLocalVarMap_2E_element_3F_::init_nil (void) {
  GGS_scopeLocalVarMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_scopeLocalVarMap_2E_element_3F_::isValid (void) const {
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

bool GGS_scopeLocalVarMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_scopeLocalVarMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap_2E_element_3F_::description (String & ioString,
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
//     @scopeLocalVarMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element_3F_ ("scopeLocalVarMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_scopeLocalVarMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeLocalVarMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeLocalVarMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element_3F_ GGS_scopeLocalVarMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_scopeLocalVarMap_2E_element_3F_ result ;
  const GGS_scopeLocalVarMap_2E_element_3F_ * p = (const GGS_scopeLocalVarMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeLocalVarMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeLocalVarMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionMethodMapForGlobalCheckings_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForGlobalCheckings_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element GGS_extensionMethodMapForGlobalCheckings_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings_2E_element result ;
  const GGS_extensionMethodMapForGlobalCheckings_2E_element * p = (const GGS_extensionMethodMapForGlobalCheckings_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForGlobalCheckings_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForGlobalCheckings.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ result ;
  const GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ * p = (const GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForGlobalCheckings.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionSetterMapForGlobalCheckings_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForGlobalCheckings_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element GGS_extensionSetterMapForGlobalCheckings_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings_2E_element result ;
  const GGS_extensionSetterMapForGlobalCheckings_2E_element * p = (const GGS_extensionSetterMapForGlobalCheckings_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForGlobalCheckings_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForGlobalCheckings.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ result ;
  const GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ * p = (const GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForGlobalCheckings.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionGetterMapForGlobalCheckings_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForGlobalCheckings_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element GGS_extensionGetterMapForGlobalCheckings_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings_2E_element result ;
  const GGS_extensionGetterMapForGlobalCheckings_2E_element * p = (const GGS_extensionGetterMapForGlobalCheckings_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForGlobalCheckings_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ result ;
  const GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ * p = (const GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element::GGS_collectionValueElementListForGeneration_2E_element (void) :
mProperty_expression (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element::GGS_collectionValueElementListForGeneration_2E_element (const GGS_collectionValueElementListForGeneration_2E_element & inSource) :
mProperty_expression (inSource.mProperty_expression),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element & GGS_collectionValueElementListForGeneration_2E_element::operator = (const GGS_collectionValueElementListForGeneration_2E_element & inSource) {
  mProperty_expression = inSource.mProperty_expression ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element GGS_collectionValueElementListForGeneration_2E_element::init_21__21_ (const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                                             const GGS_location & in_location,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element::GGS_collectionValueElementListForGeneration_2E_element (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                                                                const GGS_location & inOperand1) :
mProperty_expression (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_collectionValueElementListForGeneration_2E_element::isValid (void) const {
  return mProperty_expression.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration_2E_element::drop (void) {
  mProperty_expression.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @collectionValueElementListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @collectionValueElementListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2E_element ("collectionValueElementListForGeneration.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueElementListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueElementListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element GGS_collectionValueElementListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_collectionValueElementListForGeneration_2E_element result ;
  const GGS_collectionValueElementListForGeneration_2E_element * p = (const GGS_collectionValueElementListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueElementListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_actualOutputArgumentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualOutputArgumentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element GGS_actualOutputArgumentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_actualOutputArgumentList_2E_element result ;
  const GGS_actualOutputArgumentList_2E_element * p = (const GGS_actualOutputArgumentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualOutputArgumentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputArgumentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element::GGS_projectQualifiedFeatureMap_2E_element (void) :
mProperty_lkey (),
mProperty_mFeatureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element::GGS_projectQualifiedFeatureMap_2E_element (const GGS_projectQualifiedFeatureMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFeatureValue (inSource.mProperty_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element & GGS_projectQualifiedFeatureMap_2E_element::operator = (const GGS_projectQualifiedFeatureMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFeatureValue = inSource.mProperty_mFeatureValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element GGS_projectQualifiedFeatureMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_lstring & in_mFeatureValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element::GGS_projectQualifiedFeatureMap_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_lstring & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectQualifiedFeatureMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFeatureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFeatureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @projectQualifiedFeatureMap.element:") ;
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
//     @projectQualifiedFeatureMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ("projectQualifiedFeatureMap.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectQualifiedFeatureMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectQualifiedFeatureMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectQualifiedFeatureMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element GGS_projectQualifiedFeatureMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap_2E_element result ;
  const GGS_projectQualifiedFeatureMap_2E_element * p = (const GGS_projectQualifiedFeatureMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectQualifiedFeatureMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @projectQualifiedFeatureMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_::GGS_projectQualifiedFeatureMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_::GGS_projectQualifiedFeatureMap_2E_element_3F_ (const GGS_projectQualifiedFeatureMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_ GGS_projectQualifiedFeatureMap_2E_element_3F_::init_nil (void) {
  GGS_projectQualifiedFeatureMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectQualifiedFeatureMap_2E_element_3F_::isValid (void) const {
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

bool GGS_projectQualifiedFeatureMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_projectQualifiedFeatureMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element_3F_::description (String & ioString,
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
//     @projectQualifiedFeatureMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ("projectQualifiedFeatureMap.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectQualifiedFeatureMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectQualifiedFeatureMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectQualifiedFeatureMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_ GGS_projectQualifiedFeatureMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap_2E_element_3F_ result ;
  const GGS_projectQualifiedFeatureMap_2E_element_3F_ * p = (const GGS_projectQualifiedFeatureMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectQualifiedFeatureMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element result ;
  const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element * p = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ * p = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element result ;
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element * p = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_syntaxComponentListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element GGS_syntaxComponentListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentListForGrammarAnalysis_2E_element result ;
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element * p = (const GGS_syntaxComponentListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis_2E_element result ;
  const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element * p = (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ result ;
  const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ * p = (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element::GGS_terminalList_2E_element (void) :
mProperty_mTerminalName (),
mProperty_mSentAttributeList (),
mProperty_mSyntaxErrorMessage (),
mProperty_isEndOfTemplateMark (),
mProperty_atomicSelection (),
mProperty_mStyleIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element::GGS_terminalList_2E_element (const GGS_terminalList_2E_element & inSource) :
mProperty_mTerminalName (inSource.mProperty_mTerminalName),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList),
mProperty_mSyntaxErrorMessage (inSource.mProperty_mSyntaxErrorMessage),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark),
mProperty_atomicSelection (inSource.mProperty_atomicSelection),
mProperty_mStyleIndex (inSource.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element & GGS_terminalList_2E_element::operator = (const GGS_terminalList_2E_element & inSource) {
  mProperty_mTerminalName = inSource.mProperty_mTerminalName ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  mProperty_mSyntaxErrorMessage = inSource.mProperty_mSyntaxErrorMessage ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  mProperty_atomicSelection = inSource.mProperty_atomicSelection ;
  mProperty_mStyleIndex = inSource.mProperty_mStyleIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalList_2E_element GGS_terminalList_2E_element::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (const GGS_lstring & in_mTerminalName,
                                                                                                                         const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                                                                                         const GGS_string & in_mSyntaxErrorMessage,
                                                                                                                         const GGS_bool & in_isEndOfTemplateMark,
                                                                                                                         const GGS_bool & in_atomicSelection,
                                                                                                                         const GGS_uint & in_mStyleIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  result.mProperty_mSentAttributeList = in_mSentAttributeList ;
  result.mProperty_mSyntaxErrorMessage = in_mSyntaxErrorMessage ;
  result.mProperty_isEndOfTemplateMark = in_isEndOfTemplateMark ;
  result.mProperty_atomicSelection = in_atomicSelection ;
  result.mProperty_mStyleIndex = in_mStyleIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element::GGS_terminalList_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_lexicalSentValueList & inOperand1,
                                                          const GGS_string & inOperand2,
                                                          const GGS_bool & inOperand3,
                                                          const GGS_bool & inOperand4,
                                                          const GGS_uint & inOperand5) :
mProperty_mTerminalName (inOperand0),
mProperty_mSentAttributeList (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_isEndOfTemplateMark (inOperand3),
mProperty_atomicSelection (inOperand4),
mProperty_mStyleIndex (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalList_2E_element::isValid (void) const {
  return mProperty_mTerminalName.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_isEndOfTemplateMark.isValid () && mProperty_atomicSelection.isValid () && mProperty_mStyleIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList_2E_element::drop (void) {
  mProperty_mTerminalName.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
  mProperty_atomicSelection.drop () ;
  mProperty_mStyleIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isEndOfTemplateMark.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_atomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalList_2E_element ("terminalList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element GGS_terminalList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalList_2E_element result ;
  const GGS_terminalList_2E_element * p = (const GGS_terminalList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element::GGS_lexicalExplicitTokenListMap_2E_element (void) :
mProperty_lkey (),
mProperty_mTerminal (),
mProperty_atomicSelection (),
mProperty_isEndOfTemplateMark () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element::GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mTerminal (inSource.mProperty_mTerminal),
mProperty_atomicSelection (inSource.mProperty_atomicSelection),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element & GGS_lexicalExplicitTokenListMap_2E_element::operator = (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mTerminal = inSource.mProperty_mTerminal ;
  mProperty_atomicSelection = inSource.mProperty_atomicSelection ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element GGS_lexicalExplicitTokenListMap_2E_element::init_21__21__21_atomicSelection_21_isEndOfTemplateMark (const GGS_lstring & in_lkey,
                                                                                                                                               const GGS_lstring & in_mTerminal,
                                                                                                                                               const GGS_bool & in_atomicSelection,
                                                                                                                                               const GGS_bool & in_isEndOfTemplateMark,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTerminal = in_mTerminal ;
  result.mProperty_atomicSelection = in_atomicSelection ;
  result.mProperty_isEndOfTemplateMark = in_isEndOfTemplateMark ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element::GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_bool & inOperand2,
                                                                                        const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mTerminal (inOperand1),
mProperty_atomicSelection (inOperand2),
mProperty_isEndOfTemplateMark (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminal.isValid () && mProperty_atomicSelection.isValid () && mProperty_isEndOfTemplateMark.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminal.drop () ;
  mProperty_atomicSelection.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalExplicitTokenListMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminal.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_atomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isEndOfTemplateMark.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element ("lexicalExplicitTokenListMap.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element GGS_lexicalExplicitTokenListMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap_2E_element result ;
  const GGS_lexicalExplicitTokenListMap_2E_element * p = (const GGS_lexicalExplicitTokenListMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalExplicitTokenListMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_::GGS_lexicalExplicitTokenListMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_::GGS_lexicalExplicitTokenListMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_ GGS_lexicalExplicitTokenListMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalExplicitTokenListMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalExplicitTokenListMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalExplicitTokenListMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalExplicitTokenListMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element_3F_ ("lexicalExplicitTokenListMap.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_ GGS_lexicalExplicitTokenListMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap_2E_element_3F_ result ;
  const GGS_lexicalExplicitTokenListMap_2E_element_3F_ * p = (const GGS_lexicalExplicitTokenListMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element::GGS_lexicalExplicitTokenListMapMap_2E_element (void) :
mProperty_lkey (),
mProperty_mExplicitTokenListMap (),
mProperty_mTokenSortedList (),
mProperty_mShouldBeGenerated () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element::GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExplicitTokenListMap (inSource.mProperty_mExplicitTokenListMap),
mProperty_mTokenSortedList (inSource.mProperty_mTokenSortedList),
mProperty_mShouldBeGenerated (inSource.mProperty_mShouldBeGenerated) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element & GGS_lexicalExplicitTokenListMapMap_2E_element::operator = (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExplicitTokenListMap = inSource.mProperty_mExplicitTokenListMap ;
  mProperty_mTokenSortedList = inSource.mProperty_mTokenSortedList ;
  mProperty_mShouldBeGenerated = inSource.mProperty_mShouldBeGenerated ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element GGS_lexicalExplicitTokenListMapMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                   const GGS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                                                                                   const GGS_tokenSortedlist & in_mTokenSortedList,
                                                                                                                   const GGS_bool & in_mShouldBeGenerated,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExplicitTokenListMap = in_mExplicitTokenListMap ;
  result.mProperty_mTokenSortedList = in_mTokenSortedList ;
  result.mProperty_mShouldBeGenerated = in_mShouldBeGenerated ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element::GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_lexicalExplicitTokenListMap & inOperand1,
                                                                                              const GGS_tokenSortedlist & inOperand2,
                                                                                              const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mExplicitTokenListMap (inOperand1),
mProperty_mTokenSortedList (inOperand2),
mProperty_mShouldBeGenerated (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMapMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExplicitTokenListMap.isValid () && mProperty_mTokenSortedList.isValid () && mProperty_mShouldBeGenerated.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExplicitTokenListMap.drop () ;
  mProperty_mTokenSortedList.drop () ;
  mProperty_mShouldBeGenerated.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalExplicitTokenListMapMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExplicitTokenListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTokenSortedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mShouldBeGenerated.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMapMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element ("lexicalExplicitTokenListMapMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMapMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMapMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMapMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element GGS_lexicalExplicitTokenListMapMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap_2E_element result ;
  const GGS_lexicalExplicitTokenListMapMap_2E_element * p = (const GGS_lexicalExplicitTokenListMapMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMapMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalExplicitTokenListMapMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalExplicitTokenListMapMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalExplicitTokenListMapMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element_3F_ ("lexicalExplicitTokenListMapMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ result ;
  const GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ * p = (const GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element::GGS_lexicalMessageMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalMessage (),
mProperty_mMessageIsUsed () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element::GGS_lexicalMessageMap_2E_element (const GGS_lexicalMessageMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalMessage (inSource.mProperty_mLexicalMessage),
mProperty_mMessageIsUsed (inSource.mProperty_mMessageIsUsed) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element & GGS_lexicalMessageMap_2E_element::operator = (const GGS_lexicalMessageMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalMessage = inSource.mProperty_mLexicalMessage ;
  mProperty_mMessageIsUsed = inSource.mProperty_mMessageIsUsed ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element GGS_lexicalMessageMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_lstring & in_mLexicalMessage,
                                                                                     const GGS_bool & in_mMessageIsUsed,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalMessageMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalMessage = in_mLexicalMessage ;
  result.mProperty_mMessageIsUsed = in_mMessageIsUsed ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element::GGS_lexicalMessageMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lstring & inOperand1,
                                                                    const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLexicalMessage (inOperand1),
mProperty_mMessageIsUsed (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalMessage.isValid () && mProperty_mMessageIsUsed.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalMessage.drop () ;
  mProperty_mMessageIsUsed.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalMessageMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMessageIsUsed.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalMessageMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element ("lexicalMessageMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalMessageMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalMessageMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalMessageMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element GGS_lexicalMessageMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap_2E_element result ;
  const GGS_lexicalMessageMap_2E_element * p = (const GGS_lexicalMessageMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalMessageMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalMessageMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_::GGS_lexicalMessageMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_::GGS_lexicalMessageMap_2E_element_3F_ (const GGS_lexicalMessageMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_ GGS_lexicalMessageMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalMessageMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalMessageMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalMessageMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalMessageMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element_3F_ ("lexicalMessageMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalMessageMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalMessageMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalMessageMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_ GGS_lexicalMessageMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap_2E_element_3F_ result ;
  const GGS_lexicalMessageMap_2E_element_3F_ * p = (const GGS_lexicalMessageMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalMessageMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element::GGS_lexicalRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalRoutineFormalArgumentList (),
mProperty_mErrorMessageList (),
mProperty_mIsExtern () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element::GGS_lexicalRoutineMap_2E_element (const GGS_lexicalRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalRoutineFormalArgumentList (inSource.mProperty_mLexicalRoutineFormalArgumentList),
mProperty_mErrorMessageList (inSource.mProperty_mErrorMessageList),
mProperty_mIsExtern (inSource.mProperty_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element & GGS_lexicalRoutineMap_2E_element::operator = (const GGS_lexicalRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalRoutineFormalArgumentList = inSource.mProperty_mLexicalRoutineFormalArgumentList ;
  mProperty_mErrorMessageList = inSource.mProperty_mErrorMessageList ;
  mProperty_mIsExtern = inSource.mProperty_mIsExtern ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element GGS_lexicalRoutineMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                                                         const GGS_stringlist & in_mErrorMessageList,
                                                                                         const GGS_bool & in_mIsExtern,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalRoutineFormalArgumentList = in_mLexicalRoutineFormalArgumentList ;
  result.mProperty_mErrorMessageList = in_mErrorMessageList ;
  result.mProperty_mIsExtern = in_mIsExtern ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element::GGS_lexicalRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                    const GGS_stringlist & inOperand2,
                                                                    const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mLexicalRoutineFormalArgumentList (inOperand1),
mProperty_mErrorMessageList (inOperand2),
mProperty_mIsExtern (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalRoutineFormalArgumentList.isValid () && mProperty_mErrorMessageList.isValid () && mProperty_mIsExtern.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalRoutineFormalArgumentList.drop () ;
  mProperty_mErrorMessageList.drop () ;
  mProperty_mIsExtern.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element ("lexicalRoutineMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element GGS_lexicalRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineMap_2E_element result ;
  const GGS_lexicalRoutineMap_2E_element * p = (const GGS_lexicalRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_::GGS_lexicalRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_::GGS_lexicalRoutineMap_2E_element_3F_ (const GGS_lexicalRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_ GGS_lexicalRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element_3F_ ("lexicalRoutineMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_ GGS_lexicalRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineMap_2E_element_3F_ result ;
  const GGS_lexicalRoutineMap_2E_element_3F_ * p = (const GGS_lexicalRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element::GGS_lexicalFunctionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalTypeList (),
mProperty_mReturnedLexicalType (),
mProperty_mReplacementFunctionName (),
mProperty_mIsExtern () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element::GGS_lexicalFunctionMap_2E_element (const GGS_lexicalFunctionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalTypeList (inSource.mProperty_mLexicalTypeList),
mProperty_mReturnedLexicalType (inSource.mProperty_mReturnedLexicalType),
mProperty_mReplacementFunctionName (inSource.mProperty_mReplacementFunctionName),
mProperty_mIsExtern (inSource.mProperty_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element & GGS_lexicalFunctionMap_2E_element::operator = (const GGS_lexicalFunctionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalTypeList = inSource.mProperty_mLexicalTypeList ;
  mProperty_mReturnedLexicalType = inSource.mProperty_mReturnedLexicalType ;
  mProperty_mReplacementFunctionName = inSource.mProperty_mReplacementFunctionName ;
  mProperty_mIsExtern = inSource.mProperty_mIsExtern ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element GGS_lexicalFunctionMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                                                               const GGS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                                                               const GGS_string & in_mReplacementFunctionName,
                                                                                               const GGS_bool & in_mIsExtern,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalTypeList = in_mLexicalTypeList ;
  result.mProperty_mReturnedLexicalType = in_mReturnedLexicalType ;
  result.mProperty_mReplacementFunctionName = in_mReplacementFunctionName ;
  result.mProperty_mIsExtern = in_mIsExtern ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element::GGS_lexicalFunctionMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                      const GGS_lexicalTypeEnum & inOperand2,
                                                                      const GGS_string & inOperand3,
                                                                      const GGS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mLexicalTypeList (inOperand1),
mProperty_mReturnedLexicalType (inOperand2),
mProperty_mReplacementFunctionName (inOperand3),
mProperty_mIsExtern (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalTypeList.isValid () && mProperty_mReturnedLexicalType.isValid () && mProperty_mReplacementFunctionName.isValid () && mProperty_mIsExtern.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalTypeList.drop () ;
  mProperty_mReturnedLexicalType.drop () ;
  mProperty_mReplacementFunctionName.drop () ;
  mProperty_mIsExtern.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedLexicalType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReplacementFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element ("lexicalFunctionMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element GGS_lexicalFunctionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap_2E_element result ;
  const GGS_lexicalFunctionMap_2E_element * p = (const GGS_lexicalFunctionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalFunctionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_::GGS_lexicalFunctionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_::GGS_lexicalFunctionMap_2E_element_3F_ (const GGS_lexicalFunctionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_ GGS_lexicalFunctionMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalFunctionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalFunctionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalFunctionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalFunctionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ("lexicalFunctionMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_ GGS_lexicalFunctionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap_2E_element_3F_ result ;
  const GGS_lexicalFunctionMap_2E_element_3F_ * p = (const GGS_lexicalFunctionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element::GGS_templateDelimitorList_2E_element (void) :
mProperty_mStartString (),
mProperty_mEndString (),
mProperty_mPreservesStartDelimiter () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element::GGS_templateDelimitorList_2E_element (const GGS_templateDelimitorList_2E_element & inSource) :
mProperty_mStartString (inSource.mProperty_mStartString),
mProperty_mEndString (inSource.mProperty_mEndString),
mProperty_mPreservesStartDelimiter (inSource.mProperty_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element & GGS_templateDelimitorList_2E_element::operator = (const GGS_templateDelimitorList_2E_element & inSource) {
  mProperty_mStartString = inSource.mProperty_mStartString ;
  mProperty_mEndString = inSource.mProperty_mEndString ;
  mProperty_mPreservesStartDelimiter = inSource.mProperty_mPreservesStartDelimiter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateDelimitorList_2E_element GGS_templateDelimitorList_2E_element::init_21__21__21_ (const GGS_lstring & in_mStartString,
                                                                                             const GGS_lstring & in_mEndString,
                                                                                             const GGS_bool & in_mPreservesStartDelimiter,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateDelimitorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStartString = in_mStartString ;
  result.mProperty_mEndString = in_mEndString ;
  result.mProperty_mPreservesStartDelimiter = in_mPreservesStartDelimiter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element::GGS_templateDelimitorList_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_lstring & inOperand1,
                                                                            const GGS_bool & inOperand2) :
mProperty_mStartString (inOperand0),
mProperty_mEndString (inOperand1),
mProperty_mPreservesStartDelimiter (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateDelimitorList_2E_element::isValid (void) const {
  return mProperty_mStartString.isValid () && mProperty_mEndString.isValid () && mProperty_mPreservesStartDelimiter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList_2E_element::drop (void) {
  mProperty_mStartString.drop () ;
  mProperty_mEndString.drop () ;
  mProperty_mPreservesStartDelimiter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateDelimitorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStartString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesStartDelimiter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateDelimitorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorList_2E_element ("templateDelimitorList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDelimitorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateDelimitorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateDelimitorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element GGS_templateDelimitorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorList_2E_element result ;
  const GGS_templateDelimitorList_2E_element * p = (const GGS_templateDelimitorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateDelimitorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element::GGS_styleMap_2E_element (void) :
mProperty_lkey (),
mProperty_mComment (),
mProperty_mStyleIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element::GGS_styleMap_2E_element (const GGS_styleMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mStyleIndex (inSource.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element & GGS_styleMap_2E_element::operator = (const GGS_styleMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mStyleIndex = inSource.mProperty_mStyleIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_styleMap_2E_element GGS_styleMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                   const GGS_lstring & in_mComment,
                                                                   const GGS_uint & in_mStyleIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_styleMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mStyleIndex = in_mStyleIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element::GGS_styleMap_2E_element (const GGS_lstring & inOperand0,
                                                  const GGS_lstring & inOperand1,
                                                  const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mComment (inOperand1),
mProperty_mStyleIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mComment.isValid () && mProperty_mStyleIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mStyleIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @styleMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @styleMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element ("styleMap.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_styleMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_styleMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_styleMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element GGS_styleMap_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_styleMap_2E_element result ;
  const GGS_styleMap_2E_element * p = (const GGS_styleMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_styleMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @styleMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_::GGS_styleMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_::GGS_styleMap_2E_element_3F_ (const GGS_styleMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_ GGS_styleMap_2E_element_3F_::init_nil (void) {
  GGS_styleMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap_2E_element_3F_::isValid (void) const {
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

bool GGS_styleMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_styleMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element_3F_::description (String & ioString,
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
//     @styleMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element_3F_ ("styleMap.element?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_styleMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_styleMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_styleMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_ GGS_styleMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_styleMap_2E_element_3F_ result ;
  const GGS_styleMap_2E_element_3F_ * p = (const GGS_styleMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_styleMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element::GGS_lexicalTagMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element::GGS_lexicalTagMap_2E_element (const GGS_lexicalTagMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element & GGS_lexicalTagMap_2E_element::operator = (const GGS_lexicalTagMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalTagMap_2E_element GGS_lexicalTagMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTagMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element::GGS_lexicalTagMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalTagMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalTagMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element ("lexicalTagMap.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element GGS_lexicalTagMap_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap_2E_element result ;
  const GGS_lexicalTagMap_2E_element * p = (const GGS_lexicalTagMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalTagMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_::GGS_lexicalTagMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_::GGS_lexicalTagMap_2E_element_3F_ (const GGS_lexicalTagMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_ GGS_lexicalTagMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalTagMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap_2E_element_3F_::isValid (void) const {
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

bool GGS_lexicalTagMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalTagMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element_3F_::description (String & ioString,
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
//     @lexicalTagMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ("lexicalTagMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_ GGS_lexicalTagMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap_2E_element_3F_ result ;
  const GGS_lexicalTagMap_2E_element_3F_ * p = (const GGS_lexicalTagMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element::GGS_grammarLabelMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLabelSignature () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element::GGS_grammarLabelMap_2E_element (const GGS_grammarLabelMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLabelSignature (inSource.mProperty_mLabelSignature) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element & GGS_grammarLabelMap_2E_element::operator = (const GGS_grammarLabelMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLabelSignature = inSource.mProperty_mLabelSignature ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_grammarLabelMap_2E_element GGS_grammarLabelMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_formalParameterSignature & in_mLabelSignature,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_grammarLabelMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelSignature = in_mLabelSignature ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element::GGS_grammarLabelMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_formalParameterSignature & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelSignature (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_grammarLabelMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelSignature.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelSignature.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @grammarLabelMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelSignature.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarLabelMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarLabelMap_2E_element ("grammarLabelMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarLabelMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarLabelMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarLabelMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element GGS_grammarLabelMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap_2E_element result ;
  const GGS_grammarLabelMap_2E_element * p = (const GGS_grammarLabelMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarLabelMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @grammarLabelMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element_3F_::GGS_grammarLabelMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element_3F_::GGS_grammarLabelMap_2E_element_3F_ (const GGS_grammarLabelMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element_3F_ GGS_grammarLabelMap_2E_element_3F_::init_nil (void) {
  GGS_grammarLabelMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_grammarLabelMap_2E_element_3F_::isValid (void) const {
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

bool GGS_grammarLabelMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_grammarLabelMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap_2E_element_3F_::description (String & ioString,
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
//     @grammarLabelMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarLabelMap_2E_element_3F_ ("grammarLabelMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarLabelMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarLabelMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarLabelMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element_3F_ GGS_grammarLabelMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap_2E_element_3F_ result ;
  const GGS_grammarLabelMap_2E_element_3F_ * p = (const GGS_grammarLabelMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarLabelMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element::GGS_grammarMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLabelMap (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element::GGS_grammarMap_2E_element (const GGS_grammarMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLabelMap (inSource.mProperty_mLabelMap),
mProperty_mHasIndexing (inSource.mProperty_mHasIndexing),
mProperty_mHasTranslateFeature (inSource.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element & GGS_grammarMap_2E_element::operator = (const GGS_grammarMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLabelMap = inSource.mProperty_mLabelMap ;
  mProperty_mHasIndexing = inSource.mProperty_mHasIndexing ;
  mProperty_mHasTranslateFeature = inSource.mProperty_mHasTranslateFeature ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_grammarMap_2E_element GGS_grammarMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_grammarLabelMap & in_mLabelMap,
                                                                           const GGS_bool & in_mHasIndexing,
                                                                           const GGS_bool & in_mHasTranslateFeature,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_grammarMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelMap = in_mLabelMap ;
  result.mProperty_mHasIndexing = in_mHasIndexing ;
  result.mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element::GGS_grammarMap_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_grammarLabelMap & inOperand1,
                                                      const GGS_bool & inOperand2,
                                                      const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mLabelMap (inOperand1),
mProperty_mHasIndexing (inOperand2),
mProperty_mHasTranslateFeature (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_grammarMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelMap.isValid () && mProperty_mHasIndexing.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelMap.drop () ;
  mProperty_mHasIndexing.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @grammarMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarMap_2E_element ("grammarMap.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element GGS_grammarMap_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarMap_2E_element result ;
  const GGS_grammarMap_2E_element * p = (const GGS_grammarMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @grammarMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element_3F_::GGS_grammarMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element_3F_::GGS_grammarMap_2E_element_3F_ (const GGS_grammarMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element_3F_ GGS_grammarMap_2E_element_3F_::init_nil (void) {
  GGS_grammarMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_grammarMap_2E_element_3F_::isValid (void) const {
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

bool GGS_grammarMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_grammarMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap_2E_element_3F_::description (String & ioString,
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
//     @grammarMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarMap_2E_element_3F_ ("grammarMap.element?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element_3F_ GGS_grammarMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_grammarMap_2E_element_3F_ result ;
  const GGS_grammarMap_2E_element_3F_ * p = (const GGS_grammarMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element::GGS_functionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mFunctionSignature (),
mProperty_mResultType (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element::GGS_functionMap_2E_element (const GGS_functionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFunctionSignature (inSource.mProperty_mFunctionSignature),
mProperty_mResultType (inSource.mProperty_mResultType),
mProperty_mIsInternal (inSource.mProperty_mIsInternal) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element & GGS_functionMap_2E_element::operator = (const GGS_functionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFunctionSignature = inSource.mProperty_mFunctionSignature ;
  mProperty_mResultType = inSource.mProperty_mResultType ;
  mProperty_mIsInternal = inSource.mProperty_mIsInternal ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_functionMap_2E_element GGS_functionMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_functionSignature & in_mFunctionSignature,
                                                                             const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                             const GGS_bool & in_mIsInternal,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFunctionSignature = in_mFunctionSignature ;
  result.mProperty_mResultType = in_mResultType ;
  result.mProperty_mIsInternal = in_mIsInternal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element::GGS_functionMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_functionSignature & inOperand1,
                                                        const GGS_unifiedTypeMapEntry & inOperand2,
                                                        const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mFunctionSignature (inOperand1),
mProperty_mResultType (inOperand2),
mProperty_mIsInternal (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_functionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFunctionSignature.isValid () && mProperty_mResultType.isValid () && mProperty_mIsInternal.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFunctionSignature.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mIsInternal.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @functionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @functionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionMap_2E_element ("functionMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element GGS_functionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionMap_2E_element result ;
  const GGS_functionMap_2E_element * p = (const GGS_functionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @functionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element_3F_::GGS_functionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element_3F_::GGS_functionMap_2E_element_3F_ (const GGS_functionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element_3F_ GGS_functionMap_2E_element_3F_::init_nil (void) {
  GGS_functionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_functionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_functionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_functionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap_2E_element_3F_::description (String & ioString,
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
//     @functionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionMap_2E_element_3F_ ("functionMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element_3F_ GGS_functionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_functionMap_2E_element_3F_ result ;
  const GGS_functionMap_2E_element_3F_ * p = (const GGS_functionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element::GGS_wrapperFileMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAbsoluteFilePath (),
mProperty_mIsTextFile (),
mProperty_mWrapperDirectoryIndex (),
mProperty_mWrapperFileIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element::GGS_wrapperFileMap_2E_element (const GGS_wrapperFileMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mAbsoluteFilePath (inSource.mProperty_mAbsoluteFilePath),
mProperty_mIsTextFile (inSource.mProperty_mIsTextFile),
mProperty_mWrapperDirectoryIndex (inSource.mProperty_mWrapperDirectoryIndex),
mProperty_mWrapperFileIndex (inSource.mProperty_mWrapperFileIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element & GGS_wrapperFileMap_2E_element::operator = (const GGS_wrapperFileMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mAbsoluteFilePath = inSource.mProperty_mAbsoluteFilePath ;
  mProperty_mIsTextFile = inSource.mProperty_mIsTextFile ;
  mProperty_mWrapperDirectoryIndex = inSource.mProperty_mWrapperDirectoryIndex ;
  mProperty_mWrapperFileIndex = inSource.mProperty_mWrapperFileIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_wrapperFileMap_2E_element GGS_wrapperFileMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_string & in_mAbsoluteFilePath,
                                                                                       const GGS_bool & in_mIsTextFile,
                                                                                       const GGS_uint & in_mWrapperDirectoryIndex,
                                                                                       const GGS_uint & in_mWrapperFileIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_wrapperFileMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAbsoluteFilePath = in_mAbsoluteFilePath ;
  result.mProperty_mIsTextFile = in_mIsTextFile ;
  result.mProperty_mWrapperDirectoryIndex = in_mWrapperDirectoryIndex ;
  result.mProperty_mWrapperFileIndex = in_mWrapperFileIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element::GGS_wrapperFileMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_string & inOperand1,
                                                              const GGS_bool & inOperand2,
                                                              const GGS_uint & inOperand3,
                                                              const GGS_uint & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mAbsoluteFilePath (inOperand1),
mProperty_mIsTextFile (inOperand2),
mProperty_mWrapperDirectoryIndex (inOperand3),
mProperty_mWrapperFileIndex (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperFileMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAbsoluteFilePath.isValid () && mProperty_mIsTextFile.isValid () && mProperty_mWrapperDirectoryIndex.isValid () && mProperty_mWrapperFileIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAbsoluteFilePath.drop () ;
  mProperty_mIsTextFile.drop () ;
  mProperty_mWrapperDirectoryIndex.drop () ;
  mProperty_mWrapperFileIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @wrapperFileMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAbsoluteFilePath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsTextFile.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWrapperFileIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @wrapperFileMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element ("wrapperFileMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperFileMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperFileMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperFileMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element GGS_wrapperFileMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_wrapperFileMap_2E_element result ;
  const GGS_wrapperFileMap_2E_element * p = (const GGS_wrapperFileMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperFileMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @wrapperFileMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element_3F_::GGS_wrapperFileMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element_3F_::GGS_wrapperFileMap_2E_element_3F_ (const GGS_wrapperFileMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element_3F_ GGS_wrapperFileMap_2E_element_3F_::init_nil (void) {
  GGS_wrapperFileMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperFileMap_2E_element_3F_::isValid (void) const {
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

bool GGS_wrapperFileMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_wrapperFileMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperFileMap_2E_element_3F_::description (String & ioString,
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
//     @wrapperFileMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element_3F_ ("wrapperFileMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperFileMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperFileMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperFileMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap_2E_element_3F_ GGS_wrapperFileMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_wrapperFileMap_2E_element_3F_ result ;
  const GGS_wrapperFileMap_2E_element_3F_ * p = (const GGS_wrapperFileMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperFileMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element::GGS_wrapperDirectoryMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRegularFileMap (),
mProperty_mDirectoryMap (),
mProperty_mWrapperDirectoryIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element::GGS_wrapperDirectoryMap_2E_element (const GGS_wrapperDirectoryMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegularFileMap (inSource.mProperty_mRegularFileMap),
mProperty_mDirectoryMap (inSource.mProperty_mDirectoryMap),
mProperty_mWrapperDirectoryIndex (inSource.mProperty_mWrapperDirectoryIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element & GGS_wrapperDirectoryMap_2E_element::operator = (const GGS_wrapperDirectoryMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegularFileMap = inSource.mProperty_mRegularFileMap ;
  mProperty_mDirectoryMap = inSource.mProperty_mDirectoryMap ;
  mProperty_mWrapperDirectoryIndex = inSource.mProperty_mWrapperDirectoryIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element GGS_wrapperDirectoryMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_wrapperFileMap & in_mRegularFileMap,
                                                                                             const GGS_wrapperDirectoryMap & in_mDirectoryMap,
                                                                                             const GGS_uint & in_mWrapperDirectoryIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_wrapperDirectoryMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegularFileMap = in_mRegularFileMap ;
  result.mProperty_mDirectoryMap = in_mDirectoryMap ;
  result.mProperty_mWrapperDirectoryIndex = in_mWrapperDirectoryIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element::GGS_wrapperDirectoryMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_wrapperFileMap & inOperand1,
                                                                        const GGS_wrapperDirectoryMap & inOperand2,
                                                                        const GGS_uint & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mRegularFileMap (inOperand1),
mProperty_mDirectoryMap (inOperand2),
mProperty_mWrapperDirectoryIndex (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperDirectoryMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegularFileMap.isValid () && mProperty_mDirectoryMap.isValid () && mProperty_mWrapperDirectoryIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegularFileMap.drop () ;
  mProperty_mDirectoryMap.drop () ;
  mProperty_mWrapperDirectoryIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @wrapperDirectoryMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegularFileMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDirectoryMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @wrapperDirectoryMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element ("wrapperDirectoryMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperDirectoryMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperDirectoryMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperDirectoryMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element GGS_wrapperDirectoryMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_wrapperDirectoryMap_2E_element result ;
  const GGS_wrapperDirectoryMap_2E_element * p = (const GGS_wrapperDirectoryMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperDirectoryMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @wrapperDirectoryMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element_3F_::GGS_wrapperDirectoryMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element_3F_::GGS_wrapperDirectoryMap_2E_element_3F_ (const GGS_wrapperDirectoryMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element_3F_ GGS_wrapperDirectoryMap_2E_element_3F_::init_nil (void) {
  GGS_wrapperDirectoryMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperDirectoryMap_2E_element_3F_::isValid (void) const {
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

bool GGS_wrapperDirectoryMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_wrapperDirectoryMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperDirectoryMap_2E_element_3F_::description (String & ioString,
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
//     @wrapperDirectoryMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element_3F_ ("wrapperDirectoryMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperDirectoryMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperDirectoryMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperDirectoryMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap_2E_element_3F_ GGS_wrapperDirectoryMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_wrapperDirectoryMap_2E_element_3F_ result ;
  const GGS_wrapperDirectoryMap_2E_element_3F_ * p = (const GGS_wrapperDirectoryMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperDirectoryMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element::GGS_filewrapperTemplateMap_2E_element (void) :
mProperty_lkey (),
mProperty_mTemplateSignature (),
mProperty_mFilewrapperTemplatePath () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element::GGS_filewrapperTemplateMap_2E_element (const GGS_filewrapperTemplateMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mTemplateSignature (inSource.mProperty_mTemplateSignature),
mProperty_mFilewrapperTemplatePath (inSource.mProperty_mFilewrapperTemplatePath) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element & GGS_filewrapperTemplateMap_2E_element::operator = (const GGS_filewrapperTemplateMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mTemplateSignature = inSource.mProperty_mTemplateSignature ;
  mProperty_mFilewrapperTemplatePath = inSource.mProperty_mFilewrapperTemplatePath ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element GGS_filewrapperTemplateMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_functionSignature & in_mTemplateSignature,
                                                                                               const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTemplateSignature = in_mTemplateSignature ;
  result.mProperty_mFilewrapperTemplatePath = in_mFilewrapperTemplatePath ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element::GGS_filewrapperTemplateMap_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_functionSignature & inOperand1,
                                                                              const GGS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mTemplateSignature (inOperand1),
mProperty_mFilewrapperTemplatePath (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTemplateSignature.isValid () && mProperty_mFilewrapperTemplatePath.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTemplateSignature.drop () ;
  mProperty_mFilewrapperTemplatePath.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element ("filewrapperTemplateMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element GGS_filewrapperTemplateMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap_2E_element result ;
  const GGS_filewrapperTemplateMap_2E_element * p = (const GGS_filewrapperTemplateMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @filewrapperTemplateMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element_3F_::GGS_filewrapperTemplateMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element_3F_::GGS_filewrapperTemplateMap_2E_element_3F_ (const GGS_filewrapperTemplateMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element_3F_ GGS_filewrapperTemplateMap_2E_element_3F_::init_nil (void) {
  GGS_filewrapperTemplateMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateMap_2E_element_3F_::isValid (void) const {
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

bool GGS_filewrapperTemplateMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_filewrapperTemplateMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap_2E_element_3F_::description (String & ioString,
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
//     @filewrapperTemplateMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element_3F_ ("filewrapperTemplateMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element_3F_ GGS_filewrapperTemplateMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap_2E_element_3F_ result ;
  const GGS_filewrapperTemplateMap_2E_element_3F_ * p = (const GGS_filewrapperTemplateMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element::GGS_filewrapperMap_2E_element (void) :
mProperty_lkey (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperExtensionList (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateMap (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element::GGS_filewrapperMap_2E_element (const GGS_filewrapperMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFilewrapperPath (inSource.mProperty_mFilewrapperPath),
mProperty_mFilewrapperExtensionList (inSource.mProperty_mFilewrapperExtensionList),
mProperty_mFilewrapperFileMap (inSource.mProperty_mFilewrapperFileMap),
mProperty_mFilewrapperDirectoryMap (inSource.mProperty_mFilewrapperDirectoryMap),
mProperty_mFilewrapperTemplateMap (inSource.mProperty_mFilewrapperTemplateMap),
mProperty_mIsInternal (inSource.mProperty_mIsInternal) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element & GGS_filewrapperMap_2E_element::operator = (const GGS_filewrapperMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFilewrapperPath = inSource.mProperty_mFilewrapperPath ;
  mProperty_mFilewrapperExtensionList = inSource.mProperty_mFilewrapperExtensionList ;
  mProperty_mFilewrapperFileMap = inSource.mProperty_mFilewrapperFileMap ;
  mProperty_mFilewrapperDirectoryMap = inSource.mProperty_mFilewrapperDirectoryMap ;
  mProperty_mFilewrapperTemplateMap = inSource.mProperty_mFilewrapperTemplateMap ;
  mProperty_mIsInternal = inSource.mProperty_mIsInternal ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperMap_2E_element GGS_filewrapperMap_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_lstring & in_mFilewrapperPath,
                                                                                               const GGS_lstringlist & in_mFilewrapperExtensionList,
                                                                                               const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                               const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                               const GGS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                                                                               const GGS_bool & in_mIsInternal,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  result.mProperty_mFilewrapperExtensionList = in_mFilewrapperExtensionList ;
  result.mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  result.mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  result.mProperty_mFilewrapperTemplateMap = in_mFilewrapperTemplateMap ;
  result.mProperty_mIsInternal = in_mIsInternal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element::GGS_filewrapperMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_lstring & inOperand1,
                                                              const GGS_lstringlist & inOperand2,
                                                              const GGS_wrapperFileMap & inOperand3,
                                                              const GGS_wrapperDirectoryMap & inOperand4,
                                                              const GGS_filewrapperTemplateMap & inOperand5,
                                                              const GGS_bool & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mFilewrapperPath (inOperand1),
mProperty_mFilewrapperExtensionList (inOperand2),
mProperty_mFilewrapperFileMap (inOperand3),
mProperty_mFilewrapperDirectoryMap (inOperand4),
mProperty_mFilewrapperTemplateMap (inOperand5),
mProperty_mIsInternal (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFilewrapperPath.isValid () && mProperty_mFilewrapperExtensionList.isValid () && mProperty_mFilewrapperFileMap.isValid () && mProperty_mFilewrapperDirectoryMap.isValid () && mProperty_mFilewrapperTemplateMap.isValid () && mProperty_mIsInternal.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFilewrapperPath.drop () ;
  mProperty_mFilewrapperExtensionList.drop () ;
  mProperty_mFilewrapperFileMap.drop () ;
  mProperty_mFilewrapperDirectoryMap.drop () ;
  mProperty_mFilewrapperTemplateMap.drop () ;
  mProperty_mIsInternal.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperExtensionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element ("filewrapperMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element GGS_filewrapperMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap_2E_element result ;
  const GGS_filewrapperMap_2E_element * p = (const GGS_filewrapperMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @filewrapperMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element_3F_::GGS_filewrapperMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element_3F_::GGS_filewrapperMap_2E_element_3F_ (const GGS_filewrapperMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element_3F_ GGS_filewrapperMap_2E_element_3F_::init_nil (void) {
  GGS_filewrapperMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperMap_2E_element_3F_::isValid (void) const {
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

bool GGS_filewrapperMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_filewrapperMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap_2E_element_3F_::description (String & ioString,
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
//     @filewrapperMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element_3F_ ("filewrapperMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element_3F_ GGS_filewrapperMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap_2E_element_3F_ result ;
  const GGS_filewrapperMap_2E_element_3F_ * p = (const GGS_filewrapperMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element::GGS_optionComponentMapForSemanticAnalysis_2E_element (void) :
mProperty_lkey (),
mProperty_mIsPredefined (),
mProperty_mBoolOptionMap (),
mProperty_mUIntOptionMap (),
mProperty_mStringOptionMap (),
mProperty_mStringListOptionMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element::GGS_optionComponentMapForSemanticAnalysis_2E_element (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsPredefined (inSource.mProperty_mIsPredefined),
mProperty_mBoolOptionMap (inSource.mProperty_mBoolOptionMap),
mProperty_mUIntOptionMap (inSource.mProperty_mUIntOptionMap),
mProperty_mStringOptionMap (inSource.mProperty_mStringOptionMap),
mProperty_mStringListOptionMap (inSource.mProperty_mStringListOptionMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element & GGS_optionComponentMapForSemanticAnalysis_2E_element::operator = (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsPredefined = inSource.mProperty_mIsPredefined ;
  mProperty_mBoolOptionMap = inSource.mProperty_mBoolOptionMap ;
  mProperty_mUIntOptionMap = inSource.mProperty_mUIntOptionMap ;
  mProperty_mStringOptionMap = inSource.mProperty_mStringOptionMap ;
  mProperty_mStringListOptionMap = inSource.mProperty_mStringListOptionMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element GGS_optionComponentMapForSemanticAnalysis_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                                         const GGS_bool & in_mIsPredefined,
                                                                                                                                         const GGS_commandLineOptionMap & in_mBoolOptionMap,
                                                                                                                                         const GGS_commandLineOptionMap & in_mUIntOptionMap,
                                                                                                                                         const GGS_commandLineOptionMap & in_mStringOptionMap,
                                                                                                                                         const GGS_commandLineOptionMap & in_mStringListOptionMap,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPredefined = in_mIsPredefined ;
  result.mProperty_mBoolOptionMap = in_mBoolOptionMap ;
  result.mProperty_mUIntOptionMap = in_mUIntOptionMap ;
  result.mProperty_mStringOptionMap = in_mStringOptionMap ;
  result.mProperty_mStringListOptionMap = in_mStringListOptionMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element::GGS_optionComponentMapForSemanticAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                            const GGS_bool & inOperand1,
                                                                                                            const GGS_commandLineOptionMap & inOperand2,
                                                                                                            const GGS_commandLineOptionMap & inOperand3,
                                                                                                            const GGS_commandLineOptionMap & inOperand4,
                                                                                                            const GGS_commandLineOptionMap & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mIsPredefined (inOperand1),
mProperty_mBoolOptionMap (inOperand2),
mProperty_mUIntOptionMap (inOperand3),
mProperty_mStringOptionMap (inOperand4),
mProperty_mStringListOptionMap (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForSemanticAnalysis_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPredefined.isValid () && mProperty_mBoolOptionMap.isValid () && mProperty_mUIntOptionMap.isValid () && mProperty_mStringOptionMap.isValid () && mProperty_mStringListOptionMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPredefined.drop () ;
  mProperty_mBoolOptionMap.drop () ;
  mProperty_mUIntOptionMap.drop () ;
  mProperty_mStringOptionMap.drop () ;
  mProperty_mStringListOptionMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionComponentMapForSemanticAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoolOptionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUIntOptionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringOptionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringListOptionMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForSemanticAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element ("optionComponentMapForSemanticAnalysis.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForSemanticAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForSemanticAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForSemanticAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element GGS_optionComponentMapForSemanticAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis_2E_element result ;
  const GGS_optionComponentMapForSemanticAnalysis_2E_element * p = (const GGS_optionComponentMapForSemanticAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForSemanticAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @optionComponentMapForSemanticAnalysis_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::init_nil (void) {
  GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::isValid (void) const {
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

bool GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_optionComponentMapForSemanticAnalysis_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::description (String & ioString,
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
//     @optionComponentMapForSemanticAnalysis.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element_3F_ ("optionComponentMapForSemanticAnalysis.element?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  const GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ * p = (const GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (void) :
mProperty_lkey (),
mProperty_mIsTemplate (),
mProperty_mTerminalMap (),
mProperty_mIndexingListAST (),
mProperty_mTerminalListAST (),
mProperty_mLexicalAttributeListAST (),
mProperty_mLexicalStyleListAST (),
mProperty_mLexicalListDeclarationListAST () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsTemplate (inSource.mProperty_mIsTemplate),
mProperty_mTerminalMap (inSource.mProperty_mTerminalMap),
mProperty_mIndexingListAST (inSource.mProperty_mIndexingListAST),
mProperty_mTerminalListAST (inSource.mProperty_mTerminalListAST),
mProperty_mLexicalAttributeListAST (inSource.mProperty_mLexicalAttributeListAST),
mProperty_mLexicalStyleListAST (inSource.mProperty_mLexicalStyleListAST),
mProperty_mLexicalListDeclarationListAST (inSource.mProperty_mLexicalListDeclarationListAST) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::operator = (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsTemplate = inSource.mProperty_mIsTemplate ;
  mProperty_mTerminalMap = inSource.mProperty_mTerminalMap ;
  mProperty_mIndexingListAST = inSource.mProperty_mIndexingListAST ;
  mProperty_mTerminalListAST = inSource.mProperty_mTerminalListAST ;
  mProperty_mLexicalAttributeListAST = inSource.mProperty_mLexicalAttributeListAST ;
  mProperty_mLexicalStyleListAST = inSource.mProperty_mLexicalStyleListAST ;
  mProperty_mLexicalListDeclarationListAST = inSource.mProperty_mLexicalListDeclarationListAST ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                                                   const GGS_bool & in_mIsTemplate,
                                                                                                                                                   const GGS_terminalMap & in_mTerminalMap,
                                                                                                                                                   const GGS_indexingListAST & in_mIndexingListAST,
                                                                                                                                                   const GGS_terminalDeclarationListAST & in_mTerminalListAST,
                                                                                                                                                   const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                                                                                                   const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                                                                                                   const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsTemplate = in_mIsTemplate ;
  result.mProperty_mTerminalMap = in_mTerminalMap ;
  result.mProperty_mIndexingListAST = in_mIndexingListAST ;
  result.mProperty_mTerminalListAST = in_mTerminalListAST ;
  result.mProperty_mLexicalAttributeListAST = in_mLexicalAttributeListAST ;
  result.mProperty_mLexicalStyleListAST = in_mLexicalStyleListAST ;
  result.mProperty_mLexicalListDeclarationListAST = in_mLexicalListDeclarationListAST ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                              const GGS_bool & inOperand1,
                                                                                                              const GGS_terminalMap & inOperand2,
                                                                                                              const GGS_indexingListAST & inOperand3,
                                                                                                              const GGS_terminalDeclarationListAST & inOperand4,
                                                                                                              const GGS_lexicalAttributeListAST & inOperand5,
                                                                                                              const GGS_lexicalStyleListAST & inOperand6,
                                                                                                              const GGS_lexicalListDeclarationListAST & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mIsTemplate (inOperand1),
mProperty_mTerminalMap (inOperand2),
mProperty_mIndexingListAST (inOperand3),
mProperty_mTerminalListAST (inOperand4),
mProperty_mLexicalAttributeListAST (inOperand5),
mProperty_mLexicalStyleListAST (inOperand6),
mProperty_mLexicalListDeclarationListAST (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsTemplate.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mIndexingListAST.isValid () && mProperty_mTerminalListAST.isValid () && mProperty_mLexicalAttributeListAST.isValid () && mProperty_mLexicalStyleListAST.isValid () && mProperty_mLexicalListDeclarationListAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsTemplate.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mIndexingListAST.drop () ;
  mProperty_mTerminalListAST.drop () ;
  mProperty_mLexicalAttributeListAST.drop () ;
  mProperty_mLexicalStyleListAST.drop () ;
  mProperty_mLexicalListDeclarationListAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexiqueComponentMapForSemanticAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsTemplate.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalAttributeListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalStyleListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalListDeclarationListAST.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueComponentMapForSemanticAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element ("lexiqueComponentMapForSemanticAnalysis.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis_2E_element result ;
  const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element * p = (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexiqueComponentMapForSemanticAnalysis_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::init_nil (void) {
  GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::isValid (void) const {
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

bool GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexiqueComponentMapForSemanticAnalysis_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::description (String & ioString,
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
//     @lexiqueComponentMapForSemanticAnalysis.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ ("lexiqueComponentMapForSemanticAnalysis.element?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ * p = (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element::GGS_syntaxComponentMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element::GGS_syntaxComponentMap_2E_element (const GGS_syntaxComponentMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexiqueName (inSource.mProperty_mLexiqueName),
mProperty_mNonterminalDeclarationList (inSource.mProperty_mNonterminalDeclarationList),
mProperty_mRuleList (inSource.mProperty_mRuleList),
mProperty_mHasTranslateFeature (inSource.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element & GGS_syntaxComponentMap_2E_element::operator = (const GGS_syntaxComponentMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexiqueName = inSource.mProperty_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = inSource.mProperty_mNonterminalDeclarationList ;
  mProperty_mRuleList = inSource.mProperty_mRuleList ;
  mProperty_mHasTranslateFeature = inSource.mProperty_mHasTranslateFeature ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element GGS_syntaxComponentMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_lstring & in_mLexiqueName,
                                                                                               const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                               const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                               const GGS_bool & in_mHasTranslateFeature,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxComponentMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexiqueName = in_mLexiqueName ;
  result.mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  result.mProperty_mRuleList = in_mRuleList ;
  result.mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element::GGS_syntaxComponentMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_lstring & inOperand1,
                                                                      const GGS_nonterminalDeclarationListAST & inOperand2,
                                                                      const GGS_syntaxRuleListAST & inOperand3,
                                                                      const GGS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mLexiqueName (inOperand1),
mProperty_mNonterminalDeclarationList (inOperand2),
mProperty_mRuleList (inOperand3),
mProperty_mHasTranslateFeature (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxComponentMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexiqueName.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxComponentMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxComponentMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element ("syntaxComponentMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxComponentMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxComponentMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element GGS_syntaxComponentMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap_2E_element result ;
  const GGS_syntaxComponentMap_2E_element * p = (const GGS_syntaxComponentMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @syntaxComponentMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element_3F_::GGS_syntaxComponentMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element_3F_::GGS_syntaxComponentMap_2E_element_3F_ (const GGS_syntaxComponentMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element_3F_ GGS_syntaxComponentMap_2E_element_3F_::init_nil (void) {
  GGS_syntaxComponentMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxComponentMap_2E_element_3F_::isValid (void) const {
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

bool GGS_syntaxComponentMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_syntaxComponentMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap_2E_element_3F_::description (String & ioString,
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
//     @syntaxComponentMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element_3F_ ("syntaxComponentMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxComponentMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxComponentMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element_3F_ GGS_syntaxComponentMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap_2E_element_3F_ result ;
  const GGS_syntaxComponentMap_2E_element_3F_ * p = (const GGS_syntaxComponentMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element::GGS_extensionInitializerMapForType_2E_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element::GGS_extensionInitializerMapForType_2E_element (const GGS_extensionInitializerMapForType_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFormalParameterList (inSource.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element & GGS_extensionInitializerMapForType_2E_element::operator = (const GGS_extensionInitializerMapForType_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFormalParameterList = inSource.mProperty_mFormalParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element GGS_extensionInitializerMapForType_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                           const GGS_formalInputParameterListAST & in_mFormalParameterList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element::GGS_extensionInitializerMapForType_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_formalInputParameterListAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionInitializerMapForType_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionInitializerMapForType.element:") ;
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
//     @extensionInitializerMapForType.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element ("extensionInitializerMapForType.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerMapForType_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerMapForType_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerMapForType_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element GGS_extensionInitializerMapForType_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType_2E_element result ;
  const GGS_extensionInitializerMapForType_2E_element * p = (const GGS_extensionInitializerMapForType_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerMapForType_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerMapForType.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionInitializerMapForType_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element_3F_::GGS_extensionInitializerMapForType_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element_3F_::GGS_extensionInitializerMapForType_2E_element_3F_ (const GGS_extensionInitializerMapForType_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element_3F_ GGS_extensionInitializerMapForType_2E_element_3F_::init_nil (void) {
  GGS_extensionInitializerMapForType_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionInitializerMapForType_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionInitializerMapForType_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionInitializerMapForType_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType_2E_element_3F_::description (String & ioString,
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
//     @extensionInitializerMapForType.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element_3F_ ("extensionInitializerMapForType.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerMapForType_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerMapForType_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element_3F_ GGS_extensionInitializerMapForType_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType_2E_element_3F_ result ;
  const GGS_extensionInitializerMapForType_2E_element_3F_ * p = (const GGS_extensionInitializerMapForType_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerMapForType_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerMapForType.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element::GGS_extensionInitializerForBuildingContext_2E_element (void) :
mProperty_lkey (),
mProperty_mExtensionInitializerMapForType () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element::GGS_extensionInitializerForBuildingContext_2E_element (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExtensionInitializerMapForType (inSource.mProperty_mExtensionInitializerMapForType) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element & GGS_extensionInitializerForBuildingContext_2E_element::operator = (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExtensionInitializerMapForType = inSource.mProperty_mExtensionInitializerMapForType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element GGS_extensionInitializerForBuildingContext_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                           const GGS_extensionInitializerMapForType & in_mExtensionInitializerMapForType,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionInitializerMapForType = in_mExtensionInitializerMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element::GGS_extensionInitializerForBuildingContext_2E_element (const GGS_lstring & inOperand0,
                                                                                                              const GGS_extensionInitializerMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionInitializerMapForType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionInitializerForBuildingContext_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionInitializerMapForType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionInitializerMapForType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionInitializerForBuildingContext.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtensionInitializerMapForType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionInitializerForBuildingContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element ("extensionInitializerForBuildingContext.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerForBuildingContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerForBuildingContext_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerForBuildingContext_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element GGS_extensionInitializerForBuildingContext_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext_2E_element result ;
  const GGS_extensionInitializerForBuildingContext_2E_element * p = (const GGS_extensionInitializerForBuildingContext_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerForBuildingContext_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerForBuildingContext.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionInitializerForBuildingContext_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element_3F_::GGS_extensionInitializerForBuildingContext_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element_3F_::GGS_extensionInitializerForBuildingContext_2E_element_3F_ (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element_3F_ GGS_extensionInitializerForBuildingContext_2E_element_3F_::init_nil (void) {
  GGS_extensionInitializerForBuildingContext_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionInitializerForBuildingContext_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionInitializerForBuildingContext_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionInitializerForBuildingContext_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext_2E_element_3F_::description (String & ioString,
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
//     @extensionInitializerForBuildingContext.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element_3F_ ("extensionInitializerForBuildingContext.element?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerForBuildingContext_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerForBuildingContext_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element_3F_ GGS_extensionInitializerForBuildingContext_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext_2E_element_3F_ result ;
  const GGS_extensionInitializerForBuildingContext_2E_element_3F_ * p = (const GGS_extensionInitializerForBuildingContext_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerForBuildingContext_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerForBuildingContext.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element::GGS_extensionMethodMapForType_2E_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList (),
mProperty_mQualifier () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element::GGS_extensionMethodMapForType_2E_element (const GGS_extensionMethodMapForType_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFormalParameterList (inSource.mProperty_mFormalParameterList),
mProperty_mQualifier (inSource.mProperty_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element & GGS_extensionMethodMapForType_2E_element::operator = (const GGS_extensionMethodMapForType_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFormalParameterList = inSource.mProperty_mFormalParameterList ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element GGS_extensionMethodMapForType_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                     const GGS_formalParameterListAST & in_mFormalParameterList,
                                                                                                     const GGS_methodQualifier & in_mQualifier,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionMethodMapForType_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  result.mProperty_mQualifier = in_mQualifier ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element::GGS_extensionMethodMapForType_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_formalParameterListAST & inOperand1,
                                                                                    const GGS_methodQualifier & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1),
mProperty_mQualifier (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForType_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () && mProperty_mQualifier.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
  mProperty_mQualifier.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionMethodMapForType.element:") ;
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
//     @extensionMethodMapForType.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element ("extensionMethodMapForType.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForType_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForType_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForType_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element GGS_extensionMethodMapForType_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType_2E_element result ;
  const GGS_extensionMethodMapForType_2E_element * p = (const GGS_extensionMethodMapForType_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForType_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionMethodMapForType_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element_3F_::GGS_extensionMethodMapForType_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element_3F_::GGS_extensionMethodMapForType_2E_element_3F_ (const GGS_extensionMethodMapForType_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element_3F_ GGS_extensionMethodMapForType_2E_element_3F_::init_nil (void) {
  GGS_extensionMethodMapForType_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForType_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionMethodMapForType_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionMethodMapForType_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType_2E_element_3F_::description (String & ioString,
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
//     @extensionMethodMapForType.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element_3F_ ("extensionMethodMapForType.element?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForType_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForType_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element_3F_ GGS_extensionMethodMapForType_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType_2E_element_3F_ result ;
  const GGS_extensionMethodMapForType_2E_element_3F_ * p = (const GGS_extensionMethodMapForType_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForType_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element::GGS_extensionMethodMapForBuildingContext_2E_element (void) :
mProperty_lkey (),
mProperty_mExtensionMethodMapForType () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element::GGS_extensionMethodMapForBuildingContext_2E_element (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExtensionMethodMapForType (inSource.mProperty_mExtensionMethodMapForType) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element & GGS_extensionMethodMapForBuildingContext_2E_element::operator = (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExtensionMethodMapForType = inSource.mProperty_mExtensionMethodMapForType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element GGS_extensionMethodMapForBuildingContext_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                       const GGS_extensionMethodMapForType & in_mExtensionMethodMapForType,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionMethodMapForType = in_mExtensionMethodMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element::GGS_extensionMethodMapForBuildingContext_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_extensionMethodMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionMethodMapForType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForBuildingContext_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionMethodMapForType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionMethodMapForType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionMethodMapForBuildingContext.element:") ;
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
//     @extensionMethodMapForBuildingContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element ("extensionMethodMapForBuildingContext.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForBuildingContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForBuildingContext_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForBuildingContext_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element GGS_extensionMethodMapForBuildingContext_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext_2E_element result ;
  const GGS_extensionMethodMapForBuildingContext_2E_element * p = (const GGS_extensionMethodMapForBuildingContext_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForBuildingContext_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionMethodMapForBuildingContext_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element_3F_::GGS_extensionMethodMapForBuildingContext_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element_3F_::GGS_extensionMethodMapForBuildingContext_2E_element_3F_ (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element_3F_ GGS_extensionMethodMapForBuildingContext_2E_element_3F_::init_nil (void) {
  GGS_extensionMethodMapForBuildingContext_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForBuildingContext_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionMethodMapForBuildingContext_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionMethodMapForBuildingContext_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext_2E_element_3F_::description (String & ioString,
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
//     @extensionMethodMapForBuildingContext.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element_3F_ ("extensionMethodMapForBuildingContext.element?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForBuildingContext_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForBuildingContext_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element_3F_ GGS_extensionMethodMapForBuildingContext_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext_2E_element_3F_ result ;
  const GGS_extensionMethodMapForBuildingContext_2E_element_3F_ * p = (const GGS_extensionMethodMapForBuildingContext_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForBuildingContext_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element::GGS_extensionSetterMapForType_2E_element (void) :
mProperty_lkey (),
mProperty_mFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element::GGS_extensionSetterMapForType_2E_element (const GGS_extensionSetterMapForType_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFormalParameterList (inSource.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element & GGS_extensionSetterMapForType_2E_element::operator = (const GGS_extensionSetterMapForType_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFormalParameterList = inSource.mProperty_mFormalParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element GGS_extensionSetterMapForType_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_formalParameterListAST & in_mFormalParameterList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionSetterMapForType_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element::GGS_extensionSetterMapForType_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_formalParameterListAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForType_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionSetterMapForType.element:") ;
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
//     @extensionSetterMapForType.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element ("extensionSetterMapForType.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForType_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForType_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForType_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element GGS_extensionSetterMapForType_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType_2E_element result ;
  const GGS_extensionSetterMapForType_2E_element * p = (const GGS_extensionSetterMapForType_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForType_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionSetterMapForType_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element_3F_::GGS_extensionSetterMapForType_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element_3F_::GGS_extensionSetterMapForType_2E_element_3F_ (const GGS_extensionSetterMapForType_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element_3F_ GGS_extensionSetterMapForType_2E_element_3F_::init_nil (void) {
  GGS_extensionSetterMapForType_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForType_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionSetterMapForType_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionSetterMapForType_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType_2E_element_3F_::description (String & ioString,
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
//     @extensionSetterMapForType.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element_3F_ ("extensionSetterMapForType.element?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForType_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForType_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element_3F_ GGS_extensionSetterMapForType_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType_2E_element_3F_ result ;
  const GGS_extensionSetterMapForType_2E_element_3F_ * p = (const GGS_extensionSetterMapForType_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForType_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element::GGS_extensionSetterMapForBuildingContext_2E_element (void) :
mProperty_lkey (),
mProperty_mExtensionSetterMapForType () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element::GGS_extensionSetterMapForBuildingContext_2E_element (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExtensionSetterMapForType (inSource.mProperty_mExtensionSetterMapForType) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element & GGS_extensionSetterMapForBuildingContext_2E_element::operator = (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExtensionSetterMapForType = inSource.mProperty_mExtensionSetterMapForType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element GGS_extensionSetterMapForBuildingContext_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                       const GGS_extensionSetterMapForType & in_mExtensionSetterMapForType,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionSetterMapForType = in_mExtensionSetterMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element::GGS_extensionSetterMapForBuildingContext_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_extensionSetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionSetterMapForType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForBuildingContext_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionSetterMapForType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionSetterMapForType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionSetterMapForBuildingContext.element:") ;
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
//     @extensionSetterMapForBuildingContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element ("extensionSetterMapForBuildingContext.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForBuildingContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForBuildingContext_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForBuildingContext_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element GGS_extensionSetterMapForBuildingContext_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext_2E_element result ;
  const GGS_extensionSetterMapForBuildingContext_2E_element * p = (const GGS_extensionSetterMapForBuildingContext_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForBuildingContext_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionSetterMapForBuildingContext_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element_3F_::GGS_extensionSetterMapForBuildingContext_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element_3F_::GGS_extensionSetterMapForBuildingContext_2E_element_3F_ (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element_3F_ GGS_extensionSetterMapForBuildingContext_2E_element_3F_::init_nil (void) {
  GGS_extensionSetterMapForBuildingContext_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForBuildingContext_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionSetterMapForBuildingContext_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionSetterMapForBuildingContext_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext_2E_element_3F_::description (String & ioString,
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
//     @extensionSetterMapForBuildingContext.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element_3F_ ("extensionSetterMapForBuildingContext.element?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForBuildingContext_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForBuildingContext_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element_3F_ GGS_extensionSetterMapForBuildingContext_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext_2E_element_3F_ result ;
  const GGS_extensionSetterMapForBuildingContext_2E_element_3F_ * p = (const GGS_extensionSetterMapForBuildingContext_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForBuildingContext_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element::GGS_extensionGetterMapForType_2E_element (void) :
mProperty_lkey (),
mProperty_mResultTypeName (),
mProperty_mInputFormalParameterList (),
mProperty_mQualifier () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element::GGS_extensionGetterMapForType_2E_element (const GGS_extensionGetterMapForType_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mResultTypeName (inSource.mProperty_mResultTypeName),
mProperty_mInputFormalParameterList (inSource.mProperty_mInputFormalParameterList),
mProperty_mQualifier (inSource.mProperty_mQualifier) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element & GGS_extensionGetterMapForType_2E_element::operator = (const GGS_extensionGetterMapForType_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mResultTypeName = inSource.mProperty_mResultTypeName ;
  mProperty_mInputFormalParameterList = inSource.mProperty_mInputFormalParameterList ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element GGS_extensionGetterMapForType_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                         const GGS_lstring & in_mResultTypeName,
                                                                                                         const GGS_formalInputParameterListAST & in_mInputFormalParameterList,
                                                                                                         const GGS_methodQualifier & in_mQualifier,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionGetterMapForType_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mResultTypeName = in_mResultTypeName ;
  result.mProperty_mInputFormalParameterList = in_mInputFormalParameterList ;
  result.mProperty_mQualifier = in_mQualifier ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element::GGS_extensionGetterMapForType_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_lstring & inOperand1,
                                                                                    const GGS_formalInputParameterListAST & inOperand2,
                                                                                    const GGS_methodQualifier & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mResultTypeName (inOperand1),
mProperty_mInputFormalParameterList (inOperand2),
mProperty_mQualifier (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForType_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mInputFormalParameterList.isValid () && mProperty_mQualifier.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultTypeName.drop () ;
  mProperty_mInputFormalParameterList.drop () ;
  mProperty_mQualifier.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionGetterMapForType.element:") ;
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
//     @extensionGetterMapForType.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element ("extensionGetterMapForType.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForType_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForType_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForType_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element GGS_extensionGetterMapForType_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType_2E_element result ;
  const GGS_extensionGetterMapForType_2E_element * p = (const GGS_extensionGetterMapForType_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForType_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionGetterMapForType_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element_3F_::GGS_extensionGetterMapForType_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element_3F_::GGS_extensionGetterMapForType_2E_element_3F_ (const GGS_extensionGetterMapForType_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element_3F_ GGS_extensionGetterMapForType_2E_element_3F_::init_nil (void) {
  GGS_extensionGetterMapForType_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForType_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionGetterMapForType_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionGetterMapForType_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType_2E_element_3F_::description (String & ioString,
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
//     @extensionGetterMapForType.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element_3F_ ("extensionGetterMapForType.element?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForType_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForType_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element_3F_ GGS_extensionGetterMapForType_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType_2E_element_3F_ result ;
  const GGS_extensionGetterMapForType_2E_element_3F_ * p = (const GGS_extensionGetterMapForType_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForType_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element::GGS_extensionGetterMapForBuildingContext_2E_element (void) :
mProperty_lkey (),
mProperty_mExtensionGetterMapForType () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element::GGS_extensionGetterMapForBuildingContext_2E_element (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExtensionGetterMapForType (inSource.mProperty_mExtensionGetterMapForType) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element & GGS_extensionGetterMapForBuildingContext_2E_element::operator = (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExtensionGetterMapForType = inSource.mProperty_mExtensionGetterMapForType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element GGS_extensionGetterMapForBuildingContext_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                       const GGS_extensionGetterMapForType & in_mExtensionGetterMapForType,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtensionGetterMapForType = in_mExtensionGetterMapForType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element::GGS_extensionGetterMapForBuildingContext_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_extensionGetterMapForType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtensionGetterMapForType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForBuildingContext_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionGetterMapForType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtensionGetterMapForType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionGetterMapForBuildingContext.element:") ;
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
//     @extensionGetterMapForBuildingContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element ("extensionGetterMapForBuildingContext.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForBuildingContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForBuildingContext_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForBuildingContext_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element GGS_extensionGetterMapForBuildingContext_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext_2E_element result ;
  const GGS_extensionGetterMapForBuildingContext_2E_element * p = (const GGS_extensionGetterMapForBuildingContext_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForBuildingContext_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionGetterMapForBuildingContext_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element_3F_::GGS_extensionGetterMapForBuildingContext_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element_3F_::GGS_extensionGetterMapForBuildingContext_2E_element_3F_ (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element_3F_ GGS_extensionGetterMapForBuildingContext_2E_element_3F_::init_nil (void) {
  GGS_extensionGetterMapForBuildingContext_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForBuildingContext_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionGetterMapForBuildingContext_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionGetterMapForBuildingContext_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext_2E_element_3F_::description (String & ioString,
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
//     @extensionGetterMapForBuildingContext.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element_3F_ ("extensionGetterMapForBuildingContext.element?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForBuildingContext_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForBuildingContext_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element_3F_ GGS_extensionGetterMapForBuildingContext_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext_2E_element_3F_ result ;
  const GGS_extensionGetterMapForBuildingContext_2E_element_3F_ * p = (const GGS_extensionGetterMapForBuildingContext_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForBuildingContext_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element::GGS_wrapperExtensionMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element::GGS_wrapperExtensionMap_2E_element (const GGS_wrapperExtensionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element & GGS_wrapperExtensionMap_2E_element::operator = (const GGS_wrapperExtensionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element GGS_wrapperExtensionMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_wrapperExtensionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element::GGS_wrapperExtensionMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperExtensionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @wrapperExtensionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @wrapperExtensionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element ("wrapperExtensionMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperExtensionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperExtensionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperExtensionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element GGS_wrapperExtensionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap_2E_element result ;
  const GGS_wrapperExtensionMap_2E_element * p = (const GGS_wrapperExtensionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperExtensionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @wrapperExtensionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element_3F_::GGS_wrapperExtensionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element_3F_::GGS_wrapperExtensionMap_2E_element_3F_ (const GGS_wrapperExtensionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element_3F_ GGS_wrapperExtensionMap_2E_element_3F_::init_nil (void) {
  GGS_wrapperExtensionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperExtensionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_wrapperExtensionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_wrapperExtensionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap_2E_element_3F_::description (String & ioString,
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
//     @wrapperExtensionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element_3F_ ("wrapperExtensionMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperExtensionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperExtensionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperExtensionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element_3F_ GGS_wrapperExtensionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap_2E_element_3F_ result ;
  const GGS_wrapperExtensionMap_2E_element_3F_ * p = (const GGS_wrapperExtensionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperExtensionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element::GGS_uselessEntityLocationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mUnusedEntityName (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element::GGS_uselessEntityLocationMap_2E_element (const GGS_uselessEntityLocationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mUnusedEntityName (inSource.mProperty_mUnusedEntityName),
mProperty_mLocation (inSource.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element & GGS_uselessEntityLocationMap_2E_element::operator = (const GGS_uselessEntityLocationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mUnusedEntityName = inSource.mProperty_mUnusedEntityName ;
  mProperty_mLocation = inSource.mProperty_mLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element GGS_uselessEntityLocationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_string & in_mUnusedEntityName,
                                                                                                   const GGS_location & in_mLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mUnusedEntityName = in_mUnusedEntityName ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element::GGS_uselessEntityLocationMap_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_string & inOperand1,
                                                                                  const GGS_location & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mUnusedEntityName (inOperand1),
mProperty_mLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_uselessEntityLocationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mUnusedEntityName.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mUnusedEntityName.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @uselessEntityLocationMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedEntityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @uselessEntityLocationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element ("uselessEntityLocationMap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uselessEntityLocationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uselessEntityLocationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uselessEntityLocationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element GGS_uselessEntityLocationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap_2E_element result ;
  const GGS_uselessEntityLocationMap_2E_element * p = (const GGS_uselessEntityLocationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uselessEntityLocationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @uselessEntityLocationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_::GGS_uselessEntityLocationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_::GGS_uselessEntityLocationMap_2E_element_3F_ (const GGS_uselessEntityLocationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_ GGS_uselessEntityLocationMap_2E_element_3F_::init_nil (void) {
  GGS_uselessEntityLocationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_uselessEntityLocationMap_2E_element_3F_::isValid (void) const {
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

bool GGS_uselessEntityLocationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_uselessEntityLocationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element_3F_::description (String & ioString,
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
//     @uselessEntityLocationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element_3F_ ("uselessEntityLocationMap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uselessEntityLocationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uselessEntityLocationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uselessEntityLocationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_ GGS_uselessEntityLocationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap_2E_element_3F_ result ;
  const GGS_uselessEntityLocationMap_2E_element_3F_ * p = (const GGS_uselessEntityLocationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uselessEntityLocationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element::GGS_insertSetterListAST_2E_element (void) :
mProperty_mInsertMethodName (),
mProperty_mErrorMessage (),
mProperty_mShadowErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element::GGS_insertSetterListAST_2E_element (const GGS_insertSetterListAST_2E_element & inSource) :
mProperty_mInsertMethodName (inSource.mProperty_mInsertMethodName),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage),
mProperty_mShadowErrorMessage (inSource.mProperty_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element & GGS_insertSetterListAST_2E_element::operator = (const GGS_insertSetterListAST_2E_element & inSource) {
  mProperty_mInsertMethodName = inSource.mProperty_mInsertMethodName ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  mProperty_mShadowErrorMessage = inSource.mProperty_mShadowErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_insertSetterListAST_2E_element GGS_insertSetterListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mInsertMethodName,
                                                                                         const GGS_lstring & in_mErrorMessage,
                                                                                         const GGS_lstring & in_mShadowErrorMessage,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertSetterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertMethodName = in_mInsertMethodName ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  result.mProperty_mShadowErrorMessage = in_mShadowErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element::GGS_insertSetterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_lstring & inOperand1,
                                                                        const GGS_lstring & inOperand2) :
mProperty_mInsertMethodName (inOperand0),
mProperty_mErrorMessage (inOperand1),
mProperty_mShadowErrorMessage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertSetterListAST_2E_element::isValid (void) const {
  return mProperty_mInsertMethodName.isValid () && mProperty_mErrorMessage.isValid () && mProperty_mShadowErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST_2E_element::drop (void) {
  mProperty_mInsertMethodName.drop () ;
  mProperty_mErrorMessage.drop () ;
  mProperty_mShadowErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @insertSetterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInsertMethodName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mShadowErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @insertSetterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertSetterListAST_2E_element ("insertSetterListAST.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertSetterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertSetterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertSetterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertSetterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element GGS_insertSetterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_insertSetterListAST_2E_element result ;
  const GGS_insertSetterListAST_2E_element * p = (const GGS_insertSetterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertSetterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertSetterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element::GGS_mapAccessorListAST_2E_element (void) :
mProperty_mName (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element::GGS_mapAccessorListAST_2E_element (const GGS_mapAccessorListAST_2E_element & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element & GGS_mapAccessorListAST_2E_element::operator = (const GGS_mapAccessorListAST_2E_element & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element GGS_mapAccessorListAST_2E_element::init_21__21_ (const GGS_lstring & in_mName,
                                                                                   const GGS_lstring & in_mErrorMessage,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mapAccessorListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element::GGS_mapAccessorListAST_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_lstring & inOperand1) :
mProperty_mName (inOperand0),
mProperty_mErrorMessage (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_mapAccessorListAST_2E_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST_2E_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @mapAccessorListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mapAccessorListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapAccessorListAST_2E_element ("mapAccessorListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapAccessorListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAccessorListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapAccessorListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapAccessorListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element GGS_mapAccessorListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_mapAccessorListAST_2E_element result ;
  const GGS_mapAccessorListAST_2E_element * p = (const GGS_mapAccessorListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapAccessorListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAccessorListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_insertMethodMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertMethodMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element GGS_insertMethodMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap_2E_element result ;
  const GGS_insertMethodMap_2E_element * p = (const GGS_insertMethodMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertMethodMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_insertMethodMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertMethodMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element_3F_ GGS_insertMethodMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap_2E_element_3F_ result ;
  const GGS_insertMethodMap_2E_element_3F_ * p = (const GGS_insertMethodMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertMethodMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_searchMethodMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_searchMethodMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element GGS_searchMethodMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap_2E_element result ;
  const GGS_searchMethodMap_2E_element * p = (const GGS_searchMethodMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_searchMethodMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_searchMethodMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_searchMethodMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element_3F_ GGS_searchMethodMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap_2E_element_3F_ result ;
  const GGS_searchMethodMap_2E_element_3F_ * p = (const GGS_searchMethodMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_searchMethodMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_propertyInCollectionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyInCollectionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element GGS_propertyInCollectionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST_2E_element result ;
  const GGS_propertyInCollectionListAST_2E_element * p = (const GGS_propertyInCollectionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyInCollectionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element::GGS_typeNameFormalParameterNameList_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalParameterTypeName (),
mProperty_mFormalParameterName () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element::GGS_typeNameFormalParameterNameList_2E_element (const GGS_typeNameFormalParameterNameList_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalParameterTypeName (inSource.mProperty_mFormalParameterTypeName),
mProperty_mFormalParameterName (inSource.mProperty_mFormalParameterName) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element & GGS_typeNameFormalParameterNameList_2E_element::operator = (const GGS_typeNameFormalParameterNameList_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalParameterTypeName = inSource.mProperty_mFormalParameterTypeName ;
  mProperty_mFormalParameterName = inSource.mProperty_mFormalParameterName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element GGS_typeNameFormalParameterNameList_2E_element::init_21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                                 const GGS_lstring & in_mFormalParameterTypeName,
                                                                                                                 const GGS_lstring & in_mFormalParameterName,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeNameFormalParameterNameList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalParameterTypeName = in_mFormalParameterTypeName ;
  result.mProperty_mFormalParameterName = in_mFormalParameterName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element::GGS_typeNameFormalParameterNameList_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_lstring & inOperand1,
                                                                                                const GGS_lstring & inOperand2) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalParameterTypeName (inOperand1),
mProperty_mFormalParameterName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeNameFormalParameterNameList_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalParameterTypeName.isValid () && mProperty_mFormalParameterName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalParameterTypeName.drop () ;
  mProperty_mFormalParameterName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeNameFormalParameterNameList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalParameterTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalParameterName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeNameFormalParameterNameList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2E_element ("typeNameFormalParameterNameList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeNameFormalParameterNameList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeNameFormalParameterNameList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeNameFormalParameterNameList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element GGS_typeNameFormalParameterNameList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_typeNameFormalParameterNameList_2E_element result ;
  const GGS_typeNameFormalParameterNameList_2E_element * p = (const GGS_typeNameFormalParameterNameList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeNameFormalParameterNameList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList_2E_element::GGS_externTypeGetterList_2E_element (void) :
mProperty_mGetterName (),
mProperty_mResultTypeName (),
mProperty_mParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList_2E_element::GGS_externTypeGetterList_2E_element (const GGS_externTypeGetterList_2E_element & inSource) :
mProperty_mGetterName (inSource.mProperty_mGetterName),
mProperty_mResultTypeName (inSource.mProperty_mResultTypeName),
mProperty_mParameterList (inSource.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList_2E_element & GGS_externTypeGetterList_2E_element::operator = (const GGS_externTypeGetterList_2E_element & inSource) {
  mProperty_mGetterName = inSource.mProperty_mGetterName ;
  mProperty_mResultTypeName = inSource.mProperty_mResultTypeName ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externTypeGetterList_2E_element GGS_externTypeGetterList_2E_element::init_21__21__21_ (const GGS_lstring & in_mGetterName,
                                                                                           const GGS_lstring & in_mResultTypeName,
                                                                                           const GGS_typeNameFormalParameterNameList & in_mParameterList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeGetterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGetterName = in_mGetterName ;
  result.mProperty_mResultTypeName = in_mResultTypeName ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList_2E_element::GGS_externTypeGetterList_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_lstring & inOperand1,
                                                                          const GGS_typeNameFormalParameterNameList & inOperand2) :
mProperty_mGetterName (inOperand0),
mProperty_mResultTypeName (inOperand1),
mProperty_mParameterList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externTypeGetterList_2E_element::isValid (void) const {
  return mProperty_mGetterName.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList_2E_element::drop (void) {
  mProperty_mGetterName.drop () ;
  mProperty_mResultTypeName.drop () ;
  mProperty_mParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externTypeGetterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGetterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeGetterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeGetterList_2E_element ("externTypeGetterList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeGetterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeGetterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeGetterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList_2E_element GGS_externTypeGetterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_externTypeGetterList_2E_element result ;
  const GGS_externTypeGetterList_2E_element * p = (const GGS_externTypeGetterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeGetterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList_2E_element::GGS_externTypeSetterList_2E_element (void) :
mProperty_mSetterName (),
mProperty_mFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList_2E_element::GGS_externTypeSetterList_2E_element (const GGS_externTypeSetterList_2E_element & inSource) :
mProperty_mSetterName (inSource.mProperty_mSetterName),
mProperty_mFormalParameterList (inSource.mProperty_mFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList_2E_element & GGS_externTypeSetterList_2E_element::operator = (const GGS_externTypeSetterList_2E_element & inSource) {
  mProperty_mSetterName = inSource.mProperty_mSetterName ;
  mProperty_mFormalParameterList = inSource.mProperty_mFormalParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externTypeSetterList_2E_element GGS_externTypeSetterList_2E_element::init_21__21_ (const GGS_lstring & in_mSetterName,
                                                                                       const GGS_formalParameterListAST & in_mFormalParameterList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeSetterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSetterName = in_mSetterName ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList_2E_element::GGS_externTypeSetterList_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_formalParameterListAST & inOperand1) :
mProperty_mSetterName (inOperand0),
mProperty_mFormalParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externTypeSetterList_2E_element::isValid (void) const {
  return mProperty_mSetterName.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList_2E_element::drop (void) {
  mProperty_mSetterName.drop () ;
  mProperty_mFormalParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeSetterList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externTypeSetterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSetterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeSetterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeSetterList_2E_element ("externTypeSetterList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeSetterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeSetterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeSetterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeSetterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList_2E_element GGS_externTypeSetterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_externTypeSetterList_2E_element result ;
  const GGS_externTypeSetterList_2E_element * p = (const GGS_externTypeSetterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeSetterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeSetterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList_2E_element::GGS_externTypeMethodList_2E_element (void) :
mProperty_mMethodName (),
mProperty_mFormalParameterList (),
mProperty_mDeclarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList_2E_element::GGS_externTypeMethodList_2E_element (const GGS_externTypeMethodList_2E_element & inSource) :
mProperty_mMethodName (inSource.mProperty_mMethodName),
mProperty_mFormalParameterList (inSource.mProperty_mFormalParameterList),
mProperty_mDeclarationLocation (inSource.mProperty_mDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList_2E_element & GGS_externTypeMethodList_2E_element::operator = (const GGS_externTypeMethodList_2E_element & inSource) {
  mProperty_mMethodName = inSource.mProperty_mMethodName ;
  mProperty_mFormalParameterList = inSource.mProperty_mFormalParameterList ;
  mProperty_mDeclarationLocation = inSource.mProperty_mDeclarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externTypeMethodList_2E_element GGS_externTypeMethodList_2E_element::init_21__21__21_ (const GGS_lstring & in_mMethodName,
                                                                                           const GGS_formalParameterListAST & in_mFormalParameterList,
                                                                                           const GGS_location & in_mDeclarationLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeMethodList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMethodName = in_mMethodName ;
  result.mProperty_mFormalParameterList = in_mFormalParameterList ;
  result.mProperty_mDeclarationLocation = in_mDeclarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList_2E_element::GGS_externTypeMethodList_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_formalParameterListAST & inOperand1,
                                                                          const GGS_location & inOperand2) :
mProperty_mMethodName (inOperand0),
mProperty_mFormalParameterList (inOperand1),
mProperty_mDeclarationLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externTypeMethodList_2E_element::isValid (void) const {
  return mProperty_mMethodName.isValid () && mProperty_mFormalParameterList.isValid () && mProperty_mDeclarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList_2E_element::drop (void) {
  mProperty_mMethodName.drop () ;
  mProperty_mFormalParameterList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeMethodList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externTypeMethodList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMethodName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeMethodList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeMethodList_2E_element ("externTypeMethodList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeMethodList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeMethodList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeMethodList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList_2E_element GGS_externTypeMethodList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_externTypeMethodList_2E_element result ;
  const GGS_externTypeMethodList_2E_element * p = (const GGS_externTypeMethodList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeMethodList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element::GGS_sortedListSortDescriptorListAST_2E_element (void) :
mProperty_mSortedAttributeName (),
mProperty_mAscending () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element::GGS_sortedListSortDescriptorListAST_2E_element (const GGS_sortedListSortDescriptorListAST_2E_element & inSource) :
mProperty_mSortedAttributeName (inSource.mProperty_mSortedAttributeName),
mProperty_mAscending (inSource.mProperty_mAscending) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element & GGS_sortedListSortDescriptorListAST_2E_element::operator = (const GGS_sortedListSortDescriptorListAST_2E_element & inSource) {
  mProperty_mSortedAttributeName = inSource.mProperty_mSortedAttributeName ;
  mProperty_mAscending = inSource.mProperty_mAscending ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element GGS_sortedListSortDescriptorListAST_2E_element::init_21__21_ (const GGS_lstring & in_mSortedAttributeName,
                                                                                                             const GGS_bool & in_mAscending,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedListSortDescriptorListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSortedAttributeName = in_mSortedAttributeName ;
  result.mProperty_mAscending = in_mAscending ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element::GGS_sortedListSortDescriptorListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_bool & inOperand1) :
mProperty_mSortedAttributeName (inOperand0),
mProperty_mAscending (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_sortedListSortDescriptorListAST_2E_element::isValid (void) const {
  return mProperty_mSortedAttributeName.isValid () && mProperty_mAscending.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST_2E_element::drop (void) {
  mProperty_mSortedAttributeName.drop () ;
  mProperty_mAscending.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortedListSortDescriptorListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSortedAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAscending.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sortedListSortDescriptorListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2E_element ("sortedListSortDescriptorListAST.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedListSortDescriptorListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListSortDescriptorListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListSortDescriptorListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element GGS_sortedListSortDescriptorListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_sortedListSortDescriptorListAST_2E_element result ;
  const GGS_sortedListSortDescriptorListAST_2E_element * p = (const GGS_sortedListSortDescriptorListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListSortDescriptorListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList_2E_element::GGS_graphInsertModifierList_2E_element (void) :
mProperty_mInsertModifierName (),
mProperty_mInsertErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList_2E_element::GGS_graphInsertModifierList_2E_element (const GGS_graphInsertModifierList_2E_element & inSource) :
mProperty_mInsertModifierName (inSource.mProperty_mInsertModifierName),
mProperty_mInsertErrorMessage (inSource.mProperty_mInsertErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList_2E_element & GGS_graphInsertModifierList_2E_element::operator = (const GGS_graphInsertModifierList_2E_element & inSource) {
  mProperty_mInsertModifierName = inSource.mProperty_mInsertModifierName ;
  mProperty_mInsertErrorMessage = inSource.mProperty_mInsertErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_graphInsertModifierList_2E_element GGS_graphInsertModifierList_2E_element::init_21__21_ (const GGS_lstring & in_mInsertModifierName,
                                                                                             const GGS_lstring & in_mInsertErrorMessage,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_graphInsertModifierList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertModifierName = in_mInsertModifierName ;
  result.mProperty_mInsertErrorMessage = in_mInsertErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphInsertModifierList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList_2E_element::GGS_graphInsertModifierList_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_lstring & inOperand1) :
mProperty_mInsertModifierName (inOperand0),
mProperty_mInsertErrorMessage (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_graphInsertModifierList_2E_element::isValid (void) const {
  return mProperty_mInsertModifierName.isValid () && mProperty_mInsertErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphInsertModifierList_2E_element::drop (void) {
  mProperty_mInsertModifierName.drop () ;
  mProperty_mInsertErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphInsertModifierList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @graphInsertModifierList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInsertModifierName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInsertErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @graphInsertModifierList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphInsertModifierList_2E_element ("graphInsertModifierList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphInsertModifierList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphInsertModifierList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphInsertModifierList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList_2E_element GGS_graphInsertModifierList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_graphInsertModifierList_2E_element result ;
  const GGS_graphInsertModifierList_2E_element * p = (const GGS_graphInsertModifierList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphInsertModifierList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphInsertModifierList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList_2E_element::GGS_enumConstantList_2E_element (void) :
mProperty_name (),
mProperty_associatedValueTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList_2E_element::GGS_enumConstantList_2E_element (const GGS_enumConstantList_2E_element & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_associatedValueTypeList (inSource.mProperty_associatedValueTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList_2E_element & GGS_enumConstantList_2E_element::operator = (const GGS_enumConstantList_2E_element & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_associatedValueTypeList = inSource.mProperty_associatedValueTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumConstantList_2E_element GGS_enumConstantList_2E_element::init_21__21_ (const GGS_lstring & in_name,
                                                                               const GGS__5B_associatedValue_5D_ & in_associatedValueTypeList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_associatedValueTypeList = in_associatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList_2E_element::GGS_enumConstantList_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS__5B_associatedValue_5D_ & inOperand1) :
mProperty_name (inOperand0),
mProperty_associatedValueTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantList_2E_element::isValid (void) const {
  return mProperty_name.isValid () && mProperty_associatedValueTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantList_2E_element::drop (void) {
  mProperty_name.drop () ;
  mProperty_associatedValueTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantList_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_associatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumConstantList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantList_2E_element ("enumConstantList.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList_2E_element GGS_enumConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumConstantList_2E_element result ;
  const GGS_enumConstantList_2E_element * p = (const GGS_enumConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

acPtr_class * cPtr_procCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionAST result ;
  const GGS_procCallInstructionAST * p = (const GGS_procCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionAST_2E_weak::objectCompare (const GGS_procCallInstructionAST_2E_weak & inOperand) const {
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

GGS_procCallInstructionAST_2E_weak::GGS_procCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak & GGS_procCallInstructionAST_2E_weak::operator = (const GGS_procCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

AC_GALGAS_root * GGS_procCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak GGS_procCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionAST_2E_weak result ;
  const GGS_procCallInstructionAST_2E_weak * p = (const GGS_procCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
                      const GGS_fixitListForGeneration & in_mFixitListForGeneration,
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
                                                      const GGS_fixitListForGeneration & in_mFixitListForGeneration,
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

GGS_fixitListForGeneration GGS_warningInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListForGeneration () ;
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
                                                                            const GGS_fixitListForGeneration & in_mFixitListForGeneration,
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

acPtr_class * cPtr_warningInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_warningInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_warningInstructionForGeneration result ;
  const GGS_warningInstructionForGeneration * p = (const GGS_warningInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_routineMap & ioObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_formalParameterSignature constinArgument_inRoutineSignature,
                                const GGS_bool constinArgument_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineArgumentMap var_routineArgumentMap_2923 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_hasKey (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2923, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 73)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_routineArgumentMap_2923 = GGS_routineArgumentMap::init (inCompiler COMMA_HERE) ;
  }
  GGS_string var_routineArguments_3137 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 77)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_routineArgumentMap_2923.getter_hasKey (var_routineArguments_3137 COMMA_SOURCE_FILE ("routineMap.galgas", 78)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (var_routineArguments_3137, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (GGS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)), fixItArray4  COMMA_SOURCE_FILE ("routineMap.galgas", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    {
    var_routineArgumentMap_2923.setter_insertKey (GGS_lstring::init_21__21_ (var_routineArguments_3137, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 81)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2923 COMMA_SOURCE_FILE ("routineMap.galgas", 86)) ;
    }
  }
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
  outArgument_outOptionalTypeName = function_makeOptionalTypeLName (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 435)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_galgasDeclarationAST temp_1 = ioObject ;
    test_0 = temp_1.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outOptionalTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 436)).operator_not (SOURCE_FILE ("semanticsTypesForAST.galgas", 436)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioObject.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outOptionalTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 437)) ;
      ioObject.mProperty_mDeclarationList.addAssignOperation (GGS_optionalTypeDeclarationAST::init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (constinArgument_inPredefined, outArgument_outOptionalTypeName, constinArgument_inTypeName, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 438)) ;
    }
  }
}


