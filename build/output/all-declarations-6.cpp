#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bool & in_mIsPublic,
                                                  const GALGAS_bool & in_mIsConstant,
                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mPropertyType
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mPropertyType (in_mPropertyType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mIsConstant.isValid () && mProperty_mPropertyType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mIsPublic, mProperty_mIsConstant, mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mProperty_mIsConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mProperty_mPropertyType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (operand->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsConstant.objectCompare (operand->mProperty_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyType.objectCompare (operand->mProperty_mPropertyType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_bool & inArgument0,
                                              const GALGAS_bool & inArgument1,
                                              const GALGAS_unifiedTypeMap_2D_entry & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_bool inArgument0,
                                           GALGAS_bool inArgument1,
                                           GALGAS_unifiedTypeMap_2D_entry inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyMap_searchKey = "the '%K' property is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_bool & outArgument0,
                                           GALGAS_bool & outArgument1,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mIsConstant ;
    outArgument2 = p->mProperty_mPropertyType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyMap::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyMap::getter_mIsConstantForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsConstant ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_propertyMap::getter_mPropertyTypeForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mPropertyType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMIsConstantForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsConstant = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMPropertyTypeForKey (GALGAS_unifiedTypeMap_2D_entry inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mPropertyType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mIsConstant, p->mProperty_mPropertyType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyMap::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsPublic ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyMap::current_mIsConstant (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsConstant ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_propertyMap::current_mPropertyType (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mPropertyType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_bool & outArgument0,
                                             GALGAS_bool & outArgument1,
                                             GALGAS_unifiedTypeMap_2D_entry & outArgument2) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mIsConstant ;
    outArgument2 = p->mProperty_mPropertyType ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind::GALGAS_headerKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::constructor_noHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_noHeader ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::constructor_oneHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_oneHeader ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::constructor_twoHeaders (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_twoHeaders ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerKind::optional_noHeader () const {
  const bool ok = mEnum == kEnum_noHeader ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerKind::optional_oneHeader () const {
  const bool ok = mEnum == kEnum_oneHeader ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerKind::optional_twoHeaders () const {
  const bool ok = mEnum == kEnum_twoHeaders ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_headerKind [4] = {
  "(not built)",
  "noHeader",
  "oneHeader",
  "twoHeaders"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_headerKind::getter_isNoHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noHeader == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_headerKind::getter_isOneHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oneHeader == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_headerKind::getter_isTwoHeaders (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_twoHeaders == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @headerKind: " << gEnumNameArrayFor_headerKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_headerKind::objectCompare (const GALGAS_headerKind & inOperand) const {
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
//@headerKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerKind ("headerKind",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind GALGAS_headerKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  const GALGAS_headerKind * p = (const GALGAS_headerKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constantIndexMap::cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_unifiedTypeMap_2D_entryList & in_mAssociatedTypeList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mAssociatedTypeList (in_mAssociatedTypeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_constantIndexMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mAssociatedTypeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constantIndexMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantIndexMap (mProperty_lkey, mProperty_mIndex, mProperty_mAssociatedTypeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_constantIndexMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedTypeList" ":" ;
  mProperty_mAssociatedTypeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constantIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantIndexMap * operand = (cMapElement_constantIndexMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedTypeList.objectCompare (operand->mProperty_mAssociatedTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap::GALGAS_constantIndexMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap::GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap & GALGAS_constantIndexMap::operator = (const GALGAS_constantIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_mapWithMapToOverride (const GALGAS_constantIndexMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_unifiedTypeMap_2D_entryList & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_uint inArgument0,
                                                GALGAS_unifiedTypeMap_2D_entryList inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constantIndexMap_searchKey = "the '%K' constant is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_unifiedTypeMap_2D_entryList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_constantIndexMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mAssociatedTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_constantIndexMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entryList GALGAS_constantIndexMap::getter_mAssociatedTypeListForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_entryList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mProperty_mAssociatedTypeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantIndexMap::setter_setMAssociatedTypeListForKey (GALGAS_unifiedTypeMap_2D_entryList inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mProperty_mAssociatedTypeList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_constantIndexMap * GALGAS_constantIndexMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * result = (cMapElement_constantIndexMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantIndexMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_constantIndexMap::cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap_2D_element cEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GALGAS_constantIndexMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mAssociatedTypeList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entryList cEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mProperty_mAssociatedTypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constantIndexMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_uint & outArgument0,
                                                  GALGAS_unifiedTypeMap_2D_entryList & outArgument1) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mAssociatedTypeList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constantIndexMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap ("constantIndexMap",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantIndexMap GALGAS_constantIndexMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  const GALGAS_constantIndexMap * p = (const GALGAS_constantIndexMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @predefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_predefinedTypeAST::objectCompare (const GALGAS_predefinedTypeAST & inOperand) const {
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

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_predefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_predefinedTypeAST::setter_setMPredefinedTypeName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    p->mProperty_mPredefinedTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_predefinedTypeAST::setter_setMKind (GALGAS_predefinedTypeKindEnum inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_predefinedTypeAST::readProperty_mPredefinedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeAST::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_predefinedTypeKindEnum () ;
  }else{
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @predefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName,
                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mPredefinedTypeName (in_mPredefinedTypeName),
mProperty_mKind (in_mKind) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@predefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeAST ("predefinedTypeAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST GALGAS_predefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeAST result ;
  const GALGAS_predefinedTypeAST * p = (const GALGAS_predefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_predefinedTypeAST_2D_weak::objectCompare (const GALGAS_predefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_predefinedTypeAST_2D_weak::GALGAS_predefinedTypeAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak & GALGAS_predefinedTypeAST_2D_weak::operator = (const GALGAS_predefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak::GALGAS_predefinedTypeAST_2D_weak (const GALGAS_predefinedTypeAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak GALGAS_predefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_predefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST GALGAS_predefinedTypeAST_2D_weak::bang_predefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_predefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_predefinedTypeAST) ;
      result = GALGAS_predefinedTypeAST ((cPtr_predefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@predefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ("predefinedTypeAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_predefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypeAST_2D_weak GALGAS_predefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeAST_2D_weak result ;
  const GALGAS_predefinedTypeAST_2D_weak * p = (const GALGAS_predefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @applicationPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_applicationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_applicationPredefinedTypeAST * p = (const cPtr_applicationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_applicationPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_applicationPredefinedTypeAST::objectCompare (const GALGAS_applicationPredefinedTypeAST & inOperand) const {
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

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                          const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_applicationPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @applicationPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_applicationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

void cPtr_applicationPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@applicationPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_applicationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_applicationPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@applicationPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ("applicationPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  const GALGAS_applicationPredefinedTypeAST * p = (const GALGAS_applicationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_applicationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_applicationPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_applicationPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_applicationPredefinedTypeAST_2D_weak::GALGAS_applicationPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak & GALGAS_applicationPredefinedTypeAST_2D_weak::operator = (const GALGAS_applicationPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak::GALGAS_applicationPredefinedTypeAST_2D_weak (const GALGAS_applicationPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak GALGAS_applicationPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST_2D_weak::bang_applicationPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_applicationPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_applicationPredefinedTypeAST) ;
      result = GALGAS_applicationPredefinedTypeAST ((cPtr_applicationPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@applicationPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2D_weak ("applicationPredefinedTypeAST-weak",
                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_applicationPredefinedTypeAST_2D_weak GALGAS_applicationPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST_2D_weak result ;
  const GALGAS_applicationPredefinedTypeAST_2D_weak * p = (const GALGAS_applicationPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_applicationPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @bigintPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bigintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bigintPredefinedTypeAST * p = (const cPtr_bigintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bigintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bigintPredefinedTypeAST::objectCompare (const GALGAS_bigintPredefinedTypeAST & inOperand) const {
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

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bigintPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bigintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @bigintPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bigintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

void cPtr_bigintPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@bigintPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bigintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bigintPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@bigintPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ("bigintPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  const GALGAS_bigintPredefinedTypeAST * p = (const GALGAS_bigintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bigintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_bigintPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_bigintPredefinedTypeAST_2D_weak::GALGAS_bigintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak & GALGAS_bigintPredefinedTypeAST_2D_weak::operator = (const GALGAS_bigintPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak::GALGAS_bigintPredefinedTypeAST_2D_weak (const GALGAS_bigintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak GALGAS_bigintPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST_2D_weak::bang_bigintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bigintPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bigintPredefinedTypeAST) ;
      result = GALGAS_bigintPredefinedTypeAST ((cPtr_bigintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@bigintPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2D_weak ("bigintPredefinedTypeAST-weak",
                                                        & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigintPredefinedTypeAST_2D_weak GALGAS_bigintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST_2D_weak result ;
  const GALGAS_bigintPredefinedTypeAST_2D_weak * p = (const GALGAS_bigintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @objectPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_objectPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectPredefinedTypeAST * p = (const cPtr_objectPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_objectPredefinedTypeAST::objectCompare (const GALGAS_objectPredefinedTypeAST & inOperand) const {
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

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (const cPtr_objectPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_objectPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @objectPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_objectPredefinedTypeAST::cPtr_objectPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_objectPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

void cPtr_objectPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@objectPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_objectPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@objectPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectPredefinedTypeAST ("objectPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST result ;
  const GALGAS_objectPredefinedTypeAST * p = (const GALGAS_objectPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_objectPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_objectPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_objectPredefinedTypeAST_2D_weak::GALGAS_objectPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak & GALGAS_objectPredefinedTypeAST_2D_weak::operator = (const GALGAS_objectPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak::GALGAS_objectPredefinedTypeAST_2D_weak (const GALGAS_objectPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak GALGAS_objectPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST_2D_weak::bang_objectPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_objectPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_objectPredefinedTypeAST) ;
      result = GALGAS_objectPredefinedTypeAST ((cPtr_objectPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@objectPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectPredefinedTypeAST_2D_weak ("objectPredefinedTypeAST-weak",
                                                        & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectPredefinedTypeAST_2D_weak GALGAS_objectPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST_2D_weak result ;
  const GALGAS_objectPredefinedTypeAST_2D_weak * p = (const GALGAS_objectPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperPredefinedTypeAST * p = (const cPtr_filewrapperPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperPredefinedTypeAST::objectCompare (const GALGAS_filewrapperPredefinedTypeAST & inOperand) const {
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

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (const cPtr_filewrapperPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                          const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperPredefinedTypeAST::cPtr_filewrapperPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

void cPtr_filewrapperPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@filewrapperPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ("filewrapperPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST result ;
  const GALGAS_filewrapperPredefinedTypeAST * p = (const GALGAS_filewrapperPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_filewrapperPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_filewrapperPredefinedTypeAST_2D_weak::GALGAS_filewrapperPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak & GALGAS_filewrapperPredefinedTypeAST_2D_weak::operator = (const GALGAS_filewrapperPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak::GALGAS_filewrapperPredefinedTypeAST_2D_weak (const GALGAS_filewrapperPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak GALGAS_filewrapperPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST_2D_weak::bang_filewrapperPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperPredefinedTypeAST) ;
      result = GALGAS_filewrapperPredefinedTypeAST ((cPtr_filewrapperPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2D_weak ("filewrapperPredefinedTypeAST-weak",
                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperPredefinedTypeAST_2D_weak GALGAS_filewrapperPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST_2D_weak result ;
  const GALGAS_filewrapperPredefinedTypeAST_2D_weak * p = (const GALGAS_filewrapperPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @binarysetPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_binarysetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binarysetPredefinedTypeAST * p = (const cPtr_binarysetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binarysetPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_binarysetPredefinedTypeAST::objectCompare (const GALGAS_binarysetPredefinedTypeAST & inOperand) const {
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

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binarysetPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @binarysetPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@binarysetPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binarysetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@binarysetPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  const GALGAS_binarysetPredefinedTypeAST * p = (const GALGAS_binarysetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binarysetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_binarysetPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_binarysetPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_binarysetPredefinedTypeAST_2D_weak::GALGAS_binarysetPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak & GALGAS_binarysetPredefinedTypeAST_2D_weak::operator = (const GALGAS_binarysetPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak::GALGAS_binarysetPredefinedTypeAST_2D_weak (const GALGAS_binarysetPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak GALGAS_binarysetPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST_2D_weak::bang_binarysetPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_binarysetPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binarysetPredefinedTypeAST) ;
      result = GALGAS_binarysetPredefinedTypeAST ((cPtr_binarysetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@binarysetPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2D_weak ("binarysetPredefinedTypeAST-weak",
                                                           & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binarysetPredefinedTypeAST_2D_weak GALGAS_binarysetPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST_2D_weak result ;
  const GALGAS_binarysetPredefinedTypeAST_2D_weak * p = (const GALGAS_binarysetPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binarysetPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolPredefinedTypeAST * p = (const cPtr_boolPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolPredefinedTypeAST::objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const {
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

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

void cPtr_boolPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@boolPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolPredefinedTypeAST ("boolPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  const GALGAS_boolPredefinedTypeAST * p = (const GALGAS_boolPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_boolPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_boolPredefinedTypeAST_2D_weak::GALGAS_boolPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak & GALGAS_boolPredefinedTypeAST_2D_weak::operator = (const GALGAS_boolPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak::GALGAS_boolPredefinedTypeAST_2D_weak (const GALGAS_boolPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak GALGAS_boolPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST_2D_weak::bang_boolPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolPredefinedTypeAST) ;
      result = GALGAS_boolPredefinedTypeAST ((cPtr_boolPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2D_weak ("boolPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolPredefinedTypeAST_2D_weak GALGAS_boolPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST_2D_weak result ;
  const GALGAS_boolPredefinedTypeAST_2D_weak * p = (const GALGAS_boolPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @uintPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_uintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uintPredefinedTypeAST * p = (const cPtr_uintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_uintPredefinedTypeAST::objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const {
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

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uintPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @uintPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_uintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

void cPtr_uintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uintPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_uintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uintPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@uintPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintPredefinedTypeAST ("uintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  const GALGAS_uintPredefinedTypeAST * p = (const GALGAS_uintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_uintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_uintPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_uintPredefinedTypeAST_2D_weak::GALGAS_uintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak & GALGAS_uintPredefinedTypeAST_2D_weak::operator = (const GALGAS_uintPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak::GALGAS_uintPredefinedTypeAST_2D_weak (const GALGAS_uintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak GALGAS_uintPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST_2D_weak::bang_uintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uintPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uintPredefinedTypeAST) ;
      result = GALGAS_uintPredefinedTypeAST ((cPtr_uintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@uintPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ("uintPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak GALGAS_uintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST_2D_weak result ;
  const GALGAS_uintPredefinedTypeAST_2D_weak * p = (const GALGAS_uintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @uint_36__34_PredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_uint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34_PredefinedTypeAST * p = (const cPtr_uint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_uint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const {
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

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (const cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_PredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34_PredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @uint64PredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_uint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

void cPtr_uint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@uint64PredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_uint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34_PredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@uint64PredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ("uint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  const GALGAS_uint_36__34_PredefinedTypeAST * p = (const GALGAS_uint_36__34_PredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_PredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64PredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::operator = (const GALGAS_uint_36__34_PredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (const GALGAS_uint_36__34_PredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::bang_uint_36__34_PredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uint_36__34_PredefinedTypeAST) ;
      result = GALGAS_uint_36__34_PredefinedTypeAST ((cPtr_uint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@uint64PredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ("uint64PredefinedTypeAST-weak",
                                                              & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST_2D_weak result ;
  const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak * p = (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64PredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sintPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sintPredefinedTypeAST * p = (const cPtr_sintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sintPredefinedTypeAST::objectCompare (const GALGAS_sintPredefinedTypeAST & inOperand) const {
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

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (const cPtr_sintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sintPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sintPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

void cPtr_sintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sintPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sintPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sintPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sintPredefinedTypeAST ("sintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST result ;
  const GALGAS_sintPredefinedTypeAST * p = (const GALGAS_sintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_sintPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_sintPredefinedTypeAST_2D_weak::GALGAS_sintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak & GALGAS_sintPredefinedTypeAST_2D_weak::operator = (const GALGAS_sintPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak::GALGAS_sintPredefinedTypeAST_2D_weak (const GALGAS_sintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak GALGAS_sintPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST_2D_weak::bang_sintPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sintPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sintPredefinedTypeAST) ;
      result = GALGAS_sintPredefinedTypeAST ((cPtr_sintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sintPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2D_weak ("sintPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sintPredefinedTypeAST_2D_weak GALGAS_sintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST_2D_weak result ;
  const GALGAS_sintPredefinedTypeAST_2D_weak * p = (const GALGAS_sintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sint_36__34_PredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34_PredefinedTypeAST * p = (const cPtr_sint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST & inOperand) const {
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

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (const cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34_PredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_36__34_PredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sint64PredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sint_36__34_PredefinedTypeAST::cPtr_sint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

void cPtr_sint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@sint64PredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34_PredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sint64PredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ("sint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  const GALGAS_sint_36__34_PredefinedTypeAST * p = (const GALGAS_sint_36__34_PredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_PredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64PredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::operator = (const GALGAS_sint_36__34_PredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (const GALGAS_sint_36__34_PredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::bang_sint_36__34_PredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sint_36__34_PredefinedTypeAST) ;
      result = GALGAS_sint_36__34_PredefinedTypeAST ((cPtr_sint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sint64PredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ("sint64PredefinedTypeAST-weak",
                                                              & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST_2D_weak result ;
  const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak * p = (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64PredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @charPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_charPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_charPredefinedTypeAST * p = (const cPtr_charPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_charPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_charPredefinedTypeAST::objectCompare (const GALGAS_charPredefinedTypeAST & inOperand) const {
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

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_charPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_charPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @charPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_charPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

void cPtr_charPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@charPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_charPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_charPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@charPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_charPredefinedTypeAST ("charPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_charPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_charPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_charPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  const GALGAS_charPredefinedTypeAST * p = (const GALGAS_charPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_charPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_charPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_charPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_charPredefinedTypeAST_2D_weak::GALGAS_charPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak & GALGAS_charPredefinedTypeAST_2D_weak::operator = (const GALGAS_charPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak::GALGAS_charPredefinedTypeAST_2D_weak (const GALGAS_charPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak GALGAS_charPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST_2D_weak::bang_charPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_charPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_charPredefinedTypeAST) ;
      result = GALGAS_charPredefinedTypeAST ((cPtr_charPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@charPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_charPredefinedTypeAST_2D_weak ("charPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_charPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_charPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_charPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_charPredefinedTypeAST_2D_weak GALGAS_charPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST_2D_weak result ;
  const GALGAS_charPredefinedTypeAST_2D_weak * p = (const GALGAS_charPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_charPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @doublePredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_doublePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_doublePredefinedTypeAST * p = (const cPtr_doublePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_doublePredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_doublePredefinedTypeAST::objectCompare (const GALGAS_doublePredefinedTypeAST & inOperand) const {
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

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (const cPtr_doublePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doublePredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_doublePredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @doublePredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_doublePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

void cPtr_doublePredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@doublePredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_doublePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_doublePredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@doublePredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doublePredefinedTypeAST ("doublePredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_doublePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_doublePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doublePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  const GALGAS_doublePredefinedTypeAST * p = (const GALGAS_doublePredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_doublePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doublePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_doublePredefinedTypeAST_2D_weak::objectCompare (const GALGAS_doublePredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_doublePredefinedTypeAST_2D_weak::GALGAS_doublePredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST_2D_weak & GALGAS_doublePredefinedTypeAST_2D_weak::operator = (const GALGAS_doublePredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST_2D_weak::GALGAS_doublePredefinedTypeAST_2D_weak (const GALGAS_doublePredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST_2D_weak GALGAS_doublePredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST_2D_weak::bang_doublePredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_doublePredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_doublePredefinedTypeAST) ;
      result = GALGAS_doublePredefinedTypeAST ((cPtr_doublePredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@doublePredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2D_weak ("doublePredefinedTypeAST-weak",
                                                        & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_doublePredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_doublePredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doublePredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doublePredefinedTypeAST_2D_weak GALGAS_doublePredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST_2D_weak result ;
  const GALGAS_doublePredefinedTypeAST_2D_weak * p = (const GALGAS_doublePredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_doublePredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doublePredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @stringPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_stringPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringPredefinedTypeAST * p = (const cPtr_stringPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_stringPredefinedTypeAST::objectCompare (const GALGAS_stringPredefinedTypeAST & inOperand) const {
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

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (const cPtr_stringPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @stringPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_stringPredefinedTypeAST::cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_stringPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

void cPtr_stringPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@stringPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@stringPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringPredefinedTypeAST ("stringPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  const GALGAS_stringPredefinedTypeAST * p = (const GALGAS_stringPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_stringPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_stringPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_stringPredefinedTypeAST_2D_weak::GALGAS_stringPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak & GALGAS_stringPredefinedTypeAST_2D_weak::operator = (const GALGAS_stringPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak::GALGAS_stringPredefinedTypeAST_2D_weak (const GALGAS_stringPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak GALGAS_stringPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST_2D_weak::bang_stringPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_stringPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringPredefinedTypeAST) ;
      result = GALGAS_stringPredefinedTypeAST ((cPtr_stringPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@stringPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2D_weak ("stringPredefinedTypeAST-weak",
                                                        & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak GALGAS_stringPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST_2D_weak result ;
  const GALGAS_stringPredefinedTypeAST_2D_weak * p = (const GALGAS_stringPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @locationPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_locationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_locationPredefinedTypeAST * p = (const cPtr_locationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_locationPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_locationPredefinedTypeAST::objectCompare (const GALGAS_locationPredefinedTypeAST & inOperand) const {
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

GALGAS_locationPredefinedTypeAST::GALGAS_locationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST::GALGAS_locationPredefinedTypeAST (const cPtr_locationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_locationPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST GALGAS_locationPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                    const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_locationPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @locationPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_locationPredefinedTypeAST::cPtr_locationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_string & in_mPredefinedTypeName,
                                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_locationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

void cPtr_locationPredefinedTypeAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@locationPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_locationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_locationPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@locationPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_locationPredefinedTypeAST ("locationPredefinedTypeAST",
                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_locationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_locationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_locationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST GALGAS_locationPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST result ;
  const GALGAS_locationPredefinedTypeAST * p = (const GALGAS_locationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_locationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("locationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_locationPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_locationPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_locationPredefinedTypeAST_2D_weak::GALGAS_locationPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST_2D_weak & GALGAS_locationPredefinedTypeAST_2D_weak::operator = (const GALGAS_locationPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST_2D_weak::GALGAS_locationPredefinedTypeAST_2D_weak (const GALGAS_locationPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST_2D_weak GALGAS_locationPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST GALGAS_locationPredefinedTypeAST_2D_weak::bang_locationPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_locationPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_locationPredefinedTypeAST) ;
      result = GALGAS_locationPredefinedTypeAST ((cPtr_locationPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@locationPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_locationPredefinedTypeAST_2D_weak ("locationPredefinedTypeAST-weak",
                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_locationPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_locationPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_locationPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationPredefinedTypeAST_2D_weak GALGAS_locationPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST_2D_weak result ;
  const GALGAS_locationPredefinedTypeAST_2D_weak * p = (const GALGAS_locationPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_locationPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("locationPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @stringsetPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_stringsetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringsetPredefinedTypeAST * p = (const cPtr_stringsetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringsetPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_stringsetPredefinedTypeAST::objectCompare (const GALGAS_stringsetPredefinedTypeAST & inOperand) const {
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

GALGAS_stringsetPredefinedTypeAST::GALGAS_stringsetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST::GALGAS_stringsetPredefinedTypeAST (const cPtr_stringsetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringsetPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST GALGAS_stringsetPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringsetPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @stringsetPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_stringsetPredefinedTypeAST::cPtr_stringsetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_stringsetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

void cPtr_stringsetPredefinedTypeAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@stringsetPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringsetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringsetPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@stringsetPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ("stringsetPredefinedTypeAST",
                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringsetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringsetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringsetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST GALGAS_stringsetPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST result ;
  const GALGAS_stringsetPredefinedTypeAST * p = (const GALGAS_stringsetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringsetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringsetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_stringsetPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_stringsetPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_stringsetPredefinedTypeAST_2D_weak::GALGAS_stringsetPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST_2D_weak & GALGAS_stringsetPredefinedTypeAST_2D_weak::operator = (const GALGAS_stringsetPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST_2D_weak::GALGAS_stringsetPredefinedTypeAST_2D_weak (const GALGAS_stringsetPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST_2D_weak GALGAS_stringsetPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST GALGAS_stringsetPredefinedTypeAST_2D_weak::bang_stringsetPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_stringsetPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringsetPredefinedTypeAST) ;
      result = GALGAS_stringsetPredefinedTypeAST ((cPtr_stringsetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@stringsetPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2D_weak ("stringsetPredefinedTypeAST-weak",
                                                           & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringsetPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringsetPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringsetPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringsetPredefinedTypeAST_2D_weak GALGAS_stringsetPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST_2D_weak result ;
  const GALGAS_stringsetPredefinedTypeAST_2D_weak * p = (const GALGAS_stringsetPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringsetPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringsetPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @functionPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_functionPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionPredefinedTypeAST * p = (const cPtr_functionPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_functionPredefinedTypeAST::objectCompare (const GALGAS_functionPredefinedTypeAST & inOperand) const {
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

GALGAS_functionPredefinedTypeAST::GALGAS_functionPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST::GALGAS_functionPredefinedTypeAST (const cPtr_functionPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST GALGAS_functionPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                    const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionPredefinedTypeAST::cPtr_functionPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_string & in_mPredefinedTypeName,
                                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;
}

void cPtr_functionPredefinedTypeAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@functionPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPredefinedTypeAST ("functionPredefinedTypeAST",
                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST GALGAS_functionPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST result ;
  const GALGAS_functionPredefinedTypeAST * p = (const GALGAS_functionPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_functionPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_functionPredefinedTypeAST_2D_weak::GALGAS_functionPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST_2D_weak & GALGAS_functionPredefinedTypeAST_2D_weak::operator = (const GALGAS_functionPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST_2D_weak::GALGAS_functionPredefinedTypeAST_2D_weak (const GALGAS_functionPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST_2D_weak GALGAS_functionPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST GALGAS_functionPredefinedTypeAST_2D_weak::bang_functionPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPredefinedTypeAST) ;
      result = GALGAS_functionPredefinedTypeAST ((cPtr_functionPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPredefinedTypeAST_2D_weak ("functionPredefinedTypeAST-weak",
                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionPredefinedTypeAST_2D_weak GALGAS_functionPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST_2D_weak result ;
  const GALGAS_functionPredefinedTypeAST_2D_weak * p = (const GALGAS_functionPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @typePredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typePredefinedTypeAST * p = (const cPtr_typePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typePredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typePredefinedTypeAST::objectCompare (const GALGAS_typePredefinedTypeAST & inOperand) const {
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

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (const cPtr_typePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typePredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typePredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @typePredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_typePredefinedTypeAST::cPtr_typePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

void cPtr_typePredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@typePredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typePredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@typePredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typePredefinedTypeAST ("typePredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  const GALGAS_typePredefinedTypeAST * p = (const GALGAS_typePredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typePredefinedTypeAST_2D_weak::objectCompare (const GALGAS_typePredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_typePredefinedTypeAST_2D_weak::GALGAS_typePredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak & GALGAS_typePredefinedTypeAST_2D_weak::operator = (const GALGAS_typePredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak::GALGAS_typePredefinedTypeAST_2D_weak (const GALGAS_typePredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak GALGAS_typePredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST_2D_weak::bang_typePredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typePredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typePredefinedTypeAST) ;
      result = GALGAS_typePredefinedTypeAST ((cPtr_typePredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typePredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typePredefinedTypeAST_2D_weak ("typePredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak GALGAS_typePredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST_2D_weak result ;
  const GALGAS_typePredefinedTypeAST_2D_weak * p = (const GALGAS_typePredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typePredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dataPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dataPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dataPredefinedTypeAST * p = (const cPtr_dataPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dataPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dataPredefinedTypeAST::objectCompare (const GALGAS_dataPredefinedTypeAST & inOperand) const {
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

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (const cPtr_dataPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dataPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dataPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dataPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dataPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

void cPtr_dataPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@dataPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dataPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dataPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dataPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataPredefinedTypeAST ("dataPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  const GALGAS_dataPredefinedTypeAST * p = (const GALGAS_dataPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dataPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_dataPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_dataPredefinedTypeAST_2D_weak::GALGAS_dataPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak & GALGAS_dataPredefinedTypeAST_2D_weak::operator = (const GALGAS_dataPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak::GALGAS_dataPredefinedTypeAST_2D_weak (const GALGAS_dataPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak GALGAS_dataPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST_2D_weak::bang_dataPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dataPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dataPredefinedTypeAST) ;
      result = GALGAS_dataPredefinedTypeAST ((cPtr_dataPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dataPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2D_weak ("dataPredefinedTypeAST-weak",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataPredefinedTypeAST_2D_weak GALGAS_dataPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST_2D_weak result ;
  const GALGAS_dataPredefinedTypeAST_2D_weak * p = (const GALGAS_dataPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @timerPredefinedTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_timerPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_timerPredefinedTypeAST * p = (const cPtr_timerPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_timerPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_timerPredefinedTypeAST::objectCompare (const GALGAS_timerPredefinedTypeAST & inOperand) const {
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

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (const cPtr_timerPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_timerPredefinedTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                              const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_timerPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @timerPredefinedTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_string & in_mPredefinedTypeName,
                                                          const GALGAS_predefinedTypeKindEnum & in_mKind
                                                          COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_timerPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

void cPtr_timerPredefinedTypeAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@timerPredefinedTypeAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_timerPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_timerPredefinedTypeAST (mProperty_mIsPredefined, mProperty_mPredefinedTypeName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@timerPredefinedTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_timerPredefinedTypeAST ("timerPredefinedTypeAST",
                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_timerPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_timerPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timerPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  const GALGAS_timerPredefinedTypeAST * p = (const GALGAS_timerPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_timerPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_timerPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_timerPredefinedTypeAST_2D_weak & inOperand) const {
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

GALGAS_timerPredefinedTypeAST_2D_weak::GALGAS_timerPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak & GALGAS_timerPredefinedTypeAST_2D_weak::operator = (const GALGAS_timerPredefinedTypeAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak::GALGAS_timerPredefinedTypeAST_2D_weak (const GALGAS_timerPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak GALGAS_timerPredefinedTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST_2D_weak::bang_timerPredefinedTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_timerPredefinedTypeAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_timerPredefinedTypeAST) ;
      result = GALGAS_timerPredefinedTypeAST ((cPtr_timerPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@timerPredefinedTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2D_weak ("timerPredefinedTypeAST-weak",
                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_timerPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_timerPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timerPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak GALGAS_timerPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST_2D_weak result ;
  const GALGAS_timerPredefinedTypeAST_2D_weak * p = (const GALGAS_timerPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_timerPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getConstructorMap> gExtensionMethodTable_predefinedTypeAST_getConstructorMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getConstructorMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getConstructorMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getConstructorMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getConstructorMap (const cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_constructorMap & out_outConstructorMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outConstructorMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getConstructorMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getConstructorMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getConstructorMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getConstructorMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getConstructorMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getConstructorMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outConstructorMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                 GALGAS_constructorMap & outArgument_outConstructorMap,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outConstructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 405)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionMethod_predefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_predefinedTypeAST_getConstructorMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getConstructorMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_getConstructorMap (defineExtensionMethod_predefinedTypeAST_getConstructorMap,
                                                                freeExtensionMethod_predefinedTypeAST_getConstructorMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getGetterMap> gExtensionMethodTable_predefinedTypeAST_getGetterMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getGetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getGetterMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getGetterMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getGetterMap (const cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_getterMap & out_outGetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outGetterMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getGetterMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getGetterMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getGetterMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getGetterMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getGetterMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getGetterMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outGetterMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                            GALGAS_getterMap & outArgument_outGetterMap,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGetterMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 413)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                     extensionMethod_predefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_predefinedTypeAST_getGetterMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getGetterMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_getGetterMap (defineExtensionMethod_predefinedTypeAST_getGetterMap,
                                                           freeExtensionMethod_predefinedTypeAST_getGetterMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getSetterMap> gExtensionMethodTable_predefinedTypeAST_getSetterMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getSetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getSetterMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getSetterMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getSetterMap (const cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_setterMap & out_outSetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outSetterMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getSetterMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getSetterMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getSetterMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getSetterMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getSetterMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getSetterMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outSetterMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                            GALGAS_setterMap & outArgument_outSetterMap,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 421)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                     extensionMethod_predefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_predefinedTypeAST_getSetterMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getSetterMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_getSetterMap (defineExtensionMethod_predefinedTypeAST_getSetterMap,
                                                           freeExtensionMethod_predefinedTypeAST_getSetterMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap> gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getInstanceMethodMap (const int32_t inClassIndex,
                                                extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getInstanceMethodMap (const cPtr_predefinedTypeAST * inObject,
                                               GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outInstanceMethodMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outInstanceMethodMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                    GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 429)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                             extensionMethod_predefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_predefinedTypeAST_getInstanceMethodMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_predefinedTypeAST_getInstanceMethodMap,
                                                                   freeExtensionMethod_predefinedTypeAST_getInstanceMethodMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getClassMethodMap> gExtensionMethodTable_predefinedTypeAST_getClassMethodMap ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getClassMethodMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getClassMethodMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassMethodMap (const cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_classMethodMap & out_outClassMethodMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outClassMethodMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getClassMethodMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getClassMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getClassMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outClassMethodMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                 GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 437)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionMethod_predefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_predefinedTypeAST_getClassMethodMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_getClassMethodMap (defineExtensionMethod_predefinedTypeAST_getClassMethodMap,
                                                                freeExtensionMethod_predefinedTypeAST_getClassMethodMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags> gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_getSupportedOperatorFlags (const int32_t inClassIndex,
                                                     enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags inGetter) {
  gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operators callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operators result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags f = NULL ;
    if (classIndex < gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.count ()) {
      f = gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.count ()) {
           f = gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_operators extensionGetter_predefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_outFlags ; // Returned variable
  result_outFlags = GALGAS_operators::constructor_none (SOURCE_FILE ("semanticsTypes.galgas", 443)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                  extensionGetter_predefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags (void) {
  gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_predefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags,
                                                                        freeExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getAddAssignArgumentList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList> gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getAddAssignArgumentList (const int32_t inClassIndex,
                                                    extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getAddAssignArgumentList (const cPtr_predefinedTypeAST * inObject,
                                                   GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  out_outAddAssignArgumentList.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outAddAssignArgumentList, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                        GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAddAssignArgumentList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypes.galgas", 451)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_getAddAssignArgumentList (void) {
  enterExtensionMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                 extensionMethod_predefinedTypeAST_getAddAssignArgumentList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_predefinedTypeAST_getAddAssignArgumentList (void) {
  gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_getAddAssignArgumentList (defineExtensionMethod_predefinedTypeAST_getAddAssignArgumentList,
                                                                       freeExtensionMethod_predefinedTypeAST_getAddAssignArgumentList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getEnumerationList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getEnumerationList> gExtensionMethodTable_predefinedTypeAST_getEnumerationList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getEnumerationList (const int32_t inClassIndex,
                                              extensionMethodSignature_predefinedTypeAST_getEnumerationList inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getEnumerationList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getEnumerationList (const cPtr_predefinedTypeAST * inObject,
                                             GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                             GALGAS_string & out_outEnumeratedType,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outEnumerationList.drop () ;
  out_outEnumeratedType.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getEnumerationList f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getEnumerationList.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getEnumerationList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getEnumerationList.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getEnumerationList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getEnumerationList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outEnumerationList, out_outEnumeratedType, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                  GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                  GALGAS_string & outArgument_outEnumeratedType,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypes.galgas", 465)) ;
  outArgument_outEnumeratedType = GALGAS_string::makeEmptyString () ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                           extensionMethod_predefinedTypeAST_getEnumerationList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_predefinedTypeAST_getEnumerationList (void) {
  gExtensionMethodTable_predefinedTypeAST_getEnumerationList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_getEnumerationList (defineExtensionMethod_predefinedTypeAST_getEnumerationList,
                                                                 freeExtensionMethod_predefinedTypeAST_getEnumerationList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@location sourceFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_sourceFile (const GALGAS_location & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_location temp_1 = inObject ;
    test_0 = temp_1.getter_isNowhere (SOURCE_FILE ("semanticContext.galgas", 19)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("SOURCE_FILE (\"\", 0)") ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_location temp_2 = inObject ;
    const GALGAS_location temp_3 = inObject ;
    result_result = GALGAS_string ("SOURCE_FILE (").add_operation (temp_2.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).getter_lastPathComponent (SOURCE_FILE ("semanticContext.galgas", 22)).getter_utf_38_Representation (SOURCE_FILE ("semanticContext.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (temp_3.getter_line (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).getter_string (SOURCE_FILE ("semanticContext.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)) ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@location commaSourceFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_commaSourceFile (const GALGAS_location & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_location temp_0 = inObject ;
  result_result = GALGAS_string (" COMMA_").add_operation (extensionGetter_sourceFile (temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)) ;
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext> gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInstructionInSemanticContext (const int32_t inClassIndex,
                                                             extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext inMethod) {
  gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticInstructionAST_enterInstructionInSemanticContext (void) {
  gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticInstructionAST_enterInstructionInSemanticContext (NULL,
                                                                                     freeExtensionMethod_semanticInstructionAST_enterInstructionInSemanticContext) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                            GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.count ()) {
      f = gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.count ()) {
          f = gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext> gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterExpressionInSemanticContext (const int32_t inClassIndex,
                                                            extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext inMethod) {
  gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticExpressionAST_enterExpressionInSemanticContext (void) {
  gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticExpressionAST_enterExpressionInSemanticContext (NULL,
                                                                                   freeExtensionMethod_semanticExpressionAST_enterExpressionInSemanticContext) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                           GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.count ()) {
      f = gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.count ()) {
          f = gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionListInSemanticContext (const GALGAS_semanticInstructionListAST inObject,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_semanticInstructionListAST temp_0 = inObject ;
  cEnumerator_semanticInstructionListAST enumerator_2712 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2712.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionInSemanticContext ((const cPtr_semanticInstructionAST *) enumerator_2712.current_mInstruction (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 58)) ;
    enumerator_2712.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

cMapElement_grammarLabelMap::cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_formalParameterSignature & in_mLabelSignature
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelSignature (in_mLabelSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_grammarLabelMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelSignature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_grammarLabelMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_grammarLabelMap (mProperty_lkey, mProperty_mLabelSignature COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_grammarLabelMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelSignature" ":" ;
  mProperty_mLabelSignature.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_grammarLabelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_grammarLabelMap * operand = (cMapElement_grammarLabelMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabelSignature.objectCompare (operand->mProperty_mLabelSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap::GALGAS_grammarLabelMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap::GALGAS_grammarLabelMap (const GALGAS_grammarLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap & GALGAS_grammarLabelMap::operator = (const GALGAS_grammarLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::constructor_mapWithMapToOverride (const GALGAS_grammarLabelMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_grammarLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarLabelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_formalParameterSignature & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarLabelMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_formalParameterSignature inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_grammarLabelMap_searchKey = "the '%K' grammar label is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarLabelMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_formalParameterSignature & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_grammarLabelMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    outArgument0 = p->mProperty_mLabelSignature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_grammarLabelMap::getter_mLabelSignatureForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    result = p->mProperty_mLabelSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarLabelMap::setter_setMLabelSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarLabelMap * p = (cMapElement_grammarLabelMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    p->mProperty_mLabelSignature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_grammarLabelMap * GALGAS_grammarLabelMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * result = (cMapElement_grammarLabelMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarLabelMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_grammarLabelMap::cEnumerator_grammarLabelMap (const GALGAS_grammarLabelMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap_2D_element cEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return GALGAS_grammarLabelMap_2D_element (p->mProperty_lkey, p->mProperty_mLabelSignature) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature cEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return p->mProperty_mLabelSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_grammarLabelMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_formalParameterSignature & outArgument0) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    outArgument0 = p->mProperty_mLabelSignature ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarLabelMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarLabelMap ("grammarLabelMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarLabelMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  const GALGAS_grammarLabelMap * p = (const GALGAS_grammarLabelMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_grammarMap::cMapElement_grammarMap (const GALGAS_lstring & inKey,
                                                const GALGAS_grammarLabelMap & in_mLabelMap,
                                                const GALGAS_bool & in_mHasIndexing,
                                                const GALGAS_bool & in_mHasTranslateFeature
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelMap (in_mLabelMap),
mProperty_mHasIndexing (in_mHasIndexing),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_grammarMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelMap.isValid () && mProperty_mHasIndexing.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_grammarMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_grammarMap (mProperty_lkey, mProperty_mLabelMap, mProperty_mHasIndexing, mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_grammarMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelMap" ":" ;
  mProperty_mLabelMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasIndexing" ":" ;
  mProperty_mHasIndexing.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_grammarMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_grammarMap * operand = (cMapElement_grammarMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLabelMap.objectCompare (operand->mProperty_mLabelMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasIndexing.objectCompare (operand->mProperty_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (operand->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap::GALGAS_grammarMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap::GALGAS_grammarMap (const GALGAS_grammarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap & GALGAS_grammarMap::operator = (const GALGAS_grammarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap GALGAS_grammarMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap GALGAS_grammarMap::constructor_mapWithMapToOverride (const GALGAS_grammarMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap GALGAS_grammarMap::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_grammarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_grammarLabelMap & inArgument0,
                                             const GALGAS_bool & inArgument1,
                                             const GALGAS_bool & inArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap::setter_insertGrammar (GALGAS_lstring inKey,
                                              GALGAS_grammarLabelMap inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_bool inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_grammarMap_searchKey = "the '%K' grammar is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_grammarLabelMap & outArgument0,
                                          GALGAS_bool & outArgument1,
                                          GALGAS_bool & outArgument2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_grammarMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    outArgument0 = p->mProperty_mLabelMap ;
    outArgument1 = p->mProperty_mHasIndexing ;
    outArgument2 = p->mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap GALGAS_grammarMap::getter_mLabelMapForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_grammarLabelMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mProperty_mLabelMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarMap::getter_mHasIndexingForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mProperty_mHasIndexing ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarMap::getter_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mProperty_mHasTranslateFeature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap::setter_setMLabelMapForKey (GALGAS_grammarLabelMap inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mProperty_mLabelMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap::setter_setMHasIndexingForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mProperty_mHasIndexing = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_grammarMap::setter_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mProperty_mHasTranslateFeature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_grammarMap * GALGAS_grammarMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * result = (cMapElement_grammarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_grammarMap::cEnumerator_grammarMap (const GALGAS_grammarMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap_2D_element cEnumerator_grammarMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return GALGAS_grammarMap_2D_element (p->mProperty_lkey, p->mProperty_mLabelMap, p->mProperty_mHasIndexing, p->mProperty_mHasTranslateFeature) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarLabelMap cEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mLabelMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasIndexing ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mProperty_mHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_grammarMap::optional_searchKey (const GALGAS_string & inKey,
                                            GALGAS_grammarLabelMap & outArgument0,
                                            GALGAS_bool & outArgument1,
                                            GALGAS_bool & outArgument2) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    outArgument0 = p->mProperty_mLabelMap ;
    outArgument1 = p->mProperty_mHasIndexing ;
    outArgument2 = p->mProperty_mHasTranslateFeature ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarMap ("grammarMap",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarMap GALGAS_grammarMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  const GALGAS_grammarMap * p = (const GALGAS_grammarMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineMap::cMapElement_routineMap (const GALGAS_lstring & inKey,
                                                const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                const GALGAS_bool & in_mIsInternal
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineSignature (in_mRoutineSignature),
mProperty_mIsInternal (in_mIsInternal) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_routineMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineSignature.isValid () && mProperty_mIsInternal.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMap (mProperty_lkey, mProperty_mRoutineSignature, mProperty_mIsInternal COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_routineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineSignature" ":" ;
  mProperty_mRoutineSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mProperty_mIsInternal.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_routineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMap * operand = (cMapElement_routineMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineSignature.objectCompare (operand->mProperty_mRoutineSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (operand->mProperty_mIsInternal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (const GALGAS_routineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap & GALGAS_routineMap::operator = (const GALGAS_routineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::constructor_mapWithMapToOverride (const GALGAS_routineMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_routineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_formalParameterSignature & inArgument0,
                                             const GALGAS_bool & inArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_formalParameterSignature inArgument0,
                                          GALGAS_bool inArgument1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineMap_searchKey = "the '%K' routine is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_formalParameterSignature & outArgument0,
                                          GALGAS_bool & outArgument1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_routineMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMap) ;
    outArgument0 = p->mProperty_mRoutineSignature ;
    outArgument1 = p->mProperty_mIsInternal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_routineMap::getter_mRoutineSignatureForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mRoutineSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineMap::getter_mIsInternalForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_setMRoutineSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mProperty_mRoutineSignature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setter_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mProperty_mIsInternal = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_routineMap * GALGAS_routineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * result = (cMapElement_routineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineMap::cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element cEnumerator_routineMap::current (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return GALGAS_routineMap_2D_element (p->mProperty_lkey, p->mProperty_mRoutineSignature, p->mProperty_mIsInternal) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature cEnumerator_routineMap::current_mRoutineSignature (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mRoutineSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mProperty_mIsInternal ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineMap::optional_searchKey (const GALGAS_string & inKey,
                                            GALGAS_formalParameterSignature & outArgument0,
                                            GALGAS_bool & outArgument1) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    outArgument0 = p->mProperty_mRoutineSignature ;
    outArgument1 = p->mProperty_mIsInternal ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  const GALGAS_routineMap * p = (const GALGAS_routineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_functionMap::cMapElement_functionMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_functionSignature & in_mFunctionSignature,
                                                  const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                  const GALGAS_bool & in_mIsInternal
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFunctionSignature (in_mFunctionSignature),
mProperty_mResultType (in_mResultType),
mProperty_mIsInternal (in_mIsInternal) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_functionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFunctionSignature.isValid () && mProperty_mResultType.isValid () && mProperty_mIsInternal.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_functionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_functionMap (mProperty_lkey, mProperty_mFunctionSignature, mProperty_mResultType, mProperty_mIsInternal COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_functionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionSignature" ":" ;
  mProperty_mFunctionSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mProperty_mIsInternal.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_functionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_functionMap * operand = (cMapElement_functionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionSignature.objectCompare (operand->mProperty_mFunctionSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (operand->mProperty_mIsInternal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap::GALGAS_functionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap::GALGAS_functionMap (const GALGAS_functionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap & GALGAS_functionMap::operator = (const GALGAS_functionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap GALGAS_functionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap GALGAS_functionMap::constructor_mapWithMapToOverride (const GALGAS_functionMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap GALGAS_functionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_functionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_functionSignature & inArgument0,
                                              const GALGAS_unifiedTypeMap_2D_entry & inArgument1,
                                              const GALGAS_bool & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@functionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_functionSignature inArgument0,
                                           GALGAS_unifiedTypeMap_2D_entry inArgument1,
                                           GALGAS_bool inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_functionMap_searchKey = "the '%K' function is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_functionSignature & outArgument0,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                           GALGAS_bool & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_functionMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_functionMap) ;
    outArgument0 = p->mProperty_mFunctionSignature ;
    outArgument1 = p->mProperty_mResultType ;
    outArgument2 = p->mProperty_mIsInternal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionMap::getter_mFunctionSignatureForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mFunctionSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_functionMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionMap::getter_mIsInternalForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap::setter_setMFunctionSignatureForKey (GALGAS_functionSignature inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mFunctionSignature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap::setter_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_entry inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_functionMap::setter_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mProperty_mIsInternal = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_functionMap * GALGAS_functionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * result = (cMapElement_functionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_functionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_functionMap::cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap_2D_element cEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GALGAS_functionMap_2D_element (p->mProperty_lkey, p->mProperty_mFunctionSignature, p->mProperty_mResultType, p->mProperty_mIsInternal) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature cEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mFunctionSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mResultType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mProperty_mIsInternal ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_functionMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_functionSignature & outArgument0,
                                             GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                             GALGAS_bool & outArgument2) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    outArgument0 = p->mProperty_mFunctionSignature ;
    outArgument1 = p->mProperty_mResultType ;
    outArgument2 = p->mProperty_mIsInternal ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap ("functionMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionMap GALGAS_functionMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  const GALGAS_functionMap * p = (const GALGAS_functionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_wrapperFileMap::cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_string & in_mAbsoluteFilePath,
                                                        const GALGAS_bool & in_mIsTextFile,
                                                        const GALGAS_uint & in_mWrapperDirectoryIndex,
                                                        const GALGAS_uint & in_mWrapperFileIndex
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAbsoluteFilePath (in_mAbsoluteFilePath),
mProperty_mIsTextFile (in_mIsTextFile),
mProperty_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex),
mProperty_mWrapperFileIndex (in_mWrapperFileIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_wrapperFileMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAbsoluteFilePath.isValid () && mProperty_mIsTextFile.isValid () && mProperty_mWrapperDirectoryIndex.isValid () && mProperty_mWrapperFileIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_wrapperFileMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperFileMap (mProperty_lkey, mProperty_mAbsoluteFilePath, mProperty_mIsTextFile, mProperty_mWrapperDirectoryIndex, mProperty_mWrapperFileIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_wrapperFileMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAbsoluteFilePath" ":" ;
  mProperty_mAbsoluteFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsTextFile" ":" ;
  mProperty_mIsTextFile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperDirectoryIndex" ":" ;
  mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperFileIndex" ":" ;
  mProperty_mWrapperFileIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_wrapperFileMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperFileMap * operand = (cMapElement_wrapperFileMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAbsoluteFilePath.objectCompare (operand->mProperty_mAbsoluteFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsTextFile.objectCompare (operand->mProperty_mIsTextFile) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWrapperDirectoryIndex.objectCompare (operand->mProperty_mWrapperDirectoryIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWrapperFileIndex.objectCompare (operand->mProperty_mWrapperFileIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap::GALGAS_wrapperFileMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap::GALGAS_wrapperFileMap (const GALGAS_wrapperFileMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap & GALGAS_wrapperFileMap::operator = (const GALGAS_wrapperFileMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::constructor_mapWithMapToOverride (const GALGAS_wrapperFileMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperFileMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_string & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_uint & inArgument2,
                                                 const GALGAS_uint & inArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperFileMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_string inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_uint inArgument2,
                                              GALGAS_uint inArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_wrapperFileMap_searchKey = "INTERNAL ERROR" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_string & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_uint & outArgument2,
                                              GALGAS_uint & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_wrapperFileMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    outArgument0 = p->mProperty_mAbsoluteFilePath ;
    outArgument1 = p->mProperty_mIsTextFile ;
    outArgument2 = p->mProperty_mWrapperDirectoryIndex ;
    outArgument3 = p->mProperty_mWrapperFileIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_wrapperFileMap::getter_mAbsoluteFilePathForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mAbsoluteFilePath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_wrapperFileMap::getter_mIsTextFileForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mIsTextFile ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_wrapperFileMap::getter_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mWrapperDirectoryIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_wrapperFileMap::getter_mWrapperFileIndexForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mProperty_mWrapperFileIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap::setter_setMAbsoluteFilePathForKey (GALGAS_string inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mAbsoluteFilePath = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap::setter_setMIsTextFileForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mIsTextFile = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap::setter_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperFileMap::setter_setMWrapperFileIndexForKey (GALGAS_uint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mProperty_mWrapperFileIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_wrapperFileMap * GALGAS_wrapperFileMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * result = (cMapElement_wrapperFileMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperFileMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_wrapperFileMap::cEnumerator_wrapperFileMap (const GALGAS_wrapperFileMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap_2D_element cEnumerator_wrapperFileMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return GALGAS_wrapperFileMap_2D_element (p->mProperty_lkey, p->mProperty_mAbsoluteFilePath, p->mProperty_mIsTextFile, p->mProperty_mWrapperDirectoryIndex, p->mProperty_mWrapperFileIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_wrapperFileMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_wrapperFileMap::current_mAbsoluteFilePath (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mAbsoluteFilePath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_wrapperFileMap::current_mIsTextFile (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mIsTextFile ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_wrapperFileMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_wrapperFileMap::current_mWrapperFileIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mProperty_mWrapperFileIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperFileMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_string & outArgument0,
                                                GALGAS_bool & outArgument1,
                                                GALGAS_uint & outArgument2,
                                                GALGAS_uint & outArgument3) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    outArgument0 = p->mProperty_mAbsoluteFilePath ;
    outArgument1 = p->mProperty_mIsTextFile ;
    outArgument2 = p->mProperty_mWrapperDirectoryIndex ;
    outArgument3 = p->mProperty_mWrapperFileIndex ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperFileMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperFileMap ("wrapperFileMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperFileMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperFileMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperFileMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  const GALGAS_wrapperFileMap * p = (const GALGAS_wrapperFileMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperFileMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_wrapperDirectoryMap::cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                                  const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                                  const GALGAS_uint & in_mWrapperDirectoryIndex
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRegularFileMap (in_mRegularFileMap),
mProperty_mDirectoryMap (in_mDirectoryMap),
mProperty_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_wrapperDirectoryMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegularFileMap.isValid () && mProperty_mDirectoryMap.isValid () && mProperty_mWrapperDirectoryIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_wrapperDirectoryMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperDirectoryMap (mProperty_lkey, mProperty_mRegularFileMap, mProperty_mDirectoryMap, mProperty_mWrapperDirectoryIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_wrapperDirectoryMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularFileMap" ":" ;
  mProperty_mRegularFileMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDirectoryMap" ":" ;
  mProperty_mDirectoryMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperDirectoryIndex" ":" ;
  mProperty_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_wrapperDirectoryMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperDirectoryMap * operand = (cMapElement_wrapperDirectoryMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegularFileMap.objectCompare (operand->mProperty_mRegularFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDirectoryMap.objectCompare (operand->mProperty_mDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWrapperDirectoryIndex.objectCompare (operand->mProperty_mWrapperDirectoryIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap::GALGAS_wrapperDirectoryMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap::GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap & GALGAS_wrapperDirectoryMap::operator = (const GALGAS_wrapperDirectoryMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::constructor_mapWithMapToOverride (const GALGAS_wrapperDirectoryMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperDirectoryMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_wrapperFileMap & inArgument0,
                                                      const GALGAS_wrapperDirectoryMap & inArgument1,
                                                      const GALGAS_uint & inArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperDirectoryMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_wrapperFileMap inArgument0,
                                                   GALGAS_wrapperDirectoryMap inArgument1,
                                                   GALGAS_uint inArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey = "INTERNAL ERROR" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_wrapperFileMap & outArgument0,
                                                   GALGAS_wrapperDirectoryMap & outArgument1,
                                                   GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_wrapperDirectoryMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    outArgument0 = p->mProperty_mRegularFileMap ;
    outArgument1 = p->mProperty_mDirectoryMap ;
    outArgument2 = p->mProperty_mWrapperDirectoryIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_wrapperDirectoryMap::getter_mRegularFileMapForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_wrapperFileMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mProperty_mRegularFileMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::getter_mDirectoryMapForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mProperty_mDirectoryMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_wrapperDirectoryMap::getter_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mProperty_mWrapperDirectoryIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap::setter_setMRegularFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mProperty_mRegularFileMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap::setter_setMDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mProperty_mDirectoryMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperDirectoryMap::setter_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mProperty_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_wrapperDirectoryMap * GALGAS_wrapperDirectoryMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * result = (cMapElement_wrapperDirectoryMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperDirectoryMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_wrapperDirectoryMap::cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap_2D_element cEnumerator_wrapperDirectoryMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return GALGAS_wrapperDirectoryMap_2D_element (p->mProperty_lkey, p->mProperty_mRegularFileMap, p->mProperty_mDirectoryMap, p->mProperty_mWrapperDirectoryIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_wrapperDirectoryMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap cEnumerator_wrapperDirectoryMap::current_mRegularFileMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mRegularFileMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap cEnumerator_wrapperDirectoryMap::current_mDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mDirectoryMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_wrapperDirectoryMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mProperty_mWrapperDirectoryIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperDirectoryMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_wrapperFileMap & outArgument0,
                                                     GALGAS_wrapperDirectoryMap & outArgument1,
                                                     GALGAS_uint & outArgument2) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    outArgument0 = p->mProperty_mRegularFileMap ;
    outArgument1 = p->mProperty_mDirectoryMap ;
    outArgument2 = p->mProperty_mWrapperDirectoryIndex ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperDirectoryMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperDirectoryMap ("wrapperDirectoryMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperDirectoryMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperDirectoryMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperDirectoryMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  const GALGAS_wrapperDirectoryMap * p = (const GALGAS_wrapperDirectoryMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperDirectoryMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_filewrapperTemplateMap::cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_functionSignature & in_mTemplateSignature,
                                                                        const GALGAS_lstring & in_mFilewrapperTemplatePath
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTemplateSignature (in_mTemplateSignature),
mProperty_mFilewrapperTemplatePath (in_mFilewrapperTemplatePath) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_filewrapperTemplateMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTemplateSignature.isValid () && mProperty_mFilewrapperTemplatePath.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_filewrapperTemplateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_filewrapperTemplateMap (mProperty_lkey, mProperty_mTemplateSignature, mProperty_mFilewrapperTemplatePath COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_filewrapperTemplateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTemplateSignature" ":" ;
  mProperty_mTemplateSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplatePath" ":" ;
  mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_filewrapperTemplateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_filewrapperTemplateMap * operand = (cMapElement_filewrapperTemplateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTemplateSignature.objectCompare (operand->mProperty_mTemplateSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplatePath.objectCompare (operand->mProperty_mFilewrapperTemplatePath) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap::GALGAS_filewrapperTemplateMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap::GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap & GALGAS_filewrapperTemplateMap::operator = (const GALGAS_filewrapperTemplateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::constructor_mapWithMapToOverride (const GALGAS_filewrapperTemplateMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_functionSignature & inArgument0,
                                                         const GALGAS_lstring & inArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperTemplateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap::setter_insertKey (GALGAS_lstring inKey,
                                                      GALGAS_functionSignature inArgument0,
                                                      GALGAS_lstring inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper template has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey = "the '%K' filewrapper template is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_functionSignature & outArgument0,
                                                      GALGAS_lstring & outArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_filewrapperTemplateMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    outArgument0 = p->mProperty_mTemplateSignature ;
    outArgument1 = p->mProperty_mFilewrapperTemplatePath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_filewrapperTemplateMap::getter_mTemplateSignatureForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mProperty_mTemplateSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateMap::getter_mFilewrapperTemplatePathForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mProperty_mFilewrapperTemplatePath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap::setter_setMTemplateSignatureForKey (GALGAS_functionSignature inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mProperty_mTemplateSignature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateMap::setter_setMFilewrapperTemplatePathForKey (GALGAS_lstring inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mProperty_mFilewrapperTemplatePath = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_filewrapperTemplateMap * GALGAS_filewrapperTemplateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * result = (cMapElement_filewrapperTemplateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperTemplateMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_filewrapperTemplateMap::cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap_2D_element cEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return GALGAS_filewrapperTemplateMap_2D_element (p->mProperty_lkey, p->mProperty_mTemplateSignature, p->mProperty_mFilewrapperTemplatePath) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionSignature cEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mTemplateSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mProperty_mFilewrapperTemplatePath ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperTemplateMap::optional_searchKey (const GALGAS_string & inKey,
                                                        GALGAS_functionSignature & outArgument0,
                                                        GALGAS_lstring & outArgument1) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    outArgument0 = p->mProperty_mTemplateSignature ;
    outArgument1 = p->mProperty_mFilewrapperTemplatePath ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateMap ("filewrapperTemplateMap",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  const GALGAS_filewrapperTemplateMap * p = (const GALGAS_filewrapperTemplateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_filewrapperMap::cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & in_mFilewrapperPath,
                                                        const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                                        const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                        const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                        const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                                        const GALGAS_bool & in_mIsInternal
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFilewrapperPath (in_mFilewrapperPath),
mProperty_mFilewrapperExtensionList (in_mFilewrapperExtensionList),
mProperty_mFilewrapperFileMap (in_mFilewrapperFileMap),
mProperty_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mProperty_mFilewrapperTemplateMap (in_mFilewrapperTemplateMap),
mProperty_mIsInternal (in_mIsInternal) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_filewrapperMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFilewrapperPath.isValid () && mProperty_mFilewrapperExtensionList.isValid () && mProperty_mFilewrapperFileMap.isValid () && mProperty_mFilewrapperDirectoryMap.isValid () && mProperty_mFilewrapperTemplateMap.isValid () && mProperty_mIsInternal.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_filewrapperMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_filewrapperMap (mProperty_lkey, mProperty_mFilewrapperPath, mProperty_mFilewrapperExtensionList, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateMap, mProperty_mIsInternal COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_filewrapperMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperPath" ":" ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperExtensionList" ":" ;
  mProperty_mFilewrapperExtensionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperFileMap" ":" ;
  mProperty_mFilewrapperFileMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperDirectoryMap" ":" ;
  mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateMap" ":" ;
  mProperty_mFilewrapperTemplateMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mProperty_mIsInternal.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_filewrapperMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_filewrapperMap * operand = (cMapElement_filewrapperMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperPath.objectCompare (operand->mProperty_mFilewrapperPath) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperExtensionList.objectCompare (operand->mProperty_mFilewrapperExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperFileMap.objectCompare (operand->mProperty_mFilewrapperFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperDirectoryMap.objectCompare (operand->mProperty_mFilewrapperDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplateMap.objectCompare (operand->mProperty_mFilewrapperTemplateMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (operand->mProperty_mIsInternal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap::GALGAS_filewrapperMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap::GALGAS_filewrapperMap (const GALGAS_filewrapperMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap & GALGAS_filewrapperMap::operator = (const GALGAS_filewrapperMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap GALGAS_filewrapperMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap GALGAS_filewrapperMap::constructor_mapWithMapToOverride (const GALGAS_filewrapperMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap GALGAS_filewrapperMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & inArgument0,
                                                 const GALGAS_lstringlist & inArgument1,
                                                 const GALGAS_wrapperFileMap & inArgument2,
                                                 const GALGAS_wrapperDirectoryMap & inArgument3,
                                                 const GALGAS_filewrapperTemplateMap & inArgument4,
                                                 const GALGAS_bool & inArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lstring inArgument0,
                                              GALGAS_lstringlist inArgument1,
                                              GALGAS_wrapperFileMap inArgument2,
                                              GALGAS_wrapperDirectoryMap inArgument3,
                                              GALGAS_filewrapperTemplateMap inArgument4,
                                              GALGAS_bool inArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_filewrapperMap_searchKey = "the '%K' filewrapper is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lstring & outArgument0,
                                              GALGAS_lstringlist & outArgument1,
                                              GALGAS_wrapperFileMap & outArgument2,
                                              GALGAS_wrapperDirectoryMap & outArgument3,
                                              GALGAS_filewrapperTemplateMap & outArgument4,
                                              GALGAS_bool & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_filewrapperMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    outArgument0 = p->mProperty_mFilewrapperPath ;
    outArgument1 = p->mProperty_mFilewrapperExtensionList ;
    outArgument2 = p->mProperty_mFilewrapperFileMap ;
    outArgument3 = p->mProperty_mFilewrapperDirectoryMap ;
    outArgument4 = p->mProperty_mFilewrapperTemplateMap ;
    outArgument5 = p->mProperty_mIsInternal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperMap::getter_mFilewrapperPathForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperPath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperMap::getter_mFilewrapperExtensionListForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperExtensionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_filewrapperMap::getter_mFilewrapperFileMapForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_wrapperFileMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperFileMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_filewrapperMap::getter_mFilewrapperDirectoryMapForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperDirectoryMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap GALGAS_filewrapperMap::getter_mFilewrapperTemplateMapForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_filewrapperTemplateMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mFilewrapperTemplateMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperMap::getter_mIsInternalForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mProperty_mIsInternal ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::setter_setMFilewrapperPathForKey (GALGAS_lstring inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperPath = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::setter_setMFilewrapperExtensionListForKey (GALGAS_lstringlist inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperExtensionList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::setter_setMFilewrapperFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperFileMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::setter_setMFilewrapperDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperDirectoryMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::setter_setMFilewrapperTemplateMapForKey (GALGAS_filewrapperTemplateMap inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mFilewrapperTemplateMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperMap::setter_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mProperty_mIsInternal = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_filewrapperMap * GALGAS_filewrapperMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * result = (cMapElement_filewrapperMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_filewrapperMap::cEnumerator_filewrapperMap (const GALGAS_filewrapperMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap_2D_element cEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return GALGAS_filewrapperMap_2D_element (p->mProperty_lkey, p->mProperty_mFilewrapperPath, p->mProperty_mFilewrapperExtensionList, p->mProperty_mFilewrapperFileMap, p->mProperty_mFilewrapperDirectoryMap, p->mProperty_mFilewrapperTemplateMap, p->mProperty_mIsInternal) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperExtensionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap cEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperFileMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap cEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperDirectoryMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateMap cEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mFilewrapperTemplateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mProperty_mIsInternal ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_lstring & outArgument0,
                                                GALGAS_lstringlist & outArgument1,
                                                GALGAS_wrapperFileMap & outArgument2,
                                                GALGAS_wrapperDirectoryMap & outArgument3,
                                                GALGAS_filewrapperTemplateMap & outArgument4,
                                                GALGAS_bool & outArgument5) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    outArgument0 = p->mProperty_mFilewrapperPath ;
    outArgument1 = p->mProperty_mFilewrapperExtensionList ;
    outArgument2 = p->mProperty_mFilewrapperFileMap ;
    outArgument3 = p->mProperty_mFilewrapperDirectoryMap ;
    outArgument4 = p->mProperty_mFilewrapperTemplateMap ;
    outArgument5 = p->mProperty_mIsInternal ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperMap ("filewrapperMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperMap GALGAS_filewrapperMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  const GALGAS_filewrapperMap * p = (const GALGAS_filewrapperMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForSemanticAnalysis::cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                                                      const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPredefined (in_mIsPredefined),
mProperty_mBoolOptionMap (in_mBoolOptionMap),
mProperty_mUIntOptionMap (in_mUIntOptionMap),
mProperty_mStringOptionMap (in_mStringOptionMap),
mProperty_mStringListOptionMap (in_mStringListOptionMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_optionComponentMapForSemanticAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPredefined.isValid () && mProperty_mBoolOptionMap.isValid () && mProperty_mUIntOptionMap.isValid () && mProperty_mStringOptionMap.isValid () && mProperty_mStringListOptionMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_optionComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionComponentMapForSemanticAnalysis (mProperty_lkey, mProperty_mIsPredefined, mProperty_mBoolOptionMap, mProperty_mUIntOptionMap, mProperty_mStringOptionMap, mProperty_mStringListOptionMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_optionComponentMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPredefined" ":" ;
  mProperty_mIsPredefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoolOptionMap" ":" ;
  mProperty_mBoolOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUIntOptionMap" ":" ;
  mProperty_mUIntOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStringOptionMap" ":" ;
  mProperty_mStringOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStringListOptionMap" ":" ;
  mProperty_mStringListOptionMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_optionComponentMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForSemanticAnalysis * operand = (cMapElement_optionComponentMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (operand->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBoolOptionMap.objectCompare (operand->mProperty_mBoolOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUIntOptionMap.objectCompare (operand->mProperty_mUIntOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringOptionMap.objectCompare (operand->mProperty_mStringOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringListOptionMap.objectCompare (operand->mProperty_mStringListOptionMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis::GALGAS_optionComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis::GALGAS_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis & GALGAS_optionComponentMapForSemanticAnalysis::operator = (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_bool & inArgument0,
                                                                        const GALGAS_commandLineOptionMap & inArgument1,
                                                                        const GALGAS_commandLineOptionMap & inArgument2,
                                                                        const GALGAS_commandLineOptionMap & inArgument3,
                                                                        const GALGAS_commandLineOptionMap & inArgument4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_bool inArgument0,
                                                                     GALGAS_commandLineOptionMap inArgument1,
                                                                     GALGAS_commandLineOptionMap inArgument2,
                                                                     GALGAS_commandLineOptionMap inArgument3,
                                                                     GALGAS_commandLineOptionMap inArgument4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey = "the '%K' option component is not imported" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_bool & outArgument0,
                                                                     GALGAS_commandLineOptionMap & outArgument1,
                                                                     GALGAS_commandLineOptionMap & outArgument2,
                                                                     GALGAS_commandLineOptionMap & outArgument3,
                                                                     GALGAS_commandLineOptionMap & outArgument4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mProperty_mIsPredefined ;
    outArgument1 = p->mProperty_mBoolOptionMap ;
    outArgument2 = p->mProperty_mUIntOptionMap ;
    outArgument3 = p->mProperty_mStringOptionMap ;
    outArgument4 = p->mProperty_mStringListOptionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionComponentMapForSemanticAnalysis::getter_mIsPredefinedForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIsPredefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mBoolOptionMapForKey (const GALGAS_string & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mBoolOptionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mUIntOptionMapForKey (const GALGAS_string & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mUIntOptionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mStringOptionMapForKey (const GALGAS_string & inKey,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mStringOptionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mStringListOptionMapForKey (const GALGAS_string & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mStringListOptionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mIsPredefined = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMBoolOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mBoolOptionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMUIntOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mUIntOptionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMStringOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mStringOptionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMStringListOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                         GALGAS_string inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mProperty_mStringListOptionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_optionComponentMapForSemanticAnalysis * GALGAS_optionComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * result = (cMapElement_optionComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_optionComponentMapForSemanticAnalysis::cEnumerator_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis_2D_element cEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return GALGAS_optionComponentMapForSemanticAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mIsPredefined, p->mProperty_mBoolOptionMap, p->mProperty_mUIntOptionMap, p->mProperty_mStringOptionMap, p->mProperty_mStringListOptionMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIsPredefined ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mBoolOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mUIntOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mProperty_mStringListOptionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionComponentMapForSemanticAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                       GALGAS_bool & outArgument0,
                                                                       GALGAS_commandLineOptionMap & outArgument1,
                                                                       GALGAS_commandLineOptionMap & outArgument2,
                                                                       GALGAS_commandLineOptionMap & outArgument3,
                                                                       GALGAS_commandLineOptionMap & outArgument4) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mProperty_mIsPredefined ;
    outArgument1 = p->mProperty_mBoolOptionMap ;
    outArgument2 = p->mProperty_mUIntOptionMap ;
    outArgument3 = p->mProperty_mStringOptionMap ;
    outArgument4 = p->mProperty_mStringListOptionMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentMapForSemanticAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ("optionComponentMapForSemanticAnalysis",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  const GALGAS_optionComponentMapForSemanticAnalysis * p = (const GALGAS_optionComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis::cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                                        const GALGAS_terminalMap & in_mTerminalMap,
                                                                                                        const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                                                        const GALGAS_lstring & in_mIndexingDirectory
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTerminalMap (in_mTerminalMap),
mProperty_mIndexingListAST (in_mIndexingListAST),
mProperty_mIndexingDirectory (in_mIndexingDirectory) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_lexiqueComponentMapForSemanticAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mIndexingListAST.isValid () && mProperty_mIndexingDirectory.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexiqueComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexiqueComponentMapForSemanticAnalysis (mProperty_lkey, mProperty_mTerminalMap, mProperty_mIndexingListAST, mProperty_mIndexingDirectory COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_lexiqueComponentMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalMap" ":" ;
  mProperty_mTerminalMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingListAST" ":" ;
  mProperty_mIndexingListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingDirectory" ":" ;
  mProperty_mIndexingDirectory.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_lexiqueComponentMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * operand = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTerminalMap.objectCompare (operand->mProperty_mTerminalMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingListAST.objectCompare (operand->mProperty_mIndexingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingDirectory.objectCompare (operand->mProperty_mIndexingDirectory) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis::GALGAS_lexiqueComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis::GALGAS_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis & GALGAS_lexiqueComponentMapForSemanticAnalysis::operator = (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                         const GALGAS_terminalMap & inArgument0,
                                                                         const GALGAS_indexingListAST & inArgument1,
                                                                         const GALGAS_lstring & inArgument2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexiqueComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                      GALGAS_terminalMap inArgument0,
                                                                      GALGAS_indexingListAST inArgument1,
                                                                      GALGAS_lstring inArgument2,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' lexique component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey = "the '%K' lexique component is not imported" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                      GALGAS_terminalMap & outArgument0,
                                                                      GALGAS_indexingListAST & outArgument1,
                                                                      GALGAS_lstring & outArgument2,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mProperty_mTerminalMap ;
    outArgument1 = p->mProperty_mIndexingListAST ;
    outArgument2 = p->mProperty_mIndexingDirectory ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalMapForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_terminalMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mTerminalMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_mIndexingListASTForKey (const GALGAS_string & inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_indexingListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIndexingListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_mIndexingDirectoryForKey (const GALGAS_string & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mProperty_mIndexingDirectory ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalMapForKey (GALGAS_terminalMap inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mTerminalMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_setMIndexingListASTForKey (GALGAS_indexingListAST inAttributeValue,
                                                                                      GALGAS_string inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mIndexingListAST = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_setMIndexingDirectoryForKey (GALGAS_lstring inAttributeValue,
                                                                                        GALGAS_string inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mProperty_mIndexingDirectory = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_lexiqueComponentMapForSemanticAnalysis * GALGAS_lexiqueComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                       const GALGAS_string & inKey
                                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * result = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexiqueComponentMapForSemanticAnalysis::cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element cEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mTerminalMap, p->mProperty_mIndexingListAST, p->mProperty_mIndexingDirectory) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalMap cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mTerminalMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIndexingListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingDirectory (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mProperty_mIndexingDirectory ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexiqueComponentMapForSemanticAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                        GALGAS_terminalMap & outArgument0,
                                                                        GALGAS_indexingListAST & outArgument1,
                                                                        GALGAS_lstring & outArgument2) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mProperty_mTerminalMap ;
    outArgument1 = p->mProperty_mIndexingListAST ;
    outArgument2 = p->mProperty_mIndexingDirectory ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentMapForSemanticAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ("lexiqueComponentMapForSemanticAnalysis",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  const GALGAS_lexiqueComponentMapForSemanticAnalysis * p = (const GALGAS_lexiqueComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap::cMapElement_syntaxComponentMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lstring & in_mLexiqueName,
                                                                const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                const GALGAS_bool & in_mHasTranslateFeature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mProperty_mRuleList (in_mRuleList),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_syntaxComponentMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexiqueName.isValid () && mProperty_mNonterminalDeclarationList.isValid () && mProperty_mRuleList.isValid () && mProperty_mHasTranslateFeature.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_syntaxComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_syntaxComponentMap (mProperty_lkey, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_syntaxComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mProperty_mLexiqueName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalDeclarationList" ":" ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleList" ":" ;
  mProperty_mRuleList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_syntaxComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_syntaxComponentMap * operand = (cMapElement_syntaxComponentMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (operand->mProperty_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonterminalDeclarationList.objectCompare (operand->mProperty_mNonterminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRuleList.objectCompare (operand->mProperty_mRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (operand->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap::GALGAS_syntaxComponentMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap::GALGAS_syntaxComponentMap (const GALGAS_syntaxComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap & GALGAS_syntaxComponentMap::operator = (const GALGAS_syntaxComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::constructor_mapWithMapToOverride (const GALGAS_syntaxComponentMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_lstring & inArgument0,
                                                     const GALGAS_nonterminalDeclarationListAST & inArgument1,
                                                     const GALGAS_syntaxRuleListAST & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@syntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_lstring inArgument0,
                                                  GALGAS_nonterminalDeclarationListAST inArgument1,
                                                  GALGAS_syntaxRuleListAST inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' syntax component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_syntaxComponentMap_searchKey = "the '%K' syntax component is not parsed" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_lstring & outArgument0,
                                                  GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                  GALGAS_syntaxRuleListAST & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_syntaxComponentMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    outArgument0 = p->mProperty_mLexiqueName ;
    outArgument1 = p->mProperty_mNonterminalDeclarationList ;
    outArgument2 = p->mProperty_mRuleList ;
    outArgument3 = p->mProperty_mHasTranslateFeature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxComponentMap::getter_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mLexiqueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_syntaxComponentMap::getter_mNonterminalDeclarationListForKey (const GALGAS_string & inKey,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxComponentMap::getter_mRuleListForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_syntaxRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mRuleList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_syntaxComponentMap::getter_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mProperty_mHasTranslateFeature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap::setter_setMLexiqueNameForKey (GALGAS_lstring inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mLexiqueName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap::setter_setMNonterminalDeclarationListForKey (GALGAS_nonterminalDeclarationListAST inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mNonterminalDeclarationList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap::setter_setMRuleListForKey (GALGAS_syntaxRuleListAST inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mRuleList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentMap::setter_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mProperty_mHasTranslateFeature = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_syntaxComponentMap * GALGAS_syntaxComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * result = (cMapElement_syntaxComponentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_syntaxComponentMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_syntaxComponentMap::cEnumerator_syntaxComponentMap (const GALGAS_syntaxComponentMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap_2D_element cEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return GALGAS_syntaxComponentMap_2D_element (p->mProperty_lkey, p->mProperty_mLexiqueName, p->mProperty_mNonterminalDeclarationList, p->mProperty_mRuleList, p->mProperty_mHasTranslateFeature) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mLexiqueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST cEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mNonterminalDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST cEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mRuleList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mProperty_mHasTranslateFeature ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxComponentMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_lstring & outArgument0,
                                                    GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                    GALGAS_syntaxRuleListAST & outArgument2,
                                                    GALGAS_bool & outArgument3) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    outArgument0 = p->mProperty_mLexiqueName ;
    outArgument1 = p->mProperty_mNonterminalDeclarationList ;
    outArgument2 = p->mProperty_mRuleList ;
    outArgument3 = p->mProperty_mHasTranslateFeature ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxComponentMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentMap ("syntaxComponentMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  const GALGAS_syntaxComponentMap * p = (const GALGAS_syntaxComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_unifiedTypeMapElementClass & in_mElement
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mElement (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mElement.objectCompare (operand->mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_mapWithMapToOverride (const GALGAS_unifiedTypeMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_unifiedTypeMapElementClass & inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_internalInsertKey (GALGAS_lstring inKey,
                                                      GALGAS_unifiedTypeMapElementClass inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMap::getter_mElementForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMapElementClass result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mElement ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_setMElementForKey (GALGAS_unifiedTypeMapElementClass inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mElement = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element cEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return GALGAS_unifiedTypeMap_2D_element (p->mProperty_lkey, p->mProperty_mElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass cEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mElement ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_unifiedTypeMapElementClass & outArgument0) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mProperty_mElement ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType::cMapElement_extensionMethodMapForType (const GALGAS_lstring & inKey,
                                                                              const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParameterList (in_mFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForType::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMethodMapForType (mProperty_lkey, mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mProperty_mFormalParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionMethodMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMethodMapForType * operand = (cMapElement_extensionMethodMapForType *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalParameterList.objectCompare (operand->mProperty_mFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType::GALGAS_extensionMethodMapForType (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType::GALGAS_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType & GALGAS_extensionMethodMapForType::operator = (const GALGAS_extensionMethodMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::constructor_mapWithMapToOverride (const GALGAS_extensionMethodMapForType & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_formalParameterListAST & inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType::setter_insertKey (GALGAS_lstring inKey,
                                                         GALGAS_formalParameterListAST inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' method has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_extensionMethodMapForType::getter_mFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) attributes ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    result = p->mProperty_mFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForType::setter_setMFormalParameterListForKey (GALGAS_formalParameterListAST inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    p->mProperty_mFormalParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForType * GALGAS_extensionMethodMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * result = (cMapElement_extensionMethodMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForType) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForType::cEnumerator_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType_2D_element cEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return GALGAS_extensionMethodMapForType_2D_element (p->mProperty_lkey, p->mProperty_mFormalParameterList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForType::optional_searchKey (const GALGAS_string & inKey,
                                                           GALGAS_formalParameterListAST & outArgument0) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    outArgument0 = p->mProperty_mFormalParameterList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForType ("extensionMethodMapForType",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType result ;
  const GALGAS_extensionMethodMapForType * p = (const GALGAS_extensionMethodMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext::cMapElement_extensionMethodMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionMethodMapForType (in_mExtensionMethodMapForType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionMethodMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMethodMapForBuildingContext (mProperty_lkey, mProperty_mExtensionMethodMapForType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtensionMethodMapForType" ":" ;
  mProperty_mExtensionMethodMapForType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionMethodMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMethodMapForBuildingContext * operand = (cMapElement_extensionMethodMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExtensionMethodMapForType.objectCompare (operand->mProperty_mExtensionMethodMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext::GALGAS_extensionMethodMapForBuildingContext (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext::GALGAS_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext & GALGAS_extensionMethodMapForBuildingContext::operator = (const GALGAS_extensionMethodMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_extensionMethodMapForBuildingContext & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_extensionMethodMapForType & inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionMethodMapForType inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionMethodMapForType & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionMethodMapForType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForBuildingContext::getter_mExtensionMethodMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  GALGAS_extensionMethodMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    result = p->mProperty_mExtensionMethodMapForType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForBuildingContext::setter_setMExtensionMethodMapForTypeForKey (GALGAS_extensionMethodMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForBuildingContext * p = (cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    p->mProperty_mExtensionMethodMapForType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForBuildingContext * GALGAS_extensionMethodMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * result = (cMapElement_extensionMethodMapForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForBuildingContext) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForBuildingContext::cEnumerator_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext_2D_element cEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return GALGAS_extensionMethodMapForBuildingContext_2D_element (p->mProperty_lkey, p->mProperty_mExtensionMethodMapForType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForType cEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return p->mProperty_mExtensionMethodMapForType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForBuildingContext::optional_searchKey (const GALGAS_string & inKey,
                                                                      GALGAS_extensionMethodMapForType & outArgument0) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionMethodMapForType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForBuildingContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ("extensionMethodMapForBuildingContext",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForBuildingContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext result ;
  const GALGAS_extensionMethodMapForBuildingContext * p = (const GALGAS_extensionMethodMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForType::cMapElement_extensionSetterMapForType (const GALGAS_lstring & inKey,
                                                                              const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParameterList (in_mFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionSetterMapForType::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionSetterMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionSetterMapForType (mProperty_lkey, mProperty_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionSetterMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mProperty_mFormalParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionSetterMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionSetterMapForType * operand = (cMapElement_extensionSetterMapForType *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalParameterList.objectCompare (operand->mProperty_mFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType::GALGAS_extensionSetterMapForType (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType::GALGAS_extensionSetterMapForType (const GALGAS_extensionSetterMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType & GALGAS_extensionSetterMapForType::operator = (const GALGAS_extensionSetterMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::constructor_mapWithMapToOverride (const GALGAS_extensionSetterMapForType & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_formalParameterListAST & inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType::setter_insertKey (GALGAS_lstring inKey,
                                                         GALGAS_formalParameterListAST inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_extensionSetterMapForType::getter_mFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) attributes ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
    result = p->mProperty_mFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForType::setter_setMFormalParameterListForKey (GALGAS_formalParameterListAST inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionSetterMapForType * p = (cMapElement_extensionSetterMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
    p->mProperty_mFormalParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForType * GALGAS_extensionSetterMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * result = (cMapElement_extensionSetterMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForType) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionSetterMapForType::cEnumerator_extensionSetterMapForType (const GALGAS_extensionSetterMapForType & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType_2D_element cEnumerator_extensionSetterMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
  return GALGAS_extensionSetterMapForType_2D_element (p->mProperty_lkey, p->mProperty_mFormalParameterList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionSetterMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_extensionSetterMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
  return p->mProperty_mFormalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForType::optional_searchKey (const GALGAS_string & inKey,
                                                           GALGAS_formalParameterListAST & outArgument0) const {
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
    outArgument0 = p->mProperty_mFormalParameterList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForType ("extensionSetterMapForType",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType result ;
  const GALGAS_extensionSetterMapForType * p = (const GALGAS_extensionSetterMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForBuildingContext::cMapElement_extensionSetterMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_extensionSetterMapForType & in_mExtensionSetterMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionSetterMapForType (in_mExtensionSetterMapForType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionSetterMapForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionSetterMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionSetterMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionSetterMapForBuildingContext (mProperty_lkey, mProperty_mExtensionSetterMapForType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionSetterMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtensionSetterMapForType" ":" ;
  mProperty_mExtensionSetterMapForType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionSetterMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionSetterMapForBuildingContext * operand = (cMapElement_extensionSetterMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExtensionSetterMapForType.objectCompare (operand->mProperty_mExtensionSetterMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext::GALGAS_extensionSetterMapForBuildingContext (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext::GALGAS_extensionSetterMapForBuildingContext (const GALGAS_extensionSetterMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext & GALGAS_extensionSetterMapForBuildingContext::operator = (const GALGAS_extensionSetterMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_extensionSetterMapForBuildingContext & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_extensionSetterMapForType & inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionSetterMapForType inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionSetterMapForType & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionSetterMapForType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForBuildingContext::getter_mExtensionSetterMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) attributes ;
  GALGAS_extensionSetterMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    result = p->mProperty_mExtensionSetterMapForType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForBuildingContext::setter_setMExtensionSetterMapForTypeForKey (GALGAS_extensionSetterMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionSetterMapForBuildingContext * p = (cMapElement_extensionSetterMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    p->mProperty_mExtensionSetterMapForType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForBuildingContext * GALGAS_extensionSetterMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * result = (cMapElement_extensionSetterMapForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForBuildingContext) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionSetterMapForBuildingContext::cEnumerator_extensionSetterMapForBuildingContext (const GALGAS_extensionSetterMapForBuildingContext & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext_2D_element cEnumerator_extensionSetterMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
  return GALGAS_extensionSetterMapForBuildingContext_2D_element (p->mProperty_lkey, p->mProperty_mExtensionSetterMapForType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionSetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForType cEnumerator_extensionSetterMapForBuildingContext::current_mExtensionSetterMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
  return p->mProperty_mExtensionSetterMapForType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForBuildingContext::optional_searchKey (const GALGAS_string & inKey,
                                                                      GALGAS_extensionSetterMapForType & outArgument0) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionSetterMapForType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForBuildingContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ("extensionSetterMapForBuildingContext",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext result ;
  const GALGAS_extensionSetterMapForBuildingContext * p = (const GALGAS_extensionSetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForType::cMapElement_extensionGetterMapForType (const GALGAS_lstring & inKey,
                                                                              const GALGAS_lstring & in_mResultTypeName,
                                                                              const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mResultTypeName (in_mResultTypeName),
mProperty_mInputFormalParameterList (in_mInputFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionGetterMapForType::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultTypeName.isValid () && mProperty_mInputFormalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionGetterMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionGetterMapForType (mProperty_lkey, mProperty_mResultTypeName, mProperty_mInputFormalParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionGetterMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultTypeName" ":" ;
  mProperty_mResultTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputFormalParameterList" ":" ;
  mProperty_mInputFormalParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionGetterMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionGetterMapForType * operand = (cMapElement_extensionGetterMapForType *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (operand->mProperty_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInputFormalParameterList.objectCompare (operand->mProperty_mInputFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType::GALGAS_extensionGetterMapForType (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType::GALGAS_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType & GALGAS_extensionGetterMapForType::operator = (const GALGAS_extensionGetterMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::constructor_mapWithMapToOverride (const GALGAS_extensionGetterMapForType & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_lstring & inArgument0,
                                                            const GALGAS_formalInputParameterListAST & inArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType::setter_insertKey (GALGAS_lstring inKey,
                                                         GALGAS_lstring inArgument0,
                                                         GALGAS_formalInputParameterListAST inArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' getter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterMapForType::getter_mResultTypeNameForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    result = p->mProperty_mResultTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_extensionGetterMapForType::getter_mInputFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) attributes ;
  GALGAS_formalInputParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    result = p->mProperty_mInputFormalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType::setter_setMResultTypeNameForKey (GALGAS_lstring inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    p->mProperty_mResultTypeName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForType::setter_setMInputFormalParameterListForKey (GALGAS_formalInputParameterListAST inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    p->mProperty_mInputFormalParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForType * GALGAS_extensionGetterMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * result = (cMapElement_extensionGetterMapForType *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForType) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionGetterMapForType::cEnumerator_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType_2D_element cEnumerator_extensionGetterMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return GALGAS_extensionGetterMapForType_2D_element (p->mProperty_lkey, p->mProperty_mResultTypeName, p->mProperty_mInputFormalParameterList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionGetterMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionGetterMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return p->mProperty_mResultTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST cEnumerator_extensionGetterMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return p->mProperty_mInputFormalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForType::optional_searchKey (const GALGAS_string & inKey,
                                                           GALGAS_lstring & outArgument0,
                                                           GALGAS_formalInputParameterListAST & outArgument1) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    outArgument0 = p->mProperty_mResultTypeName ;
    outArgument1 = p->mProperty_mInputFormalParameterList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForType ("extensionGetterMapForType",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType result ;
  const GALGAS_extensionGetterMapForType * p = (const GALGAS_extensionGetterMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForBuildingContext::cMapElement_extensionGetterMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExtensionGetterMapForType (in_mExtensionGetterMapForType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionGetterMapForBuildingContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtensionGetterMapForType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionGetterMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionGetterMapForBuildingContext (mProperty_lkey, mProperty_mExtensionGetterMapForType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionGetterMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtensionGetterMapForType" ":" ;
  mProperty_mExtensionGetterMapForType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionGetterMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionGetterMapForBuildingContext * operand = (cMapElement_extensionGetterMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterMapForType.objectCompare (operand->mProperty_mExtensionGetterMapForType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext::GALGAS_extensionGetterMapForBuildingContext (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext::GALGAS_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext & GALGAS_extensionGetterMapForBuildingContext::operator = (const GALGAS_extensionGetterMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_extensionGetterMapForBuildingContext & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_extensionGetterMapForType & inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionGetterMapForType inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionGetterMapForType & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionGetterMapForType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForBuildingContext::getter_mExtensionGetterMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) attributes ;
  GALGAS_extensionGetterMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    result = p->mProperty_mExtensionGetterMapForType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForBuildingContext::setter_setMExtensionGetterMapForTypeForKey (GALGAS_extensionGetterMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForBuildingContext * p = (cMapElement_extensionGetterMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    p->mProperty_mExtensionGetterMapForType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForBuildingContext * GALGAS_extensionGetterMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * result = (cMapElement_extensionGetterMapForBuildingContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForBuildingContext) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionGetterMapForBuildingContext::cEnumerator_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext_2D_element cEnumerator_extensionGetterMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
  return GALGAS_extensionGetterMapForBuildingContext_2D_element (p->mProperty_lkey, p->mProperty_mExtensionGetterMapForType) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionGetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForType cEnumerator_extensionGetterMapForBuildingContext::current_mExtensionGetterMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
  return p->mProperty_mExtensionGetterMapForType ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForBuildingContext::optional_searchKey (const GALGAS_string & inKey,
                                                                      GALGAS_extensionGetterMapForType & outArgument0) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    outArgument0 = p->mProperty_mExtensionGetterMapForType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForBuildingContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ("extensionGetterMapForBuildingContext",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext result ;
  const GALGAS_extensionGetterMapForBuildingContext * p = (const GALGAS_extensionGetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_semanticDeclarationAST_keyRepresentation> gExtensionGetterTable_semanticDeclarationAST_keyRepresentation ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_keyRepresentation (const int32_t inClassIndex,
                                             enterExtensionGetter_semanticDeclarationAST_keyRepresentation inGetter) {
  gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_semanticDeclarationAST_keyRepresentation (void) {
  gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationAST_keyRepresentation (NULL,
                                                                     freeExtensionGetter_semanticDeclarationAST_keyRepresentation) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_semanticDeclarationAST_keyRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.count ()) {
      f = gExtensionGetterTable_semanticDeclarationAST_keyRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.count ()) {
           f = gExtensionGetterTable_semanticDeclarationAST_keyRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//
//Abstract extension method '@semanticDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticDeclarationAST_enterInSemanticContext> gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_semanticDeclarationAST_enterInSemanticContext inMethod) {
  gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticDeclarationAST_enterInSemanticContext (void) {
  gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticDeclarationAST_enterInSemanticContext (NULL,
                                                                          freeExtensionMethod_semanticDeclarationAST_enterInSemanticContext) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                 const GALGAS_extensionMethodMapForBuildingContext constin_inExtensionMethodMapForBuildingContext,
                                                 const GALGAS_extensionGetterMapForBuildingContext constin_inExtensionGetterMapForBuildingContext,
                                                 const GALGAS_extensionSetterMapForBuildingContext constin_inExtensionSetterMapForBuildingContext,
                                                 GALGAS_semanticContext & io_ioSemanticContext,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticDeclarationAST_enterInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.count ()) {
      f = gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.count ()) {
          f = gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inExtensionMethodMapForBuildingContext, constin_inExtensionGetterMapForBuildingContext, constin_inExtensionSetterMapForBuildingContext, io_ioSemanticContext, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@predefinedTypeKindEnum defaultConstructorName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_defaultConstructorName (const GALGAS_predefinedTypeKindEnum & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_predefinedTypeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("default") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_result = GALGAS_string ("emptyBinarySet") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_result = GALGAS_string ("emptySet") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_result = GALGAS_string ("emptyData") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_result = GALGAS_string ("nowhere") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_result = GALGAS_string ("zero") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_result = GALGAS_string ("start") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------

cMapElement_wrapperExtensionMap::cMapElement_wrapperExtensionMap (const GALGAS_lstring & inKey
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_wrapperExtensionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_wrapperExtensionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperExtensionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_wrapperExtensionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_wrapperExtensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperExtensionMap * operand = (cMapElement_wrapperExtensionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap::GALGAS_wrapperExtensionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap::GALGAS_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap & GALGAS_wrapperExtensionMap::operator = (const GALGAS_wrapperExtensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::constructor_mapWithMapToOverride (const GALGAS_wrapperExtensionMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperExtensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperExtensionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperExtensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_wrapperExtensionMap::setter_insertKey (GALGAS_lstring inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperExtensionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_wrapperExtensionMap * GALGAS_wrapperExtensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * result = (cMapElement_wrapperExtensionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperExtensionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_wrapperExtensionMap::cEnumerator_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap_2D_element cEnumerator_wrapperExtensionMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperExtensionMap * p = (const cMapElement_wrapperExtensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperExtensionMap) ;
  return GALGAS_wrapperExtensionMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_wrapperExtensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_wrapperExtensionMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_wrapperExtensionMap * p = (const cMapElement_wrapperExtensionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_wrapperExtensionMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@wrapperExtensionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperExtensionMap ("wrapperExtensionMap",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_wrapperExtensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_wrapperExtensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperExtensionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap result ;
  const GALGAS_wrapperExtensionMap * p = (const GALGAS_wrapperExtensionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperExtensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//'@semanticTypePrecedenceGraph' graph
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph::GALGAS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                         GALGAS_semanticDeclarationAST inArgument_0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' type is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_topologicalSort (GALGAS_semanticDeclarationListAST & outSortedList,
                                                                 GALGAS_lstringlist & outSortedKeyList,
                                                                 GALGAS_semanticDeclarationListAST & outUnsortedList,
                                                                 GALGAS_lstringlist & outUnsortedKeyList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GALGAS_semanticDeclarationListAST (unsortedList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_semanticDeclarationListAST & outSortedList,
                                                                           GALGAS_lstringlist & outSortedKeyList,
                                                                           GALGAS_semanticDeclarationListAST & outUnsortedList,
                                                                           GALGAS_lstringlist & outUnsortedKeyList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GALGAS_semanticDeclarationListAST (unsortedList) ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_circularities (GALGAS_semanticDeclarationListAST & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_semanticDeclarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_semanticDeclarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_semanticDeclarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_semanticDeclarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_semanticDeclarationListAST (infoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                   const GALGAS_stringset & inNodesToExclude,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypePrecedenceGraph type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  const GALGAS_semanticTypePrecedenceGraph * p = (const GALGAS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticDeclarationAST_enterDeclarationInGraph> gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterDeclarationInGraph (const int32_t inClassIndex,
                                                   extensionMethodSignature_semanticDeclarationAST_enterDeclarationInGraph inMethod) {
  gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticDeclarationAST_enterDeclarationInGraph (void) {
  gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticDeclarationAST_enterDeclarationInGraph (NULL,
                                                                           freeExtensionMethod_semanticDeclarationAST_enterDeclarationInGraph) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                  GALGAS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  GALGAS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  GALGAS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  GALGAS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  GALGAS_semanticDeclarationListAST & io_ioExtensionOverrideDefinitionList,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticDeclarationAST_enterDeclarationInGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph.count ()) {
      f = gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph.count ()) {
          f = gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticDeclarationAST_enterDeclarationInGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticTypePrecedenceGraph, io_ioExtensionMethodMapForBuildingContext, io_ioExtensionGetterMapForBuildingContext, io_ioExtensionSetterMapForBuildingContext, io_ioExtensionOverrideDefinitionList, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticDeclarationAST_addAssociatedElement> gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_addAssociatedElement (const int32_t inClassIndex,
                                                extensionMethodSignature_semanticDeclarationAST_addAssociatedElement inMethod) {
  gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                               GALGAS_semanticDeclarationListAST & io_ioSemanticDeclarationList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticDeclarationAST_addAssociatedElement f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement.count ()) {
      f = gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement.count ()) {
           f = gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticDeclarationList, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_semanticDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioSemanticDeclarationList */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_semanticDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_semanticDeclarationAST.mSlotID,
                                             extensionMethod_semanticDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticDeclarationAST_addAssociatedElement (void) {
  gExtensionMethodTable_semanticDeclarationAST_addAssociatedElement.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticDeclarationAST_addAssociatedElement (defineExtensionMethod_semanticDeclarationAST_addAssociatedElement,
                                                                        freeExtensionMethod_semanticDeclarationAST_addAssociatedElement) ;

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
//Class for element of '@semanticExpressionListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_semanticExpressionListForGeneration : public cCollectionElement {
  public: GALGAS_semanticExpressionListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_semanticExpressionListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticExpressionListForGeneration (const GALGAS_semanticExpressionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_semanticExpressionListForGeneration::cCollectionElement_semanticExpressionListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_semanticExpressionListForGeneration::cCollectionElement_semanticExpressionListForGeneration (const GALGAS_semanticExpressionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticExpressionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticExpressionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticExpressionListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_semanticExpressionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_semanticExpressionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticExpressionListForGeneration * operand = (cCollectionElement_semanticExpressionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticExpressionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration::GALGAS_semanticExpressionListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration::GALGAS_semanticExpressionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticExpressionListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::constructor_listWithValue (const GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticExpressionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_semanticExpressionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration::addAssign_operation (const GALGAS_semanticExpressionForGeneration & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_semanticExpressionListForGeneration::setter_append (GALGAS_semanticExpressionListForGeneration_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_semanticExpressionListForGeneration::setter_insertAtIndex (const GALGAS_semanticExpressionForGeneration inOperand0,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_semanticExpressionListForGeneration::setter_removeAtIndex (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
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

void GALGAS_semanticExpressionListForGeneration::setter_popFirst (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration::setter_popLast (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration::method_first (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration::method_last (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::add_operation (const GALGAS_semanticExpressionListForGeneration & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration::plusAssign_operation (const GALGAS_semanticExpressionListForGeneration inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticExpressionListForGeneration::setter_setMExpressionAtIndex (GALGAS_semanticExpressionForGeneration inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionListForGeneration::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_semanticExpressionListForGeneration::cEnumerator_semanticExpressionListForGeneration (const GALGAS_semanticExpressionListForGeneration & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration_2D_element cEnumerator_semanticExpressionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration cEnumerator_semanticExpressionListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@semanticExpressionListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ("semanticExpressionListForGeneration",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration result ;
  const GALGAS_semanticExpressionListForGeneration * p = (const GALGAS_semanticExpressionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @actualParameterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_actualParameterForGeneration::objectCompare (const GALGAS_actualParameterForGeneration & inOperand) const {
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

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterForGeneration::setter_setMFormalArgumentType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_actualParameterForGeneration * p = (cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    p->mProperty_mFormalArgumentType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_actualParameterForGeneration::readProperty_mFormalArgumentType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_actualParameterForGeneration * p = (cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    return p->mProperty_mFormalArgumentType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType
                                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mFormalArgumentType (in_mFormalArgumentType) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterForGeneration ("actualParameterForGeneration",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration GALGAS_actualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterForGeneration result ;
  const GALGAS_actualParameterForGeneration * p = (const GALGAS_actualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualParameterForGeneration_2D_weak::objectCompare (const GALGAS_actualParameterForGeneration_2D_weak & inOperand) const {
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

GALGAS_actualParameterForGeneration_2D_weak::GALGAS_actualParameterForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak & GALGAS_actualParameterForGeneration_2D_weak::operator = (const GALGAS_actualParameterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak::GALGAS_actualParameterForGeneration_2D_weak (const GALGAS_actualParameterForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak GALGAS_actualParameterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_actualParameterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration GALGAS_actualParameterForGeneration_2D_weak::bang_actualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterForGeneration) ;
      result = GALGAS_actualParameterForGeneration ((cPtr_actualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualParameterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak ("actualParameterForGeneration-weak",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterForGeneration_2D_weak GALGAS_actualParameterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterForGeneration_2D_weak result ;
  const GALGAS_actualParameterForGeneration_2D_weak * p = (const GALGAS_actualParameterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_actualParameterForGeneration_generateActualParameter> gExtensionMethodTable_actualParameterForGeneration_generateActualParameter ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateActualParameter (const int32_t inClassIndex,
                                                   extensionMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_actualParameterForGeneration_generateActualParameter (void) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_actualParameterForGeneration_generateActualParameter (NULL,
                                                                                 freeExtensionMethod_actualParameterForGeneration_generateActualParameter) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                  GALGAS_stringset & io_ioInclusionSet,
                                                  GALGAS_uint & io_ioTemporaryVariableIndex,
                                                  GALGAS_string & io_ioImplementation,
                                                  GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GALGAS_stringlist & io_ioOutputVariableList,
                                                  GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GALGAS_string & out_outCppName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppName.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_actualParameterForGeneration_generateActualParameter f = NULL ;
    if (classIndex < gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
      f = gExtensionMethodTable_actualParameterForGeneration_generateActualParameter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
          f = gExtensionMethodTable_actualParameterForGeneration_generateActualParameter (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioImplementation, io_ioJokerParametersToReleaseList, io_ioOutputVariableList, io_ioUnusedVariableCppNameSet, out_outCppName, inCompiler COMMA_THERE) ;
    }
  }
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
// @outputInputActualParameterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outputInputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutputInputVariableCppName.objectCompare (p->mProperty_mOutputInputVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeList.objectCompare (p->mProperty_mTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outputInputActualParameterForGeneration::objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const {
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

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mFormalArgumentType,
                                                                                                                const GALGAS_string & inAttribute_mOutputInputVariableCppName,
                                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                                const GALGAS_unifiedTypeMap_2D_entryList & inAttribute_mTypeList
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputInputVariableCppName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mTypeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputInputVariableCppName, inAttribute_mStructAttributeList, inAttribute_mTypeList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMOutputInputVariableCppName (GALGAS_string inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mOutputInputVariableCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outputInputActualParameterForGeneration::setter_setMTypeList (GALGAS_unifiedTypeMap_2D_entryList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    p->mProperty_mTypeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_outputInputActualParameterForGeneration::readProperty_mOutputInputVariableCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mOutputInputVariableCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_outputInputActualParameterForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entryList GALGAS_outputInputActualParameterForGeneration::readProperty_mTypeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entryList () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mTypeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                                                            const GALGAS_string & in_mOutputInputVariableCppName,
                                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                            const GALGAS_unifiedTypeMap_2D_entryList & in_mTypeList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mOutputInputVariableCppName (in_mOutputInputVariableCppName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mTypeList (in_mTypeList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

void cPtr_outputInputActualParameterForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@outputInputActualParameterForGeneration:" ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutputInputVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputInputVariableCppName, mProperty_mStructAttributeList, mProperty_mTypeList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputActualParameterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ("outputInputActualParameterForGeneration",
                                                                & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration result ;
  const GALGAS_outputInputActualParameterForGeneration * p = (const GALGAS_outputInputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outputInputActualParameterForGeneration_2D_weak::objectCompare (const GALGAS_outputInputActualParameterForGeneration_2D_weak & inOperand) const {
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

GALGAS_outputInputActualParameterForGeneration_2D_weak::GALGAS_outputInputActualParameterForGeneration_2D_weak (void) :
GALGAS_actualParameterForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak & GALGAS_outputInputActualParameterForGeneration_2D_weak::operator = (const GALGAS_outputInputActualParameterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak::GALGAS_outputInputActualParameterForGeneration_2D_weak (const GALGAS_outputInputActualParameterForGeneration & inSource) :
GALGAS_actualParameterForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak GALGAS_outputInputActualParameterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration_2D_weak::bang_outputInputActualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputActualParameterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterForGeneration) ;
      result = GALGAS_outputInputActualParameterForGeneration ((cPtr_outputInputActualParameterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@outputInputActualParameterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2D_weak ("outputInputActualParameterForGeneration-weak",
                                                                        & kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterForGeneration_2D_weak GALGAS_outputInputActualParameterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration_2D_weak result ;
  const GALGAS_outputInputActualParameterForGeneration_2D_weak * p = (const GALGAS_outputInputActualParameterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

