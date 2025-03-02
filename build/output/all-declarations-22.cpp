#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

//--------------------------------------------------------------------------------------------------
//
//Optional @grammarMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap_2E_element_3F_ ("grammarMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_functionMap_2E_element::~ GGS_functionMap_2E_element (void) {
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

GGS_functionMap_2E_element GGS_functionMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2E_element ("functionMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @functionMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2E_element_3F_ ("functionMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_wrapperFileMap_2E_element::~ GGS_wrapperFileMap_2E_element (void) {
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

GGS_wrapperFileMap_2E_element GGS_wrapperFileMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element ("wrapperFileMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperFileMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @wrapperFileMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element_3F_ ("wrapperFileMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperFileMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_wrapperDirectoryMap_2E_element::~ GGS_wrapperDirectoryMap_2E_element (void) {
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

GGS_wrapperDirectoryMap_2E_element GGS_wrapperDirectoryMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element ("wrapperDirectoryMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperDirectoryMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @wrapperDirectoryMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element_3F_ ("wrapperDirectoryMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperDirectoryMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_filewrapperTemplateMap_2E_element::~ GGS_filewrapperTemplateMap_2E_element (void) {
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

GGS_filewrapperTemplateMap_2E_element GGS_filewrapperTemplateMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element ("filewrapperTemplateMap.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperTemplateMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @filewrapperTemplateMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element_3F_ ("filewrapperTemplateMap.element?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperTemplateMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_filewrapperMap_2E_element::~ GGS_filewrapperMap_2E_element (void) {
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

GGS_filewrapperMap_2E_element GGS_filewrapperMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element ("filewrapperMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @filewrapperMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element_3F_ ("filewrapperMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_optionComponentMapForSemanticAnalysis_2E_element::~ GGS_optionComponentMapForSemanticAnalysis_2E_element (void) {
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

GGS_optionComponentMapForSemanticAnalysis_2E_element GGS_optionComponentMapForSemanticAnalysis_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element ("optionComponentMapForSemanticAnalysis.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionComponentMapForSemanticAnalysis_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @optionComponentMapForSemanticAnalysis_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element_3F_ ("optionComponentMapForSemanticAnalysis.element?",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::~ GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (void) {
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

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element ("lexiqueComponentMapForSemanticAnalysis.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueComponentMapForSemanticAnalysis_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @lexiqueComponentMapForSemanticAnalysis_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ ("lexiqueComponentMapForSemanticAnalysis.element?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_syntaxComponentMap_2E_element::~ GGS_syntaxComponentMap_2E_element (void) {
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

GGS_syntaxComponentMap_2E_element GGS_syntaxComponentMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element ("syntaxComponentMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxComponentMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @syntaxComponentMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element_3F_ ("syntaxComponentMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxComponentMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionInitializerMapForType_2E_element::~ GGS_extensionInitializerMapForType_2E_element (void) {
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

GGS_extensionInitializerMapForType_2E_element GGS_extensionInitializerMapForType_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element ("extensionInitializerMapForType.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerMapForType_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionInitializerMapForType_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element_3F_ ("extensionInitializerMapForType.element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionInitializerForBuildingContext_2E_element::~ GGS_extensionInitializerForBuildingContext_2E_element (void) {
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

GGS_extensionInitializerForBuildingContext_2E_element GGS_extensionInitializerForBuildingContext_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element ("extensionInitializerForBuildingContext.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerForBuildingContext_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionInitializerForBuildingContext_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element_3F_ ("extensionInitializerForBuildingContext.element?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionInitializerForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionMethodMapForType_2E_element::~ GGS_extensionMethodMapForType_2E_element (void) {
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

GGS_extensionMethodMapForType_2E_element GGS_extensionMethodMapForType_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element ("extensionMethodMapForType.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForType_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionMethodMapForType_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element_3F_ ("extensionMethodMapForType.element?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionMethodMapForBuildingContext_2E_element::~ GGS_extensionMethodMapForBuildingContext_2E_element (void) {
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

GGS_extensionMethodMapForBuildingContext_2E_element GGS_extensionMethodMapForBuildingContext_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element ("extensionMethodMapForBuildingContext.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForBuildingContext_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionMethodMapForBuildingContext_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element_3F_ ("extensionMethodMapForBuildingContext.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionSetterMapForType_2E_element::~ GGS_extensionSetterMapForType_2E_element (void) {
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

GGS_extensionSetterMapForType_2E_element GGS_extensionSetterMapForType_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element ("extensionSetterMapForType.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForType_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionSetterMapForType_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element_3F_ ("extensionSetterMapForType.element?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionSetterMapForBuildingContext_2E_element::~ GGS_extensionSetterMapForBuildingContext_2E_element (void) {
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

GGS_extensionSetterMapForBuildingContext_2E_element GGS_extensionSetterMapForBuildingContext_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element ("extensionSetterMapForBuildingContext.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForBuildingContext_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionSetterMapForBuildingContext_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element_3F_ ("extensionSetterMapForBuildingContext.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionGetterMapForType_2E_element::~ GGS_extensionGetterMapForType_2E_element (void) {
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

GGS_extensionGetterMapForType_2E_element GGS_extensionGetterMapForType_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element ("extensionGetterMapForType.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForType_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionGetterMapForType_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element_3F_ ("extensionGetterMapForType.element?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForType_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionGetterMapForBuildingContext_2E_element::~ GGS_extensionGetterMapForBuildingContext_2E_element (void) {
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

GGS_extensionGetterMapForBuildingContext_2E_element GGS_extensionGetterMapForBuildingContext_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element ("extensionGetterMapForBuildingContext.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForBuildingContext_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionGetterMapForBuildingContext_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element_3F_ ("extensionGetterMapForBuildingContext.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForBuildingContext_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_wrapperExtensionMap_2E_element::~ GGS_wrapperExtensionMap_2E_element (void) {
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

GGS_wrapperExtensionMap_2E_element GGS_wrapperExtensionMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_wrapperExtensionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element ("wrapperExtensionMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperExtensionMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @wrapperExtensionMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element_3F_ ("wrapperExtensionMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_wrapperExtensionMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_semanticExpressionListForGeneration_2E_element::GGS_semanticExpressionListForGeneration_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration_2E_element::~ GGS_semanticExpressionListForGeneration_2E_element (void) {
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

GGS_semanticExpressionListForGeneration_2E_element GGS_semanticExpressionListForGeneration_2E_element::class_func_new (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2E_element ("semanticExpressionListForGeneration.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

GGS_formalParameterListForGeneration_2E_element::~ GGS_formalParameterListForGeneration_2E_element (void) {
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

GGS_formalParameterListForGeneration_2E_element GGS_formalParameterListForGeneration_2E_element::class_func_new (const GGS_lstring & in_mFormalSelector,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration_2E_element ("formalParameterListForGeneration.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formalParameterListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

GGS_formalInputParameterListForGeneration_2E_element::~ GGS_formalInputParameterListForGeneration_2E_element (void) {
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

GGS_formalInputParameterListForGeneration_2E_element GGS_formalInputParameterListForGeneration_2E_element::class_func_new (const GGS_lstring & in_mFormalSelector,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2E_element ("formalInputParameterListForGeneration.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formalInputParameterListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

GGS_signatureForGrammarAnalysis_2E_element::~ GGS_signatureForGrammarAnalysis_2E_element (void) {
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

GGS_signatureForGrammarAnalysis_2E_element GGS_signatureForGrammarAnalysis_2E_element::class_func_new (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2E_element ("signatureForGrammarAnalysis.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_signatureForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
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

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::~ GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (void) {
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

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element ("nonterminalSymbolLabelMapForGrammarAnalysis.element",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ ("nonterminalSymbolLabelMapForGrammarAnalysis.element?",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::~ GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (void) {
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

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element ("nonTerminalSymbolMapForGrammarAnalysis.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ("nonTerminalSymbolMapForGrammarAnalysis.element?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mNoWarningIfUnused (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::~ GGS_localConstantList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localConstantList_2E_element GGS_localConstantList_2E_element::init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                         const GGS_lstring & in_mName,
                                                                                         const GGS_bool & in_mNoWarningIfUnused,
                                                                                         const GGS_string & in_mCppName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mNoWarningIfUnused = in_mNoWarningIfUnused ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const GGS_lstring & inOperand1,
                                                                    const GGS_bool & inOperand2,
                                                                    const GGS_string & inOperand3) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mNoWarningIfUnused (inOperand2),
mProperty_mCppName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element GGS_localConstantList_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                   const GGS_lstring & in_mName,
                                                                                   const GGS_bool & in_mNoWarningIfUnused,
                                                                                   const GGS_string & in_mCppName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mNoWarningIfUnused = in_mNoWarningIfUnused ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localConstantList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mNoWarningIfUnused.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mNoWarningIfUnused.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localConstantList.element:") ;
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
//     @localConstantList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList_2E_element ("localConstantList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element GGS_localConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_localConstantList_2E_element result ;
  const GGS_localConstantList_2E_element * p = (const GGS_localConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::~ GGS_localInitializedVariableList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element GGS_localInitializedVariableList_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                           const GGS_lstring & in_mName,
                                                                                                           const GGS_string & in_mCppName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localInitializedVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element GGS_localInitializedVariableList_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                         const GGS_lstring & in_mName,
                                                                                                         const GGS_string & in_mCppName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localInitializedVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localInitializedVariableList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localInitializedVariableList.element:") ;
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
//     @localInitializedVariableList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ("localInitializedVariableList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localInitializedVariableList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localInitializedVariableList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localInitializedVariableList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element GGS_localInitializedVariableList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList_2E_element result ;
  const GGS_localInitializedVariableList_2E_element * p = (const GGS_localInitializedVariableList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localInitializedVariableList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::GGS_propertyIndexMap_2E_element (void) :
mProperty_lkey (),
mProperty_mPropertyTypeIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::~ GGS_propertyIndexMap_2E_element (void) {
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

GGS_propertyIndexMap_2E_element GGS_propertyIndexMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ("propertyIndexMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyIndexMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyIndexMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyIndexMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element GGS_propertyIndexMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap_2E_element result ;
  const GGS_propertyIndexMap_2E_element * p = (const GGS_propertyIndexMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyIndexMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyIndexMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element_3F_ ("propertyIndexMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyIndexMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_nonterminalLabelMap_2E_element::~ GGS_nonterminalLabelMap_2E_element (void) {
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

GGS_nonterminalLabelMap_2E_element GGS_nonterminalLabelMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element ("nonterminalLabelMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalLabelMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @nonterminalLabelMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element_3F_ ("nonterminalLabelMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalLabelMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_nonterminalMap_2E_element::~ GGS_nonterminalMap_2E_element (void) {
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

GGS_nonterminalMap_2E_element GGS_nonterminalMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element ("nonterminalMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @nonterminalMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element_3F_ ("nonterminalMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_ruleLabelImplementationList_2E_element::~ GGS_ruleLabelImplementationList_2E_element (void) {
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

GGS_ruleLabelImplementationList_2E_element GGS_ruleLabelImplementationList_2E_element::class_func_new (const GGS_lstring & in_mLabelName,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2E_element ("ruleLabelImplementationList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleLabelImplementationList_2E_element::staticTypeDescriptor (void) const {
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

GGS_uselessEntityLocationMap_2E_element::GGS_uselessEntityLocationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mUnusedEntityName (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element::~ GGS_uselessEntityLocationMap_2E_element (void) {
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

GGS_uselessEntityLocationMap_2E_element GGS_uselessEntityLocationMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element ("uselessEntityLocationMap.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uselessEntityLocationMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @uselessEntityLocationMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element_3F_ ("uselessEntityLocationMap.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uselessEntityLocationMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_collectionValueElementListForGeneration_2E_element::GGS_collectionValueElementListForGeneration_2E_element (void) :
mProperty_expression (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element::~ GGS_collectionValueElementListForGeneration_2E_element (void) {
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

GGS_collectionValueElementListForGeneration_2E_element GGS_collectionValueElementListForGeneration_2E_element::class_func_new (const GGS_semanticExpressionForGeneration & in_expression,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2E_element ("collectionValueElementListForGeneration.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_collectionValueElementListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

GGS_actualOutputArgumentList_2E_element::~ GGS_actualOutputArgumentList_2E_element (void) {
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

GGS_actualOutputArgumentList_2E_element GGS_actualOutputArgumentList_2E_element::class_func_new (const GGS_lstring & in_mActualSelector,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputArgumentList_2E_element ("actualOutputArgumentList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualOutputArgumentList_2E_element::staticTypeDescriptor (void) const {
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

GGS_castInstructionBranchListAST_2E_element::GGS_castInstructionBranchListAST_2E_element (void) :
mProperty_mTypeName (),
mProperty_mConstantVarName (),
mProperty_mInstructionList (),
mProperty_mTypeComparisonKind (),
mProperty_mEndOfInstructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST_2E_element::~ GGS_castInstructionBranchListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_castInstructionBranchListAST_2E_element GGS_castInstructionBranchListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mTypeName,
                                                                                                                   const GGS_lstring & in_mConstantVarName,
                                                                                                                   const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                                                   const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                   const GGS_location & in_mEndOfInstructions,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_castInstructionBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mConstantVarName = in_mConstantVarName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mEndOfInstructions = in_mEndOfInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST_2E_element::GGS_castInstructionBranchListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_semanticInstructionListAST & inOperand2,
                                                                                          const GGS_dynamicTypeComparisonKind & inOperand3,
                                                                                          const GGS_location & inOperand4) :
mProperty_mTypeName (inOperand0),
mProperty_mConstantVarName (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mTypeComparisonKind (inOperand3),
mProperty_mEndOfInstructions (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST_2E_element GGS_castInstructionBranchListAST_2E_element::class_func_new (const GGS_lstring & in_mTypeName,
                                                                                                         const GGS_lstring & in_mConstantVarName,
                                                                                                         const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                                         const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                         const GGS_location & in_mEndOfInstructions,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_castInstructionBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mConstantVarName = in_mConstantVarName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mEndOfInstructions = in_mEndOfInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_castInstructionBranchListAST_2E_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mConstantVarName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mTypeComparisonKind.isValid () && mProperty_mEndOfInstructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST_2E_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mConstantVarName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mEndOfInstructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @castInstructionBranchListAST.element:") ;
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
//     @castInstructionBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST_2E_element ("castInstructionBranchListAST.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInstructionBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInstructionBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInstructionBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST_2E_element GGS_castInstructionBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_castInstructionBranchListAST_2E_element result ;
  const GGS_castInstructionBranchListAST_2E_element * p = (const GGS_castInstructionBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInstructionBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::~ GGS_fixitElementForGeneration_2E_fixItReplace (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::class_func_new (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItReplace generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ("fixitElementForGeneration.fixItReplace",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementForGeneration_2E_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace * p = (const GGS_fixitElementForGeneration_2E_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementForGeneration_2E_fixItReplace_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValid (void) const {
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

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::description (String & ioString,
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
//     @fixitElementForGeneration.fixItReplace? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ("fixitElementForGeneration.fixItReplace?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::~ GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::class_func_new (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertBefore generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ("fixitElementForGeneration.fixItInsertBefore",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementForGeneration_2E_fixItInsertBefore_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValid (void) const {
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

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::description (String & ioString,
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
//     @fixitElementForGeneration.fixItInsertBefore? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ("fixitElementForGeneration.fixItInsertBefore?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::~ GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::class_func_new (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertAfter generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ("fixitElementForGeneration.fixItInsertAfter",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementForGeneration_2E_fixItInsertAfter_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValid (void) const {
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

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::description (String & ioString,
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
//     @fixitElementForGeneration.fixItInsertAfter? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ("fixitElementForGeneration.fixItInsertAfter?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) :
mProperty_mOptionalTypeName (),
mProperty_mDeclaredAsUnused (),
mProperty_mOptionalConstantName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::~ GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element GGS_forInstructionEnumeratedObjectElementListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                                                                                                                                           const GGS_bool & in_mDeclaredAsUnused,
                                                                                                                                           const GGS_lstring & in_mOptionalConstantName,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  result.mProperty_mDeclaredAsUnused = in_mDeclaredAsUnused ;
  result.mProperty_mOptionalConstantName = in_mOptionalConstantName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                                          const GGS_bool & inOperand1,
                                                                                                                          const GGS_lstring & inOperand2) :
mProperty_mOptionalTypeName (inOperand0),
mProperty_mDeclaredAsUnused (inOperand1),
mProperty_mOptionalConstantName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element GGS_forInstructionEnumeratedObjectElementListAST_2E_element::class_func_new (const GGS_lstring & in_mOptionalTypeName,
                                                                                                                                         const GGS_bool & in_mDeclaredAsUnused,
                                                                                                                                         const GGS_lstring & in_mOptionalConstantName,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  result.mProperty_mDeclaredAsUnused = in_mDeclaredAsUnused ;
  result.mProperty_mOptionalConstantName = in_mOptionalConstantName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectElementListAST_2E_element::isValid (void) const {
  return mProperty_mOptionalTypeName.isValid () && mProperty_mDeclaredAsUnused.isValid () && mProperty_mOptionalConstantName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::drop (void) {
  mProperty_mOptionalTypeName.drop () ;
  mProperty_mDeclaredAsUnused.drop () ;
  mProperty_mOptionalConstantName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectElementListAST.element:") ;
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
//     @forInstructionEnumeratedObjectElementListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ("forInstructionEnumeratedObjectElementListAST.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectElementListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectElementListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectElementListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element GGS_forInstructionEnumeratedObjectElementListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST_2E_element result ;
  const GGS_forInstructionEnumeratedObjectElementListAST_2E_element * p = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectElementListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (void) :
mProperty_mEnumerationOrder (),
mProperty_mEnumeratedExpression (),
mProperty_mEnumeratorCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::~ GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mEnumerationOrder,
                                                                                                                                                 const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                                 const GGS_string & in_mEnumeratorCppName,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumerationOrder = in_mEnumerationOrder ;
  result.mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  result.mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                                                const GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                const GGS_string & inOperand2) :
mProperty_mEnumerationOrder (inOperand0),
mProperty_mEnumeratedExpression (inOperand1),
mProperty_mEnumeratorCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::class_func_new (const GGS_string & in_mEnumerationOrder,
                                                                                                                                               const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                               const GGS_string & in_mEnumeratorCppName,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumerationOrder = in_mEnumerationOrder ;
  result.mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  result.mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::isValid (void) const {
  return mProperty_mEnumerationOrder.isValid () && mProperty_mEnumeratedExpression.isValid () && mProperty_mEnumeratorCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::drop (void) {
  mProperty_mEnumerationOrder.drop () ;
  mProperty_mEnumeratedExpression.drop () ;
  mProperty_mEnumeratorCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListForGeneration.element:") ;
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
//     @forInstructionEnumeratedObjectListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ("forInstructionEnumeratedObjectListForGeneration.element",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration_2E_element result ;
  const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element * p = (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp::GGS_ifExpressionKind_2E_letExp (void) :
mProperty_constantName (),
mProperty_exp (),
mProperty_endOfExp (),
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp::~ GGS_ifExpressionKind_2E_letExp (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp GGS_ifExpressionKind_2E_letExp::init_21__21__21__21_ (const GGS_lstring & in_constantName,
                                                                                     const GGS_semanticExpressionAST & in_exp,
                                                                                     const GGS_location & in_endOfExp,
                                                                                     const GGS_lstring & in_typeName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantName = in_constantName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp::GGS_ifExpressionKind_2E_letExp (const GGS_lstring & inOperand0,
                                                                const GGS_semanticExpressionAST & inOperand1,
                                                                const GGS_location & inOperand2,
                                                                const GGS_lstring & inOperand3) :
mProperty_constantName (inOperand0),
mProperty_exp (inOperand1),
mProperty_endOfExp (inOperand2),
mProperty_typeName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp GGS_ifExpressionKind_2E_letExp::class_func_new (const GGS_lstring & in_constantName,
                                                                               const GGS_semanticExpressionAST & in_exp,
                                                                               const GGS_location & in_endOfExp,
                                                                               const GGS_lstring & in_typeName,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantName = in_constantName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letExp::isValid (void) const {
  return mProperty_constantName.isValid () && mProperty_exp.isValid () && mProperty_endOfExp.isValid () && mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letExp::drop (void) {
  mProperty_constantName.drop () ;
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letExp::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.letExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constantName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.letExp generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp ("ifExpressionKind.letExp",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifExpressionKind_2E_letExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp GGS_ifExpressionKind_2E_letExp::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letExp result ;
  const GGS_ifExpressionKind_2E_letExp * p = (const GGS_ifExpressionKind_2E_letExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ifExpressionKind_2E_letExp_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp_3F_::GGS_ifExpressionKind_2E_letExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp_3F_::GGS_ifExpressionKind_2E_letExp_3F_ (const GGS_ifExpressionKind_2E_letExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp_3F_ GGS_ifExpressionKind_2E_letExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_letExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letExp_3F_::isValid (void) const {
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

bool GGS_ifExpressionKind_2E_letExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_letExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letExp_3F_::description (String & ioString,
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
//     @ifExpressionKind.letExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp_3F_ ("ifExpressionKind.letExp?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifExpressionKind_2E_letExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letExp_3F_ GGS_ifExpressionKind_2E_letExp_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letExp_3F_ result ;
  const GGS_ifExpressionKind_2E_letExp_3F_ * p = (const GGS_ifExpressionKind_2E_letExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::~ GGS_ifTestForGeneration_2E_regular (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::class_func_new (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.regular:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.regular generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ("ifTestForGeneration.regular",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestForGeneration_2E_regular::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  const GGS_ifTestForGeneration_2E_regular * p = (const GGS_ifTestForGeneration_2E_regular *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ifTestForGeneration_2E_regular_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (const GGS_ifTestForGeneration_2E_regular & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular_3F_::isValid (void) const {
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

bool GGS_ifTestForGeneration_2E_regular_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_regular () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::description (String & ioString,
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
//     @ifTestForGeneration.regular? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ("ifTestForGeneration.regular?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestForGeneration_2E_regular_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  const GGS_ifTestForGeneration_2E_regular_3F_ * p = (const GGS_ifTestForGeneration_2E_regular_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp::GGS_ifTestForGeneration_2E_letExp (void) :
mProperty_targetVarCppName (),
mProperty_exp (),
mProperty_targetType (),
mProperty_testType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp::~ GGS_ifTestForGeneration_2E_letExp (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp GGS_ifTestForGeneration_2E_letExp::init_21__21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                           const GGS_semanticExpressionForGeneration & in_exp,
                                                                                           const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                           const GGS_unifiedTypeMapEntry & in_testType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  result.mProperty_testType = in_testType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp::GGS_ifTestForGeneration_2E_letExp (const GGS_string & inOperand0,
                                                                      const GGS_semanticExpressionForGeneration & inOperand1,
                                                                      const GGS_unifiedTypeMapEntry & inOperand2,
                                                                      const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_targetVarCppName (inOperand0),
mProperty_exp (inOperand1),
mProperty_targetType (inOperand2),
mProperty_testType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp GGS_ifTestForGeneration_2E_letExp::class_func_new (const GGS_string & in_targetVarCppName,
                                                                                     const GGS_semanticExpressionForGeneration & in_exp,
                                                                                     const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                     const GGS_unifiedTypeMapEntry & in_testType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  result.mProperty_testType = in_testType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () && mProperty_testType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
  mProperty_testType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letExp::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.letExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_testType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.letExp generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letExp ("ifTestForGeneration.letExp",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestForGeneration_2E_letExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp GGS_ifTestForGeneration_2E_letExp::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letExp result ;
  const GGS_ifTestForGeneration_2E_letExp * p = (const GGS_ifTestForGeneration_2E_letExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ifTestForGeneration_2E_letExp_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp_3F_::GGS_ifTestForGeneration_2E_letExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp_3F_::GGS_ifTestForGeneration_2E_letExp_3F_ (const GGS_ifTestForGeneration_2E_letExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp_3F_ GGS_ifTestForGeneration_2E_letExp_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_letExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letExp_3F_::isValid (void) const {
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

bool GGS_ifTestForGeneration_2E_letExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_letExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letExp_3F_::description (String & ioString,
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
//     @ifTestForGeneration.letExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letExp_3F_ ("ifTestForGeneration.letExp?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestForGeneration_2E_letExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letExp_3F_ GGS_ifTestForGeneration_2E_letExp_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letExp_3F_ result ;
  const GGS_ifTestForGeneration_2E_letExp_3F_ * p = (const GGS_ifTestForGeneration_2E_letExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (void) :
mProperty_targetVarCppName (),
mProperty_exp (),
mProperty_targetType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::~ GGS_ifTestForGeneration_2E_optionalExp (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::init_21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                                 const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                 const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (const GGS_string & inOperand0,
                                                                                const GGS_semanticExpressionForGeneration & inOperand1,
                                                                                const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_targetVarCppName (inOperand0),
mProperty_exp (inOperand1),
mProperty_targetType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::class_func_new (const GGS_string & in_targetVarCppName,
                                                                                               const GGS_semanticExpressionForGeneration & in_exp,
                                                                                               const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.optionalExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.optionalExp generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ("ifTestForGeneration.optionalExp",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestForGeneration_2E_optionalExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_optionalExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_optionalExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  const GGS_ifTestForGeneration_2E_optionalExp * p = (const GGS_ifTestForGeneration_2E_optionalExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_optionalExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.optionalExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ifTestForGeneration_2E_optionalExp_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_::GGS_ifTestForGeneration_2E_optionalExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_::GGS_ifTestForGeneration_2E_optionalExp_3F_ (const GGS_ifTestForGeneration_2E_optionalExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration_2E_optionalExp_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp_3F_::isValid (void) const {
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

bool GGS_ifTestForGeneration_2E_optionalExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_optionalExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp_3F_::description (String & ioString,
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
//     @ifTestForGeneration.optionalExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ("ifTestForGeneration.optionalExp?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestForGeneration_2E_optionalExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_optionalExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_optionalExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration_2E_optionalExp_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  const GGS_ifTestForGeneration_2E_optionalExp_3F_ * p = (const GGS_ifTestForGeneration_2E_optionalExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_optionalExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.optionalExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::~ GGS_logListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::init_21__21_ (const GGS_lstring & in_mLogMessage,
                                                                   const GGS_semanticExpressionAST & in_mLogExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::class_func_new (const GGS_lstring & in_mLogMessage,
                                                                     const GGS_semanticExpressionAST & in_mLogExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_logListAST_2E_element::isValid (void) const {
  return mProperty_mLogMessage.isValid () && mProperty_mLogExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::drop (void) {
  mProperty_mLogMessage.drop () ;
  mProperty_mLogExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @logListAST.element:") ;
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
//     @logListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST_2E_element ("logListAST.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  const GGS_logListAST_2E_element * p = (const GGS_logListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (void) :
mProperty_mExtractedValueTypeName (),
mProperty_mExtractedValueName (),
mProperty_mMarkedAsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::~ GGS_switchExtractedValuesListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element GGS_switchExtractedValuesListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mExtractedValueTypeName,
                                                                                                           const GGS_lstring & in_mExtractedValueName,
                                                                                                           const GGS_bool & in_mMarkedAsUnused,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExtractedValueTypeName = in_mExtractedValueTypeName ;
  result.mProperty_mExtractedValueName = in_mExtractedValueName ;
  result.mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_bool & inOperand2) :
mProperty_mExtractedValueTypeName (inOperand0),
mProperty_mExtractedValueName (inOperand1),
mProperty_mMarkedAsUnused (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element GGS_switchExtractedValuesListAST_2E_element::class_func_new (const GGS_lstring & in_mExtractedValueTypeName,
                                                                                                         const GGS_lstring & in_mExtractedValueName,
                                                                                                         const GGS_bool & in_mMarkedAsUnused,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExtractedValueTypeName = in_mExtractedValueTypeName ;
  result.mProperty_mExtractedValueName = in_mExtractedValueName ;
  result.mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchExtractedValuesListAST_2E_element::isValid (void) const {
  return mProperty_mExtractedValueTypeName.isValid () && mProperty_mExtractedValueName.isValid () && mProperty_mMarkedAsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::drop (void) {
  mProperty_mExtractedValueTypeName.drop () ;
  mProperty_mExtractedValueName.drop () ;
  mProperty_mMarkedAsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchExtractedValuesListAST.element:") ;
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
//     @switchExtractedValuesListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ("switchExtractedValuesListAST.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchExtractedValuesListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchExtractedValuesListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchExtractedValuesListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element GGS_switchExtractedValuesListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST_2E_element result ;
  const GGS_switchExtractedValuesListAST_2E_element * p = (const GGS_switchExtractedValuesListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchExtractedValuesListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::~ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (void) {
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

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element ("unusedNonTerminalSymbolMapForGrammarAnalysis.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ("unusedNonTerminalSymbolMapForGrammarAnalysis.element?",
                                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::~ GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (void) {
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

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::class_func_new (const GGS_lstring & in_mNonTerminalSymbol,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element ("nonTerminalSymbolSortedListForGrammarAnalysis.element",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
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

GGS_syntaxComponentListForGrammarAnalysis_2E_element::~ GGS_syntaxComponentListForGrammarAnalysis_2E_element (void) {
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

GGS_syntaxComponentListForGrammarAnalysis_2E_element GGS_syntaxComponentListForGrammarAnalysis_2E_element::class_func_new (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2E_element ("syntaxComponentListForGrammarAnalysis.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxComponentListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
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

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::~ GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (void) {
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

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element ("terminalSymbolsMapForGrammarAnalysis.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @terminalSymbolsMapForGrammarAnalysis_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ ("terminalSymbolsMapForGrammarAnalysis.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionMethodMapForGlobalCheckings_2E_element::GGS_extensionMethodMapForGlobalCheckings_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element::~ GGS_extensionMethodMapForGlobalCheckings_2E_element (void) {
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

GGS_extensionMethodMapForGlobalCheckings_2E_element GGS_extensionMethodMapForGlobalCheckings_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element ("extensionMethodMapForGlobalCheckings.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForGlobalCheckings_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionMethodMapForGlobalCheckings_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element_3F_ ("extensionMethodMapForGlobalCheckings.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionSetterMapForGlobalCheckings_2E_element::~ GGS_extensionSetterMapForGlobalCheckings_2E_element (void) {
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

GGS_extensionSetterMapForGlobalCheckings_2E_element GGS_extensionSetterMapForGlobalCheckings_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element ("extensionSetterMapForGlobalCheckings.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForGlobalCheckings_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionSetterMapForGlobalCheckings_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element_3F_ ("extensionSetterMapForGlobalCheckings.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_extensionGetterMapForGlobalCheckings_2E_element::~ GGS_extensionGetterMapForGlobalCheckings_2E_element (void) {
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

GGS_extensionGetterMapForGlobalCheckings_2E_element GGS_extensionGetterMapForGlobalCheckings_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element ("extensionGetterMapForGlobalCheckings.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForGlobalCheckings_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @extensionGetterMapForGlobalCheckings_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element_3F_ ("extensionGetterMapForGlobalCheckings.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_galgas_33_QualifiedFeatureList_2E_element::GGS_galgas_33_QualifiedFeatureList_2E_element (void) :
mProperty_mFeatureName (),
mProperty_mFeatureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element::~ GGS_galgas_33_QualifiedFeatureList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element GGS_galgas_33_QualifiedFeatureList_2E_element::init_21__21_ (const GGS_lstring & in_mFeatureName,
                                                                                                           const GGS_lstring & in_mFeatureValue,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_QualifiedFeatureList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFeatureName = in_mFeatureName ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element::GGS_galgas_33_QualifiedFeatureList_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_lstring & inOperand1) :
mProperty_mFeatureName (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element GGS_galgas_33_QualifiedFeatureList_2E_element::class_func_new (const GGS_lstring & in_mFeatureName,
                                                                                                             const GGS_lstring & in_mFeatureValue,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_QualifiedFeatureList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFeatureName = in_mFeatureName ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_QualifiedFeatureList_2E_element::isValid (void) const {
  return mProperty_mFeatureName.isValid () && mProperty_mFeatureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList_2E_element::drop (void) {
  mProperty_mFeatureName.drop () ;
  mProperty_mFeatureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3QualifiedFeatureList.element:") ;
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
//     @galgas3QualifiedFeatureList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2E_element ("galgas3QualifiedFeatureList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_QualifiedFeatureList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_QualifiedFeatureList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_QualifiedFeatureList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element GGS_galgas_33_QualifiedFeatureList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_galgas_33_QualifiedFeatureList_2E_element result ;
  const GGS_galgas_33_QualifiedFeatureList_2E_element * p = (const GGS_galgas_33_QualifiedFeatureList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_QualifiedFeatureList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_headerCompositionMap_2E_element::~ GGS_headerCompositionMap_2E_element (void) {
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

GGS_headerCompositionMap_2E_element GGS_headerCompositionMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ("headerCompositionMap.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_headerCompositionMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @headerCompositionMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ("headerCompositionMap.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_headerCompositionMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_headerRepartitionMap_2E_element::~ GGS_headerRepartitionMap_2E_element (void) {
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

GGS_headerRepartitionMap_2E_element GGS_headerRepartitionMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ("headerRepartitionMap.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_headerRepartitionMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @headerRepartitionMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ("headerRepartitionMap.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_headerRepartitionMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_projectQualifiedFeatureMap_2E_element::GGS_projectQualifiedFeatureMap_2E_element (void) :
mProperty_lkey (),
mProperty_mFeatureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element::~ GGS_projectQualifiedFeatureMap_2E_element (void) {
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

GGS_projectQualifiedFeatureMap_2E_element GGS_projectQualifiedFeatureMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ("projectQualifiedFeatureMap.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_projectQualifiedFeatureMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @projectQualifiedFeatureMap_2E_element_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ("projectQualifiedFeatureMap.element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_projectQualifiedFeatureMap_2E_element_3F_::staticTypeDescriptor (void) const {
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
// @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralUIntExpressionAST::objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const {
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

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::
init_21_ (const GGS_lbigint & in_mLiteralInt,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralUIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralUIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralUIntExpressionAST_init_21_ (in_mLiteralInt, inCompiler) ;
  const GGS_templateLiteralUIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::
templateLiteralUIntExpressionAST_init_21_ (const GGS_lbigint & in_mLiteralInt,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::class_func_new (const GGS_lbigint & in_mLiteralInt,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_templateLiteralUIntExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralUIntExpressionAST (in_mLiteralInt,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
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

acPtr_class * cPtr_templateLiteralUIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mProperty_mLiteralInt, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralUIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInt.printNonNullClassInstanceProperties ("mLiteralInt") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralUIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                                                        & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralUIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateLiteralUIntExpressionAST result ;
  const GGS_templateLiteralUIntExpressionAST * p = (const GGS_templateLiteralUIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralUIntExpressionAST *> (p)) {
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

ComparisonResult GGS_templateLiteralCharExpressionAST::objectCompare (const GGS_templateLiteralCharExpressionAST & inOperand) const {
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

GGS_templateLiteralCharExpressionAST::GGS_templateLiteralCharExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST GGS_templateLiteralCharExpressionAST::
init_21_ (const GGS_lchar & in_mLiteralChar,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralCharExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralCharExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralCharExpressionAST_init_21_ (in_mLiteralChar, inCompiler) ;
  const GGS_templateLiteralCharExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::
templateLiteralCharExpressionAST_init_21_ (const GGS_lchar & in_mLiteralChar,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralChar = in_mLiteralChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST::GGS_templateLiteralCharExpressionAST (const cPtr_templateLiteralCharExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralCharExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST GGS_templateLiteralCharExpressionAST::class_func_new (const GGS_lchar & in_mLiteralChar,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_templateLiteralCharExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralCharExpressionAST (in_mLiteralChar,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_templateLiteralCharExpressionAST::readProperty_mLiteralChar (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_templateLiteralCharExpressionAST * p = (cPtr_templateLiteralCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
    return p->mProperty_mLiteralChar ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralCharExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralChar () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (const GGS_lchar & in_mLiteralChar,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
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

acPtr_class * cPtr_templateLiteralCharExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralCharExpressionAST (mProperty_mLiteralChar, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralCharExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralChar.printNonNullClassInstanceProperties ("mLiteralChar") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralCharExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ("templateLiteralCharExpressionAST",
                                                                                        & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateLiteralCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralCharExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST GGS_templateLiteralCharExpressionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateLiteralCharExpressionAST result ;
  const GGS_templateLiteralCharExpressionAST * p = (const GGS_templateLiteralCharExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralCharExpressionAST *> (p)) {
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

ComparisonResult GGS_templateLiteralDoubleExpressionAST::objectCompare (const GGS_templateLiteralDoubleExpressionAST & inOperand) const {
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

GGS_templateLiteralDoubleExpressionAST::GGS_templateLiteralDoubleExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST::
init_21_ (const GGS_ldouble & in_mLiteralDouble,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralDoubleExpressionAST_init_21_ (in_mLiteralDouble, inCompiler) ;
  const GGS_templateLiteralDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::
templateLiteralDoubleExpressionAST_init_21_ (const GGS_ldouble & in_mLiteralDouble,
                                             Compiler * /* inCompiler */) {
  mProperty_mLiteralDouble = in_mLiteralDouble ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST::GGS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST::class_func_new (const GGS_ldouble & in_mLiteralDouble,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateLiteralDoubleExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralDoubleExpressionAST (in_mLiteralDouble,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_templateLiteralDoubleExpressionAST::readProperty_mLiteralDouble (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ldouble () ;
  }else{
    cPtr_templateLiteralDoubleExpressionAST * p = (cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
    return p->mProperty_mLiteralDouble ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralDouble () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (const GGS_ldouble & in_mLiteralDouble,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
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

acPtr_class * cPtr_templateLiteralDoubleExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralDoubleExpressionAST (mProperty_mLiteralDouble, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralDouble.printNonNullClassInstanceProperties ("mLiteralDouble") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralDoubleExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ("templateLiteralDoubleExpressionAST",
                                                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateLiteralDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateLiteralDoubleExpressionAST result ;
  const GGS_templateLiteralDoubleExpressionAST * p = (const GGS_templateLiteralDoubleExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralDoubleExpressionAST *> (p)) {
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S6 (index = 154)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (32)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_SHIFT (33)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (91)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S8 (index = 186)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (83)
, BOTTOM_UP_END
// State S9 (index = 203)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S10 (index = 206)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S30 (index = 1336)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (74)
, BOTTOM_UP_END
// State S31 (index = 1339)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (75)
, BOTTOM_UP_END
// State S32 (index = 1342)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (93)
, BOTTOM_UP_END
// State S33 (index = 1345)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (92)
, BOTTOM_UP_END
// State S34 (index = 1348)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S35 (index = 1351)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (110)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
// State S36 (index = 1356)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (84)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S38 (index = 1436)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S41 (index = 1599)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (84)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S45 (index = 1791)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (87)
, BOTTOM_UP_END
// State S46 (index = 1794)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (88)
, BOTTOM_UP_END
// State S47 (index = 1797)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (89)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (90)
, BOTTOM_UP_END
// State S48 (index = 1802)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (92)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S71 (index = 2565)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (109)
, BOTTOM_UP_END
// State S72 (index = 2568)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_SHIFT (110)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_SHIFT (111)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S74 (index = 2652)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (73)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S76 (index = 2690)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (120)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (121)
, BOTTOM_UP_END
// State S77 (index = 2699)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_SHIFT (123)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (94)
, BOTTOM_UP_END
// State S78 (index = 2704)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (125)
, BOTTOM_UP_END
// State S79 (index = 2707)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (127)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S82 (index = 2760)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (130)
, BOTTOM_UP_END
// State S83 (index = 2763)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S86 (index = 2930)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (131)
, BOTTOM_UP_END
// State S87 (index = 2933)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S88 (index = 2942)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (133)
, BOTTOM_UP_END
// State S89 (index = 2945)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (134)
, BOTTOM_UP_END
// State S90 (index = 2948)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (135)
, BOTTOM_UP_END
// State S91 (index = 2951)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (136)
, BOTTOM_UP_END
// State S92 (index = 2954)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S110 (index = 4012)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (67)
, BOTTOM_UP_END
// State S111 (index = 4015)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (68)
, BOTTOM_UP_END
// State S112 (index = 4018)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (69)
, BOTTOM_UP_END
// State S113 (index = 4021)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (149)
, BOTTOM_UP_END
// State S114 (index = 4024)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (73)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S115 (index = 4041)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S117 (index = 4065)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (75)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (153)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END
// State S118 (index = 4072)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END
// State S119 (index = 4081)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (29)
, BOTTOM_UP_END
// State S120 (index = 4090)
, Lexique_galgasTemplateScanner::kToken_in, BOTTOM_UP_SHIFT (155)
, BOTTOM_UP_END
// State S121 (index = 4093)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (156)
, BOTTOM_UP_END
// State S122 (index = 4096)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (87)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (121)
, BOTTOM_UP_END
// State S123 (index = 4105)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S124 (index = 4122)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_SHIFT (161)
, BOTTOM_UP_END
// State S125 (index = 4125)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (162)
, BOTTOM_UP_END
// State S126 (index = 4132)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (164)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S128 (index = 4166)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S129 (index = 4175)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S131 (index = 4265)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S132 (index = 4274)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (168)
, BOTTOM_UP_END
// State S133 (index = 4277)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (169)
, BOTTOM_UP_END
// State S134 (index = 4280)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (170)
, BOTTOM_UP_END
// State S135 (index = 4283)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (171)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S137 (index = 4367)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (172)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S150 (index = 5132)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S152 (index = 5166)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (78)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (78)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (78)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S154 (index = 5198)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (79)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_SHIFT (174)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S156 (index = 5228)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END
// State S157 (index = 5237)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (87)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (121)
, BOTTOM_UP_END
// State S158 (index = 5246)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (178)
, BOTTOM_UP_END
// State S159 (index = 5249)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S160 (index = 5266)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (95)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S162 (index = 5292)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (182)
, BOTTOM_UP_END
// State S163 (index = 5295)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (183)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (116)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S165 (index = 5319)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (71)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (71)
, BOTTOM_UP_END
// State S166 (index = 5324)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (72)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (72)
, BOTTOM_UP_END
// State S167 (index = 5329)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (187)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S169 (index = 5413)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S170 (index = 5422)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (65)
, BOTTOM_UP_END
// State S171 (index = 5425)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (189)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S173 (index = 5509)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (190)
, BOTTOM_UP_END
// State S174 (index = 5512)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (81)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S175 (index = 5529)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (193)
, BOTTOM_UP_END
// State S176 (index = 5532)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (194)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (85)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (85)
, BOTTOM_UP_END
// State S177 (index = 5539)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (88)
, BOTTOM_UP_END
// State S178 (index = 5542)
, Lexique_galgasTemplateScanner::kToken_in, BOTTOM_UP_SHIFT (196)
, BOTTOM_UP_END
// State S179 (index = 5545)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (97)
, BOTTOM_UP_END
// State S180 (index = 5548)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (197)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S182 (index = 5572)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (114)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (162)
, BOTTOM_UP_END
// State S183 (index = 5579)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (201)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (124)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (202)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (203)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END
// State S184 (index = 5590)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S186 (index = 5612)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (110)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S188 (index = 5698)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (208)
, BOTTOM_UP_END
// State S189 (index = 5701)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (66)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S191 (index = 5725)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (81)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S192 (index = 5742)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (80)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S194 (index = 5776)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (211)
, BOTTOM_UP_END
// State S195 (index = 5779)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (30)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S197 (index = 5809)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (213)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S199 (index = 5833)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (102)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_SHIFT (215)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (102)
, BOTTOM_UP_END
// State S200 (index = 5840)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (115)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (115)
, BOTTOM_UP_END
// State S201 (index = 5845)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S202 (index = 5858)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (217)
, BOTTOM_UP_END
// State S203 (index = 5861)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (123)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (123)
, BOTTOM_UP_END
// State S204 (index = 5866)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (201)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (124)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (202)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (203)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END
// State S205 (index = 5879)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (125)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_SHIFT (220)
, BOTTOM_UP_END
// State S206 (index = 5884)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (113)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (113)
, BOTTOM_UP_END
// State S207 (index = 5889)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (111)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S209 (index = 5973)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (75)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (153)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END
// State S210 (index = 5980)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END
// State S211 (index = 5983)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (86)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (86)
, BOTTOM_UP_END
// State S212 (index = 5988)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (223)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (89)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (89)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S214 (index = 6016)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (101)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S216 (index = 6042)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (106)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_SHIFT (227)
, BOTTOM_UP_END
// State S217 (index = 6047)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (120)
, BOTTOM_UP_END
// State S218 (index = 6060)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (229)
, BOTTOM_UP_END
// State S219 (index = 6063)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (201)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (124)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (202)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (203)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END
// State S220 (index = 6076)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (126)
, BOTTOM_UP_END
// State S221 (index = 6079)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (231)
, BOTTOM_UP_END
// State S222 (index = 6082)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, BOTTOM_UP_END
// State S223 (index = 6087)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (232)
, BOTTOM_UP_END
// State S224 (index = 6090)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S226 (index = 6114)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (103)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (103)
, BOTTOM_UP_END
// State S227 (index = 6119)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (108)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S228 (index = 6136)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (236)
, BOTTOM_UP_END
// State S229 (index = 6139)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (117)
, BOTTOM_UP_END
// State S230 (index = 6142)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (119)
, BOTTOM_UP_END
// State S231 (index = 6145)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (122)
, BOTTOM_UP_END
// State S232 (index = 6158)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (90)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (90)
, BOTTOM_UP_END
// State S233 (index = 6163)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (105)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (105)
, BOTTOM_UP_END
// State S234 (index = 6168)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (108)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S235 (index = 6185)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (107)
, BOTTOM_UP_END
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
, BOTTOM_UP_END
// State S237 (index = 6219)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END} ;

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

void cGrammar_templateGrammar::nt_expression_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_term_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_factor_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_primary_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_ (GGS_templateExpressionListAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_template_5F_instruction_ (GGS_templateInstructionListAST &  parameter_1,
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

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GGS_templateInstructionListAST &  parameter_1,
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
                                GGS_lstring inFilePath,
                                GGS_templateInstructionListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
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
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_templateInstructionListAST &  parameter_1
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

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_ (GGS_lstringlist &  parameter_1,
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

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_templateInstructionForEnumerationAST &  parameter_1,
                                GGS_templateExpressionAST &  parameter_2,
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

void cGrammar_templateGrammar::nt_switch_5F_case_ (GGS__5B_lstring_5D_ &  parameter_1,
                                GGS_switchExtractedValuesListAST &  parameter_2,
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

