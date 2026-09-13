#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_optionalExp_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ("ifTestForGeneration.optionalExp?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_optionalExp_3F_::staticTypeDescriptor (void) const {
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

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (void) :
mProperty_mExtractedValueTypeName (),
mProperty_mExtractedValueName (),
mProperty_mMarkedAsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (const GGS_switchExtractedValuesListAST_2E_element & inSource) :
mProperty_mExtractedValueTypeName (inSource.mProperty_mExtractedValueTypeName),
mProperty_mExtractedValueName (inSource.mProperty_mExtractedValueName),
mProperty_mMarkedAsUnused (inSource.mProperty_mMarkedAsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element & GGS_switchExtractedValuesListAST_2E_element::operator = (const GGS_switchExtractedValuesListAST_2E_element & inSource) {
  mProperty_mExtractedValueTypeName = inSource.mProperty_mExtractedValueTypeName ;
  mProperty_mExtractedValueName = inSource.mProperty_mExtractedValueName ;
  mProperty_mMarkedAsUnused = inSource.mProperty_mMarkedAsUnused ;
  return *this ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ("switchExtractedValuesListAST.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchExtractedValuesListAST_2E_element::staticTypeDescriptor (void) const {
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

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) :
mProperty_mOptionalTypeName (),
mProperty_mDeclaredAsUnused (),
mProperty_mOptionalConstantName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) :
mProperty_mOptionalTypeName (inSource.mProperty_mOptionalTypeName),
mProperty_mDeclaredAsUnused (inSource.mProperty_mDeclaredAsUnused),
mProperty_mOptionalConstantName (inSource.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element & GGS_forInstructionEnumeratedObjectElementListAST_2E_element::operator = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) {
  mProperty_mOptionalTypeName = inSource.mProperty_mOptionalTypeName ;
  mProperty_mDeclaredAsUnused = inSource.mProperty_mDeclaredAsUnused ;
  mProperty_mOptionalConstantName = inSource.mProperty_mOptionalConstantName ;
  return *this ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ("forInstructionEnumeratedObjectElementListAST.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectElementListAST_2E_element::staticTypeDescriptor (void) const {
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

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) :
mProperty_mEnumerationOrder (inSource.mProperty_mEnumerationOrder),
mProperty_mEnumeratedExpression (inSource.mProperty_mEnumeratedExpression),
mProperty_mEnumeratorCppName (inSource.mProperty_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::operator = (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) {
  mProperty_mEnumerationOrder = inSource.mProperty_mEnumerationOrder ;
  mProperty_mEnumeratedExpression = inSource.mProperty_mEnumeratedExpression ;
  mProperty_mEnumeratorCppName = inSource.mProperty_mEnumeratorCppName ;
  return *this ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ("forInstructionEnumeratedObjectListForGeneration.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (void) :
mProperty_lkey (),
mProperty_argumentTypeList (),
mProperty_valueType () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (const GGS_subscriptMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_argumentTypeList (inSource.mProperty_argumentTypeList),
mProperty_valueType (inSource.mProperty_valueType) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element & GGS_subscriptMap_2E_element::operator = (const GGS_subscriptMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_argumentTypeList = inSource.mProperty_argumentTypeList ;
  mProperty_valueType = inSource.mProperty_valueType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_subscriptMap_2E_element GGS_subscriptMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_functionSignature & in_argumentTypeList,
                                                                           const GGS_unifiedTypeMapEntry & in_valueType,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_argumentTypeList = in_argumentTypeList ;
  result.mProperty_valueType = in_valueType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_functionSignature & inOperand1,
                                                          const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_argumentTypeList (inOperand1),
mProperty_valueType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_argumentTypeList.isValid () && mProperty_valueType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_argumentTypeList.drop () ;
  mProperty_valueType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @subscriptMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_argumentTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_valueType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element ("subscriptMap.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element GGS_subscriptMap_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element result ;
  const GGS_subscriptMap_2E_element * p = (const GGS_subscriptMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @subscriptMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_::GGS_subscriptMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_::GGS_subscriptMap_2E_element_3F_ (const GGS_subscriptMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap_2E_element_3F_::init_nil (void) {
  GGS_subscriptMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element_3F_::isValid (void) const {
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

bool GGS_subscriptMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_subscriptMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element_3F_::description (String & ioString,
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
//     @subscriptMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ("subscriptMap.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element_3F_ result ;
  const GGS_subscriptMap_2E_element_3F_ * p = (const GGS_subscriptMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (const GGS_localConstantList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mName (inSource.mProperty_mName),
mProperty_mNoWarningIfUnused (inSource.mProperty_mNoWarningIfUnused),
mProperty_mCppName (inSource.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element & GGS_localConstantList_2E_element::operator = (const GGS_localConstantList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mNoWarningIfUnused = inSource.mProperty_mNoWarningIfUnused ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  return *this ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantList_2E_element ("localConstantList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localConstantList_2E_element::staticTypeDescriptor (void) const {
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

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (const GGS_localInitializedVariableList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mName (inSource.mProperty_mName),
mProperty_mCppName (inSource.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element & GGS_localInitializedVariableList_2E_element::operator = (const GGS_localInitializedVariableList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  return *this ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ("localInitializedVariableList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localInitializedVariableList_2E_element::staticTypeDescriptor (void) const {
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

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mExtension () {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (const GGS_equatableExtensionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExtension (inSource.mProperty_mExtension) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element & GGS_equatableExtensionMap_2E_element::operator = (const GGS_equatableExtensionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExtension = inSource.mProperty_mExtension ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element GGS_equatableExtensionMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_equatableComparableExtension & in_mExtension,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtension = in_mExtension ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_equatableComparableExtension & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtension (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtension.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtension.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @equatableExtensionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtension.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @equatableExtensionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element ("equatableExtensionMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equatableExtensionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element GGS_equatableExtensionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element result ;
  const GGS_equatableExtensionMap_2E_element * p = (const GGS_equatableExtensionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @equatableExtensionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_::GGS_equatableExtensionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_::GGS_equatableExtensionMap_2E_element_3F_ (const GGS_equatableExtensionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_ GGS_equatableExtensionMap_2E_element_3F_::init_nil (void) {
  GGS_equatableExtensionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_equatableExtensionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_equatableExtensionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element_3F_::description (String & ioString,
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
//     @equatableExtensionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element_3F_ ("equatableExtensionMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equatableExtensionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_ GGS_equatableExtensionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element_3F_ result ;
  const GGS_equatableExtensionMap_2E_element_3F_ * p = (const GGS_equatableExtensionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (void) :
mProperty_mKey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (const GGS_guiSimpleAttributeListAST_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element & GGS_guiSimpleAttributeListAST_2E_element::operator = (const GGS_guiSimpleAttributeListAST_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element GGS_guiSimpleAttributeListAST_2E_element::init_21__21_ (const GGS_lstring & in_mKey,
                                                                                                 const GGS_lstring & in_mValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_lstring & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiSimpleAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiSimpleAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiSimpleAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2E_element ("guiSimpleAttributeListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiSimpleAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiSimpleAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiSimpleAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element GGS_guiSimpleAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST_2E_element result ;
  const GGS_guiSimpleAttributeListAST_2E_element * p = (const GGS_guiSimpleAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiSimpleAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (void) :
mProperty_mKey (),
mProperty_mAttributeName (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (const GGS_guiCompoundAttributeListAST_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mAttributeName (inSource.mProperty_mAttributeName),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element & GGS_guiCompoundAttributeListAST_2E_element::operator = (const GGS_guiCompoundAttributeListAST_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element GGS_guiCompoundAttributeListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mKey,
                                                                                                         const GGS_lstring & in_mAttributeName,
                                                                                                         const GGS_lstring & in_mValue,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_lstring & inOperand2) :
mProperty_mKey (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiCompoundAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mAttributeName.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiCompoundAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiCompoundAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2E_element ("guiCompoundAttributeListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCompoundAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCompoundAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCompoundAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element GGS_guiCompoundAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST_2E_element result ;
  const GGS_guiCompoundAttributeListAST_2E_element * p = (const GGS_guiCompoundAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCompoundAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (void) :
mProperty_mTerminal (),
mProperty_mDisplayFlags () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (const GGS_terminalLabelListAST_2E_element & inSource) :
mProperty_mTerminal (inSource.mProperty_mTerminal),
mProperty_mDisplayFlags (inSource.mProperty_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element & GGS_terminalLabelListAST_2E_element::operator = (const GGS_terminalLabelListAST_2E_element & inSource) {
  mProperty_mTerminal = inSource.mProperty_mTerminal ;
  mProperty_mDisplayFlags = inSource.mProperty_mDisplayFlags ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element GGS_terminalLabelListAST_2E_element::init_21__21_ (const GGS_lstring & in_mTerminal,
                                                                                       const GGS_uint & in_mDisplayFlags,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTerminal = in_mTerminal ;
  result.mProperty_mDisplayFlags = in_mDisplayFlags ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_uint & inOperand1) :
mProperty_mTerminal (inOperand0),
mProperty_mDisplayFlags (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalLabelListAST_2E_element::isValid (void) const {
  return mProperty_mTerminal.isValid () && mProperty_mDisplayFlags.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::drop (void) {
  mProperty_mTerminal.drop () ;
  mProperty_mDisplayFlags.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTerminal.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDisplayFlags.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalLabelListAST_2E_element ("terminalLabelListAST.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element GGS_terminalLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalLabelListAST_2E_element result ;
  const GGS_terminalLabelListAST_2E_element * p = (const GGS_terminalLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (void) :
mProperty_mLexiqueFileName (),
mProperty_mLabels (),
mProperty_mSimpleAttributes (),
mProperty_mCompoundAttributes () {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (const GGS_withLexiqueListAST_2E_element & inSource) :
mProperty_mLexiqueFileName (inSource.mProperty_mLexiqueFileName),
mProperty_mLabels (inSource.mProperty_mLabels),
mProperty_mSimpleAttributes (inSource.mProperty_mSimpleAttributes),
mProperty_mCompoundAttributes (inSource.mProperty_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element & GGS_withLexiqueListAST_2E_element::operator = (const GGS_withLexiqueListAST_2E_element & inSource) {
  mProperty_mLexiqueFileName = inSource.mProperty_mLexiqueFileName ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  mProperty_mSimpleAttributes = inSource.mProperty_mSimpleAttributes ;
  mProperty_mCompoundAttributes = inSource.mProperty_mCompoundAttributes ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element GGS_withLexiqueListAST_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mLexiqueFileName,
                                                                                           const GGS_guiLabelListAST & in_mLabels,
                                                                                           const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                                           const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_withLexiqueListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueFileName = in_mLexiqueFileName ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mSimpleAttributes = in_mSimpleAttributes ;
  result.mProperty_mCompoundAttributes = in_mCompoundAttributes ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_guiLabelListAST & inOperand1,
                                                                      const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                      const GGS_guiCompoundAttributeListAST & inOperand3) :
mProperty_mLexiqueFileName (inOperand0),
mProperty_mLabels (inOperand1),
mProperty_mSimpleAttributes (inOperand2),
mProperty_mCompoundAttributes (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_withLexiqueListAST_2E_element::isValid (void) const {
  return mProperty_mLexiqueFileName.isValid () && mProperty_mLabels.isValid () && mProperty_mSimpleAttributes.isValid () && mProperty_mCompoundAttributes.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::drop (void) {
  mProperty_mLexiqueFileName.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mSimpleAttributes.drop () ;
  mProperty_mCompoundAttributes.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @withLexiqueListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSimpleAttributes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCompoundAttributes.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @withLexiqueListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_withLexiqueListAST_2E_element ("withLexiqueListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_withLexiqueListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_withLexiqueListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_withLexiqueListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element GGS_withLexiqueListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_withLexiqueListAST_2E_element result ;
  const GGS_withLexiqueListAST_2E_element * p = (const GGS_withLexiqueListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_withLexiqueListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element GGS_extensionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionMap_2E_element result ;
  const GGS_extensionMap_2E_element * p = (const GGS_extensionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_extensionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMap_2E_element_3F_ GGS_extensionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_extensionMap_2E_element_3F_ result ;
  const GGS_extensionMap_2E_element_3F_ * p = (const GGS_extensionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element::GGS_projectIndexingDescriptorList_2E_element (void) :
mProperty_mProjectFileExtension (),
mProperty_indexingPathSuffix () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element::GGS_projectIndexingDescriptorList_2E_element (const GGS_projectIndexingDescriptorList_2E_element & inSource) :
mProperty_mProjectFileExtension (inSource.mProperty_mProjectFileExtension),
mProperty_indexingPathSuffix (inSource.mProperty_indexingPathSuffix) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element & GGS_projectIndexingDescriptorList_2E_element::operator = (const GGS_projectIndexingDescriptorList_2E_element & inSource) {
  mProperty_mProjectFileExtension = inSource.mProperty_mProjectFileExtension ;
  mProperty_indexingPathSuffix = inSource.mProperty_indexingPathSuffix ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element GGS_projectIndexingDescriptorList_2E_element::init_21__21_ (const GGS_lstring & in_mProjectFileExtension,
                                                                                                         const GGS_lstring & in_indexingPathSuffix,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProjectFileExtension = in_mProjectFileExtension ;
  result.mProperty_indexingPathSuffix = in_indexingPathSuffix ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element::GGS_projectIndexingDescriptorList_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_lstring & inOperand1) :
mProperty_mProjectFileExtension (inOperand0),
mProperty_indexingPathSuffix (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectIndexingDescriptorList_2E_element::isValid (void) const {
  return mProperty_mProjectFileExtension.isValid () && mProperty_indexingPathSuffix.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList_2E_element::drop (void) {
  mProperty_mProjectFileExtension.drop () ;
  mProperty_indexingPathSuffix.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectIndexingDescriptorList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @projectIndexingDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProjectFileExtension.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_indexingPathSuffix.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @projectIndexingDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectIndexingDescriptorList_2E_element ("projectIndexingDescriptorList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectIndexingDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectIndexingDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectIndexingDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectIndexingDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectIndexingDescriptorList_2E_element GGS_projectIndexingDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_projectIndexingDescriptorList_2E_element result ;
  const GGS_projectIndexingDescriptorList_2E_element * p = (const GGS_projectIndexingDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectIndexingDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectIndexingDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element::GGS_galgasGUIComponentListAST_2E_element (void) :
mProperty_mGUIComponentName (),
mProperty_mImportedOptionList (),
mProperty_mGlobalSimpleAttributeList (),
mProperty_mWithLexiqueList (),
mProperty_mProjectIndexingDescriptorList () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element::GGS_galgasGUIComponentListAST_2E_element (const GGS_galgasGUIComponentListAST_2E_element & inSource) :
mProperty_mGUIComponentName (inSource.mProperty_mGUIComponentName),
mProperty_mImportedOptionList (inSource.mProperty_mImportedOptionList),
mProperty_mGlobalSimpleAttributeList (inSource.mProperty_mGlobalSimpleAttributeList),
mProperty_mWithLexiqueList (inSource.mProperty_mWithLexiqueList),
mProperty_mProjectIndexingDescriptorList (inSource.mProperty_mProjectIndexingDescriptorList) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element & GGS_galgasGUIComponentListAST_2E_element::operator = (const GGS_galgasGUIComponentListAST_2E_element & inSource) {
  mProperty_mGUIComponentName = inSource.mProperty_mGUIComponentName ;
  mProperty_mImportedOptionList = inSource.mProperty_mImportedOptionList ;
  mProperty_mGlobalSimpleAttributeList = inSource.mProperty_mGlobalSimpleAttributeList ;
  mProperty_mWithLexiqueList = inSource.mProperty_mWithLexiqueList ;
  mProperty_mProjectIndexingDescriptorList = inSource.mProperty_mProjectIndexingDescriptorList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element GGS_galgasGUIComponentListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mGUIComponentName,
                                                                                                             const GGS_lstringlist & in_mImportedOptionList,
                                                                                                             const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                                                                             const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                                                                             const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGUIComponentName = in_mGUIComponentName ;
  result.mProperty_mImportedOptionList = in_mImportedOptionList ;
  result.mProperty_mGlobalSimpleAttributeList = in_mGlobalSimpleAttributeList ;
  result.mProperty_mWithLexiqueList = in_mWithLexiqueList ;
  result.mProperty_mProjectIndexingDescriptorList = in_mProjectIndexingDescriptorList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element::GGS_galgasGUIComponentListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_lstringlist & inOperand1,
                                                                                    const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                                    const GGS_withLexiqueListAST & inOperand3,
                                                                                    const GGS_projectIndexingDescriptorList & inOperand4) :
mProperty_mGUIComponentName (inOperand0),
mProperty_mImportedOptionList (inOperand1),
mProperty_mGlobalSimpleAttributeList (inOperand2),
mProperty_mWithLexiqueList (inOperand3),
mProperty_mProjectIndexingDescriptorList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasGUIComponentListAST_2E_element::isValid (void) const {
  return mProperty_mGUIComponentName.isValid () && mProperty_mImportedOptionList.isValid () && mProperty_mGlobalSimpleAttributeList.isValid () && mProperty_mWithLexiqueList.isValid () && mProperty_mProjectIndexingDescriptorList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST_2E_element::drop (void) {
  mProperty_mGUIComponentName.drop () ;
  mProperty_mImportedOptionList.drop () ;
  mProperty_mGlobalSimpleAttributeList.drop () ;
  mProperty_mWithLexiqueList.drop () ;
  mProperty_mProjectIndexingDescriptorList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasGUIComponentListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasGUIComponentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGUIComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImportedOptionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSimpleAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWithLexiqueList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectIndexingDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasGUIComponentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasGUIComponentListAST_2E_element ("galgasGUIComponentListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasGUIComponentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasGUIComponentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasGUIComponentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasGUIComponentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasGUIComponentListAST_2E_element GGS_galgasGUIComponentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgasGUIComponentListAST_2E_element result ;
  const GGS_galgasGUIComponentListAST_2E_element * p = (const GGS_galgasGUIComponentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasGUIComponentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasGUIComponentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_optionComponentMapForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element GGS_optionComponentMapForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration_2E_element result ;
  const GGS_optionComponentMapForGeneration_2E_element * p = (const GGS_optionComponentMapForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_optionComponentMapForGeneration_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForGeneration_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForGeneration_2E_element_3F_ GGS_optionComponentMapForGeneration_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForGeneration_2E_element_3F_ result ;
  const GGS_optionComponentMapForGeneration_2E_element_3F_ * p = (const GGS_optionComponentMapForGeneration_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForGeneration_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_functionSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element GGS_functionSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_functionSignature_2E_element result ;
  const GGS_functionSignature_2E_element * p = (const GGS_functionSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_classFunctionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFunctionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element GGS_classFunctionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap_2E_element result ;
  const GGS_classFunctionMap_2E_element * p = (const GGS_classFunctionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFunctionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFunctionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_classFunctionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFunctionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_ GGS_classFunctionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap_2E_element_3F_ result ;
  const GGS_classFunctionMap_2E_element_3F_ * p = (const GGS_classFunctionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFunctionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFunctionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_initializerMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element GGS_initializerMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_initializerMap_2E_element result ;
  const GGS_initializerMap_2E_element * p = (const GGS_initializerMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_initializerMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerMap_2E_element_3F_ GGS_initializerMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_initializerMap_2E_element_3F_ result ;
  const GGS_initializerMap_2E_element_3F_ * p = (const GGS_initializerMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_optionalMethodSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalMethodSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignature_2E_element GGS_optionalMethodSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionalMethodSignature_2E_element result ;
  const GGS_optionalMethodSignature_2E_element * p = (const GGS_optionalMethodSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalMethodSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_getterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element GGS_getterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_getterMap_2E_element result ;
  const GGS_getterMap_2E_element * p = (const GGS_getterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_getterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_ GGS_getterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_getterMap_2E_element_3F_ result ;
  const GGS_getterMap_2E_element_3F_ * p = (const GGS_getterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_formalParameterSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalParameterSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature_2E_element GGS_formalParameterSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_formalParameterSignature_2E_element result ;
  const GGS_formalParameterSignature_2E_element * p = (const GGS_formalParameterSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalParameterSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_setterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element GGS_setterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_setterMap_2E_element result ;
  const GGS_setterMap_2E_element * p = (const GGS_setterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_setterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_ GGS_setterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_setterMap_2E_element_3F_ result ;
  const GGS_setterMap_2E_element_3F_ * p = (const GGS_setterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_instanceMethodMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanceMethodMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element GGS_instanceMethodMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap_2E_element result ;
  const GGS_instanceMethodMap_2E_element * p = (const GGS_instanceMethodMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanceMethodMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_instanceMethodMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanceMethodMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_ GGS_instanceMethodMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap_2E_element_3F_ result ;
  const GGS_instanceMethodMap_2E_element_3F_ * p = (const GGS_instanceMethodMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanceMethodMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_classMethodMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMethodMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element GGS_classMethodMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_classMethodMap_2E_element result ;
  const GGS_classMethodMap_2E_element * p = (const GGS_classMethodMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMethodMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_classMethodMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMethodMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_ GGS_classMethodMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_classMethodMap_2E_element_3F_ result ;
  const GGS_classMethodMap_2E_element_3F_ * p = (const GGS_classMethodMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMethodMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element::GGS_typedPropertyList_2E_element (void) :
mProperty_typeEntry (),
mProperty_name (),
mProperty_initialization (),
mProperty_hasSetter (),
mProperty_hasSelector () {
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element::GGS_typedPropertyList_2E_element (const GGS_typedPropertyList_2E_element & inSource) :
mProperty_typeEntry (inSource.mProperty_typeEntry),
mProperty_name (inSource.mProperty_name),
mProperty_initialization (inSource.mProperty_initialization),
mProperty_hasSetter (inSource.mProperty_hasSetter),
mProperty_hasSelector (inSource.mProperty_hasSelector) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element & GGS_typedPropertyList_2E_element::operator = (const GGS_typedPropertyList_2E_element & inSource) {
  mProperty_typeEntry = inSource.mProperty_typeEntry ;
  mProperty_name = inSource.mProperty_name ;
  mProperty_initialization = inSource.mProperty_initialization ;
  mProperty_hasSetter = inSource.mProperty_hasSetter ;
  mProperty_hasSelector = inSource.mProperty_hasSelector ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typedPropertyList_2E_element GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (const GGS_unifiedTypeMapEntry & in_typeEntry,
                                                                                                                 const GGS_lstring & in_name,
                                                                                                                 const GGS_propertyInCollectionInitializationAST & in_initialization,
                                                                                                                 const GGS_bool & in_hasSetter,
                                                                                                                 const GGS_bool & in_hasSelector,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typedPropertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeEntry = in_typeEntry ;
  result.mProperty_name = in_name ;
  result.mProperty_initialization = in_initialization ;
  result.mProperty_hasSetter = in_hasSetter ;
  result.mProperty_hasSelector = in_hasSelector ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedPropertyList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element::GGS_typedPropertyList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const GGS_lstring & inOperand1,
                                                                    const GGS_propertyInCollectionInitializationAST & inOperand2,
                                                                    const GGS_bool & inOperand3,
                                                                    const GGS_bool & inOperand4) :
mProperty_typeEntry (inOperand0),
mProperty_name (inOperand1),
mProperty_initialization (inOperand2),
mProperty_hasSetter (inOperand3),
mProperty_hasSelector (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typedPropertyList_2E_element::isValid (void) const {
  return mProperty_typeEntry.isValid () && mProperty_name.isValid () && mProperty_initialization.isValid () && mProperty_hasSetter.isValid () && mProperty_hasSelector.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedPropertyList_2E_element::drop (void) {
  mProperty_typeEntry.drop () ;
  mProperty_name.drop () ;
  mProperty_initialization.drop () ;
  mProperty_hasSetter.drop () ;
  mProperty_hasSelector.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedPropertyList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typedPropertyList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initialization.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSetter.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSelector.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typedPropertyList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedPropertyList_2E_element ("typedPropertyList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typedPropertyList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typedPropertyList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typedPropertyList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList_2E_element GGS_typedPropertyList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typedPropertyList_2E_element result ;
  const GGS_typedPropertyList_2E_element * p = (const GGS_typedPropertyList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typedPropertyList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_propertyMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  const GGS_propertyMap_2E_element * p = (const GGS_propertyMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_propertyMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyMap_2E_element_3F_ result ;
  const GGS_propertyMap_2E_element_3F_ * p = (const GGS_propertyMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_constantIndexMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantIndexMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element GGS_constantIndexMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap_2E_element result ;
  const GGS_constantIndexMap_2E_element * p = (const GGS_constantIndexMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantIndexMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_constantIndexMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantIndexMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_ GGS_constantIndexMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap_2E_element_3F_ result ;
  const GGS_constantIndexMap_2E_element_3F_ * p = (const GGS_constantIndexMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantIndexMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element::GGS_commandLineOptionListAST_2E_element (void) :
mProperty_mOptionTypeName (),
mProperty_mOptionInternalName (),
mProperty_mOptionInvocationLetter (),
mProperty_mOptionInvocationString (),
mProperty_mOptionComment (),
mProperty_mOptionDefaultValue (),
mProperty_mOptionDefaultValueKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element::GGS_commandLineOptionListAST_2E_element (const GGS_commandLineOptionListAST_2E_element & inSource) :
mProperty_mOptionTypeName (inSource.mProperty_mOptionTypeName),
mProperty_mOptionInternalName (inSource.mProperty_mOptionInternalName),
mProperty_mOptionInvocationLetter (inSource.mProperty_mOptionInvocationLetter),
mProperty_mOptionInvocationString (inSource.mProperty_mOptionInvocationString),
mProperty_mOptionComment (inSource.mProperty_mOptionComment),
mProperty_mOptionDefaultValue (inSource.mProperty_mOptionDefaultValue),
mProperty_mOptionDefaultValueKind (inSource.mProperty_mOptionDefaultValueKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element & GGS_commandLineOptionListAST_2E_element::operator = (const GGS_commandLineOptionListAST_2E_element & inSource) {
  mProperty_mOptionTypeName = inSource.mProperty_mOptionTypeName ;
  mProperty_mOptionInternalName = inSource.mProperty_mOptionInternalName ;
  mProperty_mOptionInvocationLetter = inSource.mProperty_mOptionInvocationLetter ;
  mProperty_mOptionInvocationString = inSource.mProperty_mOptionInvocationString ;
  mProperty_mOptionComment = inSource.mProperty_mOptionComment ;
  mProperty_mOptionDefaultValue = inSource.mProperty_mOptionDefaultValue ;
  mProperty_mOptionDefaultValueKind = inSource.mProperty_mOptionDefaultValueKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element GGS_commandLineOptionListAST_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mOptionTypeName,
                                                                                                                   const GGS_lstring & in_mOptionInternalName,
                                                                                                                   const GGS_lchar & in_mOptionInvocationLetter,
                                                                                                                   const GGS_lstring & in_mOptionInvocationString,
                                                                                                                   const GGS_lstring & in_mOptionComment,
                                                                                                                   const GGS_lstring & in_mOptionDefaultValue,
                                                                                                                   const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  result.mProperty_mOptionInternalName = in_mOptionInternalName ;
  result.mProperty_mOptionInvocationLetter = in_mOptionInvocationLetter ;
  result.mProperty_mOptionInvocationString = in_mOptionInvocationString ;
  result.mProperty_mOptionComment = in_mOptionComment ;
  result.mProperty_mOptionDefaultValue = in_mOptionDefaultValue ;
  result.mProperty_mOptionDefaultValueKind = in_mOptionDefaultValueKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element::GGS_commandLineOptionListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_lstring & inOperand1,
                                                                                  const GGS_lchar & inOperand2,
                                                                                  const GGS_lstring & inOperand3,
                                                                                  const GGS_lstring & inOperand4,
                                                                                  const GGS_lstring & inOperand5,
                                                                                  const GGS_optionDefaultValueEnumAST & inOperand6) :
mProperty_mOptionTypeName (inOperand0),
mProperty_mOptionInternalName (inOperand1),
mProperty_mOptionInvocationLetter (inOperand2),
mProperty_mOptionInvocationString (inOperand3),
mProperty_mOptionComment (inOperand4),
mProperty_mOptionDefaultValue (inOperand5),
mProperty_mOptionDefaultValueKind (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionListAST_2E_element::isValid (void) const {
  return mProperty_mOptionTypeName.isValid () && mProperty_mOptionInternalName.isValid () && mProperty_mOptionInvocationLetter.isValid () && mProperty_mOptionInvocationString.isValid () && mProperty_mOptionComment.isValid () && mProperty_mOptionDefaultValue.isValid () && mProperty_mOptionDefaultValueKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST_2E_element::drop (void) {
  mProperty_mOptionTypeName.drop () ;
  mProperty_mOptionInternalName.drop () ;
  mProperty_mOptionInvocationLetter.drop () ;
  mProperty_mOptionInvocationString.drop () ;
  mProperty_mOptionComment.drop () ;
  mProperty_mOptionDefaultValue.drop () ;
  mProperty_mOptionDefaultValueKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionListAST_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInternalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInvocationLetter.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInvocationString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionDefaultValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionDefaultValueKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionListAST_2E_element ("commandLineOptionListAST.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST_2E_element GGS_commandLineOptionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionListAST_2E_element result ;
  const GGS_commandLineOptionListAST_2E_element * p = (const GGS_commandLineOptionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_commandLineOptionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element GGS_commandLineOptionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap_2E_element result ;
  const GGS_commandLineOptionMap_2E_element * p = (const GGS_commandLineOptionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_commandLineOptionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_ GGS_commandLineOptionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap_2E_element_3F_ result ;
  const GGS_commandLineOptionMap_2E_element_3F_ * p = (const GGS_commandLineOptionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AC_GALGAS_root * GGS_internalRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_internalRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element GGS_internalRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap_2E_element result ;
  const GGS_internalRoutineMap_2E_element * p = (const GGS_internalRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_internalRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_internalRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_internalRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_ GGS_internalRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap_2E_element_3F_ result ;
  const GGS_internalRoutineMap_2E_element_3F_ * p = (const GGS_internalRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_internalRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_routineArgumentMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineArgumentMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element GGS_routineArgumentMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap_2E_element result ;
  const GGS_routineArgumentMap_2E_element * p = (const GGS_routineArgumentMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineArgumentMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_routineArgumentMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineArgumentMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_ GGS_routineArgumentMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap_2E_element_3F_ result ;
  const GGS_routineArgumentMap_2E_element_3F_ * p = (const GGS_routineArgumentMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineArgumentMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (void) :
mProperty_lkey (),
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (const GGS_unifiedTypeMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element & GGS_unifiedTypeMap_2E_element::operator = (const GGS_unifiedTypeMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element GGS_unifiedTypeMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_unifiedTypeMapElementClass & in_mElement,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_unifiedTypeMapElementClass & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mElement (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMap.element:") ;
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
//     @unifiedTypeMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ("unifiedTypeMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element GGS_unifiedTypeMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element result ;
  const GGS_unifiedTypeMap_2E_element * p = (const GGS_unifiedTypeMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @unifiedTypeMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_::GGS_unifiedTypeMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_::GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap_2E_element_3F_::isValid (void) const {
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

bool GGS_unifiedTypeMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element_3F_::description (String & ioString,
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
//     @unifiedTypeMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ("unifiedTypeMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  const GGS_unifiedTypeMap_2E_element_3F_ * p = (const GGS_unifiedTypeMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (void) :
mProperty_definition () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (const GGS_typeDefinition_2E_solved & inSource) :
mProperty_definition (inSource.mProperty_definition) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved & GGS_typeDefinition_2E_solved::operator = (const GGS_typeDefinition_2E_solved & inSource) {
  mProperty_definition = inSource.mProperty_definition ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeDefinition_2E_solved GGS_typeDefinition_2E_solved::init_21_ (const GGS_unifiedTypeDefinition & in_definition,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_definition = in_definition ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (const GGS_unifiedTypeDefinition & inOperand0) :
mProperty_definition (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeDefinition_2E_solved::isValid (void) const {
  return mProperty_definition.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::drop (void) {
  mProperty_definition.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeDefinition.solved:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_definition.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeDefinition.solved generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ("typeDefinition.solved",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDefinition_2E_solved::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition_2E_solved::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition_2E_solved (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved GGS_typeDefinition_2E_solved::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved result ;
  const GGS_typeDefinition_2E_solved * p = (const GGS_typeDefinition_2E_solved *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition_2E_solved *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition.solved", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeDefinition_2E_solved_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_::GGS_typeDefinition_2E_solved_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_::GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition_2E_solved_3F_::init_nil (void) {
  GGS_typeDefinition_2E_solved_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeDefinition_2E_solved_3F_::isValid (void) const {
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

bool GGS_typeDefinition_2E_solved_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeDefinition_2E_solved () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved_3F_::description (String & ioString,
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
//     @typeDefinition.solved? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ("typeDefinition.solved?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDefinition_2E_solved_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition_2E_solved_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition_2E_solved_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition_2E_solved_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved_3F_ result ;
  const GGS_typeDefinition_2E_solved_3F_ * p = (const GGS_typeDefinition_2E_solved_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition_2E_solved_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition.solved?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element::GGS_formalParameterListAST_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element::GGS_formalParameterListAST_2E_element (const GGS_formalParameterListAST_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element & GGS_formalParameterListAST_2E_element::operator = (const GGS_formalParameterListAST_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalParameterListAST_2E_element GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                       const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                       const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                       const GGS_lstring & in_mFormalArgumentName,
                                                                                                       const GGS_bool & in_mIsUnused,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element::GGS_formalParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_formalArgumentPassingModeAST & inOperand1,
                                                                              const GGS_lstring & inOperand2,
                                                                              const GGS_lstring & inOperand3,
                                                                              const GGS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsUnused (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalParameterListAST_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListAST_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterListAST_2E_element ("formalParameterListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST_2E_element GGS_formalParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_formalParameterListAST_2E_element result ;
  const GGS_formalParameterListAST_2E_element * p = (const GGS_formalParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

