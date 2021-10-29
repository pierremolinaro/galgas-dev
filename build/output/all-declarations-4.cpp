#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------

cMapElement_insertMethodMap::cMapElement_insertMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_insertMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_insertMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_insertMethodMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_insertMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_insertMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_insertMethodMap * operand = (cMapElement_insertMethodMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap::GALGAS_insertMethodMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap::GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap & GALGAS_insertMethodMap::operator = (const GALGAS_insertMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::constructor_mapWithMapToOverride (const GALGAS_insertMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_insertMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@insertMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_insertMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' insert setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_insertMethodMap * GALGAS_insertMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_insertMethodMap * result = (cMapElement_insertMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_insertMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_insertMethodMap::cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap_2D_element cEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  return GALGAS_insertMethodMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_insertMethodMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_insertMethodMap * p = (const cMapElement_insertMethodMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_insertMethodMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@insertMethodMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodMap GALGAS_insertMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap result ;
  const GALGAS_insertMethodMap * p = (const GALGAS_insertMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_searchMethodMap::cMapElement_searchMethodMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_searchMethodMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_searchMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_searchMethodMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_searchMethodMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_searchMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_searchMethodMap * operand = (cMapElement_searchMethodMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap::GALGAS_searchMethodMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap::GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap & GALGAS_searchMethodMap::operator = (const GALGAS_searchMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::constructor_mapWithMapToOverride (const GALGAS_searchMethodMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_searchMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@searchMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_searchMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_searchMethodMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' search method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_searchMethodMap * GALGAS_searchMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_searchMethodMap * result = (cMapElement_searchMethodMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_searchMethodMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_searchMethodMap::cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap_2D_element cEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  return GALGAS_searchMethodMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_searchMethodMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_searchMethodMap * p = (const cMapElement_searchMethodMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_searchMethodMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@searchMethodMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_searchMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_searchMethodMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_searchMethodMap GALGAS_searchMethodMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap result ;
  const GALGAS_searchMethodMap * p = (const GALGAS_searchMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_searchMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind::GALGAS_mapAutomatonMessageKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::constructor_noMessage (UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  result.mEnum = kEnum_noMessage ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::constructor_warningMessage (UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  result.mEnum = kEnum_warningMessage ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::constructor_errorMessage (UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  result.mEnum = kEnum_errorMessage ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mapAutomatonMessageKind::optional_noMessage () const {
  const bool ok = mEnum == kEnum_noMessage ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mapAutomatonMessageKind::optional_warningMessage () const {
  const bool ok = mEnum == kEnum_warningMessage ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mapAutomatonMessageKind::optional_errorMessage () const {
  const bool ok = mEnum == kEnum_errorMessage ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_mapAutomatonMessageKind [4] = {
  "(not built)",
  "noMessage",
  "warningMessage",
  "errorMessage"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapAutomatonMessageKind::getter_isNoMessage (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noMessage == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapAutomatonMessageKind::getter_isWarningMessage (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_warningMessage == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapAutomatonMessageKind::getter_isErrorMessage (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_errorMessage == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonMessageKind::description (C_String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString << "<enum @mapAutomatonMessageKind: " << gEnumNameArrayFor_mapAutomatonMessageKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapAutomatonMessageKind::objectCompare (const GALGAS_mapAutomatonMessageKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapAutomatonMessageKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonMessageKind ("mapAutomatonMessageKind",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapAutomatonMessageKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapAutomatonMessageKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonMessageKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonMessageKind::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonMessageKind result ;
  const GALGAS_mapAutomatonMessageKind * p = (const GALGAS_mapAutomatonMessageKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonMessageKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonMessageKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapStateTransitionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapStateTransitionList : public cCollectionElement {
  public: GALGAS_mapStateTransitionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapStateTransitionList (const GALGAS_lstring & in_mActionName,
                                                     const GALGAS_lstring & in_mTargetStateName,
                                                     const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                     const GALGAS_lstring & in_mTransitionMessage
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapStateTransitionList (const GALGAS_mapStateTransitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapStateTransitionList::cCollectionElement_mapStateTransitionList (const GALGAS_lstring & in_mActionName,
                                                                                      const GALGAS_lstring & in_mTargetStateName,
                                                                                      const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                                                      const GALGAS_lstring & in_mTransitionMessage
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActionName, in_mTargetStateName, in_mTransitionMessageKind, in_mTransitionMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapStateTransitionList::cCollectionElement_mapStateTransitionList (const GALGAS_mapStateTransitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActionName, inElement.mProperty_mTargetStateName, inElement.mProperty_mTransitionMessageKind, inElement.mProperty_mTransitionMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapStateTransitionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapStateTransitionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapStateTransitionList (mObject.mProperty_mActionName, mObject.mProperty_mTargetStateName, mObject.mProperty_mTransitionMessageKind, mObject.mProperty_mTransitionMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapStateTransitionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateName" ":" ;
  mObject.mProperty_mTargetStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessageKind" ":" ;
  mObject.mProperty_mTransitionMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessage" ":" ;
  mObject.mProperty_mTransitionMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapStateTransitionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapStateTransitionList * operand = (cCollectionElement_mapStateTransitionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapStateTransitionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList::GALGAS_mapStateTransitionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList::GALGAS_mapStateTransitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapStateTransitionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapStateTransitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapStateTransitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mActionName,
                                                               const GALGAS_lstring & in_mTargetStateName,
                                                               const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                               const GALGAS_lstring & in_mTransitionMessage
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateTransitionList * p = NULL ;
  macroMyNew (p, cCollectionElement_mapStateTransitionList (in_mActionName,
                                                            in_mTargetStateName,
                                                            in_mTransitionMessageKind,
                                                            in_mTransitionMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                         const GALGAS_lstring & inOperand3
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapStateTransitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_append (GALGAS_mapStateTransitionList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapStateTransitionList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_mapAutomatonMessageKind inOperand2,
                                                          const GALGAS_lstring inOperand3,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapStateTransitionList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_mapAutomatonMessageKind & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
        outOperand0 = p->mObject.mProperty_mActionName ;
        outOperand1 = p->mObject.mProperty_mTargetStateName ;
        outOperand2 = p->mObject.mProperty_mTransitionMessageKind ;
        outOperand3 = p->mObject.mProperty_mTransitionMessage ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_mapAutomatonMessageKind & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    outOperand0 = p->mObject.mProperty_mActionName ;
    outOperand1 = p->mObject.mProperty_mTargetStateName ;
    outOperand2 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand3 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_mapAutomatonMessageKind & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    outOperand0 = p->mObject.mProperty_mActionName ;
    outOperand1 = p->mObject.mProperty_mTargetStateName ;
    outOperand2 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand3 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_mapAutomatonMessageKind & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    outOperand0 = p->mObject.mProperty_mActionName ;
    outOperand1 = p->mObject.mProperty_mTargetStateName ;
    outOperand2 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand3 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_mapAutomatonMessageKind & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    outOperand0 = p->mObject.mProperty_mActionName ;
    outOperand1 = p->mObject.mProperty_mTargetStateName ;
    outOperand2 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand3 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::add_operation (const GALGAS_mapStateTransitionList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result = GALGAS_mapStateTransitionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result = GALGAS_mapStateTransitionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateTransitionList result = GALGAS_mapStateTransitionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::plusAssign_operation (const GALGAS_mapStateTransitionList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_setMActionNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapStateTransitionList::getter_mActionNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    result = p->mObject.mProperty_mActionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_setMTargetStateNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetStateName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapStateTransitionList::getter_mTargetStateNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    result = p->mObject.mProperty_mTargetStateName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_setMTransitionMessageKindAtIndex (GALGAS_mapAutomatonMessageKind inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTransitionMessageKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapStateTransitionList::getter_mTransitionMessageKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  GALGAS_mapAutomatonMessageKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    result = p->mObject.mProperty_mTransitionMessageKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionList::setter_setMTransitionMessageAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTransitionMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapStateTransitionList::getter_mTransitionMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateTransitionList * p = (cCollectionElement_mapStateTransitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
    result = p->mObject.mProperty_mTransitionMessage ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapStateTransitionList::cEnumerator_mapStateTransitionList (const GALGAS_mapStateTransitionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList_2D_element cEnumerator_mapStateTransitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject.mProperty_mActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mTargetStateName (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject.mProperty_mTargetStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateTransitionList::current_mTransitionMessageKind (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject.mProperty_mTransitionMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateTransitionList::current_mTransitionMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapStateTransitionList * p = (const cCollectionElement_mapStateTransitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateTransitionList) ;
  return p->mObject.mProperty_mTransitionMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mapStateTransitionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateTransitionList ("mapStateTransitionList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapStateTransitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateTransitionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapStateTransitionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateTransitionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateTransitionList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionList result ;
  const GALGAS_mapStateTransitionList * p = (const GALGAS_mapStateTransitionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateTransitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateTransitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapStateList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapStateList : public cCollectionElement {
  public: GALGAS_mapStateList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapStateList (const GALGAS_lstring & in_mStateName,
                                           const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                           const GALGAS_lstring & in_mStateMessage,
                                           const GALGAS_mapStateTransitionList & in_mTransitionList
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapStateList (const GALGAS_mapStateList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapStateList::cCollectionElement_mapStateList (const GALGAS_lstring & in_mStateName,
                                                                  const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                                  const GALGAS_lstring & in_mStateMessage,
                                                                  const GALGAS_mapStateTransitionList & in_mTransitionList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStateName, in_mStateMessageKind, in_mStateMessage, in_mTransitionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapStateList::cCollectionElement_mapStateList (const GALGAS_mapStateList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStateName, inElement.mProperty_mStateMessageKind, inElement.mProperty_mStateMessage, inElement.mProperty_mTransitionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapStateList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapStateList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapStateList (mObject.mProperty_mStateName, mObject.mProperty_mStateMessageKind, mObject.mProperty_mStateMessage, mObject.mProperty_mTransitionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapStateList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateName" ":" ;
  mObject.mProperty_mStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessageKind" ":" ;
  mObject.mProperty_mStateMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessage" ":" ;
  mObject.mProperty_mStateMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionList" ":" ;
  mObject.mProperty_mTransitionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapStateList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapStateList * operand = (cCollectionElement_mapStateList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapStateList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList::GALGAS_mapStateList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList::GALGAS_mapStateList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapStateList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                    const GALGAS_lstring & inOperand2,
                                                                    const GALGAS_mapStateTransitionList & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapStateList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapStateList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapStateList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mStateName,
                                                     const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                     const GALGAS_lstring & in_mStateMessage,
                                                     const GALGAS_mapStateTransitionList & in_mTransitionList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateList * p = NULL ;
  macroMyNew (p, cCollectionElement_mapStateList (in_mStateName,
                                                  in_mStateMessageKind,
                                                  in_mStateMessage,
                                                  in_mTransitionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_mapAutomatonMessageKind & inOperand1,
                                               const GALGAS_lstring & inOperand2,
                                               const GALGAS_mapStateTransitionList & inOperand3
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapStateList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_append (GALGAS_mapStateList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapStateList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_mapAutomatonMessageKind inOperand1,
                                                const GALGAS_lstring inOperand2,
                                                const GALGAS_mapStateTransitionList inOperand3,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapStateList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_mapAutomatonMessageKind & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_mapStateTransitionList & outOperand3,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapStateList) ;
        outOperand0 = p->mObject.mProperty_mStateName ;
        outOperand1 = p->mObject.mProperty_mStateMessageKind ;
        outOperand2 = p->mObject.mProperty_mStateMessage ;
        outOperand3 = p->mObject.mProperty_mTransitionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_mapAutomatonMessageKind & outOperand1,
                                           GALGAS_lstring & outOperand2,
                                           GALGAS_mapStateTransitionList & outOperand3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    outOperand0 = p->mObject.mProperty_mStateName ;
    outOperand1 = p->mObject.mProperty_mStateMessageKind ;
    outOperand2 = p->mObject.mProperty_mStateMessage ;
    outOperand3 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_mapAutomatonMessageKind & outOperand1,
                                          GALGAS_lstring & outOperand2,
                                          GALGAS_mapStateTransitionList & outOperand3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    outOperand0 = p->mObject.mProperty_mStateName ;
    outOperand1 = p->mObject.mProperty_mStateMessageKind ;
    outOperand2 = p->mObject.mProperty_mStateMessage ;
    outOperand3 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_mapAutomatonMessageKind & outOperand1,
                                        GALGAS_lstring & outOperand2,
                                        GALGAS_mapStateTransitionList & outOperand3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    outOperand0 = p->mObject.mProperty_mStateName ;
    outOperand1 = p->mObject.mProperty_mStateMessageKind ;
    outOperand2 = p->mObject.mProperty_mStateMessage ;
    outOperand3 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_mapAutomatonMessageKind & outOperand1,
                                       GALGAS_lstring & outOperand2,
                                       GALGAS_mapStateTransitionList & outOperand3,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    outOperand0 = p->mObject.mProperty_mStateName ;
    outOperand1 = p->mObject.mProperty_mStateMessageKind ;
    outOperand2 = p->mObject.mProperty_mStateMessage ;
    outOperand3 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::add_operation (const GALGAS_mapStateList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateList result = GALGAS_mapStateList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateList result = GALGAS_mapStateList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_mapStateList result = GALGAS_mapStateList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::plusAssign_operation (const GALGAS_mapStateList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_setMStateNameAtIndex (GALGAS_lstring inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapStateList::getter_mStateNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    result = p->mObject.mProperty_mStateName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_setMStateMessageKindAtIndex (GALGAS_mapAutomatonMessageKind inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateMessageKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapStateList::getter_mStateMessageKindAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  GALGAS_mapAutomatonMessageKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    result = p->mObject.mProperty_mStateMessageKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_setMStateMessageAtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStateMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapStateList::getter_mStateMessageAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    result = p->mObject.mProperty_mStateMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateList::setter_setMTransitionListAtIndex (GALGAS_mapStateTransitionList inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTransitionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList GALGAS_mapStateList::getter_mTransitionListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapStateList * p = (cCollectionElement_mapStateList *) attributes.ptr () ;
  GALGAS_mapStateTransitionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapStateList) ;
    result = p->mObject.mProperty_mTransitionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapStateList::cEnumerator_mapStateList (const GALGAS_mapStateList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList_2D_element cEnumerator_mapStateList::current (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateList::current_mStateName (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject.mProperty_mStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateList::current_mStateMessageKind (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject.mProperty_mStateMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapStateList::current_mStateMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject.mProperty_mStateMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionList cEnumerator_mapStateList::current_mTransitionList (LOCATION_ARGS) const {
  const cCollectionElement_mapStateList * p = (const cCollectionElement_mapStateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapStateList) ;
  return p->mObject.mProperty_mTransitionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mapStateList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateList ("mapStateList",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapStateList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapStateList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_mapStateList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapStateList result ;
  const GALGAS_mapStateList * p = (const GALGAS_mapStateList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapOverrideBlockDescriptorAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapOverrideBlockDescriptorAST : public cCollectionElement {
  public: GALGAS_mapOverrideBlockDescriptorAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapOverrideBlockDescriptorAST (const GALGAS_lstring & in_mLeftState,
                                                            const GALGAS_lstring & in_mRightState,
                                                            const GALGAS_lstring & in_mResultingState,
                                                            const GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                            const GALGAS_lstring & in_mTransitionMessage
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapOverrideBlockDescriptorAST (const GALGAS_mapOverrideBlockDescriptorAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapOverrideBlockDescriptorAST::cCollectionElement_mapOverrideBlockDescriptorAST (const GALGAS_lstring & in_mLeftState,
                                                                                                    const GALGAS_lstring & in_mRightState,
                                                                                                    const GALGAS_lstring & in_mResultingState,
                                                                                                    const GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                                                                    const GALGAS_lstring & in_mTransitionMessage
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeftState, in_mRightState, in_mResultingState, in_mMessageKind, in_mTransitionMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapOverrideBlockDescriptorAST::cCollectionElement_mapOverrideBlockDescriptorAST (const GALGAS_mapOverrideBlockDescriptorAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLeftState, inElement.mProperty_mRightState, inElement.mProperty_mResultingState, inElement.mProperty_mMessageKind, inElement.mProperty_mTransitionMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapOverrideBlockDescriptorAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapOverrideBlockDescriptorAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapOverrideBlockDescriptorAST (mObject.mProperty_mLeftState, mObject.mProperty_mRightState, mObject.mProperty_mResultingState, mObject.mProperty_mMessageKind, mObject.mProperty_mTransitionMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapOverrideBlockDescriptorAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeftState" ":" ;
  mObject.mProperty_mLeftState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRightState" ":" ;
  mObject.mProperty_mRightState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultingState" ":" ;
  mObject.mProperty_mResultingState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageKind" ":" ;
  mObject.mProperty_mMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessage" ":" ;
  mObject.mProperty_mTransitionMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapOverrideBlockDescriptorAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapOverrideBlockDescriptorAST * operand = (cCollectionElement_mapOverrideBlockDescriptorAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST::GALGAS_mapOverrideBlockDescriptorAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST::GALGAS_mapOverrideBlockDescriptorAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideBlockDescriptorAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                                      const GALGAS_lstring & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_mapOverrideBlockDescriptorAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapOverrideBlockDescriptorAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mLeftState,
                                                                      const GALGAS_lstring & in_mRightState,
                                                                      const GALGAS_lstring & in_mResultingState,
                                                                      const GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                                      const GALGAS_lstring & in_mTransitionMessage
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockDescriptorAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapOverrideBlockDescriptorAST (in_mLeftState,
                                                                   in_mRightState,
                                                                   in_mResultingState,
                                                                   in_mMessageKind,
                                                                   in_mTransitionMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                const GALGAS_lstring & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideBlockDescriptorAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_append (GALGAS_mapOverrideBlockDescriptorAST_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideBlockDescriptorAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_lstring inOperand2,
                                                                 const GALGAS_mapAutomatonMessageKind inOperand3,
                                                                 const GALGAS_lstring inOperand4,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideBlockDescriptorAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_mapAutomatonMessageKind & outOperand3,
                                                                 GALGAS_lstring & outOperand4,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
        outOperand0 = p->mObject.mProperty_mLeftState ;
        outOperand1 = p->mObject.mProperty_mRightState ;
        outOperand2 = p->mObject.mProperty_mResultingState ;
        outOperand3 = p->mObject.mProperty_mMessageKind ;
        outOperand4 = p->mObject.mProperty_mTransitionMessage ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_mapAutomatonMessageKind & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    outOperand0 = p->mObject.mProperty_mLeftState ;
    outOperand1 = p->mObject.mProperty_mRightState ;
    outOperand2 = p->mObject.mProperty_mResultingState ;
    outOperand3 = p->mObject.mProperty_mMessageKind ;
    outOperand4 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_mapAutomatonMessageKind & outOperand3,
                                                           GALGAS_lstring & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    outOperand0 = p->mObject.mProperty_mLeftState ;
    outOperand1 = p->mObject.mProperty_mRightState ;
    outOperand2 = p->mObject.mProperty_mResultingState ;
    outOperand3 = p->mObject.mProperty_mMessageKind ;
    outOperand4 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_mapAutomatonMessageKind & outOperand3,
                                                         GALGAS_lstring & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    outOperand0 = p->mObject.mProperty_mLeftState ;
    outOperand1 = p->mObject.mProperty_mRightState ;
    outOperand2 = p->mObject.mProperty_mResultingState ;
    outOperand3 = p->mObject.mProperty_mMessageKind ;
    outOperand4 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_mapAutomatonMessageKind & outOperand3,
                                                        GALGAS_lstring & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    outOperand0 = p->mObject.mProperty_mLeftState ;
    outOperand1 = p->mObject.mProperty_mRightState ;
    outOperand2 = p->mObject.mProperty_mResultingState ;
    outOperand3 = p->mObject.mProperty_mMessageKind ;
    outOperand4 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::add_operation (const GALGAS_mapOverrideBlockDescriptorAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockDescriptorAST result = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::plusAssign_operation (const GALGAS_mapOverrideBlockDescriptorAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_setMLeftStateAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeftState = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST::getter_mLeftStateAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    result = p->mObject.mProperty_mLeftState ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_setMRightStateAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRightState = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST::getter_mRightStateAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    result = p->mObject.mProperty_mRightState ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_setMResultingStateAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResultingState = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST::getter_mResultingStateAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    result = p->mObject.mProperty_mResultingState ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_setMMessageKindAtIndex (GALGAS_mapAutomatonMessageKind inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessageKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapOverrideBlockDescriptorAST::getter_mMessageKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  GALGAS_mapAutomatonMessageKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    result = p->mObject.mProperty_mMessageKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockDescriptorAST::setter_setMTransitionMessageAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTransitionMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST::getter_mTransitionMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockDescriptorAST * p = (cCollectionElement_mapOverrideBlockDescriptorAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
    result = p->mObject.mProperty_mTransitionMessage ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapOverrideBlockDescriptorAST::cEnumerator_mapOverrideBlockDescriptorAST (const GALGAS_mapOverrideBlockDescriptorAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST_2D_element cEnumerator_mapOverrideBlockDescriptorAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mLeftState (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mProperty_mLeftState ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mRightState (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mProperty_mRightState ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mResultingState (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mProperty_mResultingState ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapOverrideBlockDescriptorAST::current_mMessageKind (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mProperty_mMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockDescriptorAST::current_mTransitionMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockDescriptorAST * p = (const cCollectionElement_mapOverrideBlockDescriptorAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockDescriptorAST) ;
  return p->mObject.mProperty_mTransitionMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mapOverrideBlockDescriptorAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST ("mapOverrideBlockDescriptorAST",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapOverrideBlockDescriptorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapOverrideBlockDescriptorAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideBlockDescriptorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockDescriptorAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockDescriptorAST result ;
  const GALGAS_mapOverrideBlockDescriptorAST * p = (const GALGAS_mapOverrideBlockDescriptorAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideBlockDescriptorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideBlockDescriptorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapOverrideBlockListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapOverrideBlockListAST : public cCollectionElement {
  public: GALGAS_mapOverrideBlockListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapOverrideBlockListAST (const GALGAS_lstring & in_mOverrideBlockName,
                                                      const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                      const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapOverrideBlockListAST (const GALGAS_mapOverrideBlockListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapOverrideBlockListAST::cCollectionElement_mapOverrideBlockListAST (const GALGAS_lstring & in_mOverrideBlockName,
                                                                                        const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                                                        const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOverrideBlockName, in_mMapOverrideBlockDescriptor_31_AST, in_mMapOverrideBlockDescriptor_32_AST) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapOverrideBlockListAST::cCollectionElement_mapOverrideBlockListAST (const GALGAS_mapOverrideBlockListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOverrideBlockName, inElement.mProperty_mMapOverrideBlockDescriptor_31_AST, inElement.mProperty_mMapOverrideBlockDescriptor_32_AST) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapOverrideBlockListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapOverrideBlockListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapOverrideBlockListAST (mObject.mProperty_mOverrideBlockName, mObject.mProperty_mMapOverrideBlockDescriptor_31_AST, mObject.mProperty_mMapOverrideBlockDescriptor_32_AST COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapOverrideBlockListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOverrideBlockName" ":" ;
  mObject.mProperty_mOverrideBlockName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapOverrideBlockDescriptor1AST" ":" ;
  mObject.mProperty_mMapOverrideBlockDescriptor_31_AST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapOverrideBlockDescriptor2AST" ":" ;
  mObject.mProperty_mMapOverrideBlockDescriptor_32_AST.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapOverrideBlockListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapOverrideBlockListAST * operand = (cCollectionElement_mapOverrideBlockListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapOverrideBlockListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST::GALGAS_mapOverrideBlockListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST::GALGAS_mapOverrideBlockListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideBlockListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapOverrideBlockListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapOverrideBlockListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mOverrideBlockName,
                                                                const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                                const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_mapOverrideBlockListAST (in_mOverrideBlockName,
                                                             in_mMapOverrideBlockDescriptor_31_AST,
                                                             in_mMapOverrideBlockDescriptor_32_AST COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                          const GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideBlockListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_append (GALGAS_mapOverrideBlockListAST_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideBlockListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_mapOverrideBlockDescriptorAST inOperand1,
                                                           const GALGAS_mapOverrideBlockDescriptorAST inOperand2,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideBlockListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                           GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
        outOperand0 = p->mObject.mProperty_mOverrideBlockName ;
        outOperand1 = p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST ;
        outOperand2 = p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                      GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    outOperand0 = p->mObject.mProperty_mOverrideBlockName ;
    outOperand1 = p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                     GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    outOperand0 = p->mObject.mProperty_mOverrideBlockName ;
    outOperand1 = p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                   GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    outOperand0 = p->mObject.mProperty_mOverrideBlockName ;
    outOperand1 = p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_mapOverrideBlockDescriptorAST & outOperand1,
                                                  GALGAS_mapOverrideBlockDescriptorAST & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    outOperand0 = p->mObject.mProperty_mOverrideBlockName ;
    outOperand1 = p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST ;
    outOperand2 = p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::add_operation (const GALGAS_mapOverrideBlockListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result = GALGAS_mapOverrideBlockListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result = GALGAS_mapOverrideBlockListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result = GALGAS_mapOverrideBlockListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::plusAssign_operation (const GALGAS_mapOverrideBlockListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_setMOverrideBlockNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOverrideBlockName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapOverrideBlockListAST::getter_mOverrideBlockNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    result = p->mObject.mProperty_mOverrideBlockName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_setMMapOverrideBlockDescriptor_31_ASTAtIndex (GALGAS_mapOverrideBlockDescriptorAST inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockListAST::getter_mMapOverrideBlockDescriptor_31_ASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    result = p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideBlockListAST::setter_setMMapOverrideBlockDescriptor_32_ASTAtIndex (GALGAS_mapOverrideBlockDescriptorAST inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockListAST::getter_mMapOverrideBlockDescriptor_32_ASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideBlockListAST * p = (cCollectionElement_mapOverrideBlockListAST *) attributes.ptr () ;
  GALGAS_mapOverrideBlockDescriptorAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
    result = p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapOverrideBlockListAST::cEnumerator_mapOverrideBlockListAST (const GALGAS_mapOverrideBlockListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST_2D_element cEnumerator_mapOverrideBlockListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockListAST * p = (const cCollectionElement_mapOverrideBlockListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapOverrideBlockListAST::current_mOverrideBlockName (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockListAST * p = (const cCollectionElement_mapOverrideBlockListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
  return p->mObject.mProperty_mOverrideBlockName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST cEnumerator_mapOverrideBlockListAST::current_mMapOverrideBlockDescriptor_31_AST (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockListAST * p = (const cCollectionElement_mapOverrideBlockListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
  return p->mObject.mProperty_mMapOverrideBlockDescriptor_31_AST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockDescriptorAST cEnumerator_mapOverrideBlockListAST::current_mMapOverrideBlockDescriptor_32_AST (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideBlockListAST * p = (const cCollectionElement_mapOverrideBlockListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideBlockListAST) ;
  return p->mObject.mProperty_mMapOverrideBlockDescriptor_32_AST ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mapOverrideBlockListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideBlockListAST ("mapOverrideBlockListAST",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapOverrideBlockListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideBlockListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapOverrideBlockListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideBlockListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_mapOverrideBlockListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST result ;
  const GALGAS_mapOverrideBlockListAST * p = (const GALGAS_mapOverrideBlockListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideBlockListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideBlockListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@sharedMapAttributeListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sharedMapAttributeListAST : public cCollectionElement {
  public: GALGAS_sharedMapAttributeListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_sharedMapAttributeListAST (const GALGAS_lstring & in_mAttributeName,
                                                        const GALGAS_bool & in_mIsError,
                                                        const GALGAS_lstring & in_mMessage
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sharedMapAttributeListAST (const GALGAS_sharedMapAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sharedMapAttributeListAST::cCollectionElement_sharedMapAttributeListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                            const GALGAS_bool & in_mIsError,
                                                                                            const GALGAS_lstring & in_mMessage
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mIsError, in_mMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sharedMapAttributeListAST::cCollectionElement_sharedMapAttributeListAST (const GALGAS_sharedMapAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mIsError, inElement.mProperty_mMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sharedMapAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sharedMapAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sharedMapAttributeListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mIsError, mObject.mProperty_mMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sharedMapAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsError" ":" ;
  mObject.mProperty_mIsError.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessage" ":" ;
  mObject.mProperty_mMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sharedMapAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sharedMapAttributeListAST * operand = (cCollectionElement_sharedMapAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sharedMapAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST::GALGAS_sharedMapAttributeListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST::GALGAS_sharedMapAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sharedMapAttributeListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_bool & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sharedMapAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sharedMapAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mAttributeName,
                                                                  const GALGAS_bool & in_mIsError,
                                                                  const GALGAS_lstring & in_mMessage
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_sharedMapAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sharedMapAttributeListAST (in_mAttributeName,
                                                               in_mIsError,
                                                               in_mMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_lstring & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sharedMapAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_append (GALGAS_sharedMapAttributeListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sharedMapAttributeListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_bool inOperand1,
                                                             const GALGAS_lstring inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sharedMapAttributeListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
        outOperand0 = p->mObject.mProperty_mAttributeName ;
        outOperand1 = p->mObject.mProperty_mIsError ;
        outOperand2 = p->mObject.mProperty_mMessage ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_bool & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mIsError ;
    outOperand2 = p->mObject.mProperty_mMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_bool & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mIsError ;
    outOperand2 = p->mObject.mProperty_mMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_bool & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mIsError ;
    outOperand2 = p->mObject.mProperty_mMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_bool & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mIsError ;
    outOperand2 = p->mObject.mProperty_mMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::add_operation (const GALGAS_sharedMapAttributeListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result = GALGAS_sharedMapAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result = GALGAS_sharedMapAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapAttributeListAST result = GALGAS_sharedMapAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::plusAssign_operation (const GALGAS_sharedMapAttributeListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sharedMapAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_setMIsErrorAtIndex (GALGAS_bool inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsError = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sharedMapAttributeListAST::getter_mIsErrorAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    result = p->mObject.mProperty_mIsError ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapAttributeListAST::setter_setMMessageAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sharedMapAttributeListAST::getter_mMessageAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sharedMapAttributeListAST * p = (cCollectionElement_sharedMapAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
    result = p->mObject.mProperty_mMessage ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sharedMapAttributeListAST::cEnumerator_sharedMapAttributeListAST (const GALGAS_sharedMapAttributeListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST_2D_element cEnumerator_sharedMapAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sharedMapAttributeListAST * p = (const cCollectionElement_sharedMapAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sharedMapAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sharedMapAttributeListAST * p = (const cCollectionElement_sharedMapAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sharedMapAttributeListAST::current_mIsError (LOCATION_ARGS) const {
  const cCollectionElement_sharedMapAttributeListAST * p = (const cCollectionElement_sharedMapAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
  return p->mObject.mProperty_mIsError ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sharedMapAttributeListAST::current_mMessage (LOCATION_ARGS) const {
  const cCollectionElement_sharedMapAttributeListAST * p = (const cCollectionElement_sharedMapAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sharedMapAttributeListAST) ;
  return p->mObject.mProperty_mMessage ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@sharedMapAttributeListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapAttributeListAST ("sharedMapAttributeListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sharedMapAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapAttributeListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sharedMapAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapAttributeListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST result ;
  const GALGAS_sharedMapAttributeListAST * p = (const GALGAS_sharedMapAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapStateTransitionSortedList' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_mapStateTransitionSortedList : public cSortedListElement {
  public: GALGAS_mapStateTransitionSortedList_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_mapStateTransitionSortedList (const GALGAS_uint & in_mActionIndex,
                                                           const GALGAS_string & in_mActionName,
                                                           const GALGAS_uint & in_mTargetStateIndex,
                                                           const GALGAS_string & in_mTargetStateName,
                                                           const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                           const GALGAS_string & in_mTransitionMessage
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_mapStateTransitionSortedList::cSortedListElement_mapStateTransitionSortedList (const GALGAS_uint & in_mActionIndex,
                                                                                                  const GALGAS_string & in_mActionName,
                                                                                                  const GALGAS_uint & in_mTargetStateIndex,
                                                                                                  const GALGAS_string & in_mTargetStateName,
                                                                                                  const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                                                                  const GALGAS_string & in_mTransitionMessage
                                                                                                  COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mActionIndex, in_mActionName, in_mTargetStateIndex, in_mTargetStateName, in_mTransitionMessageKind, in_mTransitionMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_mapStateTransitionSortedList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_mapStateTransitionSortedList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_mapStateTransitionSortedList (mObject.mProperty_mActionIndex, mObject.mProperty_mActionName, mObject.mProperty_mTargetStateIndex, mObject.mProperty_mTargetStateName, mObject.mProperty_mTransitionMessageKind, mObject.mProperty_mTransitionMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_mapStateTransitionSortedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionIndex" ":" ;
  mObject.mProperty_mActionIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateIndex" ":" ;
  mObject.mProperty_mTargetStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetStateName" ":" ;
  mObject.mProperty_mTargetStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessageKind" ":" ;
  mObject.mProperty_mTransitionMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionMessage" ":" ;
  mObject.mProperty_mTransitionMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_mapStateTransitionSortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_mapStateTransitionSortedList * operand = (cSortedListElement_mapStateTransitionSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateTransitionSortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionSortedList::GALGAS_mapStateTransitionSortedList (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_mapStateTransitionSortedList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_mapStateTransitionSortedList * operand = (const cSortedListElement_mapStateTransitionSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateTransitionSortedList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mActionIndex.objectCompare (operand->mObject.mProperty_mActionIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionSortedList GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionSortedList GALGAS_mapStateTransitionSortedList::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_uint & inOperand2,
                                                                                                          const GALGAS_string & inOperand3,
                                                                                                          const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                                          const GALGAS_string & inOperand5
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_mapStateTransitionSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionSortedList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                               const GALGAS_string & inOperand1,
                                                               const GALGAS_uint & inOperand2,
                                                               const GALGAS_string & inOperand3,
                                                               const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                               const GALGAS_string & inOperand5
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_mapStateTransitionSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionSortedList::plusAssign_operation (const GALGAS_mapStateTransitionSortedList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionSortedList::setter_popSmallest (GALGAS_uint & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_uint & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_mapAutomatonMessageKind & outOperand4,
                                                              GALGAS_string & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mProperty_mActionIndex ;
    outOperand1 = p->mObject.mProperty_mActionName ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
    outOperand3 = p->mObject.mProperty_mTargetStateName ;
    outOperand4 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand5 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionSortedList::setter_popGreatest (GALGAS_uint & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_uint & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_mapAutomatonMessageKind & outOperand4,
                                                              GALGAS_string & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mProperty_mActionIndex ;
    outOperand1 = p->mObject.mProperty_mActionName ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
    outOperand3 = p->mObject.mProperty_mTargetStateName ;
    outOperand4 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand5 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionSortedList::method_smallest (GALGAS_uint & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_uint & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_mapAutomatonMessageKind & outOperand4,
                                                           GALGAS_string & outOperand5,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mProperty_mActionIndex ;
    outOperand1 = p->mObject.mProperty_mActionName ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
    outOperand3 = p->mObject.mProperty_mTargetStateName ;
    outOperand4 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand5 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateTransitionSortedList::method_greatest (GALGAS_uint & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_uint & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_mapAutomatonMessageKind & outOperand4,
                                                           GALGAS_string & outOperand5,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateTransitionSortedList * p = (cSortedListElement_mapStateTransitionSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
    outOperand0 = p->mObject.mProperty_mActionIndex ;
    outOperand1 = p->mObject.mProperty_mActionName ;
    outOperand2 = p->mObject.mProperty_mTargetStateIndex ;
    outOperand3 = p->mObject.mProperty_mTargetStateName ;
    outOperand4 = p->mObject.mProperty_mTransitionMessageKind ;
    outOperand5 = p->mObject.mProperty_mTransitionMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapStateTransitionSortedList::cEnumerator_mapStateTransitionSortedList (const GALGAS_mapStateTransitionSortedList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionSortedList_2D_element cEnumerator_mapStateTransitionSortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_mapStateTransitionSortedList::current_mActionIndex (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mProperty_mActionIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_mapStateTransitionSortedList::current_mActionName (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mProperty_mActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_mapStateTransitionSortedList::current_mTargetStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mProperty_mTargetStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_mapStateTransitionSortedList::current_mTargetStateName (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mProperty_mTargetStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateTransitionSortedList::current_mTransitionMessageKind (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mProperty_mTransitionMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_mapStateTransitionSortedList::current_mTransitionMessage (LOCATION_ARGS) const {
  const cSortedListElement_mapStateTransitionSortedList * p = (const cSortedListElement_mapStateTransitionSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateTransitionSortedList) ;
  return p->mObject.mProperty_mTransitionMessage ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@mapStateTransitionSortedList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateTransitionSortedList ("mapStateTransitionSortedList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapStateTransitionSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateTransitionSortedList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapStateTransitionSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateTransitionSortedList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionSortedList GALGAS_mapStateTransitionSortedList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList result ;
  const GALGAS_mapStateTransitionSortedList * p = (const GALGAS_mapStateTransitionSortedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateTransitionSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateTransitionSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapStateSortedList' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_mapStateSortedList : public cSortedListElement {
  public: GALGAS_mapStateSortedList_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_mapStateSortedList (const GALGAS_uint & in_mStateIndex,
                                                 const GALGAS_string & in_mStateName,
                                                 const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                 const GALGAS_string & in_mStateMessage,
                                                 const GALGAS_mapStateTransitionSortedList & in_mTransitionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_mapStateSortedList::cSortedListElement_mapStateSortedList (const GALGAS_uint & in_mStateIndex,
                                                                              const GALGAS_string & in_mStateName,
                                                                              const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                                              const GALGAS_string & in_mStateMessage,
                                                                              const GALGAS_mapStateTransitionSortedList & in_mTransitionList
                                                                              COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mStateIndex, in_mStateName, in_mStateMessageKind, in_mStateMessage, in_mTransitionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_mapStateSortedList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_mapStateSortedList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_mapStateSortedList (mObject.mProperty_mStateIndex, mObject.mProperty_mStateName, mObject.mProperty_mStateMessageKind, mObject.mProperty_mStateMessage, mObject.mProperty_mTransitionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_mapStateSortedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mObject.mProperty_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateName" ":" ;
  mObject.mProperty_mStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessageKind" ":" ;
  mObject.mProperty_mStateMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessage" ":" ;
  mObject.mProperty_mStateMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransitionList" ":" ;
  mObject.mProperty_mTransitionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_mapStateSortedList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_mapStateSortedList * operand = (cSortedListElement_mapStateSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateSortedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateSortedList::GALGAS_mapStateSortedList (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_mapStateSortedList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_mapStateSortedList * operand = (const cSortedListElement_mapStateSortedList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_mapStateSortedList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mStateIndex.objectCompare (operand->mObject.mProperty_mStateIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateSortedList GALGAS_mapStateSortedList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_mapStateSortedList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateSortedList GALGAS_mapStateSortedList::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                      const GALGAS_string & inOperand3,
                                                                                      const GALGAS_mapStateTransitionSortedList & inOperand4
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_mapStateSortedList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_mapStateSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateSortedList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                     const GALGAS_string & inOperand3,
                                                     const GALGAS_mapStateTransitionSortedList & inOperand4
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_mapStateSortedList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateSortedList::plusAssign_operation (const GALGAS_mapStateSortedList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateSortedList::setter_popSmallest (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_mapAutomatonMessageKind & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    GALGAS_mapStateTransitionSortedList & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateName ;
    outOperand2 = p->mObject.mProperty_mStateMessageKind ;
    outOperand3 = p->mObject.mProperty_mStateMessage ;
    outOperand4 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateSortedList::setter_popGreatest (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_mapAutomatonMessageKind & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    GALGAS_mapStateTransitionSortedList & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateName ;
    outOperand2 = p->mObject.mProperty_mStateMessageKind ;
    outOperand3 = p->mObject.mProperty_mStateMessage ;
    outOperand4 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateSortedList::method_smallest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_mapAutomatonMessageKind & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_mapStateTransitionSortedList & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateName ;
    outOperand2 = p->mObject.mProperty_mStateMessageKind ;
    outOperand3 = p->mObject.mProperty_mStateMessage ;
    outOperand4 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapStateSortedList::method_greatest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_mapAutomatonMessageKind & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_mapStateTransitionSortedList & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_mapStateSortedList * p = (cSortedListElement_mapStateSortedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
    outOperand0 = p->mObject.mProperty_mStateIndex ;
    outOperand1 = p->mObject.mProperty_mStateName ;
    outOperand2 = p->mObject.mProperty_mStateMessageKind ;
    outOperand3 = p->mObject.mProperty_mStateMessage ;
    outOperand4 = p->mObject.mProperty_mTransitionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapStateSortedList::cEnumerator_mapStateSortedList (const GALGAS_mapStateSortedList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateSortedList_2D_element cEnumerator_mapStateSortedList::current (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_mapStateSortedList::current_mStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mProperty_mStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_mapStateSortedList::current_mStateName (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mProperty_mStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapStateSortedList::current_mStateMessageKind (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mProperty_mStateMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_mapStateSortedList::current_mStateMessage (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mProperty_mStateMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateTransitionSortedList cEnumerator_mapStateSortedList::current_mTransitionList (LOCATION_ARGS) const {
  const cSortedListElement_mapStateSortedList * p = (const cSortedListElement_mapStateSortedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_mapStateSortedList) ;
  return p->mObject.mProperty_mTransitionList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@mapStateSortedList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateSortedList ("mapStateSortedList",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapStateSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateSortedList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapStateSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateSortedList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateSortedList GALGAS_mapStateSortedList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapStateSortedList result ;
  const GALGAS_mapStateSortedList * p = (const GALGAS_mapStateSortedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_mapAutomatonStateMap::cMapElement_mapAutomatonStateMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_uint & in_mStateIndex,
                                                                    const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mStateIndex (in_mStateIndex),
mProperty_mStateMessageKind (in_mStateMessageKind) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_mapAutomatonStateMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStateIndex.isValid () && mProperty_mStateMessageKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_mapAutomatonStateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_mapAutomatonStateMap (mProperty_lkey, mProperty_mStateIndex, mProperty_mStateMessageKind COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_mapAutomatonStateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateIndex" ":" ;
  mProperty_mStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStateMessageKind" ":" ;
  mProperty_mStateMessageKind.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_mapAutomatonStateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_mapAutomatonStateMap * operand = (cMapElement_mapAutomatonStateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mStateIndex.objectCompare (operand->mProperty_mStateIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStateMessageKind.objectCompare (operand->mProperty_mStateMessageKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap::GALGAS_mapAutomatonStateMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap::GALGAS_mapAutomatonStateMap (const GALGAS_mapAutomatonStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap & GALGAS_mapAutomatonStateMap::operator = (const GALGAS_mapAutomatonStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::constructor_mapWithMapToOverride (const GALGAS_mapAutomatonStateMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_mapAutomatonStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonStateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_uint & inArgument0,
                                                       const GALGAS_mapAutomatonMessageKind & inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonStateMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonStateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@mapAutomatonStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonStateMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_uint inArgument0,
                                                    GALGAS_mapAutomatonMessageKind inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonStateMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonStateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' map automaton state" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_mapAutomatonStateMap_searchKey = "undefined '%K' map automaton state" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonStateMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_uint & outArgument0,
                                                    GALGAS_mapAutomatonMessageKind & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_mapAutomatonStateMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    outArgument0 = p->mProperty_mStateIndex ;
    outArgument1 = p->mProperty_mStateMessageKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_mapAutomatonStateMap::getter_mStateIndexForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    result = p->mProperty_mStateIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonStateMap::getter_mStateMessageKindForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) attributes ;
  GALGAS_mapAutomatonMessageKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    result = p->mProperty_mStateMessageKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonStateMap::setter_setMStateIndexForKey (GALGAS_uint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_mapAutomatonStateMap * p = (cMapElement_mapAutomatonStateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    p->mProperty_mStateIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonStateMap::setter_setMStateMessageKindForKey (GALGAS_mapAutomatonMessageKind inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_mapAutomatonStateMap * p = (cMapElement_mapAutomatonStateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    p->mProperty_mStateMessageKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_mapAutomatonStateMap * GALGAS_mapAutomatonStateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonStateMap * result = (cMapElement_mapAutomatonStateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_mapAutomatonStateMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapAutomatonStateMap::cEnumerator_mapAutomatonStateMap (const GALGAS_mapAutomatonStateMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap_2D_element cEnumerator_mapAutomatonStateMap::current (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
  return GALGAS_mapAutomatonStateMap_2D_element (p->mProperty_lkey, p->mProperty_mStateIndex, p->mProperty_mStateMessageKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapAutomatonStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_mapAutomatonStateMap::current_mStateIndex (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
  return p->mProperty_mStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_mapAutomatonStateMap::current_mStateMessageKind (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
  return p->mProperty_mStateMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mapAutomatonStateMap::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_uint & outArgument0,
                                                      GALGAS_mapAutomatonMessageKind & outArgument1) const {
  const cMapElement_mapAutomatonStateMap * p = (const cMapElement_mapAutomatonStateMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_mapAutomatonStateMap) ;
    outArgument0 = p->mProperty_mStateIndex ;
    outArgument1 = p->mProperty_mStateMessageKind ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapAutomatonStateMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonStateMap ("mapAutomatonStateMap",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapAutomatonStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonStateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapAutomatonStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonStateMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap GALGAS_mapAutomatonStateMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap result ;
  const GALGAS_mapAutomatonStateMap * p = (const GALGAS_mapAutomatonStateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonStateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonStateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_mapAutomatonActionMap::cMapElement_mapAutomatonActionMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_uint & in_mActionIndex
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mActionIndex (in_mActionIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_mapAutomatonActionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mActionIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_mapAutomatonActionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_mapAutomatonActionMap (mProperty_lkey, mProperty_mActionIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_mapAutomatonActionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionIndex" ":" ;
  mProperty_mActionIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_mapAutomatonActionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_mapAutomatonActionMap * operand = (cMapElement_mapAutomatonActionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mActionIndex.objectCompare (operand->mProperty_mActionIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap::GALGAS_mapAutomatonActionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap::GALGAS_mapAutomatonActionMap (const GALGAS_mapAutomatonActionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap & GALGAS_mapAutomatonActionMap::operator = (const GALGAS_mapAutomatonActionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::constructor_mapWithMapToOverride (const GALGAS_mapAutomatonActionMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_mapAutomatonActionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonActionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_uint & inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonActionMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonActionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@mapAutomatonActionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonActionMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_uint inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonActionMap * p = NULL ;
  macroMyNew (p, cMapElement_mapAutomatonActionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' map automaton action" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_mapAutomatonActionMap_searchKey = "undefined '%K' map automaton action" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonActionMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_uint & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_mapAutomatonActionMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
    outArgument0 = p->mProperty_mActionIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_mapAutomatonActionMap::getter_mActionIndexForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
    result = p->mProperty_mActionIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapAutomatonActionMap::setter_setMActionIndexForKey (GALGAS_uint inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_mapAutomatonActionMap * p = (cMapElement_mapAutomatonActionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
    p->mProperty_mActionIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_mapAutomatonActionMap * GALGAS_mapAutomatonActionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_mapAutomatonActionMap * result = (cMapElement_mapAutomatonActionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_mapAutomatonActionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapAutomatonActionMap::cEnumerator_mapAutomatonActionMap (const GALGAS_mapAutomatonActionMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap_2D_element cEnumerator_mapAutomatonActionMap::current (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
  return GALGAS_mapAutomatonActionMap_2D_element (p->mProperty_lkey, p->mProperty_mActionIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_mapAutomatonActionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_mapAutomatonActionMap::current_mActionIndex (LOCATION_ARGS) const {
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
  return p->mProperty_mActionIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mapAutomatonActionMap::optional_searchKey (const GALGAS_string & inKey,
                                                       GALGAS_uint & outArgument0) const {
  const cMapElement_mapAutomatonActionMap * p = (const cMapElement_mapAutomatonActionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_mapAutomatonActionMap) ;
    outArgument0 = p->mProperty_mActionIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapAutomatonActionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonActionMap ("mapAutomatonActionMap",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapAutomatonActionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonActionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapAutomatonActionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonActionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap GALGAS_mapAutomatonActionMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap result ;
  const GALGAS_mapAutomatonActionMap * p = (const GALGAS_mapAutomatonActionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonActionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonActionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@branchBehaviourSortedListForMapOverride' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_branchBehaviourSortedListForMapOverride : public cSortedListElement {
  public: GALGAS_branchBehaviourSortedListForMapOverride_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_branchBehaviourSortedListForMapOverride (const GALGAS_uint & in_mStartStateIndex,
                                                                      const GALGAS_string & in_mStartStateName,
                                                                      const GALGAS_uint & in_mCurrentStateIndex,
                                                                      const GALGAS_string & in_mCurrentStateName,
                                                                      const GALGAS_uint & in_mFinalStateIndex,
                                                                      const GALGAS_string & in_mFinalStateName,
                                                                      const GALGAS_mapAutomatonMessageKind & in_mBehaviourMessageKind,
                                                                      const GALGAS_string & in_mBehaviourMessage
                                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement_branchBehaviourSortedListForMapOverride::cSortedListElement_branchBehaviourSortedListForMapOverride (const GALGAS_uint & in_mStartStateIndex,
                                                                                                                        const GALGAS_string & in_mStartStateName,
                                                                                                                        const GALGAS_uint & in_mCurrentStateIndex,
                                                                                                                        const GALGAS_string & in_mCurrentStateName,
                                                                                                                        const GALGAS_uint & in_mFinalStateIndex,
                                                                                                                        const GALGAS_string & in_mFinalStateName,
                                                                                                                        const GALGAS_mapAutomatonMessageKind & in_mBehaviourMessageKind,
                                                                                                                        const GALGAS_string & in_mBehaviourMessage
                                                                                                                        COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mStartStateIndex, in_mStartStateName, in_mCurrentStateIndex, in_mCurrentStateName, in_mFinalStateIndex, in_mFinalStateName, in_mBehaviourMessageKind, in_mBehaviourMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_branchBehaviourSortedListForMapOverride::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_branchBehaviourSortedListForMapOverride::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_branchBehaviourSortedListForMapOverride (mObject.mProperty_mStartStateIndex, mObject.mProperty_mStartStateName, mObject.mProperty_mCurrentStateIndex, mObject.mProperty_mCurrentStateName, mObject.mProperty_mFinalStateIndex, mObject.mProperty_mFinalStateName, mObject.mProperty_mBehaviourMessageKind, mObject.mProperty_mBehaviourMessage COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_branchBehaviourSortedListForMapOverride::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartStateIndex" ":" ;
  mObject.mProperty_mStartStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartStateName" ":" ;
  mObject.mProperty_mStartStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentStateIndex" ":" ;
  mObject.mProperty_mCurrentStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentStateName" ":" ;
  mObject.mProperty_mCurrentStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFinalStateIndex" ":" ;
  mObject.mProperty_mFinalStateIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFinalStateName" ":" ;
  mObject.mProperty_mFinalStateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBehaviourMessageKind" ":" ;
  mObject.mProperty_mBehaviourMessageKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBehaviourMessage" ":" ;
  mObject.mProperty_mBehaviourMessage.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_branchBehaviourSortedListForMapOverride::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_branchBehaviourSortedListForMapOverride * operand = (cSortedListElement_branchBehaviourSortedListForMapOverride *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride::GALGAS_branchBehaviourSortedListForMapOverride (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_branchBehaviourSortedListForMapOverride::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_branchBehaviourSortedListForMapOverride * operand = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mStartStateIndex.objectCompare (operand->mObject.mProperty_mStartStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mObject.mProperty_mCurrentStateIndex.objectCompare (operand->mObject.mProperty_mCurrentStateIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_branchBehaviourSortedListForMapOverride::constructor_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_uint & inOperand2,
                                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                                const GALGAS_uint & inOperand4,
                                                                                                                                const GALGAS_string & inOperand5,
                                                                                                                                const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                                                                const GALGAS_string & inOperand7
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_branchBehaviourSortedListForMapOverride (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchBehaviourSortedListForMapOverride::addAssign_operation (const GALGAS_uint & inOperand0,
                                                                          const GALGAS_string & inOperand1,
                                                                          const GALGAS_uint & inOperand2,
                                                                          const GALGAS_string & inOperand3,
                                                                          const GALGAS_uint & inOperand4,
                                                                          const GALGAS_string & inOperand5,
                                                                          const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                          const GALGAS_string & inOperand7
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_branchBehaviourSortedListForMapOverride (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchBehaviourSortedListForMapOverride::plusAssign_operation (const GALGAS_branchBehaviourSortedListForMapOverride inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchBehaviourSortedListForMapOverride::setter_popSmallest (GALGAS_uint & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         GALGAS_uint & outOperand2,
                                                                         GALGAS_string & outOperand3,
                                                                         GALGAS_uint & outOperand4,
                                                                         GALGAS_string & outOperand5,
                                                                         GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                         GALGAS_string & outOperand7,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mProperty_mStartStateIndex ;
    outOperand1 = p->mObject.mProperty_mStartStateName ;
    outOperand2 = p->mObject.mProperty_mCurrentStateIndex ;
    outOperand3 = p->mObject.mProperty_mCurrentStateName ;
    outOperand4 = p->mObject.mProperty_mFinalStateIndex ;
    outOperand5 = p->mObject.mProperty_mFinalStateName ;
    outOperand6 = p->mObject.mProperty_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mProperty_mBehaviourMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchBehaviourSortedListForMapOverride::setter_popGreatest (GALGAS_uint & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         GALGAS_uint & outOperand2,
                                                                         GALGAS_string & outOperand3,
                                                                         GALGAS_uint & outOperand4,
                                                                         GALGAS_string & outOperand5,
                                                                         GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                         GALGAS_string & outOperand7,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mProperty_mStartStateIndex ;
    outOperand1 = p->mObject.mProperty_mStartStateName ;
    outOperand2 = p->mObject.mProperty_mCurrentStateIndex ;
    outOperand3 = p->mObject.mProperty_mCurrentStateName ;
    outOperand4 = p->mObject.mProperty_mFinalStateIndex ;
    outOperand5 = p->mObject.mProperty_mFinalStateName ;
    outOperand6 = p->mObject.mProperty_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mProperty_mBehaviourMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchBehaviourSortedListForMapOverride::method_smallest (GALGAS_uint & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_uint & outOperand2,
                                                                      GALGAS_string & outOperand3,
                                                                      GALGAS_uint & outOperand4,
                                                                      GALGAS_string & outOperand5,
                                                                      GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                      GALGAS_string & outOperand7,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mProperty_mStartStateIndex ;
    outOperand1 = p->mObject.mProperty_mStartStateName ;
    outOperand2 = p->mObject.mProperty_mCurrentStateIndex ;
    outOperand3 = p->mObject.mProperty_mCurrentStateName ;
    outOperand4 = p->mObject.mProperty_mFinalStateIndex ;
    outOperand5 = p->mObject.mProperty_mFinalStateName ;
    outOperand6 = p->mObject.mProperty_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mProperty_mBehaviourMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchBehaviourSortedListForMapOverride::method_greatest (GALGAS_uint & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_uint & outOperand2,
                                                                      GALGAS_string & outOperand3,
                                                                      GALGAS_uint & outOperand4,
                                                                      GALGAS_string & outOperand5,
                                                                      GALGAS_mapAutomatonMessageKind & outOperand6,
                                                                      GALGAS_string & outOperand7,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_branchBehaviourSortedListForMapOverride * p = (cSortedListElement_branchBehaviourSortedListForMapOverride *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
    outOperand0 = p->mObject.mProperty_mStartStateIndex ;
    outOperand1 = p->mObject.mProperty_mStartStateName ;
    outOperand2 = p->mObject.mProperty_mCurrentStateIndex ;
    outOperand3 = p->mObject.mProperty_mCurrentStateName ;
    outOperand4 = p->mObject.mProperty_mFinalStateIndex ;
    outOperand5 = p->mObject.mProperty_mFinalStateName ;
    outOperand6 = p->mObject.mProperty_mBehaviourMessageKind ;
    outOperand7 = p->mObject.mProperty_mBehaviourMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_branchBehaviourSortedListForMapOverride::cEnumerator_branchBehaviourSortedListForMapOverride (const GALGAS_branchBehaviourSortedListForMapOverride & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride_2D_element cEnumerator_branchBehaviourSortedListForMapOverride::current (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_branchBehaviourSortedListForMapOverride::current_mStartStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mStartStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mStartStateName (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mStartStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_branchBehaviourSortedListForMapOverride::current_mCurrentStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mCurrentStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mCurrentStateName (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mCurrentStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_branchBehaviourSortedListForMapOverride::current_mFinalStateIndex (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mFinalStateIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mFinalStateName (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mFinalStateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind cEnumerator_branchBehaviourSortedListForMapOverride::current_mBehaviourMessageKind (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mBehaviourMessageKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_branchBehaviourSortedListForMapOverride::current_mBehaviourMessage (LOCATION_ARGS) const {
  const cSortedListElement_branchBehaviourSortedListForMapOverride * p = (const cSortedListElement_branchBehaviourSortedListForMapOverride *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_branchBehaviourSortedListForMapOverride) ;
  return p->mObject.mProperty_mBehaviourMessage ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@branchBehaviourSortedListForMapOverride type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride ("branchBehaviourSortedListForMapOverride",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchBehaviourSortedListForMapOverride::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchBehaviourSortedListForMapOverride::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchBehaviourSortedListForMapOverride (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_branchBehaviourSortedListForMapOverride::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  const GALGAS_branchBehaviourSortedListForMapOverride * p = (const GALGAS_branchBehaviourSortedListForMapOverride *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchBehaviourSortedListForMapOverride *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchBehaviourSortedListForMapOverride", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mapOverrideList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mapOverrideList : public cCollectionElement {
  public: GALGAS_mapOverrideList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_mapOverrideList (const GALGAS_string & in_mOverrideName,
                                              const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchBehaviourSortedListForMapOverride,
                                              const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchCombinationSortedListForMapOverride
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapOverrideList (const GALGAS_mapOverrideList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapOverrideList::cCollectionElement_mapOverrideList (const GALGAS_string & in_mOverrideName,
                                                                        const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchBehaviourSortedListForMapOverride,
                                                                        const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchCombinationSortedListForMapOverride
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOverrideName, in_mBranchBehaviourSortedListForMapOverride, in_mBranchCombinationSortedListForMapOverride) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mapOverrideList::cCollectionElement_mapOverrideList (const GALGAS_mapOverrideList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOverrideName, inElement.mProperty_mBranchBehaviourSortedListForMapOverride, inElement.mProperty_mBranchCombinationSortedListForMapOverride) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mapOverrideList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapOverrideList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mapOverrideList (mObject.mProperty_mOverrideName, mObject.mProperty_mBranchBehaviourSortedListForMapOverride, mObject.mProperty_mBranchCombinationSortedListForMapOverride COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mapOverrideList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOverrideName" ":" ;
  mObject.mProperty_mOverrideName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBranchBehaviourSortedListForMapOverride" ":" ;
  mObject.mProperty_mBranchBehaviourSortedListForMapOverride.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBranchCombinationSortedListForMapOverride" ":" ;
  mObject.mProperty_mBranchCombinationSortedListForMapOverride.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mapOverrideList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mapOverrideList * operand = (cCollectionElement_mapOverrideList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mapOverrideList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList::GALGAS_mapOverrideList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList::GALGAS_mapOverrideList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_mapOverrideList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_mapOverrideList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                          const GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                                          const GALGAS_branchBehaviourSortedListForMapOverride & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapOverrideList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mapOverrideList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_string & in_mOverrideName,
                                                        const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchBehaviourSortedListForMapOverride,
                                                        const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchCombinationSortedListForMapOverride
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideList * p = NULL ;
  macroMyNew (p, cCollectionElement_mapOverrideList (in_mOverrideName,
                                                     in_mBranchBehaviourSortedListForMapOverride,
                                                     in_mBranchCombinationSortedListForMapOverride COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::addAssign_operation (const GALGAS_string & inOperand0,
                                                  const GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                  const GALGAS_branchBehaviourSortedListForMapOverride & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_append (GALGAS_mapOverrideList_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                   const GALGAS_branchBehaviourSortedListForMapOverride inOperand1,
                                                   const GALGAS_branchBehaviourSortedListForMapOverride inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_mapOverrideList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                   GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                                   GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
        outOperand0 = p->mObject.mProperty_mOverrideName ;
        outOperand1 = p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride ;
        outOperand2 = p->mObject.mProperty_mBranchCombinationSortedListForMapOverride ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_popFirst (GALGAS_string & outOperand0,
                                              GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                              GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideName ;
    outOperand1 = p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride ;
    outOperand2 = p->mObject.mProperty_mBranchCombinationSortedListForMapOverride ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_popLast (GALGAS_string & outOperand0,
                                             GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                             GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideName ;
    outOperand1 = p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride ;
    outOperand2 = p->mObject.mProperty_mBranchCombinationSortedListForMapOverride ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::method_first (GALGAS_string & outOperand0,
                                           GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                           GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideName ;
    outOperand1 = p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride ;
    outOperand2 = p->mObject.mProperty_mBranchCombinationSortedListForMapOverride ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::method_last (GALGAS_string & outOperand0,
                                          GALGAS_branchBehaviourSortedListForMapOverride & outOperand1,
                                          GALGAS_branchBehaviourSortedListForMapOverride & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideName ;
    outOperand1 = p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride ;
    outOperand2 = p->mObject.mProperty_mBranchCombinationSortedListForMapOverride ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_mapOverrideList::add_operation (const GALGAS_mapOverrideList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_mapOverrideList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result = GALGAS_mapOverrideList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_mapOverrideList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result = GALGAS_mapOverrideList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_mapOverrideList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_mapOverrideList result = GALGAS_mapOverrideList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::plusAssign_operation (const GALGAS_mapOverrideList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_setMOverrideNameAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOverrideName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_mapOverrideList::getter_mOverrideNameAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    result = p->mObject.mProperty_mOverrideName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_setMBranchBehaviourSortedListForMapOverrideAtIndex (GALGAS_branchBehaviourSortedListForMapOverride inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_mapOverrideList::getter_mBranchBehaviourSortedListForMapOverrideAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    result = p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapOverrideList::setter_setMBranchCombinationSortedListForMapOverrideAtIndex (GALGAS_branchBehaviourSortedListForMapOverride inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBranchCombinationSortedListForMapOverride = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_mapOverrideList::getter_mBranchCombinationSortedListForMapOverrideAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                 C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapOverrideList * p = (cCollectionElement_mapOverrideList *) attributes.ptr () ;
  GALGAS_branchBehaviourSortedListForMapOverride result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
    result = p->mObject.mProperty_mBranchCombinationSortedListForMapOverride ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mapOverrideList::cEnumerator_mapOverrideList (const GALGAS_mapOverrideList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList_2D_element cEnumerator_mapOverrideList::current (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideList * p = (const cCollectionElement_mapOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_mapOverrideList::current_mOverrideName (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideList * p = (const cCollectionElement_mapOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
  return p->mObject.mProperty_mOverrideName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride cEnumerator_mapOverrideList::current_mBranchBehaviourSortedListForMapOverride (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideList * p = (const cCollectionElement_mapOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
  return p->mObject.mProperty_mBranchBehaviourSortedListForMapOverride ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchBehaviourSortedListForMapOverride cEnumerator_mapOverrideList::current_mBranchCombinationSortedListForMapOverride (LOCATION_ARGS) const {
  const cCollectionElement_mapOverrideList * p = (const cCollectionElement_mapOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapOverrideList) ;
  return p->mObject.mProperty_mBranchCombinationSortedListForMapOverride ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mapOverrideList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideList ("mapOverrideList",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapOverrideList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapOverrideList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_mapOverrideList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideList result ;
  const GALGAS_mapOverrideList * p = (const GALGAS_mapOverrideList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@sortedListSortDescriptorListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sortedListSortDescriptorListAST : public cCollectionElement {
  public: GALGAS_sortedListSortDescriptorListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_lstring & in_mSortedAttributeName,
                                                              const GALGAS_bool & in_mAscending
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_lstring & in_mSortedAttributeName,
                                                                                                        const GALGAS_bool & in_mAscending
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSortedAttributeName, in_mAscending) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSortedAttributeName, inElement.mProperty_mAscending) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sortedListSortDescriptorListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sortedListSortDescriptorListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sortedListSortDescriptorListAST (mObject.mProperty_mSortedAttributeName, mObject.mProperty_mAscending COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sortedListSortDescriptorListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortedAttributeName" ":" ;
  mObject.mProperty_mSortedAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAscending" ":" ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sortedListSortDescriptorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sortedListSortDescriptorListAST * operand = (cCollectionElement_sortedListSortDescriptorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sortedListSortDescriptorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST::GALGAS_sortedListSortDescriptorListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST::GALGAS_sortedListSortDescriptorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortedListSortDescriptorListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_bool & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sortedListSortDescriptorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_lstring & in_mSortedAttributeName,
                                                                        const GALGAS_bool & in_mAscending
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (in_mSortedAttributeName,
                                                                     in_mAscending COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_bool & inOperand1
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_append (GALGAS_sortedListSortDescriptorListAST_2D_element inElement,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                   const GALGAS_bool inOperand1,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                   GALGAS_bool & outOperand1,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
        outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
        outOperand1 = p->mObject.mProperty_mAscending ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                             GALGAS_bool & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::method_first (GALGAS_lstring & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::method_last (GALGAS_lstring & outOperand0,
                                                          GALGAS_bool & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::add_operation (const GALGAS_sortedListSortDescriptorListAST & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::plusAssign_operation (const GALGAS_sortedListSortDescriptorListAST inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_setMSortedAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortedAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortedListSortDescriptorListAST::getter_mSortedAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mSortedAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortedListSortDescriptorListAST::setter_setMAscendingAtIndex (GALGAS_bool inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscending = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sortedListSortDescriptorListAST::getter_mAscendingAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sortedListSortDescriptorListAST::cEnumerator_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST_2D_element cEnumerator_sortedListSortDescriptorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sortedListSortDescriptorListAST::current_mSortedAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mSortedAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sortedListSortDescriptorListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mAscending ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListSortDescriptorListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ("sortedListSortDescriptorListAST",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListSortDescriptorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListSortDescriptorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListSortDescriptorListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListSortDescriptorListAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST result ;
  const GALGAS_sortedListSortDescriptorListAST * p = (const GALGAS_sortedListSortDescriptorListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListSortDescriptorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@sortDescriptorListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sortDescriptorListForGeneration : public cCollectionElement {
  public: GALGAS_sortDescriptorListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_sortDescriptorListForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mAttributeTypeIndex,
                                                              const GALGAS_string & in_mAttributeName,
                                                              const GALGAS_bool & in_mAscendingOrder
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sortDescriptorListForGeneration::cCollectionElement_sortDescriptorListForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mAttributeTypeIndex,
                                                                                                        const GALGAS_string & in_mAttributeName,
                                                                                                        const GALGAS_bool & in_mAscendingOrder
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeTypeIndex, in_mAttributeName, in_mAscendingOrder) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sortDescriptorListForGeneration::cCollectionElement_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeTypeIndex, inElement.mProperty_mAttributeName, inElement.mProperty_mAscendingOrder) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sortDescriptorListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sortDescriptorListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sortDescriptorListForGeneration (mObject.mProperty_mAttributeTypeIndex, mObject.mProperty_mAttributeName, mObject.mProperty_mAscendingOrder COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sortDescriptorListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeTypeIndex" ":" ;
  mObject.mProperty_mAttributeTypeIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAscendingOrder" ":" ;
  mObject.mProperty_mAscendingOrder.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sortDescriptorListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sortDescriptorListForGeneration * operand = (cCollectionElement_sortDescriptorListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sortDescriptorListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration::GALGAS_sortDescriptorListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration::GALGAS_sortDescriptorListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortDescriptorListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_bool & inOperand2
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sortDescriptorListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sortDescriptorListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mAttributeTypeIndex,
                                                                        const GALGAS_string & in_mAttributeName,
                                                                        const GALGAS_bool & in_mAscendingOrder
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (in_mAttributeTypeIndex,
                                                                     in_mAttributeName,
                                                                     in_mAscendingOrder COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::addAssign_operation (const GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_bool & inOperand2
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_append (GALGAS_sortDescriptorListForGeneration_2D_element inElement,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_entry inOperand0,
                                                                   const GALGAS_string inOperand1,
                                                                   const GALGAS_bool inOperand2,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   GALGAS_bool & outOperand2,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
        outOperand1 = p->mObject.mProperty_mAttributeName ;
        outOperand2 = p->mObject.mProperty_mAscendingOrder ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_popFirst (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_popLast (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::method_first (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_bool & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::method_last (GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_bool & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::add_operation (const GALGAS_sortDescriptorListForGeneration & inOperand,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortDescriptorListForGeneration result = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::plusAssign_operation (const GALGAS_sortDescriptorListForGeneration inOperand,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_setMAttributeTypeIndexAtIndex (GALGAS_unifiedTypeMap_2D_entry inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeTypeIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_sortDescriptorListForGeneration::getter_mAttributeTypeIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAttributeTypeIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_setMAttributeNameAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_sortDescriptorListForGeneration::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration::setter_setMAscendingOrderAtIndex (GALGAS_bool inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscendingOrder = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sortDescriptorListForGeneration::getter_mAscendingOrderAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAscendingOrder ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sortDescriptorListForGeneration::cEnumerator_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element cEnumerator_sortDescriptorListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_sortDescriptorListForGeneration::current_mAttributeTypeIndex (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeTypeIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_sortDescriptorListForGeneration::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sortDescriptorListForGeneration::current_mAscendingOrder (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAscendingOrder ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@sortDescriptorListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ("sortDescriptorListForGeneration",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortDescriptorListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortDescriptorListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortDescriptorListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortDescriptorListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration result ;
  const GALGAS_sortDescriptorListForGeneration * p = (const GALGAS_sortDescriptorListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortDescriptorListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@formalInputParameterListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_formalInputParameterListAST : public cCollectionElement {
  public: GALGAS_formalInputParameterListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formalInputParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                          const GALGAS_lstring & in_mFormalArgumentName,
                                                          const GALGAS_bool & in_mIsUnused,
                                                          const GALGAS_bool & in_mIsConstant
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalInputParameterListAST (const GALGAS_formalInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListAST::cCollectionElement_formalInputParameterListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                const GALGAS_bool & in_mIsUnused,
                                                                                                const GALGAS_bool & in_mIsConstant
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused, in_mIsConstant) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListAST::cCollectionElement_formalInputParameterListAST (const GALGAS_formalInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused, inElement.mProperty_mIsConstant) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formalInputParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalInputParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalInputParameterListAST (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused, mObject.mProperty_mIsConstant COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_formalInputParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsUnused" ":" ;
  mObject.mProperty_mIsUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formalInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalInputParameterListAST * operand = (cCollectionElement_formalInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST::GALGAS_formalInputParameterListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST::GALGAS_formalInputParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_bool & inOperand3,
                                                                                                  const GALGAS_bool & inOperand4
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                    const GALGAS_bool & in_mIsUnused,
                                                                    const GALGAS_bool & in_mIsConstant
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_formalInputParameterListAST (in_mFormalSelector,
                                                                 in_mFormalArgumentTypeName,
                                                                 in_mFormalArgumentName,
                                                                 in_mIsUnused,
                                                                 in_mIsConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_lstring & inOperand2,
                                                              const GALGAS_bool & inOperand3,
                                                              const GALGAS_bool & inOperand4
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_append (GALGAS_formalInputParameterListAST_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalInputParameterListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_lstring inOperand2,
                                                               const GALGAS_bool inOperand3,
                                                               const GALGAS_bool inOperand4,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
        outOperand3 = p->mObject.mProperty_mIsUnused ;
        outOperand4 = p->mObject.mProperty_mIsConstant ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_bool & outOperand3,
                                                          GALGAS_bool & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_bool & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       GALGAS_bool & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::add_operation (const GALGAS_formalInputParameterListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result = GALGAS_formalInputParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::plusAssign_operation (const GALGAS_formalInputParameterListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsUnused = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalInputParameterListAST::getter_mIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mIsUnused ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListAST::setter_setMIsConstantAtIndex (GALGAS_bool inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsConstant = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalInputParameterListAST::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListAST * p = (cCollectionElement_formalInputParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formalInputParameterListAST::cEnumerator_formalInputParameterListAST (const GALGAS_formalInputParameterListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST_2D_element cEnumerator_formalInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mIsUnused ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalInputParameterListAST::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListAST * p = (const cCollectionElement_formalInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListAST) ;
  return p->mObject.mProperty_mIsConstant ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@formalInputParameterListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListAST ("formalInputParameterListAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_formalInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST result ;
  const GALGAS_formalInputParameterListAST * p = (const GALGAS_formalInputParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@formalInputParameterListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_formalInputParameterListForGeneration : public cCollectionElement {
  public: GALGAS_formalInputParameterListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formalInputParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                    const GALGAS_string & in_mFormalArgumentCppName,
                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                    const GALGAS_bool & in_mIsConstant
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListForGeneration::cCollectionElement_formalInputParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                                                                    const GALGAS_string & in_mFormalArgumentCppName,
                                                                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                    const GALGAS_bool & in_mIsConstant
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentCppName, in_mFormalArgumentName, in_mIsConstant) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListForGeneration::cCollectionElement_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentCppName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsConstant) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formalInputParameterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalInputParameterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalInputParameterListForGeneration (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentCppName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsConstant COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_formalInputParameterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentCppName" ":" ;
  mObject.mProperty_mFormalArgumentCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formalInputParameterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalInputParameterListForGeneration * operand = (cCollectionElement_formalInputParameterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalInputParameterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration::GALGAS_formalInputParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration::GALGAS_formalInputParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                      const GALGAS_lstring & inOperand3,
                                                                                                                      const GALGAS_bool & inOperand4
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalInputParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_lstring & in_mFormalSelector,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                              const GALGAS_string & in_mFormalArgumentCppName,
                                                                              const GALGAS_lstring & in_mFormalArgumentName,
                                                                              const GALGAS_bool & in_mIsConstant
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (in_mFormalSelector,
                                                                           in_mFormalArgumentType,
                                                                           in_mFormalArgumentCppName,
                                                                           in_mFormalArgumentName,
                                                                           in_mIsConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_lstring & inOperand3,
                                                                        const GALGAS_bool & inOperand4
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_append (GALGAS_formalInputParameterListForGeneration_2D_element inElement,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_unifiedTypeMap_2D_entry inOperand1,
                                                                         const GALGAS_string inOperand2,
                                                                         const GALGAS_lstring inOperand3,
                                                                         const GALGAS_bool inOperand4,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                         GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         GALGAS_lstring & outOperand3,
                                                                         GALGAS_bool & outOperand4,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
        outOperand4 = p->mObject.mProperty_mIsConstant ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                    GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_popLast (GALGAS_lstring & outOperand0,
                                                                   GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_lstring & outOperand3,
                                                                   GALGAS_bool & outOperand4,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::method_first (GALGAS_lstring & outOperand0,
                                                                 GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 GALGAS_bool & outOperand4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::method_last (GALGAS_lstring & outOperand0,
                                                                GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                GALGAS_string & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_bool & outOperand4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::add_operation (const GALGAS_formalInputParameterListForGeneration & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::plusAssign_operation (const GALGAS_formalInputParameterListForGeneration inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMap_2D_entry inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalArgumentCppNameAtIndex (GALGAS_string inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentCppName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalInputParameterListForGeneration::setter_setMIsConstantAtIndex (GALGAS_bool inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsConstant = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalInputParameterListForGeneration::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formalInputParameterListForGeneration::cEnumerator_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration_2D_element cEnumerator_formalInputParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalInputParameterListForGeneration::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mIsConstant ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@formalInputParameterListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ("formalInputParameterListForGeneration",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration result ;
  const GALGAS_formalInputParameterListForGeneration * p = (const GALGAS_formalInputParameterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@formalParameterListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_formalParameterListForGeneration : public cCollectionElement {
  public: GALGAS_formalParameterListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formalParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                               const GALGAS_string & in_mFormalArgumentCppName
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListForGeneration::cCollectionElement_formalParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                                                          const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                                                          const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                          const GALGAS_string & in_mFormalArgumentCppName
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentType, in_mFormalArgumentName, in_mFormalArgumentCppName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListForGeneration::cCollectionElement_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mFormalArgumentCppName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalParameterListForGeneration (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mFormalArgumentCppName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_formalParameterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentCppName" ":" ;
  mObject.mProperty_mFormalArgumentCppName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formalParameterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterListForGeneration * operand = (cCollectionElement_formalParameterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration::GALGAS_formalParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration::GALGAS_formalParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalParameterListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                            const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                                            const GALGAS_lstring & inOperand3,
                                                                                                            const GALGAS_string & inOperand4
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mFormalSelector,
                                                                         const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                         const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                         const GALGAS_lstring & in_mFormalArgumentName,
                                                                         const GALGAS_string & in_mFormalArgumentCppName
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_formalParameterListForGeneration (in_mFormalSelector,
                                                                      in_mFormalArgumentPassingMode,
                                                                      in_mFormalArgumentType,
                                                                      in_mFormalArgumentName,
                                                                      in_mFormalArgumentCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                   const GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                   const GALGAS_lstring & inOperand3,
                                                                   const GALGAS_string & inOperand4
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_append (GALGAS_formalParameterListForGeneration_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                                    const GALGAS_unifiedTypeMap_2D_entry inOperand2,
                                                                    const GALGAS_lstring inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                                    GALGAS_unifiedTypeMap_2D_entry & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
        outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                               GALGAS_unifiedTypeMap_2D_entry & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                              GALGAS_unifiedTypeMap_2D_entry & outOperand2,
                                                              GALGAS_lstring & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                            GALGAS_unifiedTypeMap_2D_entry & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                           GALGAS_unifiedTypeMap_2D_entry & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           GALGAS_string & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::add_operation (const GALGAS_formalParameterListForGeneration & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::plusAssign_operation (const GALGAS_formalParameterListForGeneration inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListForGeneration::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_formalArgumentPassingModeAST inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListForGeneration::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMap_2D_entry inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_formalParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalParameterListForGeneration::setter_setMFormalArgumentCppNameAtIndex (GALGAS_string inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentCppName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_formalParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentCppName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formalParameterListForGeneration::cEnumerator_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration_2D_element cEnumerator_formalParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListForGeneration::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_formalParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_formalParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@formalParameterListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListForGeneration ("formalParameterListForGeneration",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration result ;
  const GALGAS_formalParameterListForGeneration * p = (const GALGAS_formalParameterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticInstructionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_semanticInstructionListAST : public cCollectionElement {
  public: GALGAS_semanticInstructionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionAST & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListAST::cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionAST & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListAST::cCollectionElement_semanticInstructionListAST (const GALGAS_semanticInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_semanticInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_semanticInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticInstructionListAST * operand = (cCollectionElement_semanticInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST::GALGAS_semanticInstructionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST::GALGAS_semanticInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::constructor_listWithValue (const GALGAS_semanticInstructionAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_semanticInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_semanticInstructionAST & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::addAssign_operation (const GALGAS_semanticInstructionAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_append (GALGAS_semanticInstructionListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticInstructionListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_insertAtIndex (const GALGAS_semanticInstructionAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_removeAtIndex (GALGAS_semanticInstructionAST & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_popFirst (GALGAS_semanticInstructionAST & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_popLast (GALGAS_semanticInstructionAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::method_first (GALGAS_semanticInstructionAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::method_last (GALGAS_semanticInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::add_operation (const GALGAS_semanticInstructionListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result = GALGAS_semanticInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::plusAssign_operation (const GALGAS_semanticInstructionListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST::setter_setMInstructionAtIndex (GALGAS_semanticInstructionAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST GALGAS_semanticInstructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  GALGAS_semanticInstructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_semanticInstructionListAST::cEnumerator_semanticInstructionListAST (const GALGAS_semanticInstructionListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element cEnumerator_semanticInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST cEnumerator_semanticInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@semanticInstructionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListAST ("semanticInstructionListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_semanticInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST result ;
  const GALGAS_semanticInstructionListAST * p = (const GALGAS_semanticInstructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticInstructionListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_semanticInstructionListForGeneration : public cCollectionElement {
  public: GALGAS_semanticInstructionListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListForGeneration::cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListForGeneration::cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticInstructionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_semanticInstructionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_semanticInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticInstructionListForGeneration * operand = (cCollectionElement_semanticInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration::GALGAS_semanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration::GALGAS_semanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticInstructionListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::constructor_listWithValue (const GALGAS_semanticInstructionForGeneration & inOperand0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_semanticInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::addAssign_operation (const GALGAS_semanticInstructionForGeneration & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_append (GALGAS_semanticInstructionListForGeneration_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_insertAtIndex (const GALGAS_semanticInstructionForGeneration inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_removeAtIndex (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_popFirst (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_popLast (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::method_first (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::method_last (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::add_operation (const GALGAS_semanticInstructionListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::plusAssign_operation (const GALGAS_semanticInstructionListForGeneration inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration::setter_setMInstructionAtIndex (GALGAS_semanticInstructionForGeneration inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionListForGeneration::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_semanticInstructionListForGeneration::cEnumerator_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element cEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration cEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@semanticInstructionListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ("semanticInstructionListForGeneration",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result ;
  const GALGAS_semanticInstructionListForGeneration * p = (const GALGAS_semanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticExpressionAST::objectCompare (const GALGAS_semanticExpressionAST & inOperand) const {
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

GALGAS_semanticExpressionAST::GALGAS_semanticExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST::GALGAS_semanticExpressionAST (const cPtr_semanticExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticExpressionAST::cPtr_semanticExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionAST ("semanticExpressionAST",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_semanticExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionAST result ;
  const GALGAS_semanticExpressionAST * p = (const GALGAS_semanticExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticExpressionAST_2D_weak::objectCompare (const GALGAS_semanticExpressionAST_2D_weak & inOperand) const {
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

GALGAS_semanticExpressionAST_2D_weak::GALGAS_semanticExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak & GALGAS_semanticExpressionAST_2D_weak::operator = (const GALGAS_semanticExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak::GALGAS_semanticExpressionAST_2D_weak (const GALGAS_semanticExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak GALGAS_semanticExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_semanticExpressionAST_2D_weak::bang_semanticExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionAST) ;
      result = GALGAS_semanticExpressionAST ((cPtr_semanticExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak ("semanticExpressionAST-weak",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak GALGAS_semanticExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionAST_2D_weak result ;
  const GALGAS_semanticExpressionAST_2D_weak * p = (const GALGAS_semanticExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticExpressionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_semanticExpressionListAST : public cCollectionElement {
  public: GALGAS_semanticExpressionListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_semanticExpressionListAST (const GALGAS_semanticExpressionAST & in_mExpression,
                                                        const GALGAS_location & in_mEndOfExpressionLocation
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticExpressionListAST (const GALGAS_semanticExpressionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticExpressionListAST::cCollectionElement_semanticExpressionListAST (const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                            const GALGAS_location & in_mEndOfExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticExpressionListAST::cCollectionElement_semanticExpressionListAST (const GALGAS_semanticExpressionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticExpressionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticExpressionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticExpressionListAST (mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_semanticExpressionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpressionLocation" ":" ;
  mObject.mProperty_mEndOfExpressionLocation.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_semanticExpressionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticExpressionListAST * operand = (cCollectionElement_semanticExpressionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticExpressionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST::GALGAS_semanticExpressionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST::GALGAS_semanticExpressionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticExpressionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::constructor_listWithValue (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                              const GALGAS_location & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticExpressionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_semanticExpressionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_semanticExpressionAST & in_mExpression,
                                                                  const GALGAS_location & in_mEndOfExpressionLocation
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticExpressionListAST (in_mExpression,
                                                               in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::addAssign_operation (const GALGAS_semanticExpressionAST & inOperand0,
                                                            const GALGAS_location & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticExpressionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::setter_append (GALGAS_semanticExpressionListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticExpressionListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::setter_insertAtIndex (const GALGAS_semanticExpressionAST inOperand0,
                                                             const GALGAS_location inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticExpressionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::setter_removeAtIndex (GALGAS_semanticExpressionAST & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
        outOperand1 = p->mObject.mProperty_mEndOfExpressionLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::setter_popFirst (GALGAS_semanticExpressionAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::setter_popLast (GALGAS_semanticExpressionAST & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::method_first (GALGAS_semanticExpressionAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::method_last (GALGAS_semanticExpressionAST & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::add_operation (const GALGAS_semanticExpressionListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result = GALGAS_semanticExpressionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result = GALGAS_semanticExpressionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListAST result = GALGAS_semanticExpressionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::plusAssign_operation (const GALGAS_semanticExpressionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::setter_setMExpressionAtIndex (GALGAS_semanticExpressionAST inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_semanticExpressionListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
  GALGAS_semanticExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListAST::setter_setMEndOfExpressionLocationAtIndex (GALGAS_location inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpressionLocation = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_semanticExpressionListAST::getter_mEndOfExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListAST * p = (cCollectionElement_semanticExpressionListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
    result = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_semanticExpressionListAST::cEnumerator_semanticExpressionListAST (const GALGAS_semanticExpressionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST_2D_element cEnumerator_semanticExpressionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListAST * p = (const cCollectionElement_semanticExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cEnumerator_semanticExpressionListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListAST * p = (const cCollectionElement_semanticExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_semanticExpressionListAST::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListAST * p = (const cCollectionElement_semanticExpressionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListAST) ;
  return p->mObject.mProperty_mEndOfExpressionLocation ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListAST ("semanticExpressionListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListAST GALGAS_semanticExpressionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST result ;
  const GALGAS_semanticExpressionListAST * p = (const GALGAS_semanticExpressionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST::GALGAS_formalArgumentPassingModeAST (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentIn ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentOut ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentInOut ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentConstantIn ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentIn () const {
  const bool ok = mEnum == kEnum_argumentIn ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentOut () const {
  const bool ok = mEnum == kEnum_argumentOut ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentInOut () const {
  const bool ok = mEnum == kEnum_argumentInOut ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentConstantIn () const {
  const bool ok = mEnum == kEnum_argumentConstantIn ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_formalArgumentPassingModeAST [5] = {
  "(not built)",
  "argumentIn",
  "argumentOut",
  "argumentInOut",
  "argumentConstantIn"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentIn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentIn == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentOut (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentOut == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentInOut (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentInOut == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentConstantIn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentConstantIn == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalArgumentPassingModeAST::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @formalArgumentPassingModeAST: " << gEnumNameArrayFor_formalArgumentPassingModeAST [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formalArgumentPassingModeAST::objectCompare (const GALGAS_formalArgumentPassingModeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formalArgumentPassingModeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ("formalArgumentPassingModeAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  const GALGAS_formalArgumentPassingModeAST * p = (const GALGAS_formalArgumentPassingModeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalArgumentPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalArgumentPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST string'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_formalArgumentPassingModeAST & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_result = GALGAS_string ("\?\?") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST formalArgumentMessage'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_formalArgumentMessage (const GALGAS_formalArgumentPassingModeAST & inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_result = GALGAS_string ("a constant input (\?\?) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_result = GALGAS_string ("an input (\?) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_result = GALGAS_string ("an output (!) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_result = GALGAS_string ("an input/output (\?!) formal argument") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST formalArgumentString'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_formalArgumentString (const GALGAS_formalArgumentPassingModeAST & inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_result = GALGAS_string ("'\?\?'") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_result = GALGAS_string ("'\?'") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_result = GALGAS_string ("'!'") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_result = GALGAS_string ("'\?!'") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_actualParameterAST::objectCompare (const GALGAS_actualParameterAST & inOperand) const {
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

GALGAS_actualParameterAST::GALGAS_actualParameterAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST::GALGAS_actualParameterAST (const cPtr_actualParameterAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_actualParameterAST::cPtr_actualParameterAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterAST ("actualParameterAST",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST GALGAS_actualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterAST result ;
  const GALGAS_actualParameterAST * p = (const GALGAS_actualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualParameterAST_2D_weak::objectCompare (const GALGAS_actualParameterAST_2D_weak & inOperand) const {
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

GALGAS_actualParameterAST_2D_weak::GALGAS_actualParameterAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak & GALGAS_actualParameterAST_2D_weak::operator = (const GALGAS_actualParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak::GALGAS_actualParameterAST_2D_weak (const GALGAS_actualParameterAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak GALGAS_actualParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_actualParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST GALGAS_actualParameterAST_2D_weak::bang_actualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterAST) ;
      result = GALGAS_actualParameterAST ((cPtr_actualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterAST_2D_weak ("actualParameterAST-weak",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak GALGAS_actualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterAST_2D_weak result ;
  const GALGAS_actualParameterAST_2D_weak * p = (const GALGAS_actualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputInputJokerParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputJokerParameterAST * p = (const cPtr_outputInputJokerParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mQualifierLocation.objectCompare (p->mProperty_mQualifierLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mJokerIndex.objectCompare (p->mProperty_mJokerIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputInputJokerParameterAST::objectCompare (const GALGAS_outputInputJokerParameterAST & inOperand) const {
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

GALGAS_outputInputJokerParameterAST::GALGAS_outputInputJokerParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputJokerParameterAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_uint::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST::GALGAS_outputInputJokerParameterAST (const cPtr_outputInputJokerParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputJokerParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::constructor_new (const GALGAS_location & inAttribute_mQualifierLocation,
                                                                                          const GALGAS_uint & inAttribute_mJokerIndex
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST result ;
  if (inAttribute_mQualifierLocation.isValid () && inAttribute_mJokerIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputJokerParameterAST (inAttribute_mQualifierLocation, inAttribute_mJokerIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_outputInputJokerParameterAST::getter_mQualifierLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputJokerParameterAST * p = (const cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    result = p->mProperty_mQualifierLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_outputInputJokerParameterAST::getter_mJokerIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputJokerParameterAST * p = (const cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    result = p->mProperty_mJokerIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputJokerParameterAST::setter_setMQualifierLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    p->mProperty_mQualifierLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputJokerParameterAST::setter_setMJokerIndex (GALGAS_uint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    p->mProperty_mJokerIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputInputJokerParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (const GALGAS_location & in_mQualifierLocation,
                                                                      const GALGAS_uint & in_mJokerIndex
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mQualifierLocation (in_mQualifierLocation),
mProperty_mJokerIndex (in_mJokerIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

void cPtr_outputInputJokerParameterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@outputInputJokerParameterAST:" ;
  mProperty_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputJokerParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputJokerParameterAST (mProperty_mQualifierLocation, mProperty_mJokerIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputJokerParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputJokerParameterAST ("outputInputJokerParameterAST",
                                                     & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputJokerParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST result ;
  const GALGAS_outputInputJokerParameterAST * p = (const GALGAS_outputInputJokerParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outputInputJokerParameterAST_2D_weak::objectCompare (const GALGAS_outputInputJokerParameterAST_2D_weak & inOperand) const {
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

GALGAS_outputInputJokerParameterAST_2D_weak::GALGAS_outputInputJokerParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak & GALGAS_outputInputJokerParameterAST_2D_weak::operator = (const GALGAS_outputInputJokerParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak::GALGAS_outputInputJokerParameterAST_2D_weak (const GALGAS_outputInputJokerParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak GALGAS_outputInputJokerParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST_2D_weak::bang_outputInputJokerParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputJokerParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputJokerParameterAST) ;
      result = GALGAS_outputInputJokerParameterAST ((cPtr_outputInputJokerParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputJokerParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2D_weak ("outputInputJokerParameterAST-weak",
                                                             & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputJokerParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputJokerParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputJokerParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak GALGAS_outputInputJokerParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST_2D_weak result ;
  const GALGAS_outputInputJokerParameterAST_2D_weak * p = (const GALGAS_outputInputJokerParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputJokerParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputJokerActualParameterAST * p = (const cPtr_inputJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mQualifierLocation.objectCompare (p->mProperty_mQualifierLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mJokerIndex.objectCompare (p->mProperty_mJokerIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputJokerActualParameterAST::objectCompare (const GALGAS_inputJokerActualParameterAST & inOperand) const {
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

GALGAS_inputJokerActualParameterAST::GALGAS_inputJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputJokerActualParameterAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_uint::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST::GALGAS_inputJokerActualParameterAST (const cPtr_inputJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerActualParameterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::constructor_new (const GALGAS_location & inAttribute_mQualifierLocation,
                                                                                          const GALGAS_uint & inAttribute_mJokerIndex
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST result ;
  if (inAttribute_mQualifierLocation.isValid () && inAttribute_mJokerIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputJokerActualParameterAST (inAttribute_mQualifierLocation, inAttribute_mJokerIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_inputJokerActualParameterAST::getter_mQualifierLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputJokerActualParameterAST * p = (const cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    result = p->mProperty_mQualifierLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_inputJokerActualParameterAST::getter_mJokerIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputJokerActualParameterAST * p = (const cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    result = p->mProperty_mJokerIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputJokerActualParameterAST::setter_setMQualifierLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    p->mProperty_mQualifierLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_inputJokerActualParameterAST::setter_setMJokerIndex (GALGAS_uint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    p->mProperty_mJokerIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerActualParameterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                                                      const GALGAS_uint & in_mJokerIndex
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mQualifierLocation (in_mQualifierLocation),
mProperty_mJokerIndex (in_mJokerIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

void cPtr_inputJokerActualParameterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@inputJokerActualParameterAST:" ;
  mProperty_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputJokerActualParameterAST (mProperty_mQualifierLocation, mProperty_mJokerIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputJokerActualParameterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputJokerActualParameterAST ("inputJokerActualParameterAST",
                                                     & kTypeDescriptor_GALGAS_actualParameterAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST result ;
  const GALGAS_inputJokerActualParameterAST * p = (const GALGAS_inputJokerActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_inputJokerActualParameterAST_2D_weak::objectCompare (const GALGAS_inputJokerActualParameterAST_2D_weak & inOperand) const {
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

GALGAS_inputJokerActualParameterAST_2D_weak::GALGAS_inputJokerActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak & GALGAS_inputJokerActualParameterAST_2D_weak::operator = (const GALGAS_inputJokerActualParameterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak::GALGAS_inputJokerActualParameterAST_2D_weak (const GALGAS_inputJokerActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak GALGAS_inputJokerActualParameterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST_2D_weak::bang_inputJokerActualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputJokerActualParameterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputJokerActualParameterAST) ;
      result = GALGAS_inputJokerActualParameterAST ((cPtr_inputJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputJokerActualParameterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2D_weak ("inputJokerActualParameterAST-weak",
                                                             & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputJokerActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputJokerActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak GALGAS_inputJokerActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST_2D_weak result ;
  const GALGAS_inputJokerActualParameterAST_2D_weak * p = (const GALGAS_inputJokerActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputJokerActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@actualParameterListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_actualParameterListAST : public cCollectionElement {
  public: GALGAS_actualParameterListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_actualParameterListAST (const GALGAS_actualParameterAST & in_mActualParameter
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualParameterListAST (const GALGAS_actualParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListAST::cCollectionElement_actualParameterListAST (const GALGAS_actualParameterAST & in_mActualParameter
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualParameter) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListAST::cCollectionElement_actualParameterListAST (const GALGAS_actualParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualParameter) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_actualParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actualParameterListAST (mObject.mProperty_mActualParameter COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_actualParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualParameter" ":" ;
  mObject.mProperty_mActualParameter.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_actualParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualParameterListAST * operand = (cCollectionElement_actualParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST::GALGAS_actualParameterListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST::GALGAS_actualParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualParameterListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::constructor_listWithValue (const GALGAS_actualParameterAST & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actualParameterListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_actualParameterAST & in_mActualParameter
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_actualParameterListAST (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::addAssign_operation (const GALGAS_actualParameterAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_append (GALGAS_actualParameterListAST_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualParameterListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_insertAtIndex (const GALGAS_actualParameterAST inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_removeAtIndex (GALGAS_actualParameterAST & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mActualParameter ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_popFirst (GALGAS_actualParameterAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_popLast (GALGAS_actualParameterAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::method_first (GALGAS_actualParameterAST & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::method_last (GALGAS_actualParameterAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::add_operation (const GALGAS_actualParameterListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::plusAssign_operation (const GALGAS_actualParameterListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_setMActualParameterAtIndex (GALGAS_actualParameterAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameter = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST GALGAS_actualParameterListAST::getter_mActualParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  GALGAS_actualParameterAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    result = p->mObject.mProperty_mActualParameter ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_actualParameterListAST::cEnumerator_actualParameterListAST (const GALGAS_actualParameterListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element cEnumerator_actualParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST cEnumerator_actualParameterListAST::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject.mProperty_mActualParameter ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListAST ("actualParameterListAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST result ;
  const GALGAS_actualParameterListAST * p = (const GALGAS_actualParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractInputParameter::objectCompare (const GALGAS_abstractInputParameter & inOperand) const {
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

GALGAS_abstractInputParameter::GALGAS_abstractInputParameter (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter::GALGAS_abstractInputParameter (const cPtr_abstractInputParameter * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInputParameter) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractInputParameter class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractInputParameter::cPtr_abstractInputParameter (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractInputParameter type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractInputParameter ("abstractInputParameter",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractInputParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractInputParameter::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInputParameter (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter GALGAS_abstractInputParameter::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractInputParameter result ;
  const GALGAS_abstractInputParameter * p = (const GALGAS_abstractInputParameter *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractInputParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInputParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractInputParameter_2D_weak::objectCompare (const GALGAS_abstractInputParameter_2D_weak & inOperand) const {
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

GALGAS_abstractInputParameter_2D_weak::GALGAS_abstractInputParameter_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak & GALGAS_abstractInputParameter_2D_weak::operator = (const GALGAS_abstractInputParameter & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak::GALGAS_abstractInputParameter_2D_weak (const GALGAS_abstractInputParameter & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak GALGAS_abstractInputParameter_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractInputParameter_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter GALGAS_abstractInputParameter_2D_weak::bang_abstractInputParameter_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractInputParameter result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractInputParameter) ;
      result = GALGAS_abstractInputParameter ((cPtr_abstractInputParameter *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractInputParameter-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak ("abstractInputParameter-weak",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractInputParameter_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractInputParameter_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInputParameter_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak GALGAS_abstractInputParameter_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractInputParameter_2D_weak result ;
  const GALGAS_abstractInputParameter_2D_weak * p = (const GALGAS_abstractInputParameter_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractInputParameter_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInputParameter-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inputParameterAnonymousVariable::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inputParameterAnonymousVariable::objectCompare (const GALGAS_inputParameterAnonymousVariable & inOperand) const {
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

GALGAS_inputParameterAnonymousVariable::GALGAS_inputParameterAnonymousVariable (void) :
GALGAS_abstractInputParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterAnonymousVariable::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable::GALGAS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterAnonymousVariable) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::constructor_new (LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterAnonymousVariable (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterAnonymousVariable class
//----------------------------------------------------------------------------------------------------------------------

cPtr_inputParameterAnonymousVariable::cPtr_inputParameterAnonymousVariable (LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterAnonymousVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

void cPtr_inputParameterAnonymousVariable::description (C_String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString << "[@inputParameterAnonymousVariable]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterAnonymousVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterAnonymousVariable (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterAnonymousVariable type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ("inputParameterAnonymousVariable",
                                                        & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterAnonymousVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterAnonymousVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterAnonymousVariable (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable result ;
  const GALGAS_inputParameterAnonymousVariable * p = (const GALGAS_inputParameterAnonymousVariable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterAnonymousVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterAnonymousVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_inputParameterAnonymousVariable_2D_weak::objectCompare (const GALGAS_inputParameterAnonymousVariable_2D_weak & inOperand) const {
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

GALGAS_inputParameterAnonymousVariable_2D_weak::GALGAS_inputParameterAnonymousVariable_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak & GALGAS_inputParameterAnonymousVariable_2D_weak::operator = (const GALGAS_inputParameterAnonymousVariable & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak::GALGAS_inputParameterAnonymousVariable_2D_weak (const GALGAS_inputParameterAnonymousVariable & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak GALGAS_inputParameterAnonymousVariable_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable_2D_weak::bang_inputParameterAnonymousVariable_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterAnonymousVariable result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterAnonymousVariable) ;
      result = GALGAS_inputParameterAnonymousVariable ((cPtr_inputParameterAnonymousVariable *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@inputParameterAnonymousVariable-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2D_weak ("inputParameterAnonymousVariable-weak",
                                                                & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterAnonymousVariable_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterAnonymousVariable_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterAnonymousVariable_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak GALGAS_inputParameterAnonymousVariable_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable_2D_weak result ;
  const GALGAS_inputParameterAnonymousVariable_2D_weak * p = (const GALGAS_inputParameterAnonymousVariable_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterAnonymousVariable_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterAnonymousVariable-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@actualInputParameterListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_actualInputParameterListAST : public cCollectionElement {
  public: GALGAS_actualInputParameterListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_actualInputParameterListAST (const GALGAS_lstring & in_mActualSelector,
                                                          const GALGAS_abstractInputParameter & in_mInputParameter
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualInputParameterListAST (const GALGAS_actualInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_actualInputParameterListAST::cCollectionElement_actualInputParameterListAST (const GALGAS_lstring & in_mActualSelector,
                                                                                                const GALGAS_abstractInputParameter & in_mInputParameter
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mInputParameter) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_actualInputParameterListAST::cCollectionElement_actualInputParameterListAST (const GALGAS_actualInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mInputParameter) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_actualInputParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualInputParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actualInputParameterListAST (mObject.mProperty_mActualSelector, mObject.mProperty_mInputParameter COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_actualInputParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualSelector" ":" ;
  mObject.mProperty_mActualSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputParameter" ":" ;
  mObject.mProperty_mInputParameter.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_actualInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualInputParameterListAST * operand = (cCollectionElement_actualInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST::GALGAS_actualInputParameterListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST::GALGAS_actualInputParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualInputParameterListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_abstractInputParameter & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actualInputParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actualInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mActualSelector,
                                                                    const GALGAS_abstractInputParameter & in_mInputParameter
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_actualInputParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_actualInputParameterListAST (in_mActualSelector,
                                                                 in_mInputParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_abstractInputParameter & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualInputParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_append (GALGAS_actualInputParameterListAST_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualInputParameterListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_abstractInputParameter inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_actualInputParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_abstractInputParameter & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mActualSelector ;
        outOperand1 = p->mObject.mProperty_mInputParameter ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_abstractInputParameter & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_abstractInputParameter & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_abstractInputParameter & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_abstractInputParameter & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::add_operation (const GALGAS_actualInputParameterListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::plusAssign_operation (const GALGAS_actualInputParameterListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_setMActualSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_actualInputParameterListAST::getter_mActualSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    result = p->mObject.mProperty_mActualSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_setMInputParameterAtIndex (GALGAS_abstractInputParameter inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputParameter = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter GALGAS_actualInputParameterListAST::getter_mInputParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  GALGAS_abstractInputParameter result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    result = p->mObject.mProperty_mInputParameter ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_actualInputParameterListAST::cEnumerator_actualInputParameterListAST (const GALGAS_actualInputParameterListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST_2D_element cEnumerator_actualInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_actualInputParameterListAST::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject.mProperty_mActualSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter cEnumerator_actualInputParameterListAST::current_mInputParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject.mProperty_mInputParameter ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@actualInputParameterListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualInputParameterListAST ("actualInputParameterListAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualInputParameterListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST result ;
  const GALGAS_actualInputParameterListAST * p = (const GALGAS_actualInputParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_syntaxInstructionAST::objectCompare (const GALGAS_syntaxInstructionAST & inOperand) const {
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

GALGAS_syntaxInstructionAST::GALGAS_syntaxInstructionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST::GALGAS_syntaxInstructionAST (const cPtr_syntaxInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syntaxInstructionAST::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxInstructionAST * p = (const cPtr_syntaxInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionAST) ;
    result = p->mProperty_mInstructionLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionAST::setter_setMInstructionLocation (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_syntaxInstructionAST * p = (cPtr_syntaxInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionAST) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionAST::cPtr_syntaxInstructionAST (const GALGAS_location & in_mInstructionLocation
                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionAST ("syntaxInstructionAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionAST result ;
  const GALGAS_syntaxInstructionAST * p = (const GALGAS_syntaxInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxInstructionAST_2D_weak::objectCompare (const GALGAS_syntaxInstructionAST_2D_weak & inOperand) const {
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

GALGAS_syntaxInstructionAST_2D_weak::GALGAS_syntaxInstructionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak & GALGAS_syntaxInstructionAST_2D_weak::operator = (const GALGAS_syntaxInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak::GALGAS_syntaxInstructionAST_2D_weak (const GALGAS_syntaxInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak GALGAS_syntaxInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_syntaxInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionAST_2D_weak::bang_syntaxInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionAST) ;
      result = GALGAS_syntaxInstructionAST ((cPtr_syntaxInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak ("syntaxInstructionAST-weak",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak GALGAS_syntaxInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionAST_2D_weak result ;
  const GALGAS_syntaxInstructionAST_2D_weak * p = (const GALGAS_syntaxInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticInstructionAST::objectCompare (const GALGAS_semanticInstructionAST & inOperand) const {
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

GALGAS_semanticInstructionAST::GALGAS_semanticInstructionAST (void) :
GALGAS_syntaxInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST::GALGAS_semanticInstructionAST (const cPtr_semanticInstructionAST * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticInstructionAST::cPtr_semanticInstructionAST (const GALGAS_location & in_mInstructionLocation
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionAST ("semanticInstructionAST",
                                               & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST GALGAS_semanticInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionAST result ;
  const GALGAS_semanticInstructionAST * p = (const GALGAS_semanticInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticInstructionAST_2D_weak::objectCompare (const GALGAS_semanticInstructionAST_2D_weak & inOperand) const {
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

GALGAS_semanticInstructionAST_2D_weak::GALGAS_semanticInstructionAST_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak & GALGAS_semanticInstructionAST_2D_weak::operator = (const GALGAS_semanticInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak::GALGAS_semanticInstructionAST_2D_weak (const GALGAS_semanticInstructionAST & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak GALGAS_semanticInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST GALGAS_semanticInstructionAST_2D_weak::bang_semanticInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticInstructionAST) ;
      result = GALGAS_semanticInstructionAST ((cPtr_semanticInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak ("semanticInstructionAST-weak",
                                                       & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak GALGAS_semanticInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionAST_2D_weak result ;
  const GALGAS_semanticInstructionAST_2D_weak * p = (const GALGAS_semanticInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_semanticDeclarationListAST : public cCollectionElement {
  public: GALGAS_semanticDeclarationListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListAST::cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSemanticDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListAST::cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSemanticDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticDeclarationListAST (mObject.mProperty_mSemanticDeclaration COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_semanticDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSemanticDeclaration" ":" ;
  mObject.mProperty_mSemanticDeclaration.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_semanticDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticDeclarationListAST * operand = (cCollectionElement_semanticDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST::GALGAS_semanticDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST::GALGAS_semanticDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::constructor_listWithValue (const GALGAS_semanticDeclarationAST & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListAST (in_mSemanticDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::addAssign_operation (const GALGAS_semanticDeclarationAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_append (GALGAS_semanticDeclarationListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_insertAtIndex (const GALGAS_semanticDeclarationAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_removeAtIndex (GALGAS_semanticDeclarationAST & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_popFirst (GALGAS_semanticDeclarationAST & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_popLast (GALGAS_semanticDeclarationAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::method_first (GALGAS_semanticDeclarationAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::method_last (GALGAS_semanticDeclarationAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::add_operation (const GALGAS_semanticDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::plusAssign_operation (const GALGAS_semanticDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_setMSemanticDeclarationAtIndex (GALGAS_semanticDeclarationAST inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSemanticDeclaration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationListAST::getter_mSemanticDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  GALGAS_semanticDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    result = p->mObject.mProperty_mSemanticDeclaration ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_semanticDeclarationListAST::cEnumerator_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element cEnumerator_semanticDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListAST * p = (const cCollectionElement_semanticDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST cEnumerator_semanticDeclarationListAST::current_mSemanticDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListAST * p = (const cCollectionElement_semanticDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
  return p->mObject.mProperty_mSemanticDeclaration ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationListAST ("semanticDeclarationListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST result ;
  const GALGAS_semanticDeclarationListAST * p = (const GALGAS_semanticDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@formalTemplateInputParameterListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_formalTemplateInputParameterListAST : public cCollectionElement {
  public: GALGAS_formalTemplateInputParameterListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                  const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                  const GALGAS_lstring & in_mFormalArgumentName,
                                                                  const GALGAS_bool & in_mIsUnused
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalTemplateInputParameterListAST::cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                                                                const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                                const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                const GALGAS_bool & in_mIsUnused
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalTemplateSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formalTemplateInputParameterListAST::cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalTemplateSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formalTemplateInputParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalTemplateInputParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalTemplateInputParameterListAST (mObject.mProperty_mFormalTemplateSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_formalTemplateInputParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalTemplateSelector" ":" ;
  mObject.mProperty_mFormalTemplateSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsUnused" ":" ;
  mObject.mProperty_mIsUnused.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formalTemplateInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalTemplateInputParameterListAST * operand = (cCollectionElement_formalTemplateInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalTemplateInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST::GALGAS_formalTemplateInputParameterListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST::GALGAS_formalTemplateInputParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalTemplateInputParameterListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                                  const GALGAS_bool & inOperand3
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_formalTemplateInputParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalTemplateInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                            const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                            const GALGAS_lstring & in_mFormalArgumentName,
                                                                            const GALGAS_bool & in_mIsUnused
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (in_mFormalTemplateSelector,
                                                                         in_mFormalArgumentTypeName,
                                                                         in_mFormalArgumentName,
                                                                         in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_bool & inOperand3
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_append (GALGAS_formalTemplateInputParameterListAST_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_lstring inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_bool inOperand3,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       GALGAS_bool & outOperand3,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
        outOperand3 = p->mObject.mProperty_mIsUnused ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  GALGAS_bool & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_bool & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::add_operation (const GALGAS_formalTemplateInputParameterListAST & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::plusAssign_operation (const GALGAS_formalTemplateInputParameterListAST inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMFormalTemplateSelectorAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalTemplateSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::getter_mFormalTemplateSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalTemplateSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsUnused = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalTemplateInputParameterListAST::getter_mIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mIsUnused ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formalTemplateInputParameterListAST::cEnumerator_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element cEnumerator_formalTemplateInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalTemplateSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mFormalTemplateSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalTemplateInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mIsUnused ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@formalTemplateInputParameterListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ("formalTemplateInputParameterListAST",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalTemplateInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalTemplateInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalTemplateInputParameterListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST result ;
  const GALGAS_formalTemplateInputParameterListAST * p = (const GALGAS_formalTemplateInputParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalTemplateInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@filewrapperTemplateListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_filewrapperTemplateListAST : public cCollectionElement {
  public: GALGAS_filewrapperTemplateListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_filewrapperTemplateListAST (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                         const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                         const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListAST::cCollectionElement_filewrapperTemplateListAST (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                              const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                                                              const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplatePath, in_mFilewrapperTemplateFormalInputParameters) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListAST::cCollectionElement_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplatePath, inElement.mProperty_mFilewrapperTemplateFormalInputParameters) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_filewrapperTemplateListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_filewrapperTemplateListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListAST (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplatePath, mObject.mProperty_mFilewrapperTemplateFormalInputParameters COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_filewrapperTemplateListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateName" ":" ;
  mObject.mProperty_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplatePath" ":" ;
  mObject.mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateFormalInputParameters" ":" ;
  mObject.mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_filewrapperTemplateListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_filewrapperTemplateListAST * operand = (cCollectionElement_filewrapperTemplateListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_filewrapperTemplateListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST::GALGAS_filewrapperTemplateListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST::GALGAS_filewrapperTemplateListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_filewrapperTemplateListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                   const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                                   const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (in_mFilewrapperTemplateName,
                                                                in_mFilewrapperTemplatePath,
                                                                in_mFilewrapperTemplateFormalInputParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_append (GALGAS_filewrapperTemplateListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_formalTemplateInputParameterListAST inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
        outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
        outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
        outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::add_operation (const GALGAS_filewrapperTemplateListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::plusAssign_operation (const GALGAS_filewrapperTemplateListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateNameAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateListAST::getter_mFilewrapperTemplateNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    result = p->mObject.mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_setMFilewrapperTemplatePathAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplatePath = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateListAST::getter_mFilewrapperTemplatePathAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    result = p->mObject.mProperty_mFilewrapperTemplatePath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GALGAS_formalTemplateInputParameterListAST inOperand,
                                                                                                    GALGAS_uint inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_filewrapperTemplateListAST::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  GALGAS_formalTemplateInputParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    result = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_filewrapperTemplateListAST::cEnumerator_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element cEnumerator_filewrapperTemplateListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mProperty_mFilewrapperTemplatePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListAST ("filewrapperTemplateListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST result ;
  const GALGAS_filewrapperTemplateListAST * p = (const GALGAS_filewrapperTemplateListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

