#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

//--------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumDeclarationAST::objectCompare (const GGS_enumDeclarationAST & inOperand) const {
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

GGS_enumDeclarationAST::GGS_enumDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::
init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_enumTypeName,
                                            const GGS_enumConstantList & in_mConstantList,
                                            const GGS_structComparison & in_comparison,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cPtr_enumDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (in_isPredefined, in_enumTypeName, in_mConstantList, in_comparison, inCompiler) ;
  const GGS_enumDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::
enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_enumTypeName,
                                                               const GGS_enumConstantList & in_mConstantList,
                                                               const GGS_structComparison & in_comparison,
                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST::GGS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumDeclarationAST::readProperty_enumTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_enumTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList GGS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumConstantList () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_enumDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_enumTypeName,
                                                  const GGS_enumConstantList & in_mConstantList,
                                                  const GGS_structComparison & in_comparison,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@enumDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_isPredefined, mProperty_enumTypeName, mProperty_mConstantList, mProperty_comparison, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_enumTypeName.printNonNullClassInstanceProperties ("enumTypeName") ;
    mProperty_mConstantList.printNonNullClassInstanceProperties ("mConstantList") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_enumDeclarationAST result ;
  const GGS_enumDeclarationAST * p = (const GGS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element::GGS_formalInputParameterListAST_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused (),
mProperty_mIsConstant () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element::GGS_formalInputParameterListAST_2E_element (const GGS_formalInputParameterListAST_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused),
mProperty_mIsConstant (inSource.mProperty_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element & GGS_formalInputParameterListAST_2E_element::operator = (const GGS_formalInputParameterListAST_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  mProperty_mIsConstant = inSource.mProperty_mIsConstant ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element GGS_formalInputParameterListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                                 const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                                 const GGS_lstring & in_mFormalArgumentName,
                                                                                                                 const GGS_bool & in_mIsUnused,
                                                                                                                 const GGS_bool & in_mIsConstant,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalInputParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element::GGS_formalInputParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_lstring & inOperand2,
                                                                                        const GGS_bool & inOperand3,
                                                                                        const GGS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_mIsUnused (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalInputParameterListAST_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () && mProperty_mIsConstant.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListAST_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
  mProperty_mIsConstant.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalInputParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalInputParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalInputParameterListAST_2E_element ("formalInputParameterListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalInputParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalInputParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalInputParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST_2E_element GGS_formalInputParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_formalInputParameterListAST_2E_element result ;
  const GGS_formalInputParameterListAST_2E_element * p = (const GGS_formalInputParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalInputParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element::GGS_actualInputParameterListAST_2E_element (void) :
mProperty_mActualSelector (),
mProperty_mInputParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element::GGS_actualInputParameterListAST_2E_element (const GGS_actualInputParameterListAST_2E_element & inSource) :
mProperty_mActualSelector (inSource.mProperty_mActualSelector),
mProperty_mInputParameter (inSource.mProperty_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element & GGS_actualInputParameterListAST_2E_element::operator = (const GGS_actualInputParameterListAST_2E_element & inSource) {
  mProperty_mActualSelector = inSource.mProperty_mActualSelector ;
  mProperty_mInputParameter = inSource.mProperty_mInputParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element GGS_actualInputParameterListAST_2E_element::init_21__21_ (const GGS_lstring & in_mActualSelector,
                                                                                                     const GGS_abstractInputParameter & in_mInputParameter,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualInputParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualSelector = in_mActualSelector ;
  result.mProperty_mInputParameter = in_mInputParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element::GGS_actualInputParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_abstractInputParameter & inOperand1) :
mProperty_mActualSelector (inOperand0),
mProperty_mInputParameter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualInputParameterListAST_2E_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mInputParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST_2E_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mInputParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualInputParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualInputParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualInputParameterListAST_2E_element ("actualInputParameterListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualInputParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualInputParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualInputParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST_2E_element GGS_actualInputParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_actualInputParameterListAST_2E_element result ;
  const GGS_actualInputParameterListAST_2E_element * p = (const GGS_actualInputParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualInputParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element & GGS_semanticInstructionListAST_2E_element::operator = (const GGS_semanticInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element GGS_semanticInstructionListAST_2E_element::init_21_ (const GGS_semanticInstructionAST & in_mInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element::GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ("semanticInstructionListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element GGS_semanticInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListAST_2E_element result ;
  const GGS_semanticInstructionListAST_2E_element * p = (const GGS_semanticInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element::GGS_formalTemplateInputParameterListAST_2E_element (void) :
mProperty_mFormalTemplateSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element::GGS_formalTemplateInputParameterListAST_2E_element (const GGS_formalTemplateInputParameterListAST_2E_element & inSource) :
mProperty_mFormalTemplateSelector (inSource.mProperty_mFormalTemplateSelector),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element & GGS_formalTemplateInputParameterListAST_2E_element::operator = (const GGS_formalTemplateInputParameterListAST_2E_element & inSource) {
  mProperty_mFormalTemplateSelector = inSource.mProperty_mFormalTemplateSelector ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element GGS_formalTemplateInputParameterListAST_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mFormalTemplateSelector,
                                                                                                                             const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                                             const GGS_lstring & in_mFormalArgumentName,
                                                                                                                             const GGS_bool & in_mIsUnused,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalTemplateInputParameterListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalTemplateSelector = in_mFormalTemplateSelector ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element::GGS_formalTemplateInputParameterListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                        const GGS_lstring & inOperand1,
                                                                                                        const GGS_lstring & inOperand2,
                                                                                                        const GGS_bool & inOperand3) :
mProperty_mFormalTemplateSelector (inOperand0),
mProperty_mFormalArgumentTypeName (inOperand1),
mProperty_mFormalArgumentName (inOperand2),
mProperty_mIsUnused (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalTemplateInputParameterListAST_2E_element::isValid (void) const {
  return mProperty_mFormalTemplateSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST_2E_element::drop (void) {
  mProperty_mFormalTemplateSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalTemplateInputParameterListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalTemplateSelector.description (ioString, inIndentation+1) ;
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
//     @formalTemplateInputParameterListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2E_element ("formalTemplateInputParameterListAST.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalTemplateInputParameterListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalTemplateInputParameterListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalTemplateInputParameterListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element GGS_formalTemplateInputParameterListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_formalTemplateInputParameterListAST_2E_element result ;
  const GGS_formalTemplateInputParameterListAST_2E_element * p = (const GGS_formalTemplateInputParameterListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalTemplateInputParameterListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element::GGS_filewrapperTemplateListAST_2E_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplatePath (),
mProperty_mFilewrapperTemplateFormalInputParameters () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element::GGS_filewrapperTemplateListAST_2E_element (const GGS_filewrapperTemplateListAST_2E_element & inSource) :
mProperty_mFilewrapperTemplateName (inSource.mProperty_mFilewrapperTemplateName),
mProperty_mFilewrapperTemplatePath (inSource.mProperty_mFilewrapperTemplatePath),
mProperty_mFilewrapperTemplateFormalInputParameters (inSource.mProperty_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element & GGS_filewrapperTemplateListAST_2E_element::operator = (const GGS_filewrapperTemplateListAST_2E_element & inSource) {
  mProperty_mFilewrapperTemplateName = inSource.mProperty_mFilewrapperTemplateName ;
  mProperty_mFilewrapperTemplatePath = inSource.mProperty_mFilewrapperTemplatePath ;
  mProperty_mFilewrapperTemplateFormalInputParameters = inSource.mProperty_mFilewrapperTemplateFormalInputParameters ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element GGS_filewrapperTemplateListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mFilewrapperTemplateName,
                                                                                                       const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                                                       const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplatePath = in_mFilewrapperTemplatePath ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element::GGS_filewrapperTemplateListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_lstring & inOperand1,
                                                                                      const GGS_formalTemplateInputParameterListAST & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplatePath (inOperand1),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateListAST_2E_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplatePath.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST_2E_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplatePath.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2E_element ("filewrapperTemplateListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element GGS_filewrapperTemplateListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListAST_2E_element result ;
  const GGS_filewrapperTemplateListAST_2E_element * p = (const GGS_filewrapperTemplateListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element::GGS_syntaxInstructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element::GGS_syntaxInstructionList_2E_element (const GGS_syntaxInstructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element & GGS_syntaxInstructionList_2E_element::operator = (const GGS_syntaxInstructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element GGS_syntaxInstructionList_2E_element::init_21_ (const GGS_syntaxInstructionAST & in_mInstruction,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element::GGS_syntaxInstructionList_2E_element (const GGS_syntaxInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxInstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2E_element ("syntaxInstructionList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList_2E_element GGS_syntaxInstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionList_2E_element result ;
  const GGS_syntaxInstructionList_2E_element * p = (const GGS_syntaxInstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element::GGS_nonTerminalLabelListAST_2E_element (void) :
mProperty_mLabelName (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfArgumentLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element::GGS_nonTerminalLabelListAST_2E_element (const GGS_nonTerminalLabelListAST_2E_element & inSource) :
mProperty_mLabelName (inSource.mProperty_mLabelName),
mProperty_mFormalArgumentList (inSource.mProperty_mFormalArgumentList),
mProperty_mEndOfArgumentLocation (inSource.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element & GGS_nonTerminalLabelListAST_2E_element::operator = (const GGS_nonTerminalLabelListAST_2E_element & inSource) {
  mProperty_mLabelName = inSource.mProperty_mLabelName ;
  mProperty_mFormalArgumentList = inSource.mProperty_mFormalArgumentList ;
  mProperty_mEndOfArgumentLocation = inSource.mProperty_mEndOfArgumentLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element GGS_nonTerminalLabelListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mLabelName,
                                                                                                 const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element::GGS_nonTerminalLabelListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_formalParameterListAST & inOperand1,
                                                                                const GGS_location & inOperand2) :
mProperty_mLabelName (inOperand0),
mProperty_mFormalArgumentList (inOperand1),
mProperty_mEndOfArgumentLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalLabelListAST_2E_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfArgumentLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST_2E_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2E_element ("nonTerminalLabelListAST.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element GGS_nonTerminalLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonTerminalLabelListAST_2E_element result ;
  const GGS_nonTerminalLabelListAST_2E_element * p = (const GGS_nonTerminalLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element::GGS_nonterminalDeclarationListAST_2E_element (void) :
mProperty_mNonterminalName (),
mProperty_mLabels () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element::GGS_nonterminalDeclarationListAST_2E_element (const GGS_nonterminalDeclarationListAST_2E_element & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mLabels (inSource.mProperty_mLabels) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element & GGS_nonterminalDeclarationListAST_2E_element::operator = (const GGS_nonterminalDeclarationListAST_2E_element & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element GGS_nonterminalDeclarationListAST_2E_element::init_21__21_ (const GGS_lstring & in_mNonterminalName,
                                                                                                         const GGS_nonTerminalLabelListAST & in_mLabels,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mLabels = in_mLabels ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element::GGS_nonterminalDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_nonTerminalLabelListAST & inOperand1) :
mProperty_mNonterminalName (inOperand0),
mProperty_mLabels (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mLabels.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalDeclarationListAST_2E_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mLabels.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalDeclarationListAST_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2E_element ("nonterminalDeclarationListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST_2E_element GGS_nonterminalDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonterminalDeclarationListAST_2E_element result ;
  const GGS_nonterminalDeclarationListAST_2E_element * p = (const GGS_nonterminalDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element::GGS_syntaxRuleLabelListAST_2E_element (void) :
mProperty_mLabelName (),
mProperty_mFormalArguments (),
mProperty_mEndOfArgumentLocation (),
mProperty_mSyntaxInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element::GGS_syntaxRuleLabelListAST_2E_element (const GGS_syntaxRuleLabelListAST_2E_element & inSource) :
mProperty_mLabelName (inSource.mProperty_mLabelName),
mProperty_mFormalArguments (inSource.mProperty_mFormalArguments),
mProperty_mEndOfArgumentLocation (inSource.mProperty_mEndOfArgumentLocation),
mProperty_mSyntaxInstructionList (inSource.mProperty_mSyntaxInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element & GGS_syntaxRuleLabelListAST_2E_element::operator = (const GGS_syntaxRuleLabelListAST_2E_element & inSource) {
  mProperty_mLabelName = inSource.mProperty_mLabelName ;
  mProperty_mFormalArguments = inSource.mProperty_mFormalArguments ;
  mProperty_mEndOfArgumentLocation = inSource.mProperty_mEndOfArgumentLocation ;
  mProperty_mSyntaxInstructionList = inSource.mProperty_mSyntaxInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element GGS_syntaxRuleLabelListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mLabelName,
                                                                                                       const GGS_formalParameterListAST & in_mFormalArguments,
                                                                                                       const GGS_location & in_mEndOfArgumentLocation,
                                                                                                       const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                       const GGS_location & in_mEndOfInstructionList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxRuleLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mFormalArguments = in_mFormalArguments ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element::GGS_syntaxRuleLabelListAST_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_formalParameterListAST & inOperand1,
                                                                              const GGS_location & inOperand2,
                                                                              const GGS_syntaxInstructionList & inOperand3,
                                                                              const GGS_location & inOperand4) :
mProperty_mLabelName (inOperand0),
mProperty_mFormalArguments (inOperand1),
mProperty_mEndOfArgumentLocation (inOperand2),
mProperty_mSyntaxInstructionList (inOperand3),
mProperty_mEndOfInstructionList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxRuleLabelListAST_2E_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mFormalArguments.isValid () && mProperty_mEndOfArgumentLocation.isValid () && mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST_2E_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mFormalArguments.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxRuleLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArguments.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxRuleLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2E_element ("syntaxRuleLabelListAST.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxRuleLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxRuleLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxRuleLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element GGS_syntaxRuleLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_syntaxRuleLabelListAST_2E_element result ;
  const GGS_syntaxRuleLabelListAST_2E_element * p = (const GGS_syntaxRuleLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxRuleLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element::GGS_syntaxRuleListAST_2E_element (void) :
mProperty_mNonterminalName (),
mProperty_mLabelList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element::GGS_syntaxRuleListAST_2E_element (const GGS_syntaxRuleListAST_2E_element & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mLabelList (inSource.mProperty_mLabelList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element & GGS_syntaxRuleListAST_2E_element::operator = (const GGS_syntaxRuleListAST_2E_element & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mLabelList = inSource.mProperty_mLabelList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element GGS_syntaxRuleListAST_2E_element::init_21__21_ (const GGS_lstring & in_mNonterminalName,
                                                                                 const GGS_syntaxRuleLabelListAST & in_mLabelList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxRuleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mLabelList = in_mLabelList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element::GGS_syntaxRuleListAST_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_syntaxRuleLabelListAST & inOperand1) :
mProperty_mNonterminalName (inOperand0),
mProperty_mLabelList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxRuleListAST_2E_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mLabelList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST_2E_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mLabelList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleListAST_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxRuleListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxRuleListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2E_element ("syntaxRuleListAST.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxRuleListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxRuleListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxRuleListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST_2E_element GGS_syntaxRuleListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_syntaxRuleListAST_2E_element result ;
  const GGS_syntaxRuleListAST_2E_element * p = (const GGS_syntaxRuleListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxRuleListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element::GGS_galgas_33_SyntaxComponentListAST_2E_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mImportedLexiqueFilePath (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element::GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) :
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName),
mProperty_mImportedLexiqueFilePath (inSource.mProperty_mImportedLexiqueFilePath),
mProperty_mNonterminalDeclarationList (inSource.mProperty_mNonterminalDeclarationList),
mProperty_mRuleList (inSource.mProperty_mRuleList),
mProperty_mHasTranslateFeature (inSource.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element & GGS_galgas_33_SyntaxComponentListAST_2E_element::operator = (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) {
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  mProperty_mImportedLexiqueFilePath = inSource.mProperty_mImportedLexiqueFilePath ;
  mProperty_mNonterminalDeclarationList = inSource.mProperty_mNonterminalDeclarationList ;
  mProperty_mRuleList = inSource.mProperty_mRuleList ;
  mProperty_mHasTranslateFeature = inSource.mProperty_mHasTranslateFeature ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element GGS_galgas_33_SyntaxComponentListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                                           const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                                                                           const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                                           const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                                                           const GGS_bool & in_mHasTranslateFeature,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mImportedLexiqueFilePath = in_mImportedLexiqueFilePath ;
  result.mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  result.mProperty_mRuleList = in_mRuleList ;
  result.mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element::GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_lstring & inOperand1,
                                                                                                  const GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                                  const GGS_syntaxRuleListAST & inOperand3,
                                                                                                  const GGS_bool & inOperand4) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mImportedLexiqueFilePath (inOperand1),
mProperty_mNonterminalDeclarationList (inOperand2),
mProperty_mRuleList (inOperand3),
mProperty_mHasTranslateFeature (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_SyntaxComponentListAST_2E_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mImportedLexiqueFilePath.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST_2E_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mImportedLexiqueFilePath.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
  mProperty_mHasTranslateFeature.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3SyntaxComponentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation+1) ;
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
//     @galgas3SyntaxComponentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2E_element ("galgas3SyntaxComponentListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element GGS_galgas_33_SyntaxComponentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST_2E_element result ;
  const GGS_galgas_33_SyntaxComponentListAST_2E_element * p = (const GGS_galgas_33_SyntaxComponentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element::GGS_galgas_33_SyntaxExtensionListAST_2E_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element::GGS_galgas_33_SyntaxExtensionListAST_2E_element (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inSource) :
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName),
mProperty_mNonterminalDeclarationList (inSource.mProperty_mNonterminalDeclarationList),
mProperty_mRuleList (inSource.mProperty_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element & GGS_galgas_33_SyntaxExtensionListAST_2E_element::operator = (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inSource) {
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  mProperty_mNonterminalDeclarationList = inSource.mProperty_mNonterminalDeclarationList ;
  mProperty_mRuleList = inSource.mProperty_mRuleList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element GGS_galgas_33_SyntaxExtensionListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                                   const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                                   const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  result.mProperty_mRuleList = in_mRuleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element::GGS_galgas_33_SyntaxExtensionListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                                  const GGS_syntaxRuleListAST & inOperand2) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonterminalDeclarationList (inOperand1),
mProperty_mRuleList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_SyntaxExtensionListAST_2E_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST_2E_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonterminalDeclarationList.drop () ;
  mProperty_mRuleList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3SyntaxExtensionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRuleList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxExtensionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2E_element ("galgas3SyntaxExtensionListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxExtensionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxExtensionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxExtensionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element GGS_galgas_33_SyntaxExtensionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST_2E_element result ;
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element * p = (const GGS_galgas_33_SyntaxExtensionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxExtensionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element::GGS_programRuleList_2E_element (void) :
mProperty_mSourceFileExtension (),
mProperty_mSourceFileHelp (),
mProperty_mSourceFileVariableName (),
mProperty_mSourceFileVariableNameIsUnused (),
mProperty_mReferenceGrammar (),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element::GGS_programRuleList_2E_element (const GGS_programRuleList_2E_element & inSource) :
mProperty_mSourceFileExtension (inSource.mProperty_mSourceFileExtension),
mProperty_mSourceFileHelp (inSource.mProperty_mSourceFileHelp),
mProperty_mSourceFileVariableName (inSource.mProperty_mSourceFileVariableName),
mProperty_mSourceFileVariableNameIsUnused (inSource.mProperty_mSourceFileVariableNameIsUnused),
mProperty_mReferenceGrammar (inSource.mProperty_mReferenceGrammar),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element & GGS_programRuleList_2E_element::operator = (const GGS_programRuleList_2E_element & inSource) {
  mProperty_mSourceFileExtension = inSource.mProperty_mSourceFileExtension ;
  mProperty_mSourceFileHelp = inSource.mProperty_mSourceFileHelp ;
  mProperty_mSourceFileVariableName = inSource.mProperty_mSourceFileVariableName ;
  mProperty_mSourceFileVariableNameIsUnused = inSource.mProperty_mSourceFileVariableNameIsUnused ;
  mProperty_mReferenceGrammar = inSource.mProperty_mReferenceGrammar ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_programRuleList_2E_element GGS_programRuleList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mSourceFileExtension,
                                                                                                 const GGS_lstring & in_mSourceFileHelp,
                                                                                                 const GGS_lstring & in_mSourceFileVariableName,
                                                                                                 const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                                                                 const GGS_lstring & in_mReferenceGrammar,
                                                                                                 const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                                 const GGS_location & in_mEndOfInstructionList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programRuleList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSourceFileExtension = in_mSourceFileExtension ;
  result.mProperty_mSourceFileHelp = in_mSourceFileHelp ;
  result.mProperty_mSourceFileVariableName = in_mSourceFileVariableName ;
  result.mProperty_mSourceFileVariableNameIsUnused = in_mSourceFileVariableNameIsUnused ;
  result.mProperty_mReferenceGrammar = in_mReferenceGrammar ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element::GGS_programRuleList_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1,
                                                                const GGS_lstring & inOperand2,
                                                                const GGS_bool & inOperand3,
                                                                const GGS_lstring & inOperand4,
                                                                const GGS_semanticInstructionListAST & inOperand5,
                                                                const GGS_location & inOperand6) :
mProperty_mSourceFileExtension (inOperand0),
mProperty_mSourceFileHelp (inOperand1),
mProperty_mSourceFileVariableName (inOperand2),
mProperty_mSourceFileVariableNameIsUnused (inOperand3),
mProperty_mReferenceGrammar (inOperand4),
mProperty_mInstructionList (inOperand5),
mProperty_mEndOfInstructionList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_programRuleList_2E_element::isValid (void) const {
  return mProperty_mSourceFileExtension.isValid () && mProperty_mSourceFileHelp.isValid () && mProperty_mSourceFileVariableName.isValid () && mProperty_mSourceFileVariableNameIsUnused.isValid () && mProperty_mReferenceGrammar.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList_2E_element::drop (void) {
  mProperty_mSourceFileExtension.drop () ;
  mProperty_mSourceFileHelp.drop () ;
  mProperty_mSourceFileVariableName.drop () ;
  mProperty_mSourceFileVariableNameIsUnused.drop () ;
  mProperty_mReferenceGrammar.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @programRuleList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSourceFileExtension.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceFileHelp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceFileVariableName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReferenceGrammar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @programRuleList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleList_2E_element ("programRuleList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programRuleList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programRuleList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programRuleList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element GGS_programRuleList_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_programRuleList_2E_element result ;
  const GGS_programRuleList_2E_element * p = (const GGS_programRuleList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programRuleList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_logListAST_2E_element::GGS_logListAST_2E_element (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_logListAST_2E_element & inSource) :
mProperty_mLogMessage (inSource.mProperty_mLogMessage),
mProperty_mLogExpression (inSource.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element & GGS_logListAST_2E_element::operator = (const GGS_logListAST_2E_element & inSource) {
  mProperty_mLogMessage = inSource.mProperty_mLogMessage ;
  mProperty_mLogExpression = inSource.mProperty_mLogExpression ;
  return *this ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logListAST_2E_element ("logListAST.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logListAST_2E_element::staticTypeDescriptor (void) const {
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

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (void) :
mProperty_varName (),
mProperty_isConstant (),
mProperty_exp (),
mProperty_endOfExp (),
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
mProperty_varName (inSource.mProperty_varName),
mProperty_isConstant (inSource.mProperty_isConstant),
mProperty_exp (inSource.mProperty_exp),
mProperty_endOfExp (inSource.mProperty_endOfExp),
mProperty_typeName (inSource.mProperty_typeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp & GGS_ifExpressionKind_2E_letVarExp::operator = (const GGS_ifExpressionKind_2E_letVarExp & inSource) {
  mProperty_varName = inSource.mProperty_varName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_endOfExp = inSource.mProperty_endOfExp ;
  mProperty_typeName = inSource.mProperty_typeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::init_21__21__21__21__21_ (const GGS_lstring & in_varName,
                                                                                               const GGS_bool & in_isConstant,
                                                                                               const GGS_semanticExpressionAST & in_exp,
                                                                                               const GGS_location & in_endOfExp,
                                                                                               const GGS_lstring & in_typeName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  result.mProperty_isConstant = in_isConstant ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_lstring & inOperand0,
                                                                      const GGS_bool & inOperand1,
                                                                      const GGS_semanticExpressionAST & inOperand2,
                                                                      const GGS_location & inOperand3,
                                                                      const GGS_lstring & inOperand4) :
mProperty_varName (inOperand0),
mProperty_isConstant (inOperand1),
mProperty_exp (inOperand2),
mProperty_endOfExp (inOperand3),
mProperty_typeName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp::isValid (void) const {
  return mProperty_varName.isValid () && mProperty_isConstant.isValid () && mProperty_exp.isValid () && mProperty_endOfExp.isValid () && mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::drop (void) {
  mProperty_varName.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.letVarExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_varName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
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
//     @ifExpressionKind.letVarExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ("ifExpressionKind.letVarExp",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  const GGS_ifExpressionKind_2E_letVarExp * p = (const GGS_ifExpressionKind_2E_letVarExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifExpressionKind_2E_letVarExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValid (void) const {
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

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_letVarExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::description (String & ioString,
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
//     @ifExpressionKind.letVarExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ("ifExpressionKind.letVarExp?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  const GGS_ifExpressionKind_2E_letVarExp_3F_ * p = (const GGS_ifExpressionKind_2E_letVarExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

