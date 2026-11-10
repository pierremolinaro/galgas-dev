#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

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

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (const GGS_actualParameterListAST_2E_element & inSource) :
mProperty_mActualParameter (inSource.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element & GGS_actualParameterListAST_2E_element::operator = (const GGS_actualParameterListAST_2E_element & inSource) {
  mProperty_mActualParameter = inSource.mProperty_mActualParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualParameterListAST_2E_element GGS_actualParameterListAST_2E_element::init_21_ (const GGS_actualParameterAST & in_mActualParameter,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST_2E_element::GGS_actualParameterListAST_2E_element (const GGS_actualParameterAST & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualParameterListAST_2E_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterListAST_2E_element ("actualParameterListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element::GGS_extensionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexiqueName (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element::GGS_extensionMap_2E_element (const GGS_extensionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexiqueName (inSource.mProperty_mLexiqueName),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element & GGS_extensionMap_2E_element::operator = (const GGS_extensionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexiqueName = inSource.mProperty_mLexiqueName ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionMap_2E_element GGS_extensionMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_string & in_mLexiqueName,
                                                                           const GGS_uint & in_mIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexiqueName = in_mLexiqueName ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element::GGS_extensionMap_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_string & inOperand1,
                                                          const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLexiqueName (inOperand1),
mProperty_mIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexiqueName.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap_2E_element ("extensionMap.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_::GGS_extensionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_::GGS_extensionMap_2E_element_3F_ (const GGS_extensionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_ GGS_extensionMap_2E_element_3F_::init_nil (void) {
  GGS_extensionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMap_2E_element_3F_::description (String & ioString,
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
//     @extensionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap_2E_element_3F_ ("extensionMap.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element::GGS_optionComponentMapForGeneration_2E_element (void) :
mProperty_lkey (),
mProperty_mGuiComponentContext () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element::GGS_optionComponentMapForGeneration_2E_element (const GGS_optionComponentMapForGeneration_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mGuiComponentContext (inSource.mProperty_mGuiComponentContext) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element & GGS_optionComponentMapForGeneration_2E_element::operator = (const GGS_optionComponentMapForGeneration_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mGuiComponentContext = inSource.mProperty_mGuiComponentContext ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element GGS_optionComponentMapForGeneration_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_guiAnalysisContext & in_mGuiComponentContext,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGuiComponentContext = in_mGuiComponentContext ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element::GGS_optionComponentMapForGeneration_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_guiAnalysisContext & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mGuiComponentContext (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForGeneration_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGuiComponentContext.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGuiComponentContext.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionComponentMapForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGuiComponentContext.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element ("optionComponentMapForGeneration.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @optionComponentMapForGeneration_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_::GGS_optionComponentMapForGeneration_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_::GGS_optionComponentMapForGeneration_2E_element_3F_ (const GGS_optionComponentMapForGeneration_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_ GGS_optionComponentMapForGeneration_2E_element_3F_::init_nil (void) {
  GGS_optionComponentMapForGeneration_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForGeneration_2E_element_3F_::isValid (void) const {
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

bool GGS_optionComponentMapForGeneration_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_optionComponentMapForGeneration_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForGeneration_2E_element_3F_::description (String & ioString,
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
//     @optionComponentMapForGeneration.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element_3F_ ("optionComponentMapForGeneration.element?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForGeneration_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (void) :
mProperty_type (),
mProperty_selfMutability () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (const GGS_selfAvailability_2E_available & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_selfMutability (inSource.mProperty_selfMutability) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available & GGS_selfAvailability_2E_available::operator = (const GGS_selfAvailability_2E_available & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_selfMutability = inSource.mProperty_selfMutability ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                                   const GGS_selfMutability & in_selfMutability,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const GGS_selfMutability & inOperand1) :
mProperty_type (inOperand0),
mProperty_selfMutability (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available::objectCompare (const GGS_selfAvailability_2E_available & inOperand) const {
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

bool GGS_selfAvailability_2E_available::isValid (void) const {
  return mProperty_type.isValid () && mProperty_selfMutability.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::drop (void) {
  mProperty_type.drop () ;
  mProperty_selfMutability.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selfAvailability.available:") ;
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
//     @selfAvailability.available generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ("selfAvailability.available",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability_2E_available::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available ;
}

//--------------------------------------------------------------------------------------------------
//Optional @selfAvailability_2E_available_3F_
//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (const GGS_selfAvailability_2E_available & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability_2E_available_3F_::init_nil (void) {
  GGS_selfAvailability_2E_available_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available_3F_::isValid (void) const {
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

bool GGS_selfAvailability_2E_available_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_selfAvailability_2E_available () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available_3F_::objectCompare (const GGS_selfAvailability_2E_available_3F_ & inOperand) const {
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

void GGS_selfAvailability_2E_available_3F_::description (String & ioString,
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
//     @selfAvailability.available? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ("selfAvailability.available?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability_2E_available_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element::GGS_functionSignature_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName (),
mProperty_isConstant () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element::GGS_functionSignature_2E_element (const GGS_functionSignature_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_isConstant (inSource.mProperty_isConstant) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element & GGS_functionSignature_2E_element::operator = (const GGS_functionSignature_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_functionSignature_2E_element GGS_functionSignature_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                         const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                         const GGS_string & in_mFormalArgumentName,
                                                                                         const GGS_bool & in_isConstant,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_isConstant = in_isConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element::GGS_functionSignature_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_unifiedTypeMapEntry & inOperand1,
                                                                    const GGS_string & inOperand2,
                                                                    const GGS_bool & inOperand3) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_isConstant (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_functionSignature_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_isConstant.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_isConstant.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @functionSignature.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @functionSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionSignature_2E_element ("functionSignature.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element::GGS_classFunctionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mArgumentTypeList (),
mProperty_mHasCompilerArgument (),
mProperty_mReturnedType () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element::GGS_classFunctionMap_2E_element (const GGS_classFunctionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mArgumentTypeList (inSource.mProperty_mArgumentTypeList),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mReturnedType (inSource.mProperty_mReturnedType) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element & GGS_classFunctionMap_2E_element::operator = (const GGS_classFunctionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mArgumentTypeList = inSource.mProperty_mArgumentTypeList ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mReturnedType = inSource.mProperty_mReturnedType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classFunctionMap_2E_element GGS_classFunctionMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_functionSignature & in_mArgumentTypeList,
                                                                                       const GGS_bool & in_mHasCompilerArgument,
                                                                                       const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mArgumentTypeList = in_mArgumentTypeList ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mReturnedType = in_mReturnedType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element::GGS_classFunctionMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_functionSignature & inOperand1,
                                                                  const GGS_bool & inOperand2,
                                                                  const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mArgumentTypeList (inOperand1),
mProperty_mHasCompilerArgument (inOperand2),
mProperty_mReturnedType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_classFunctionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentTypeList.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mReturnedType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentTypeList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mReturnedType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classFunctionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classFunctionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element ("classFunctionMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFunctionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFunctionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classFunctionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_::GGS_classFunctionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_::GGS_classFunctionMap_2E_element_3F_ (const GGS_classFunctionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_ GGS_classFunctionMap_2E_element_3F_::init_nil (void) {
  GGS_classFunctionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classFunctionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_classFunctionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classFunctionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap_2E_element_3F_::description (String & ioString,
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
//     @classFunctionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element_3F_ ("classFunctionMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFunctionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFunctionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element::GGS_initializerMap_2E_element (void) :
mProperty_lkey (),
mProperty_mArgumentTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element::GGS_initializerMap_2E_element (const GGS_initializerMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mArgumentTypeList (inSource.mProperty_mArgumentTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element & GGS_initializerMap_2E_element::operator = (const GGS_initializerMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mArgumentTypeList = inSource.mProperty_mArgumentTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_initializerMap_2E_element GGS_initializerMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_functionSignature & in_mArgumentTypeList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_initializerMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mArgumentTypeList = in_mArgumentTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element::GGS_initializerMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_functionSignature & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mArgumentTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_initializerMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @initializerMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerMap_2E_element ("initializerMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @initializerMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_::GGS_initializerMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_::GGS_initializerMap_2E_element_3F_ (const GGS_initializerMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_ GGS_initializerMap_2E_element_3F_::init_nil (void) {
  GGS_initializerMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_initializerMap_2E_element_3F_::isValid (void) const {
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

bool GGS_initializerMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_initializerMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_initializerMap_2E_element_3F_::description (String & ioString,
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
//     @initializerMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerMap_2E_element_3F_ ("initializerMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element::GGS_optionalMethodSignature_2E_element (void) :
mProperty_mInputArgument (),
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element::GGS_optionalMethodSignature_2E_element (const GGS_optionalMethodSignature_2E_element & inSource) :
mProperty_mInputArgument (inSource.mProperty_mInputArgument),
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element & GGS_optionalMethodSignature_2E_element::operator = (const GGS_optionalMethodSignature_2E_element & inSource) {
  mProperty_mInputArgument = inSource.mProperty_mInputArgument ;
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element GGS_optionalMethodSignature_2E_element::init_21__21__21__21_ (const GGS_bool & in_mInputArgument,
                                                                                                     const GGS_lstring & in_mFormalSelector,
                                                                                                     const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                     const GGS_string & in_mFormalArgumentName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalMethodSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputArgument = in_mInputArgument ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element::GGS_optionalMethodSignature_2E_element (const GGS_bool & inOperand0,
                                                                                const GGS_lstring & inOperand1,
                                                                                const GGS_unifiedTypeMapEntry & inOperand2,
                                                                                const GGS_string & inOperand3) :
mProperty_mInputArgument (inOperand0),
mProperty_mFormalSelector (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalMethodSignature_2E_element::isValid (void) const {
  return mProperty_mInputArgument.isValid () && mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature_2E_element::drop (void) {
  mProperty_mInputArgument.drop () ;
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignature_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionalMethodSignature.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalMethodSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalMethodSignature_2E_element ("optionalMethodSignature.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalMethodSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element::GGS_getterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mArgumentTypeList (),
mProperty_mDeclarationLocation (),
mProperty_mHasCompilerArgument (),
mProperty_mReturnedType (),
mProperty_mQualifier (),
mProperty_mGetterNameThatObsoletesInvokationName () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element::GGS_getterMap_2E_element (const GGS_getterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mArgumentTypeList (inSource.mProperty_mArgumentTypeList),
mProperty_mDeclarationLocation (inSource.mProperty_mDeclarationLocation),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mReturnedType (inSource.mProperty_mReturnedType),
mProperty_mQualifier (inSource.mProperty_mQualifier),
mProperty_mGetterNameThatObsoletesInvokationName (inSource.mProperty_mGetterNameThatObsoletesInvokationName) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element & GGS_getterMap_2E_element::operator = (const GGS_getterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mArgumentTypeList = inSource.mProperty_mArgumentTypeList ;
  mProperty_mDeclarationLocation = inSource.mProperty_mDeclarationLocation ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mReturnedType = inSource.mProperty_mReturnedType ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  mProperty_mGetterNameThatObsoletesInvokationName = inSource.mProperty_mGetterNameThatObsoletesInvokationName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_getterMap_2E_element GGS_getterMap_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_methodKind & in_mKind,
                                                                                         const GGS_functionSignature & in_mArgumentTypeList,
                                                                                         const GGS_location & in_mDeclarationLocation,
                                                                                         const GGS_bool & in_mHasCompilerArgument,
                                                                                         const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                                                                         const GGS_methodQualifier & in_mQualifier,
                                                                                         const GGS_string & in_mGetterNameThatObsoletesInvokationName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mArgumentTypeList = in_mArgumentTypeList ;
  result.mProperty_mDeclarationLocation = in_mDeclarationLocation ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mReturnedType = in_mReturnedType ;
  result.mProperty_mQualifier = in_mQualifier ;
  result.mProperty_mGetterNameThatObsoletesInvokationName = in_mGetterNameThatObsoletesInvokationName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element::GGS_getterMap_2E_element (const GGS_lstring & inOperand0,
                                                    const GGS_methodKind & inOperand1,
                                                    const GGS_functionSignature & inOperand2,
                                                    const GGS_location & inOperand3,
                                                    const GGS_bool & inOperand4,
                                                    const GGS_unifiedTypeMapEntry & inOperand5,
                                                    const GGS_methodQualifier & inOperand6,
                                                    const GGS_string & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mArgumentTypeList (inOperand2),
mProperty_mDeclarationLocation (inOperand3),
mProperty_mHasCompilerArgument (inOperand4),
mProperty_mReturnedType (inOperand5),
mProperty_mQualifier (inOperand6),
mProperty_mGetterNameThatObsoletesInvokationName (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_getterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mArgumentTypeList.isValid () && mProperty_mDeclarationLocation.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mReturnedType.isValid () && mProperty_mQualifier.isValid () && mProperty_mGetterNameThatObsoletesInvokationName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mArgumentTypeList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mReturnedType.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mGetterNameThatObsoletesInvokationName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @getterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGetterNameThatObsoletesInvokationName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @getterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterMap_2E_element ("getterMap.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @getterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_::GGS_getterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_::GGS_getterMap_2E_element_3F_ (const GGS_getterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_ GGS_getterMap_2E_element_3F_::init_nil (void) {
  GGS_getterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_getterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_getterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_getterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap_2E_element_3F_::description (String & ioString,
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
//     @getterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterMap_2E_element_3F_ ("getterMap.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element::GGS_formalParameterSignature_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element::GGS_formalParameterSignature_2E_element (const GGS_formalParameterSignature_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element & GGS_formalParameterSignature_2E_element::operator = (const GGS_formalParameterSignature_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalParameterSignature_2E_element GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                       const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                       const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                       const GGS_string & in_mFormalArgumentName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element::GGS_formalParameterSignature_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                  const GGS_formalArgumentPassingModeAST & inOperand2,
                                                                                  const GGS_string & inOperand3) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentPassingMode (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalParameterSignature_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterSignature_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterSignature.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalParameterSignature.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterSignature_2E_element ("formalParameterSignature.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element::GGS_setterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mQualifier (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element::GGS_setterMap_2E_element (const GGS_setterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mParameterList (inSource.mProperty_mParameterList),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mQualifier (inSource.mProperty_mQualifier),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element & GGS_setterMap_2E_element::operator = (const GGS_setterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_setterMap_2E_element GGS_setterMap_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_methodKind & in_mKind,
                                                                                 const GGS_formalParameterSignature & in_mParameterList,
                                                                                 const GGS_bool & in_mHasCompilerArgument,
                                                                                 const GGS_methodQualifier & in_mQualifier,
                                                                                 const GGS_string & in_mErrorMessage,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_setterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mParameterList = in_mParameterList ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mQualifier = in_mQualifier ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element::GGS_setterMap_2E_element (const GGS_lstring & inOperand0,
                                                    const GGS_methodKind & inOperand1,
                                                    const GGS_formalParameterSignature & inOperand2,
                                                    const GGS_bool & inOperand3,
                                                    const GGS_methodQualifier & inOperand4,
                                                    const GGS_string & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mParameterList (inOperand2),
mProperty_mHasCompilerArgument (inOperand3),
mProperty_mQualifier (inOperand4),
mProperty_mErrorMessage (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_setterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mParameterList.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mQualifier.isValid () && mProperty_mErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @setterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @setterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterMap_2E_element ("setterMap.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @setterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_::GGS_setterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_::GGS_setterMap_2E_element_3F_ (const GGS_setterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_ GGS_setterMap_2E_element_3F_::init_nil (void) {
  GGS_setterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_setterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_setterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_setterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap_2E_element_3F_::description (String & ioString,
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
//     @setterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterMap_2E_element_3F_ ("setterMap.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element::GGS_instanceMethodMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mParameterList (),
mProperty_mDeclarationLocation (),
mProperty_mHasCompilerArgument (),
mProperty_mQualifier (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element::GGS_instanceMethodMap_2E_element (const GGS_instanceMethodMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mParameterList (inSource.mProperty_mParameterList),
mProperty_mDeclarationLocation (inSource.mProperty_mDeclarationLocation),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument),
mProperty_mQualifier (inSource.mProperty_mQualifier),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element & GGS_instanceMethodMap_2E_element::operator = (const GGS_instanceMethodMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  mProperty_mDeclarationLocation = inSource.mProperty_mDeclarationLocation ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  mProperty_mQualifier = inSource.mProperty_mQualifier ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_instanceMethodMap_2E_element GGS_instanceMethodMap_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                     const GGS_methodKind & in_mKind,
                                                                                                     const GGS_formalParameterSignature & in_mParameterList,
                                                                                                     const GGS_location & in_mDeclarationLocation,
                                                                                                     const GGS_bool & in_mHasCompilerArgument,
                                                                                                     const GGS_methodQualifier & in_mQualifier,
                                                                                                     const GGS_string & in_mErrorMessage,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instanceMethodMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mParameterList = in_mParameterList ;
  result.mProperty_mDeclarationLocation = in_mDeclarationLocation ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  result.mProperty_mQualifier = in_mQualifier ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element::GGS_instanceMethodMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_methodKind & inOperand1,
                                                                    const GGS_formalParameterSignature & inOperand2,
                                                                    const GGS_location & inOperand3,
                                                                    const GGS_bool & inOperand4,
                                                                    const GGS_methodQualifier & inOperand5,
                                                                    const GGS_string & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mParameterList (inOperand2),
mProperty_mDeclarationLocation (inOperand3),
mProperty_mHasCompilerArgument (inOperand4),
mProperty_mQualifier (inOperand5),
mProperty_mErrorMessage (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanceMethodMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mParameterList.isValid () && mProperty_mDeclarationLocation.isValid () && mProperty_mHasCompilerArgument.isValid () && mProperty_mQualifier.isValid () && mProperty_mErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mDeclarationLocation.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
  mProperty_mQualifier.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instanceMethodMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @instanceMethodMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element ("instanceMethodMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanceMethodMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @instanceMethodMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_::GGS_instanceMethodMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_::GGS_instanceMethodMap_2E_element_3F_ (const GGS_instanceMethodMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_ GGS_instanceMethodMap_2E_element_3F_::init_nil (void) {
  GGS_instanceMethodMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanceMethodMap_2E_element_3F_::isValid (void) const {
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

bool GGS_instanceMethodMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_instanceMethodMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap_2E_element_3F_::description (String & ioString,
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
//     @instanceMethodMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element_3F_ ("instanceMethodMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanceMethodMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element::GGS_classMethodMap_2E_element (void) :
mProperty_lkey (),
mProperty_mParameterList (),
mProperty_mHasCompilerArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element::GGS_classMethodMap_2E_element (const GGS_classMethodMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mParameterList (inSource.mProperty_mParameterList),
mProperty_mHasCompilerArgument (inSource.mProperty_mHasCompilerArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element & GGS_classMethodMap_2E_element::operator = (const GGS_classMethodMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  mProperty_mHasCompilerArgument = inSource.mProperty_mHasCompilerArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classMethodMap_2E_element GGS_classMethodMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_formalParameterSignature & in_mParameterList,
                                                                               const GGS_bool & in_mHasCompilerArgument,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classMethodMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mParameterList = in_mParameterList ;
  result.mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element::GGS_classMethodMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_formalParameterSignature & inOperand1,
                                                              const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mParameterList (inOperand1),
mProperty_mHasCompilerArgument (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMethodMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mParameterList.isValid () && mProperty_mHasCompilerArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mHasCompilerArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classMethodMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classMethodMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element ("classMethodMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMethodMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classMethodMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_::GGS_classMethodMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_::GGS_classMethodMap_2E_element_3F_ (const GGS_classMethodMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_ GGS_classMethodMap_2E_element_3F_::init_nil (void) {
  GGS_classMethodMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMethodMap_2E_element_3F_::isValid (void) const {
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

bool GGS_classMethodMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classMethodMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap_2E_element_3F_::description (String & ioString,
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
//     @classMethodMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element_3F_ ("classMethodMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMethodMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAccessControl (),
mProperty_mIsConstant (),
mProperty_mPropertyType () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (const GGS_propertyMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mAccessControl (inSource.mProperty_mAccessControl),
mProperty_mIsConstant (inSource.mProperty_mIsConstant),
mProperty_mPropertyType (inSource.mProperty_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element & GGS_propertyMap_2E_element::operator = (const GGS_propertyMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mAccessControl = inSource.mProperty_mAccessControl ;
  mProperty_mIsConstant = inSource.mProperty_mIsConstant ;
  mProperty_mPropertyType = inSource.mProperty_mPropertyType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_AccessControl & in_mAccessControl,
                                                                             const GGS_bool & in_mIsConstant,
                                                                             const GGS_unifiedTypeMapEntry & in_mPropertyType,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessControl = in_mAccessControl ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_AccessControl & inOperand1,
                                                        const GGS_bool & inOperand2,
                                                        const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessControl (inOperand1),
mProperty_mIsConstant (inOperand2),
mProperty_mPropertyType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessControl.isValid () && mProperty_mIsConstant.isValid () && mProperty_mPropertyType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessControl.drop () ;
  mProperty_mIsConstant.drop () ;
  mProperty_mPropertyType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccessControl.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ("propertyMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_::GGS_propertyMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_::GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap_2E_element_3F_::init_nil (void) {
  GGS_propertyMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element_3F_::isValid (void) const {
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

bool GGS_propertyMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element_3F_::description (String & ioString,
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
//     @propertyMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ("propertyMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (void) :
mProperty_type (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (const GGS_associatedValueDescriptorList_2E_element & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element & GGS_associatedValueDescriptorList_2E_element::operator = (const GGS_associatedValueDescriptorList_2E_element & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element GGS_associatedValueDescriptorList_2E_element::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                                                         const GGS_string & in_name,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValueDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptorList_2E_element::GGS_associatedValueDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_name (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_associatedValueDescriptorList_2E_element::objectCompare (const GGS_associatedValueDescriptorList_2E_element & inOperand) const {
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

bool GGS_associatedValueDescriptorList_2E_element::isValid (void) const {
  return mProperty_type.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::drop (void) {
  mProperty_type.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptorList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValueDescriptorList.element:") ;
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
//     @associatedValueDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptorList_2E_element ("associatedValueDescriptorList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValueDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValueDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element::GGS_constantIndexMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mAssociatedTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element::GGS_constantIndexMap_2E_element (const GGS_constantIndexMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mAssociatedTypeList (inSource.mProperty_mAssociatedTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element & GGS_constantIndexMap_2E_element::operator = (const GGS_constantIndexMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mAssociatedTypeList = inSource.mProperty_mAssociatedTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantIndexMap_2E_element GGS_constantIndexMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_uint & in_mIndex,
                                                                                   const GGS_associatedValueDescriptorList & in_mAssociatedTypeList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantIndexMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mAssociatedTypeList = in_mAssociatedTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element::GGS_constantIndexMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_associatedValueDescriptorList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mAssociatedTypeList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constantIndexMap_2E_element::objectCompare (const GGS_constantIndexMap_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociatedTypeList.objectCompare (inOperand.mProperty_mAssociatedTypeList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantIndexMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mAssociatedTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantIndexMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantIndexMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element ("constantIndexMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantIndexMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constantIndexMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_::GGS_constantIndexMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_::GGS_constantIndexMap_2E_element_3F_ (const GGS_constantIndexMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_ GGS_constantIndexMap_2E_element_3F_::init_nil (void) {
  GGS_constantIndexMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantIndexMap_2E_element_3F_::isValid (void) const {
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

bool GGS_constantIndexMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constantIndexMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constantIndexMap_2E_element_3F_::objectCompare (const GGS_constantIndexMap_2E_element_3F_ & inOperand) const {
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

void GGS_constantIndexMap_2E_element_3F_::description (String & ioString,
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
//     @constantIndexMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element_3F_ ("constantIndexMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantIndexMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element::GGS_commandLineOptionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element::GGS_commandLineOptionMap_2E_element (const GGS_commandLineOptionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element & GGS_commandLineOptionMap_2E_element::operator = (const GGS_commandLineOptionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element GGS_commandLineOptionMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_char & in_mOptionChar,
                                                                                                   const GGS_string & in_mOptionString,
                                                                                                   const GGS_string & in_mComment,
                                                                                                   const GGS_string & in_mDefaultValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element::GGS_commandLineOptionMap_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_char & inOperand1,
                                                                          const GGS_string & inOperand2,
                                                                          const GGS_string & inOperand3,
                                                                          const GGS_string & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element ("commandLineOptionMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @commandLineOptionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_::GGS_commandLineOptionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_::GGS_commandLineOptionMap_2E_element_3F_ (const GGS_commandLineOptionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_ GGS_commandLineOptionMap_2E_element_3F_::init_nil (void) {
  GGS_commandLineOptionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_commandLineOptionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_commandLineOptionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap_2E_element_3F_::description (String & ioString,
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
//     @commandLineOptionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element_3F_ ("commandLineOptionMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (void) :
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_commandLineOptionSortedList_2E_element & inSource) :
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element & GGS_commandLineOptionSortedList_2E_element::operator = (const GGS_commandLineOptionSortedList_2E_element & inSource) {
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::init_21__21__21__21__21_ (const GGS_string & in_mOptionIdentifier,
                                                                                                                 const GGS_char & in_mOptionChar,
                                                                                                                 const GGS_string & in_mOptionString,
                                                                                                                 const GGS_string & in_mComment,
                                                                                                                 const GGS_string & in_mDefaultValue,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_string & inOperand0,
                                                                                        const GGS_char & inOperand1,
                                                                                        const GGS_string & inOperand2,
                                                                                        const GGS_string & inOperand3,
                                                                                        const GGS_string & inOperand4) :
mProperty_mOptionIdentifier (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionSortedList_2E_element::isValid (void) const {
  return mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::drop (void) {
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionSortedList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionSortedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ("commandLineOptionSortedList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionSortedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ;
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
                                                                     const GGS__5B_lexicalSentValue_5D_ & in_mSentAttributeList,
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
                                                        const GGS__5B_lexicalSentValue_5D_ & inOperand1) :
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
                                                                                               const GGS__5B_lstring_5D_ & in_mFilewrapperExtensionList,
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
                                                              const GGS__5B_lstring_5D_ & inOperand2,
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

GGS_optionComponentMapForSemanticAnalysis_2E_element::GGS_optionComponentMapForSemanticAnalysis_2E_element (void) :
mProperty_lkey (),
mProperty_mIsPredefined (),
mProperty_mBoolOptionMap (),
mProperty_mUIntOptionMap (),
mProperty_mStringOptionMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element::GGS_optionComponentMapForSemanticAnalysis_2E_element (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsPredefined (inSource.mProperty_mIsPredefined),
mProperty_mBoolOptionMap (inSource.mProperty_mBoolOptionMap),
mProperty_mUIntOptionMap (inSource.mProperty_mUIntOptionMap),
mProperty_mStringOptionMap (inSource.mProperty_mStringOptionMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element & GGS_optionComponentMapForSemanticAnalysis_2E_element::operator = (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsPredefined = inSource.mProperty_mIsPredefined ;
  mProperty_mBoolOptionMap = inSource.mProperty_mBoolOptionMap ;
  mProperty_mUIntOptionMap = inSource.mProperty_mUIntOptionMap ;
  mProperty_mStringOptionMap = inSource.mProperty_mStringOptionMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element GGS_optionComponentMapForSemanticAnalysis_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                                     const GGS_bool & in_mIsPredefined,
                                                                                                                                     const GGS_commandLineOptionMap & in_mBoolOptionMap,
                                                                                                                                     const GGS_commandLineOptionMap & in_mUIntOptionMap,
                                                                                                                                     const GGS_commandLineOptionMap & in_mStringOptionMap,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsPredefined = in_mIsPredefined ;
  result.mProperty_mBoolOptionMap = in_mBoolOptionMap ;
  result.mProperty_mUIntOptionMap = in_mUIntOptionMap ;
  result.mProperty_mStringOptionMap = in_mStringOptionMap ;
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
                                                                                                            const GGS_commandLineOptionMap & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mIsPredefined (inOperand1),
mProperty_mBoolOptionMap (inOperand2),
mProperty_mUIntOptionMap (inOperand3),
mProperty_mStringOptionMap (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForSemanticAnalysis_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPredefined.isValid () && mProperty_mBoolOptionMap.isValid () && mProperty_mUIntOptionMap.isValid () && mProperty_mStringOptionMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPredefined.drop () ;
  mProperty_mBoolOptionMap.drop () ;
  mProperty_mUIntOptionMap.drop () ;
  mProperty_mStringOptionMap.drop () ;
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
                                                                                                                                                   const GGS__5B_indexingAST_5D_ & in_mIndexingListAST,
                                                                                                                                                   const GGS__5B_terminalDeclarationAST_5D_ & in_mTerminalListAST,
                                                                                                                                                   const GGS__5B_lexicalAttributeAST_5D_ & in_mLexicalAttributeListAST,
                                                                                                                                                   const GGS__5B_lexicalStyleAST_5D_ & in_mLexicalStyleListAST,
                                                                                                                                                   const GGS__5B_lexicalListDeclarationAST_5D_ & in_mLexicalListDeclarationListAST,
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
                                                                                                              const GGS__5B_indexingAST_5D_ & inOperand3,
                                                                                                              const GGS__5B_terminalDeclarationAST_5D_ & inOperand4,
                                                                                                              const GGS__5B_lexicalAttributeAST_5D_ & inOperand5,
                                                                                                              const GGS__5B_lexicalStyleAST_5D_ & inOperand6,
                                                                                                              const GGS__5B_lexicalListDeclarationAST_5D_ & inOperand7) :
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
                                                                                               const GGS__5B_nonterminalDeclarationAST_5D_ & in_mNonterminalDeclarationList,
                                                                                               const GGS__5B_syntaxRuleAST_5D_ & in_mRuleList,
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
                                                                      const GGS__5B_nonterminalDeclarationAST_5D_ & inOperand2,
                                                                      const GGS__5B_syntaxRuleAST_5D_ & inOperand3,
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
                                                                                                           const GGS__5B_formalInputParameterAST_5D_ & in_mFormalParameterList,
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
                                                                                              const GGS__5B_formalInputParameterAST_5D_ & inOperand1) :
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
                                                                                                     const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList,
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
                                                                                    const GGS__5B_formalParameterAST_5D_ & inOperand1,
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
                                                                                                 const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList,
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
                                                                                    const GGS__5B_formalParameterAST_5D_ & inOperand1) :
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
                                                                                                         const GGS__5B_formalInputParameterAST_5D_ & in_mInputFormalParameterList,
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
                                                                                    const GGS__5B_formalInputParameterAST_5D_ & inOperand2,
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

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (void) :
mProperty_usedInSubscope () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_localVarValuation_2E_declared & inSource) :
mProperty_usedInSubscope (inSource.mProperty_usedInSubscope) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared & GGS_localVarValuation_2E_declared::operator = (const GGS_localVarValuation_2E_declared & inSource) {
  mProperty_usedInSubscope = inSource.mProperty_usedInSubscope ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::init_21_ (const GGS_bool & in_usedInSubscope,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_usedInSubscope = in_usedInSubscope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_bool & inOperand0) :
mProperty_usedInSubscope (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared::objectCompare (const GGS_localVarValuation_2E_declared & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_usedInSubscope.objectCompare (inOperand.mProperty_usedInSubscope) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared::isValid (void) const {
  return mProperty_usedInSubscope.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::drop (void) {
  mProperty_usedInSubscope.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarValuation.declared:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_usedInSubscope.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarValuation.declared generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ("localVarValuation.declared",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarValuation_2E_declared::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;
}

//--------------------------------------------------------------------------------------------------
//Optional @localVarValuation_2E_declared_3F_
//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (const GGS_localVarValuation_2E_declared & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation_2E_declared_3F_::init_nil (void) {
  GGS_localVarValuation_2E_declared_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared_3F_::isValid (void) const {
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

bool GGS_localVarValuation_2E_declared_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_localVarValuation_2E_declared () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared_3F_::objectCompare (const GGS_localVarValuation_2E_declared_3F_ & inOperand) const {
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

void GGS_localVarValuation_2E_declared_3F_::description (String & ioString,
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
//     @localVarValuation.declared? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ("localVarValuation.declared?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarValuation_2E_declared_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;
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

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (void) :
mProperty_mMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_localVarMapListForLLVM_2E_element & inSource) :
mProperty_mMap (inSource.mProperty_mMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element & GGS_localVarMapListForLLVM_2E_element::operator = (const GGS_localVarMapListForLLVM_2E_element & inSource) {
  mProperty_mMap = inSource.mProperty_mMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::init_21_ (const GGS_scopeLocalVarMap & in_mMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_scopeLocalVarMap & inOperand0) :
mProperty_mMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarMapListForLLVM_2E_element::isValid (void) const {
  return mProperty_mMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::drop (void) {
  mProperty_mMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarMapListForLLVM.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarMapListForLLVM.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ("localVarMapListForLLVM.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarMapListForLLVM_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (void) :
mProperty_savedManager () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) :
mProperty_savedManager (inSource.mProperty_savedManager) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch & GGS_overrideKind_2E_selectOverrideFirstBranch::operator = (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) {
  mProperty_savedManager = inSource.mProperty_savedManager ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch GGS_overrideKind_2E_selectOverrideFirstBranch::init_21_ (const GGS_currentVarManager & in_savedManager,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideFirstBranch result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch::GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_currentVarManager & inOperand0) :
mProperty_savedManager (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideFirstBranch::isValid (void) const {
  return mProperty_savedManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::drop (void) {
  mProperty_savedManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind.selectOverrideFirstBranch:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_savedManager.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @overrideKind.selectOverrideFirstBranch generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ("overrideKind.selectOverrideFirstBranch",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideFirstBranch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ;
}

//--------------------------------------------------------------------------------------------------
//Optional @overrideKind_2E_selectOverrideFirstBranch_3F_
//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::init_nil (void) {
  GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::isValid (void) const {
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

bool GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_overrideKind_2E_selectOverrideFirstBranch () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::description (String & ioString,
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
//     @overrideKind.selectOverrideFirstBranch? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ("overrideKind.selectOverrideFirstBranch?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideFirstBranch_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (void) :
mProperty_savedManager (),
mProperty_referenceManager () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) :
mProperty_savedManager (inSource.mProperty_savedManager),
mProperty_referenceManager (inSource.mProperty_referenceManager) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches & GGS_overrideKind_2E_selectOverrideNextBranches::operator = (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) {
  mProperty_savedManager = inSource.mProperty_savedManager ;
  mProperty_referenceManager = inSource.mProperty_referenceManager ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches GGS_overrideKind_2E_selectOverrideNextBranches::init_21__21_ (const GGS_currentVarManager & in_savedManager,
                                                                                                             const GGS_currentVarManager & in_referenceManager,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_overrideKind_2E_selectOverrideNextBranches result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_savedManager = in_savedManager ;
  result.mProperty_referenceManager = in_referenceManager ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches::GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_currentVarManager & inOperand0,
                                                                                                const GGS_currentVarManager & inOperand1) :
mProperty_savedManager (inOperand0),
mProperty_referenceManager (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideNextBranches::isValid (void) const {
  return mProperty_savedManager.isValid () && mProperty_referenceManager.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::drop (void) {
  mProperty_savedManager.drop () ;
  mProperty_referenceManager.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @overrideKind.selectOverrideNextBranches:") ;
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
//     @overrideKind.selectOverrideNextBranches generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ("overrideKind.selectOverrideNextBranches",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideNextBranches::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ;
}

//--------------------------------------------------------------------------------------------------
//Optional @overrideKind_2E_selectOverrideNextBranches_3F_
//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_::GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_::GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideKind_2E_selectOverrideNextBranches_3F_ GGS_overrideKind_2E_selectOverrideNextBranches_3F_::init_nil (void) {
  GGS_overrideKind_2E_selectOverrideNextBranches_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_overrideKind_2E_selectOverrideNextBranches_3F_::isValid (void) const {
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

bool GGS_overrideKind_2E_selectOverrideNextBranches_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_overrideKind_2E_selectOverrideNextBranches () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_overrideKind_2E_selectOverrideNextBranches_3F_::description (String & ioString,
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
//     @overrideKind.selectOverrideNextBranches? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ("overrideKind.selectOverrideNextBranches?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideKind_2E_selectOverrideNextBranches_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (void) :
mProperty_mOverrideKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (const GGS_openedOverrideList_2E_element & inSource) :
mProperty_mOverrideKind (inSource.mProperty_mOverrideKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element & GGS_openedOverrideList_2E_element::operator = (const GGS_openedOverrideList_2E_element & inSource) {
  mProperty_mOverrideKind = inSource.mProperty_mOverrideKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_openedOverrideList_2E_element GGS_openedOverrideList_2E_element::init_21_ (const GGS_overrideKind & in_mOverrideKind,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_openedOverrideList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_openedOverrideList_2E_element::GGS_openedOverrideList_2E_element (const GGS_overrideKind & inOperand0) :
mProperty_mOverrideKind (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_openedOverrideList_2E_element::isValid (void) const {
  return mProperty_mOverrideKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::drop (void) {
  mProperty_mOverrideKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_openedOverrideList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @openedOverrideList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOverrideKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @openedOverrideList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedOverrideList_2E_element ("openedOverrideList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedOverrideList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (void) :
mProperty_weakElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
mProperty_weakElement (inSource.mProperty_weakElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element & GGS_unifiedTypeMapEntry_2E_element::operator = (const GGS_unifiedTypeMapEntry_2E_element & inSource) {
  mProperty_weakElement = inSource.mProperty_weakElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::init_21_ (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand0) :
mProperty_weakElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element::objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_weakElement.objectCompare (inOperand.mProperty_weakElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element::isValid (void) const {
  return mProperty_weakElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::drop (void) {
  mProperty_weakElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntry.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapEntry.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ("unifiedTypeMapEntry.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @unifiedTypeMapEntry_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValid (void) const {
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

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMapEntry_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element_3F_::objectCompare (const GGS_unifiedTypeMapEntry_2E_element_3F_ & inOperand) const {
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

void GGS_unifiedTypeMapEntry_2E_element_3F_::description (String & ioString,
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
//     @unifiedTypeMapEntry.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ("unifiedTypeMapEntry.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element::GGS_internalRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mArgumentMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element::GGS_internalRoutineMap_2E_element (const GGS_internalRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mArgumentMap (inSource.mProperty_mArgumentMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element & GGS_internalRoutineMap_2E_element::operator = (const GGS_internalRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mArgumentMap = inSource.mProperty_mArgumentMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_internalRoutineMap_2E_element GGS_internalRoutineMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_routineArgumentMap & in_mArgumentMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_internalRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mArgumentMap = in_mArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element::GGS_internalRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_routineArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mArgumentMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_internalRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mArgumentMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mArgumentMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @internalRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @internalRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element ("internalRoutineMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_internalRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @internalRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_::GGS_internalRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_::GGS_internalRoutineMap_2E_element_3F_ (const GGS_internalRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_ GGS_internalRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_internalRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_internalRoutineMap_2E_element_3F_::isValid (void) const {
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

bool GGS_internalRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_internalRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap_2E_element_3F_::description (String & ioString,
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
//     @internalRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ("internalRoutineMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_internalRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element::GGS_routineArgumentMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineSignature (),
mProperty_mIsFilePrivate () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element::GGS_routineArgumentMap_2E_element (const GGS_routineArgumentMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineSignature (inSource.mProperty_mRoutineSignature),
mProperty_mIsFilePrivate (inSource.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element & GGS_routineArgumentMap_2E_element::operator = (const GGS_routineArgumentMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineSignature = inSource.mProperty_mRoutineSignature ;
  mProperty_mIsFilePrivate = inSource.mProperty_mIsFilePrivate ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineArgumentMap_2E_element GGS_routineArgumentMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                       const GGS_bool & in_mIsFilePrivate,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineArgumentMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineSignature = in_mRoutineSignature ;
  result.mProperty_mIsFilePrivate = in_mIsFilePrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element::GGS_routineArgumentMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_formalParameterSignature & inOperand1,
                                                                      const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRoutineSignature (inOperand1),
mProperty_mIsFilePrivate (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineArgumentMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineSignature.isValid () && mProperty_mIsFilePrivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineSignature.drop () ;
  mProperty_mIsFilePrivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineArgumentMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsFilePrivate.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineArgumentMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element ("routineArgumentMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineArgumentMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineArgumentMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_::GGS_routineArgumentMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_::GGS_routineArgumentMap_2E_element_3F_ (const GGS_routineArgumentMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_ GGS_routineArgumentMap_2E_element_3F_::init_nil (void) {
  GGS_routineArgumentMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineArgumentMap_2E_element_3F_::isValid (void) const {
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

bool GGS_routineArgumentMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineArgumentMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap_2E_element_3F_::description (String & ioString,
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
//     @routineArgumentMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element_3F_ ("routineArgumentMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineArgumentMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (void) :
mProperty_key (),
mProperty_extensionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (const GGS_syntaxExtensionsDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_extensionList (inSource.mProperty_extensionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element & GGS_syntaxExtensionsDictionary_2E_element::operator = (const GGS_syntaxExtensionsDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_extensionList = inSource.mProperty_extensionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element GGS_syntaxExtensionsDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                   const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & in_extensionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_extensionList = in_extensionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element::GGS_syntaxExtensionsDictionary_2E_element (const GGS_string & inOperand0,
                                                                                      const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand1) :
mProperty_key (inOperand0),
mProperty_extensionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensionsDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_extensionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_extensionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensionsDictionary.element:") ;
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
//     @syntaxExtensionsDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ("syntaxExtensionsDictionary.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @syntaxExtensionsDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_::GGS_syntaxExtensionsDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_::GGS_syntaxExtensionsDictionary_2E_element_3F_ (const GGS_syntaxExtensionsDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary_2E_element_3F_::init_nil (void) {
  GGS_syntaxExtensionsDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensionsDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_syntaxExtensionsDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_syntaxExtensionsDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary_2E_element_3F_::description (String & ioString,
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
//     @syntaxExtensionsDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ("syntaxExtensionsDictionary.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ;
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
                                                                                             const GGS__5B_formalParameterForGeneration_5D_ & in_mSignatureForGeneration,
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
                                                                        const GGS__5B_formalParameterForGeneration_5D_ & inOperand1,
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
                                                                                                                             const GGS__5B_lstring_5D_ & in_mList,
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
                                                                                                                const GGS__5B_lstring_5D_ & inOperand1) :
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
// @actualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actualParameterForGeneration::objectCompare (const GGS_actualParameterForGeneration & inOperand) const {
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

GGS_actualParameterForGeneration::GGS_actualParameterForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_actualParameterForGeneration::
actualParameterForGeneration_init_21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                       Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterForGeneration::GGS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_actualParameterForGeneration::readProperty_mFormalArgumentType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_actualParameterForGeneration * p = (cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    return p->mProperty_mFormalArgumentType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mFormalArgumentType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mFormalArgumentType () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mFormalArgumentType.printNonNullClassInstanceProperties ("mFormalArgumentType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @actualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterForGeneration ("actualParameterForGeneration",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration ;
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
                          const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
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
                                                                  const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
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

GGS__5B_actualParameterForGeneration_5D_ GGS_superMethodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualParameterForGeneration_5D_ () ;
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
                                                                                            const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
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
                          const GGS__5B_lstring_5D_ & in_mBuiltVariableList,
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
                                              const GGS__5B_lstring_5D_ & in_mBuiltVariableList,
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

GGS__5B_lstring_5D_ GGS_errorInstructionAST::readProperty_mBuiltVariableList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
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
                                                    const GGS__5B_lstring_5D_ & in_mBuiltVariableList,
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
                          const GGS__5B_string_5D_ & in_mBuiltVariableCppNameList,
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
                                                        const GGS__5B_string_5D_ & in_mBuiltVariableCppNameList,
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

GGS__5B_string_5D_ GGS_errorInstructionForGeneration::readProperty_mBuiltVariableCppNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_string_5D_ () ;
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
                                                                        const GGS__5B_string_5D_ & in_mBuiltVariableCppNameList,
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

