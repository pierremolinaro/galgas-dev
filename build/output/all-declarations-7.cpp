#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//  Map type @routineArgumentMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::GGS_routineArgumentMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::~ GGS_routineArgumentMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::GGS_routineArgumentMap (const GGS_routineArgumentMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap & GGS_routineArgumentMap::operator = (const GGS_routineArgumentMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineArgumentMap::getter_contains (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineArgumentMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineArgumentMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineArgumentMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineArgumentMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_routineArgumentMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineArgumentMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::performInsert (const GGS_routineArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineArgumentMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>
GGS_routineArgumentMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineArgumentMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>>
GGS_routineArgumentMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineArgumentMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_ GGS_routineArgumentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineArgumentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineArgumentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineArgumentMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRoutineSignature = info->mProperty_mRoutineSignature ;
      element.mProperty_mIsFilePrivate = info->mProperty_mIsFilePrivate ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::class_func_mapWithMapToOverride (const GGS_routineArgumentMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineArgumentMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_formalParameterSignature inArgument0,
                                               GGS_bool inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_routineArgumentMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_formalParameterSignature & outArgument0,
                                               GGS_bool & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "-- internal error --" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mRoutineSignature ;
    outArgument1 = info->mProperty_mIsFilePrivate ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_routineArgumentMap::getter_mRoutineSignatureForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRoutineSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineArgumentMap::getter_mIsFilePrivateForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsFilePrivate ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_setMRoutineSignatureForKey (GGS_formalParameterSignature inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineArgumentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRoutineSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_setMIsFilePrivateForKey (GGS_bool inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineArgumentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsFilePrivate = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineArgumentMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRoutineSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mRoutineSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsFilePrivate:") ;
    inArray (i COMMA_HERE)->mProperty_mIsFilePrivate.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> array = sortedInfoArray () ;
    GGS_routineArgumentMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineArgumentMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineArgumentMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineArgumentMap::DownEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element DownEnumerator_routineArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_routineArgumentMap::current_mRoutineSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineArgumentMap::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsFilePrivate ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineArgumentMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineArgumentMap::UpEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element UpEnumerator_routineArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_routineArgumentMap::current_mRoutineSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineArgumentMap::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsFilePrivate ;
}


//--------------------------------------------------------------------------------------------------
//     @routineArgumentMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap ("routineArgumentMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentMap ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@acceptableParameterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_acceptableParameterList : public CollectionElementPtr {
  public: GGS_acceptableParameterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_acceptableParameterList (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                        const GGS_bool & in_mIsFilePrivate
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_acceptableParameterList (const GGS_acceptableParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_acceptableParameterList::CollectionElementPtr_acceptableParameterList (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                            const GGS_bool & in_mIsFilePrivate
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRoutineSignature, in_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_acceptableParameterList::CollectionElementPtr_acceptableParameterList (const GGS_acceptableParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRoutineSignature, inElement.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_acceptableParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_acceptableParameterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_acceptableParameterList (mObject.mProperty_mRoutineSignature, mObject.mProperty_mIsFilePrivate COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @acceptableParameterList
//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList::GGS_acceptableParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList::GGS_acceptableParameterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_acceptableParameterList * p = (CollectionElementPtr_acceptableParameterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_acceptableParameterList) ;
    const GGS_acceptableParameterList_2E_element element (p->mObject.mProperty_mRoutineSignature, p->mObject.mProperty_mIsFilePrivate) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_formalParameterSignature & in_mRoutineSignature,
                                                             const GGS_bool & in_mIsFilePrivate
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_acceptableParameterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_acceptableParameterList (in_mRoutineSignature, in_mIsFilePrivate COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_acceptableParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_acceptableParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRoutineSignature:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRoutineSignature.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsFilePrivate:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsFilePrivate.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_acceptableParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::plusPlusAssignOperation (const GGS_acceptableParameterList_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::class_func_listWithValue (const GGS_formalParameterSignature & inOperand0,
                                                                                   const GGS_bool & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element element (inOperand0, inOperand1) ;
  GGS_acceptableParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::addAssignOperation (const GGS_formalParameterSignature & inOperand0,
                                                      const GGS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_append (const GGS_formalParameterSignature inOperand0,
                                                 const GGS_bool inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_insertAtIndex (const GGS_formalParameterSignature inOperand0,
                                                        const GGS_bool inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_removeAtIndex (GGS_formalParameterSignature & outOperand0,
                                                        GGS_bool & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mIsFilePrivate ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_popFirst (GGS_formalParameterSignature & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIsFilePrivate ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_popLast (GGS_formalParameterSignature & outOperand0,
                                                  GGS_bool & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIsFilePrivate ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::method_first (GGS_formalParameterSignature & outOperand0,
                                                GGS_bool & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIsFilePrivate ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::method_last (GGS_formalParameterSignature & outOperand0,
                                               GGS_bool & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIsFilePrivate ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::add_operation (const GGS_acceptableParameterList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::plusAssignOperation (const GGS_acceptableParameterList inList,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_setMRoutineSignatureAtIndex (GGS_formalParameterSignature inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineSignature = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_acceptableParameterList::getter_mRoutineSignatureAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineSignature ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_setMIsFilePrivateAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsFilePrivate = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_acceptableParameterList::getter_mIsFilePrivateAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsFilePrivate ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @acceptableParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_acceptableParameterList::DownEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element DownEnumerator_acceptableParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_acceptableParameterList::current_mRoutineSignature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_acceptableParameterList::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsFilePrivate ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @acceptableParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_acceptableParameterList::UpEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element UpEnumerator_acceptableParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_acceptableParameterList::current_mRoutineSignature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_acceptableParameterList::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsFilePrivate ;
}




//--------------------------------------------------------------------------------------------------
//     @acceptableParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_acceptableParameterList ("acceptableParameterList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_acceptableParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_acceptableParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::builtDictionary (LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_syntaxExtensionsDictionary::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxExtensionsDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_syntaxExtensionsDictionary_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_syntaxExtensionsDictionary_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_syntaxExtensionsDictionary_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::plusPlusAssignOperation (const GGS_syntaxExtensionsDictionary_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::addAssignOperation (const GGS_string & inKey,
                                                         const GGS_galgas_33_SyntaxExtensionListAST & inArgument0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_insert (const GGS_string inKey,
                                                    const GGS_galgas_33_SyntaxExtensionListAST inArgument0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxExtensionsDictionary::getter_contains (const GGS_string & inKey
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::method_searchKey (GGS_string inKey,
                                                       GGS_galgas_33_SyntaxExtensionListAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_extensionList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_removeKey (GGS_string inKey,
                                                       GGS_galgas_33_SyntaxExtensionListAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_extensionList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_syntaxExtensionsDictionary::getter_extensionListForKey (const GGS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get extensionList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_extensionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_setExtensionListForKey (GGS_galgas_33_SyntaxExtensionListAST inPropertyValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_string, GGS_syntaxExtensionsDictionary_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setExtensionListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_extensionList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxExtensionsDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxExtensionsDictionary::UpEnumerator_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_syntaxExtensionsDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST UpEnumerator_syntaxExtensionsDictionary::current_extensionList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_extensionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element UpEnumerator_syntaxExtensionsDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxExtensionsDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxExtensionsDictionary::DownEnumerator_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_syntaxExtensionsDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST DownEnumerator_syntaxExtensionsDictionary::current_extensionList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_extensionList ;
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element DownEnumerator_syntaxExtensionsDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @syntaxExtensionsDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ("syntaxExtensionsDictionary",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgas_33_SyntaxExtensionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_galgas_33_SyntaxExtensionListAST : public CollectionElementPtr {
  public: GGS_galgas_33_SyntaxExtensionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                 const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                 const GGS_syntaxRuleListAST & in_mRuleList
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxExtensionListAST::CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                              const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                              const GGS_syntaxRuleListAST & in_mRuleList
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxExtensionListAST::CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_galgas_33_SyntaxExtensionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_galgas_33_SyntaxExtensionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_galgas_33_SyntaxExtensionListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @galgas_33_SyntaxExtensionListAST
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST::GGS_galgas_33_SyntaxExtensionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST::GGS_galgas_33_SyntaxExtensionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_galgas_33_SyntaxExtensionListAST * p = (CollectionElementPtr_galgas_33_SyntaxExtensionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_galgas_33_SyntaxExtensionListAST) ;
    const GGS_galgas_33_SyntaxExtensionListAST_2E_element element (p->mObject.mProperty_mSyntaxComponentName, p->mObject.mProperty_mNonterminalDeclarationList, p->mObject.mProperty_mRuleList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_galgas_33_SyntaxExtensionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_galgas_33_SyntaxExtensionListAST (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_galgas_33_SyntaxExtensionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_galgas_33_SyntaxExtensionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxComponentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mNonterminalDeclarationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mNonterminalDeclarationList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRuleList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRuleList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::plusPlusAssignOperation (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                                     const GGS_syntaxRuleListAST & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_nonterminalDeclarationListAST & inOperand1,
                                                               const GGS_syntaxRuleListAST & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_nonterminalDeclarationListAST inOperand1,
                                                          const GGS_syntaxRuleListAST inOperand2,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_nonterminalDeclarationListAST inOperand1,
                                                                 const GGS_syntaxRuleListAST inOperand2,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_nonterminalDeclarationListAST & outOperand1,
                                                                 GGS_syntaxRuleListAST & outOperand2,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mRuleList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_nonterminalDeclarationListAST & outOperand1,
                                                            GGS_syntaxRuleListAST & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_nonterminalDeclarationListAST & outOperand1,
                                                           GGS_syntaxRuleListAST & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRuleList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_nonterminalDeclarationListAST & outOperand1,
                                                         GGS_syntaxRuleListAST & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_nonterminalDeclarationListAST & outOperand1,
                                                        GGS_syntaxRuleListAST & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRuleList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::add_operation (const GGS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::plusAssignOperation (const GGS_galgas_33_SyntaxExtensionListAST inList,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxExtensionListAST::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMNonterminalDeclarationListAtIndex (GGS_nonterminalDeclarationListAST inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxExtensionListAST::getter_mNonterminalDeclarationListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_nonterminalDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMRuleListAtIndex (GGS_syntaxRuleListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxExtensionListAST::getter_mRuleListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @galgas_33_SyntaxExtensionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgas_33_SyntaxExtensionListAST::DownEnumerator_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element DownEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST DownEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST DownEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgas_33_SyntaxExtensionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgas_33_SyntaxExtensionListAST::UpEnumerator_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element UpEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST UpEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST UpEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}




//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxExtensionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ("galgas3SyntaxExtensionListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxExtensionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (const GGS_syntaxExtensions & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions & GGS_syntaxExtensions::operator = (const GGS_syntaxExtensions & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxExtensions GGS_syntaxExtensions::init (Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensions result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_syntaxExtensionsDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (const GGS_syntaxExtensionsDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensions::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensions:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxExtensions generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensions ("syntaxExtensions",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@syntaxExtensions listForKey'
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST extensionGetter_listForKey (const GGS_syntaxExtensions & inObject,
                                                                 const GGS_string & constinArgument_inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syntaxExtensions temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_contains (constinArgument_inKey COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 52)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_syntaxExtensions temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 53)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_galgas_33_SyntaxExtensionListAST::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionAST_2E_weak::objectCompare (const GGS_semanticExpressionAST_2E_weak & inOperand) const {
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

GGS_semanticExpressionAST_2E_weak::GGS_semanticExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak & GGS_semanticExpressionAST_2E_weak::operator = (const GGS_semanticExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak::GGS_semanticExpressionAST_2E_weak (const GGS_semanticExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak GGS_semanticExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_semanticExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_semanticExpressionAST result ;
  if (isValid ()) {
    const cPtr_semanticExpressionAST * p = (cPtr_semanticExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_semanticExpressionAST_2E_weak::bang_semanticExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionAST) ;
      result = GGS_semanticExpressionAST ((cPtr_semanticExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ("semanticExpressionAST.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_formalArgumentPassingModeAST & inObject,
                                   Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("\?let") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST formalArgumentMessage'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_formalArgumentMessage (const GGS_formalArgumentPassingModeAST & inObject,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("a constant input (\?let) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("an input (\?) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("an output (!) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("an input/output (\?!) formal argument") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalParameterListAST keyRepresentation'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_keyRepresentation (const GGS_formalParameterListAST & inObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  const GGS_formalParameterListAST temp_0 = inObject ;
  UpEnumerator_formalParameterListAST enumerator_4757 (temp_0) ;
  while (enumerator_4757.hasCurrentObject ()) {
    switch (enumerator_4757.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 122)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssignOperation(GGS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 124)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 126)) ;
      }
      break ;
    }
    result_result.plusAssignOperation(enumerator_4757.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 128)) ;
    enumerator_4757.gotoNextObject () ;
    if (enumerator_4757.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 130)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 132)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalInputParameterListAST initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_formalInputParameterListAST & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_formalInputParameterListAST temp_0 = inObject ;
  UpEnumerator_formalInputParameterListAST enumerator_5679 (temp_0) ;
  while (enumerator_5679.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_5679.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 153)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 153)) ;
    enumerator_5679.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractInputParameter reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInputParameter::objectCompare (const GGS_abstractInputParameter & inOperand) const {
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

GGS_abstractInputParameter::GGS_abstractInputParameter (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractInputParameter::
abstractInputParameter_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter::GGS_abstractInputParameter (const cPtr_abstractInputParameter * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInputParameter) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractInputParameter class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractInputParameter::cPtr_abstractInputParameter (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractInputParameter::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractInputParameter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInputParameter ("abstractInputParameter",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInputParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInputParameter_2E_weak::objectCompare (const GGS_abstractInputParameter_2E_weak & inOperand) const {
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

GGS_abstractInputParameter_2E_weak::GGS_abstractInputParameter_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak & GGS_abstractInputParameter_2E_weak::operator = (const GGS_abstractInputParameter & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak::GGS_abstractInputParameter_2E_weak (const GGS_abstractInputParameter & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak GGS_abstractInputParameter_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractInputParameter_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter GGS_abstractInputParameter_2E_weak::unwrappedValue (void) const {
  GGS_abstractInputParameter result ;
  if (isValid ()) {
    const cPtr_abstractInputParameter * p = (cPtr_abstractInputParameter *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractInputParameter (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter GGS_abstractInputParameter_2E_weak::bang_abstractInputParameter_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractInputParameter result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractInputParameter) ;
      result = GGS_abstractInputParameter ((cPtr_abstractInputParameter *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractInputParameter.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak ("abstractInputParameter.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInputParameter_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterAnonymousVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterAnonymousVariable::objectCompare (const GGS_inputParameterAnonymousVariable & inOperand) const {
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

GGS_inputParameterAnonymousVariable::GGS_inputParameterAnonymousVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterAnonymousVariable GGS_inputParameterAnonymousVariable::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inputParameterAnonymousVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterAnonymousVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterAnonymousVariable_init (inCompiler) ;
  const GGS_inputParameterAnonymousVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::
inputParameterAnonymousVariable_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable::GGS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterAnonymousVariable) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterAnonymousVariable class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_inputParameterAnonymousVariable::cPtr_inputParameterAnonymousVariable (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterAnonymousVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

void cPtr_inputParameterAnonymousVariable::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@inputParameterAnonymousVariable]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterAnonymousVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterAnonymousVariable (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterAnonymousVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterAnonymousVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ("inputParameterAnonymousVariable",
                                                                                    & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterAnonymousVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterAnonymousVariable_2E_weak::objectCompare (const GGS_inputParameterAnonymousVariable_2E_weak & inOperand) const {
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

GGS_inputParameterAnonymousVariable_2E_weak::GGS_inputParameterAnonymousVariable_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak & GGS_inputParameterAnonymousVariable_2E_weak::operator = (const GGS_inputParameterAnonymousVariable & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak::GGS_inputParameterAnonymousVariable_2E_weak (const GGS_inputParameterAnonymousVariable & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak GGS_inputParameterAnonymousVariable_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterAnonymousVariable_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable GGS_inputParameterAnonymousVariable_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterAnonymousVariable result ;
  if (isValid ()) {
    const cPtr_inputParameterAnonymousVariable * p = (cPtr_inputParameterAnonymousVariable *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterAnonymousVariable (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable GGS_inputParameterAnonymousVariable_2E_weak::bang_inputParameterAnonymousVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterAnonymousVariable result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterAnonymousVariable) ;
      result = GGS_inputParameterAnonymousVariable ((cPtr_inputParameterAnonymousVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterAnonymousVariable.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2E_weak ("inputParameterAnonymousVariable.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterAnonymousVariable_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterVariable::objectCompare (const GGS_inputParameterVariable & inOperand) const {
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

GGS_inputParameterVariable::GGS_inputParameterVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::
init_21_ (const GGS_lstring & in_mActualParameterName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inputParameterVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterVariable_init_21_ (in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::
inputParameterVariable_init_21_ (const GGS_lstring & in_mActualParameterName,
                                 Compiler * /* inCompiler */) {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable::GGS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GGS_lstring & in_mActualParameterName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterVariable:") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                                                           & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterVariable_2E_weak::objectCompare (const GGS_inputParameterVariable_2E_weak & inOperand) const {
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

GGS_inputParameterVariable_2E_weak::GGS_inputParameterVariable_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak & GGS_inputParameterVariable_2E_weak::operator = (const GGS_inputParameterVariable & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak::GGS_inputParameterVariable_2E_weak (const GGS_inputParameterVariable & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak GGS_inputParameterVariable_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterVariable_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterVariable result ;
  if (isValid ()) {
    const cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterVariable (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable_2E_weak::bang_inputParameterVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterVariable result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterVariable) ;
      result = GGS_inputParameterVariable ((cPtr_inputParameterVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterVariable.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable_2E_weak ("inputParameterVariable.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterVariable_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredVariable::objectCompare (const GGS_inputParameterDeclaredVariable & inOperand) const {
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

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredVariable_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::
inputParameterDeclaredVariable_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredVariable:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterDeclaredVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredVariable_2E_weak::objectCompare (const GGS_inputParameterDeclaredVariable_2E_weak & inOperand) const {
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

GGS_inputParameterDeclaredVariable_2E_weak::GGS_inputParameterDeclaredVariable_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak & GGS_inputParameterDeclaredVariable_2E_weak::operator = (const GGS_inputParameterDeclaredVariable & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak::GGS_inputParameterDeclaredVariable_2E_weak (const GGS_inputParameterDeclaredVariable & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak GGS_inputParameterDeclaredVariable_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterDeclaredVariable_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterDeclaredVariable result ;
  if (isValid ()) {
    const cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterDeclaredVariable (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable_2E_weak::bang_inputParameterDeclaredVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterDeclaredVariable result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredVariable) ;
      result = GGS_inputParameterDeclaredVariable ((cPtr_inputParameterDeclaredVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredVariable.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2E_weak ("inputParameterDeclaredVariable.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredVariable_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredConstant reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredConstant::objectCompare (const GGS_inputParameterDeclaredConstant & inOperand) const {
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

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredConstant * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredConstant (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredConstant_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredConstant result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::
inputParameterDeclaredConstant_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredConstant class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredConstant:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterDeclaredConstant::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredConstant::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredConstant generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredConstant_2E_weak::objectCompare (const GGS_inputParameterDeclaredConstant_2E_weak & inOperand) const {
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

GGS_inputParameterDeclaredConstant_2E_weak::GGS_inputParameterDeclaredConstant_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak & GGS_inputParameterDeclaredConstant_2E_weak::operator = (const GGS_inputParameterDeclaredConstant & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak::GGS_inputParameterDeclaredConstant_2E_weak (const GGS_inputParameterDeclaredConstant & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak GGS_inputParameterDeclaredConstant_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterDeclaredConstant_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterDeclaredConstant result ;
  if (isValid ()) {
    const cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterDeclaredConstant (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant_2E_weak::bang_inputParameterDeclaredConstant_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterDeclaredConstant result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredConstant) ;
      result = GGS_inputParameterDeclaredConstant ((cPtr_inputParameterDeclaredConstant *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredConstant.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ("inputParameterDeclaredConstant.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredConstant_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @externFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externFunctionDeclarationAST::objectCompare (const GGS_externFunctionDeclarationAST & inOperand) const {
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

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                 const GGS_lstring & in_mFunctionName,
                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                 const GGS_lstring & in_mResultTypeName,
                                                 const GGS_bool & in_usefullFunc,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler) ;
  const GGS_externFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::
externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                                              const GGS_lstring & in_mFunctionName,
                                                                              const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                              const GGS_lstring & in_mResultTypeName,
                                                                              const GGS_bool & in_usefullFunc,
                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_externFunctionDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionDeclarationAST::readProperty_usefullFunc (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_usefullFunc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mFunctionName,
                                                                      const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GGS_lstring & in_mResultTypeName,
                                                                      const GGS_bool & in_usefullFunc,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

void cPtr_externFunctionDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@externFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_externFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_usefullFunc.printNonNullClassInstanceProperties ("usefullFunc") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externFunctionDeclarationAST_2E_weak::objectCompare (const GGS_externFunctionDeclarationAST_2E_weak & inOperand) const {
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

GGS_externFunctionDeclarationAST_2E_weak::GGS_externFunctionDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak & GGS_externFunctionDeclarationAST_2E_weak::operator = (const GGS_externFunctionDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak::GGS_externFunctionDeclarationAST_2E_weak (const GGS_externFunctionDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak GGS_externFunctionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_externFunctionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_externFunctionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_externFunctionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST_2E_weak::bang_externFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externFunctionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externFunctionDeclarationAST) ;
      result = GGS_externFunctionDeclarationAST ((cPtr_externFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @externFunctionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak ("externFunctionDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST::objectCompare (const GGS_functionDeclarationAST & inOperand) const {
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

GGS_functionDeclarationAST::GGS_functionDeclarationAST (void) :
GGS_externFunctionDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                 const GGS_lstring & in_mFunctionName,
                                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                 const GGS_lstring & in_mResultTypeName,
                                                                 const GGS_bool & in_usefullFunc,
                                                                 const GGS_lstring & in_mResultVariableName,
                                                                 const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                 const GGS_location & in_mEndOfFunctionInstructionList,
                                                                 const GGS_bool & in_mIsInternal,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, inCompiler) ;
  const GGS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::
functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                        const GGS_lstring & in_mFunctionName,
                                                                                        const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                        const GGS_lstring & in_mResultTypeName,
                                                                                        const GGS_bool & in_usefullFunc,
                                                                                        const GGS_lstring & in_mResultVariableName,
                                                                                        const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                                        const GGS_location & in_mEndOfFunctionInstructionList,
                                                                                        const GGS_bool & in_mIsInternal,
                                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST::GGS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GGS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_functionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mFunctionName,
                                                          const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GGS_lstring & in_mResultTypeName,
                                                          const GGS_bool & in_usefullFunc,
                                                          const GGS_lstring & in_mResultVariableName,
                                                          const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                          const GGS_location & in_mEndOfFunctionInstructionList,
                                                          const GGS_bool & in_mIsInternal,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@functionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST_2E_weak::objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const {
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

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (void) :
GGS_externFunctionDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak & GGS_functionDeclarationAST_2E_weak::operator = (const GGS_functionDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (const GGS_functionDeclarationAST & inSource) :
GGS_externFunctionDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak GGS_functionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_functionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionDeclarationAST) ;
      result = GGS_functionDeclarationAST ((cPtr_functionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ("functionDeclarationAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationAST::objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const {
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

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mFunctionName,
                                                  const GGS_lstring & in_mResultTypeName,
                                                  const GGS_lstring & in_mResultVariableName,
                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_bool & in_mIsUsefull,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mResultTypeName, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, in_mIsUsefull, inCompiler) ;
  const GGS_onceFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::
onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mFunctionName,
                                                                             const GGS_lstring & in_mResultTypeName,
                                                                             const GGS_lstring & in_mResultVariableName,
                                                                             const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                             const GGS_location & in_mEndOfFunctionInstructionList,
                                                                             const GGS_bool & in_mIsInternal,
                                                                             const GGS_bool & in_mIsUsefull,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mFunctionName,
                                                                  const GGS_lstring & in_mResultTypeName,
                                                                  const GGS_lstring & in_mResultVariableName,
                                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                                  const GGS_bool & in_mIsInternal,
                                                                  const GGS_bool & in_mIsUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_onceFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mIsUsefull.printNonNullClassInstanceProperties ("mIsUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationAST_2E_weak::objectCompare (const GGS_onceFunctionDeclarationAST_2E_weak & inOperand) const {
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

GGS_onceFunctionDeclarationAST_2E_weak::GGS_onceFunctionDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak & GGS_onceFunctionDeclarationAST_2E_weak::operator = (const GGS_onceFunctionDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak::GGS_onceFunctionDeclarationAST_2E_weak (const GGS_onceFunctionDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak GGS_onceFunctionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_onceFunctionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_onceFunctionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST_2E_weak::bang_onceFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_onceFunctionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationAST) ;
      result = GGS_onceFunctionDeclarationAST ((cPtr_onceFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ("onceFunctionDeclarationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@formalTemplateInputParameterListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_formalTemplateInputParameterListAST : public CollectionElementPtr {
  public: GGS_formalTemplateInputParameterListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_lstring & in_mFormalTemplateSelector,
                                                                    const GGS_lstring & in_mFormalArgumentTypeName,
                                                                    const GGS_lstring & in_mFormalArgumentName,
                                                                    const GGS_bool & in_mIsUnused
                                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_formalTemplateInputParameterListAST::CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_lstring & in_mFormalTemplateSelector,
                                                                                                                    const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                                    const GGS_lstring & in_mFormalArgumentName,
                                                                                                                    const GGS_bool & in_mIsUnused
                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFormalTemplateSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_formalTemplateInputParameterListAST::CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFormalTemplateSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_formalTemplateInputParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_formalTemplateInputParameterListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_formalTemplateInputParameterListAST (mObject.mProperty_mFormalTemplateSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @formalTemplateInputParameterListAST
//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST::GGS_formalTemplateInputParameterListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST::GGS_formalTemplateInputParameterListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_formalTemplateInputParameterListAST * p = (CollectionElementPtr_formalTemplateInputParameterListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_formalTemplateInputParameterListAST) ;
    const GGS_formalTemplateInputParameterListAST_2E_element element (p->mObject.mProperty_mFormalTemplateSelector, p->mObject.mProperty_mFormalArgumentTypeName, p->mObject.mProperty_mFormalArgumentName, p->mObject.mProperty_mIsUnused) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                         const GGS_lstring & in_mFormalTemplateSelector,
                                                                         const GGS_lstring & in_mFormalArgumentTypeName,
                                                                         const GGS_lstring & in_mFormalArgumentName,
                                                                         const GGS_bool & in_mIsUnused
                                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_formalTemplateInputParameterListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_formalTemplateInputParameterListAST (in_mFormalTemplateSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_formalTemplateInputParameterListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_formalTemplateInputParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalTemplateSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalTemplateSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsUnused.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalTemplateInputParameterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::plusPlusAssignOperation (const GGS_formalTemplateInputParameterListAST_2E_element & inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                           const GGS_lstring & inOperand1,
                                                                                                           const GGS_lstring & inOperand2,
                                                                                                           const GGS_bool & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_formalTemplateInputParameterListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                  const GGS_lstring & inOperand1,
                                                                  const GGS_lstring & inOperand2,
                                                                  const GGS_bool & inOperand3
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_append (const GGS_lstring inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_lstring inOperand2,
                                                             const GGS_bool inOperand3,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                    const GGS_lstring inOperand1,
                                                                    const GGS_lstring inOperand2,
                                                                    const GGS_bool inOperand3,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                    GGS_lstring & outOperand1,
                                                                    GGS_lstring & outOperand2,
                                                                    GGS_bool & outOperand3,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mIsUnused ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               GGS_lstring & outOperand2,
                                                               GGS_bool & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mIsUnused ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_popLast (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              GGS_lstring & outOperand2,
                                                              GGS_bool & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mIsUnused ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::method_first (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_lstring & outOperand2,
                                                            GGS_bool & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mIsUnused ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::method_last (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_lstring & outOperand2,
                                                           GGS_bool & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mIsUnused ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::add_operation (const GGS_formalTemplateInputParameterListAST & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::subList (const int32_t inStart,
                                                                                          const int32_t inLength,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::plusAssignOperation (const GGS_formalTemplateInputParameterListAST inList,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMFormalTemplateSelectorAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalTemplateSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalTemplateInputParameterListAST::getter_mFormalTemplateSelectorAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalTemplateSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalTemplateInputParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalTemplateInputParameterListAST::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMIsUnusedAtIndex (GGS_bool inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsUnused = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formalTemplateInputParameterListAST::getter_mIsUnusedAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsUnused ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @formalTemplateInputParameterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_formalTemplateInputParameterListAST::DownEnumerator_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element DownEnumerator_formalTemplateInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalTemplateInputParameterListAST::current_mFormalTemplateSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalTemplateSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_formalTemplateInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsUnused ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formalTemplateInputParameterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_formalTemplateInputParameterListAST::UpEnumerator_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element UpEnumerator_formalTemplateInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalTemplateInputParameterListAST::current_mFormalTemplateSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalTemplateSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_formalTemplateInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsUnused ;
}




//--------------------------------------------------------------------------------------------------
//     @formalTemplateInputParameterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ("formalTemplateInputParameterListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalTemplateInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@filewrapperTemplateListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_filewrapperTemplateListAST : public CollectionElementPtr {
  public: GGS_filewrapperTemplateListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_filewrapperTemplateListAST (const GGS_lstring & in_mFilewrapperTemplateName,
                                                           const GGS_lstring & in_mFilewrapperTemplatePath,
                                                           const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_filewrapperTemplateListAST::CollectionElementPtr_filewrapperTemplateListAST (const GGS_lstring & in_mFilewrapperTemplateName,
                                                                                                  const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                                                  const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplatePath, in_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_filewrapperTemplateListAST::CollectionElementPtr_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplatePath, inElement.mProperty_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_filewrapperTemplateListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_filewrapperTemplateListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_filewrapperTemplateListAST (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplatePath, mObject.mProperty_mFilewrapperTemplateFormalInputParameters COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @filewrapperTemplateListAST
//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST::GGS_filewrapperTemplateListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST::GGS_filewrapperTemplateListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_filewrapperTemplateListAST * p = (CollectionElementPtr_filewrapperTemplateListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_filewrapperTemplateListAST) ;
    const GGS_filewrapperTemplateListAST_2E_element element (p->mObject.mProperty_mFilewrapperTemplateName, p->mObject.mProperty_mFilewrapperTemplatePath, p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_lstring & in_mFilewrapperTemplateName,
                                                                const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_filewrapperTemplateListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_filewrapperTemplateListAST (in_mFilewrapperTemplateName, in_mFilewrapperTemplatePath, in_mFilewrapperTemplateFormalInputParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperTemplateListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_filewrapperTemplateListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFilewrapperTemplateName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFilewrapperTemplateName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFilewrapperTemplatePath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFilewrapperTemplateFormalInputParameters:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::plusPlusAssignOperation (const GGS_filewrapperTemplateListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS_formalTemplateInputParameterListAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_filewrapperTemplateListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_lstring & inOperand1,
                                                         const GGS_formalTemplateInputParameterListAST & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_formalTemplateInputParameterListAST inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS_formalTemplateInputParameterListAST inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_formalTemplateInputParameterListAST & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_formalTemplateInputParameterListAST & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_formalTemplateInputParameterListAST & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_formalTemplateInputParameterListAST & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_formalTemplateInputParameterListAST & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::add_operation (const GGS_filewrapperTemplateListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::plusAssignOperation (const GGS_filewrapperTemplateListAST inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateNameAtIndex (GGS_lstring inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperTemplateListAST::getter_mFilewrapperTemplateNameAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_setMFilewrapperTemplatePathAtIndex (GGS_lstring inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplatePath = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperTemplateListAST::getter_mFilewrapperTemplatePathAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplatePath ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GGS_formalTemplateInputParameterListAST inOperand,
                                                                                                 GGS_uint inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_filewrapperTemplateListAST::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GGS_uint & inIndex,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @filewrapperTemplateListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperTemplateListAST::DownEnumerator_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element DownEnumerator_filewrapperTemplateListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST DownEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @filewrapperTemplateListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperTemplateListAST::UpEnumerator_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element UpEnumerator_filewrapperTemplateListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST UpEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
}




//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST ("filewrapperTemplateListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationAST::objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const {
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

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_string & in_mSourceFileAbsolutePath,
                                                  const GGS_lstring & in_mFilewrapperName,
                                                  const GGS_lstring & in_mFilewrapperPath,
                                                  const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                  const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                  const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationAST (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsInternal, in_mSourceFileAbsolutePath, in_mFilewrapperName, in_mFilewrapperPath, in_mFilewrapperTextFileExtensionList, in_mFilewrapperBinaryFileExtensionList, in_mFilewrapperTemplateList, inCompiler) ;
  const GGS_filewrapperDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::
filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                            const GGS_bool & in_mIsInternal,
                                                                            const GGS_string & in_mSourceFileAbsolutePath,
                                                                            const GGS_lstring & in_mFilewrapperName,
                                                                            const GGS_lstring & in_mFilewrapperPath,
                                                                            const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                            const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                            const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationAST::readProperty_mSourceFileAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mSourceFileAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTextFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTextFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperBinaryFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTemplateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_filewrapperTemplateListAST () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTemplateList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                                                const GGS_bool & in_mIsInternal,
                                                                const GGS_string & in_mSourceFileAbsolutePath,
                                                                const GGS_lstring & in_mFilewrapperName,
                                                                const GGS_lstring & in_mFilewrapperPath,
                                                                const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mProperty_isPredefined, mProperty_mIsInternal, mProperty_mSourceFileAbsolutePath, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, mProperty_mFilewrapperTextFileExtensionList, mProperty_mFilewrapperBinaryFileExtensionList, mProperty_mFilewrapperTemplateList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mSourceFileAbsolutePath.printNonNullClassInstanceProperties ("mSourceFileAbsolutePath") ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
    mProperty_mFilewrapperTextFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperTextFileExtensionList") ;
    mProperty_mFilewrapperBinaryFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperBinaryFileExtensionList") ;
    mProperty_mFilewrapperTemplateList.printNonNullClassInstanceProperties ("mFilewrapperTemplateList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationAST_2E_weak::objectCompare (const GGS_filewrapperDeclarationAST_2E_weak & inOperand) const {
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

GGS_filewrapperDeclarationAST_2E_weak::GGS_filewrapperDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak & GGS_filewrapperDeclarationAST_2E_weak::operator = (const GGS_filewrapperDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak::GGS_filewrapperDeclarationAST_2E_weak (const GGS_filewrapperDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak GGS_filewrapperDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperDeclarationAST result ;
  if (isValid ()) {
    const cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST_2E_weak::bang_filewrapperDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationAST) ;
      result = GGS_filewrapperDeclarationAST ((cPtr_filewrapperDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ("filewrapperDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@nonTerminalLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_nonTerminalLabelListAST : public CollectionElementPtr {
  public: GGS_nonTerminalLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_nonTerminalLabelListAST (const GGS_lstring & in_mLabelName,
                                                        const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                        const GGS_location & in_mEndOfArgumentLocation
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_nonTerminalLabelListAST::CollectionElementPtr_nonTerminalLabelListAST (const GGS_lstring & in_mLabelName,
                                                                                            const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                                                            const GGS_location & in_mEndOfArgumentLocation
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLabelName, in_mFormalArgumentList, in_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_nonTerminalLabelListAST::CollectionElementPtr_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_nonTerminalLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_nonTerminalLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_nonTerminalLabelListAST (mObject.mProperty_mLabelName, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @nonTerminalLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST::GGS_nonTerminalLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST::GGS_nonTerminalLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_nonTerminalLabelListAST * p = (CollectionElementPtr_nonTerminalLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_nonTerminalLabelListAST) ;
    const GGS_nonTerminalLabelListAST_2E_element element (p->mObject.mProperty_mLabelName, p->mObject.mProperty_mFormalArgumentList, p->mObject.mProperty_mEndOfArgumentLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_lstring & in_mLabelName,
                                                             const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                             const GGS_location & in_mEndOfArgumentLocation
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_nonTerminalLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_nonTerminalLabelListAST (in_mLabelName, in_mFormalArgumentList, in_mEndOfArgumentLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_nonTerminalLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabelName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabelName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfArgumentLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::plusPlusAssignOperation (const GGS_nonTerminalLabelListAST_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                   const GGS_formalParameterListAST & inOperand1,
                                                                                   const GGS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_nonTerminalLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                      const GGS_formalParameterListAST & inOperand1,
                                                      const GGS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_append (const GGS_lstring inOperand0,
                                                 const GGS_formalParameterListAST inOperand1,
                                                 const GGS_location inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_formalParameterListAST inOperand1,
                                                        const GGS_location inOperand2,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        GGS_formalParameterListAST & outOperand1,
                                                        GGS_location & outOperand2,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLabelName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfArgumentLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                   GGS_formalParameterListAST & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_popLast (GGS_lstring & outOperand0,
                                                  GGS_formalParameterListAST & outOperand1,
                                                  GGS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::method_first (GGS_lstring & outOperand0,
                                                GGS_formalParameterListAST & outOperand1,
                                                GGS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::method_last (GGS_lstring & outOperand0,
                                               GGS_formalParameterListAST & outOperand1,
                                               GGS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::add_operation (const GGS_nonTerminalLabelListAST & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::plusAssignOperation (const GGS_nonTerminalLabelListAST inList,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_nonTerminalLabelListAST::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_setMFormalArgumentListAtIndex (GGS_formalParameterListAST inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_nonTerminalLabelListAST::getter_mFormalArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonTerminalLabelListAST::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @nonTerminalLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalLabelListAST::DownEnumerator_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element DownEnumerator_nonTerminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonTerminalLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_nonTerminalLabelListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_nonTerminalLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @nonTerminalLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalLabelListAST::UpEnumerator_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element UpEnumerator_nonTerminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonTerminalLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_nonTerminalLabelListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_nonTerminalLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @nonTerminalLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ("nonTerminalLabelListAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syntaxRuleLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syntaxRuleLabelListAST : public CollectionElementPtr {
  public: GGS_syntaxRuleLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syntaxRuleLabelListAST (const GGS_lstring & in_mLabelName,
                                                       const GGS_formalParameterListAST & in_mFormalArguments,
                                                       const GGS_location & in_mEndOfArgumentLocation,
                                                       const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                       const GGS_location & in_mEndOfInstructionList
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxRuleLabelListAST::CollectionElementPtr_syntaxRuleLabelListAST (const GGS_lstring & in_mLabelName,
                                                                                          const GGS_formalParameterListAST & in_mFormalArguments,
                                                                                          const GGS_location & in_mEndOfArgumentLocation,
                                                                                          const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                          const GGS_location & in_mEndOfInstructionList
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLabelName, in_mFormalArguments, in_mEndOfArgumentLocation, in_mSyntaxInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxRuleLabelListAST::CollectionElementPtr_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mFormalArguments, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syntaxRuleLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syntaxRuleLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syntaxRuleLabelListAST (mObject.mProperty_mLabelName, mObject.mProperty_mFormalArguments, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syntaxRuleLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST::GGS_syntaxRuleLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST::GGS_syntaxRuleLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syntaxRuleLabelListAST * p = (CollectionElementPtr_syntaxRuleLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syntaxRuleLabelListAST) ;
    const GGS_syntaxRuleLabelListAST_2E_element element (p->mObject.mProperty_mLabelName, p->mObject.mProperty_mFormalArguments, p->mObject.mProperty_mEndOfArgumentLocation, p->mObject.mProperty_mSyntaxInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_lstring & in_mLabelName,
                                                            const GGS_formalParameterListAST & in_mFormalArguments,
                                                            const GGS_location & in_mEndOfArgumentLocation,
                                                            const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                            const GGS_location & in_mEndOfInstructionList
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syntaxRuleLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syntaxRuleLabelListAST (in_mLabelName, in_mFormalArguments, in_mEndOfArgumentLocation, in_mSyntaxInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxRuleLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syntaxRuleLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabelName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabelName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArguments:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArguments.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfArgumentLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxRuleLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::plusPlusAssignOperation (const GGS_syntaxRuleLabelListAST_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_formalParameterListAST & inOperand1,
                                                                                 const GGS_location & inOperand2,
                                                                                 const GGS_syntaxInstructionList & inOperand3,
                                                                                 const GGS_location & inOperand4
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_syntaxRuleLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_formalParameterListAST & inOperand1,
                                                     const GGS_location & inOperand2,
                                                     const GGS_syntaxInstructionList & inOperand3,
                                                     const GGS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_append (const GGS_lstring inOperand0,
                                                const GGS_formalParameterListAST inOperand1,
                                                const GGS_location inOperand2,
                                                const GGS_syntaxInstructionList inOperand3,
                                                const GGS_location inOperand4,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_formalParameterListAST inOperand1,
                                                       const GGS_location inOperand2,
                                                       const GGS_syntaxInstructionList inOperand3,
                                                       const GGS_location inOperand4,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_formalParameterListAST & outOperand1,
                                                       GGS_location & outOperand2,
                                                       GGS_syntaxInstructionList & outOperand3,
                                                       GGS_location & outOperand4,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLabelName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArguments ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_formalParameterListAST & outOperand1,
                                                  GGS_location & outOperand2,
                                                  GGS_syntaxInstructionList & outOperand3,
                                                  GGS_location & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArguments ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_formalParameterListAST & outOperand1,
                                                 GGS_location & outOperand2,
                                                 GGS_syntaxInstructionList & outOperand3,
                                                 GGS_location & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArguments ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::method_first (GGS_lstring & outOperand0,
                                               GGS_formalParameterListAST & outOperand1,
                                               GGS_location & outOperand2,
                                               GGS_syntaxInstructionList & outOperand3,
                                               GGS_location & outOperand4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArguments ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::method_last (GGS_lstring & outOperand0,
                                              GGS_formalParameterListAST & outOperand1,
                                              GGS_location & outOperand2,
                                              GGS_syntaxInstructionList & outOperand3,
                                              GGS_location & outOperand4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArguments ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::add_operation (const GGS_syntaxRuleLabelListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::plusAssignOperation (const GGS_syntaxRuleLabelListAST inList,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syntaxRuleLabelListAST::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMFormalArgumentsAtIndex (GGS_formalParameterListAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArguments = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_syntaxRuleLabelListAST::getter_mFormalArgumentsAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArguments ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxRuleLabelListAST::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionList inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_syntaxRuleLabelListAST::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxRuleLabelListAST::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxRuleLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxRuleLabelListAST::DownEnumerator_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element DownEnumerator_syntaxRuleLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxRuleLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_syntaxRuleLabelListAST::current_mFormalArguments (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArguments ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_syntaxRuleLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList DownEnumerator_syntaxRuleLabelListAST::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_syntaxRuleLabelListAST::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxRuleLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxRuleLabelListAST::UpEnumerator_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element UpEnumerator_syntaxRuleLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxRuleLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_syntaxRuleLabelListAST::current_mFormalArguments (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArguments ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_syntaxRuleLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList UpEnumerator_syntaxRuleLabelListAST::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_syntaxRuleLabelListAST::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxRuleLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ("syntaxRuleLabelListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxRuleLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_SyntaxComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_SyntaxComponentAST::objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::
init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                          const GGS_lstring & in_mSyntaxComponentName,
                                          const GGS_lstring & in_mLexiqueName,
                                          const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                          const GGS_syntaxRuleListAST & in_mRuleList,
                                          const GGS_bool & in_mHasTranslateFeature,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_SyntaxComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_SyntaxComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (in_isPredefined, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_SyntaxComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::
galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mSyntaxComponentName,
                                                                       const GGS_lstring & in_mLexiqueName,
                                                                       const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                       const GGS_syntaxRuleListAST & in_mRuleList,
                                                                       const GGS_bool & in_mHasTranslateFeature,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mNonterminalDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonterminalDeclarationListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mNonterminalDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mRuleList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxRuleListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_SyntaxComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3SyntaxComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_lstring & in_mLexiqueName,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList,
                                                                      const GGS_bool & in_mHasTranslateFeature,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3SyntaxComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_galgas_33_SyntaxComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mProperty_isPredefined, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_SyntaxComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationList.printNonNullClassInstanceProperties ("mNonterminalDeclarationList") ;
    mProperty_mRuleList.printNonNullClassInstanceProperties ("mRuleList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_SyntaxComponentAST_2E_weak::objectCompare (const GGS_galgas_33_SyntaxComponentAST_2E_weak & inOperand) const {
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

GGS_galgas_33_SyntaxComponentAST_2E_weak::GGS_galgas_33_SyntaxComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak & GGS_galgas_33_SyntaxComponentAST_2E_weak::operator = (const GGS_galgas_33_SyntaxComponentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak::GGS_galgas_33_SyntaxComponentAST_2E_weak (const GGS_galgas_33_SyntaxComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak GGS_galgas_33_SyntaxComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_galgas_33_SyntaxComponentAST result ;
  if (isValid ()) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_galgas_33_SyntaxComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST_2E_weak::bang_galgas_33_SyntaxComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_SyntaxComponentAST) ;
      result = GGS_galgas_33_SyntaxComponentAST ((cPtr_galgas_33_SyntaxComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ("galgas3SyntaxComponentAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_GrammarComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_GrammarComponentAST::objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const {
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

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lbool & in_mHasIndexing,
                                                      const GGS_lstring & in_mGrammarComponentName,
                                                      const GGS_lstring & in_mGrammarClass,
                                                      const GGS_lstringlist & in_mSyntaxComponents,
                                                      const GGS_lstring & in_mStartSymbolName,
                                                      const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                      const GGS_lstringlist & in_mUnusedNonterminalList,
                                                      const GGS_bool & in_mHasTranslateFeature,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_GrammarComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_GrammarComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_GrammarComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::
galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                    const GGS_lbool & in_mHasIndexing,
                                                                                    const GGS_lstring & in_mGrammarComponentName,
                                                                                    const GGS_lstring & in_mGrammarClass,
                                                                                    const GGS_lstringlist & in_mSyntaxComponents,
                                                                                    const GGS_lstring & in_mStartSymbolName,
                                                                                    const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                    const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                                    const GGS_bool & in_mHasTranslateFeature,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_galgas_33_GrammarComponentAST::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarClass (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalLabelListAST () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_GrammarComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3GrammarComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_lbool & in_mHasIndexing,
                                                                        const GGS_lstring & in_mGrammarComponentName,
                                                                        const GGS_lstring & in_mGrammarClass,
                                                                        const GGS_lstringlist & in_mSyntaxComponents,
                                                                        const GGS_lstring & in_mStartSymbolName,
                                                                        const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GGS_bool & in_mHasTranslateFeature,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

void cPtr_galgas_33_GrammarComponentAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3GrammarComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarClass.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_galgas_33_GrammarComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_isPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_GrammarComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mGrammarClass.printNonNullClassInstanceProperties ("mGrammarClass") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mStartSymbolLabelList.printNonNullClassInstanceProperties ("mStartSymbolLabelList") ;
    mProperty_mUnusedNonterminalList.printNonNullClassInstanceProperties ("mUnusedNonterminalList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @galgas3GrammarComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_GrammarComponentAST_2E_weak::objectCompare (const GGS_galgas_33_GrammarComponentAST_2E_weak & inOperand) const {
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

GGS_galgas_33_GrammarComponentAST_2E_weak::GGS_galgas_33_GrammarComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak & GGS_galgas_33_GrammarComponentAST_2E_weak::operator = (const GGS_galgas_33_GrammarComponentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak::GGS_galgas_33_GrammarComponentAST_2E_weak (const GGS_galgas_33_GrammarComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak GGS_galgas_33_GrammarComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_galgas_33_GrammarComponentAST result ;
  if (isValid ()) {
    const cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_galgas_33_GrammarComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST_2E_weak::bang_galgas_33_GrammarComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_GrammarComponentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_GrammarComponentAST) ;
      result = GGS_galgas_33_GrammarComponentAST ((cPtr_galgas_33_GrammarComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3GrammarComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ("galgas3GrammarComponentAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_GrammarComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgas_33_SyntaxComponentListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_galgas_33_SyntaxComponentListAST : public CollectionElementPtr {
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                 const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                 const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                 const GGS_syntaxRuleListAST & in_mRuleList,
                                                                 const GGS_bool & in_mHasTranslateFeature
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxComponentListAST::CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                              const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                                                              const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                              const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                                              const GGS_bool & in_mHasTranslateFeature
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxComponentListAST::CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mImportedLexiqueFilePath, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList, inElement.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_galgas_33_SyntaxComponentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_galgas_33_SyntaxComponentListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_galgas_33_SyntaxComponentListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mImportedLexiqueFilePath, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList, mObject.mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST::GGS_galgas_33_SyntaxComponentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST::GGS_galgas_33_SyntaxComponentListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_galgas_33_SyntaxComponentListAST * p = (CollectionElementPtr_galgas_33_SyntaxComponentListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_galgas_33_SyntaxComponentListAST) ;
    const GGS_galgas_33_SyntaxComponentListAST_2E_element element (p->mObject.mProperty_mSyntaxComponentName, p->mObject.mProperty_mImportedLexiqueFilePath, p->mObject.mProperty_mNonterminalDeclarationList, p->mObject.mProperty_mRuleList, p->mObject.mProperty_mHasTranslateFeature) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList,
                                                                      const GGS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_galgas_33_SyntaxComponentListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_galgas_33_SyntaxComponentListAST (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_galgas_33_SyntaxComponentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_galgas_33_SyntaxComponentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxComponentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mImportedLexiqueFilePath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mNonterminalDeclarationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mNonterminalDeclarationList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRuleList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRuleList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mHasTranslateFeature:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mHasTranslateFeature.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::plusPlusAssignOperation (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_lstring & inOperand1,
                                                                                                     const GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                                     const GGS_syntaxRuleListAST & inOperand3,
                                                                                                     const GGS_bool & inOperand4
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_lstring & inOperand1,
                                                               const GGS_nonterminalDeclarationListAST & inOperand2,
                                                               const GGS_syntaxRuleListAST & inOperand3,
                                                               const GGS_bool & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_lstring inOperand1,
                                                          const GGS_nonterminalDeclarationListAST inOperand2,
                                                          const GGS_syntaxRuleListAST inOperand3,
                                                          const GGS_bool inOperand4,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_lstring inOperand1,
                                                                 const GGS_nonterminalDeclarationListAST inOperand2,
                                                                 const GGS_syntaxRuleListAST inOperand3,
                                                                 const GGS_bool inOperand4,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_lstring & outOperand1,
                                                                 GGS_nonterminalDeclarationListAST & outOperand2,
                                                                 GGS_syntaxRuleListAST & outOperand3,
                                                                 GGS_bool & outOperand4,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mRuleList ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mHasTranslateFeature ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_nonterminalDeclarationListAST & outOperand2,
                                                            GGS_syntaxRuleListAST & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mHasTranslateFeature ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_nonterminalDeclarationListAST & outOperand2,
                                                           GGS_syntaxRuleListAST & outOperand3,
                                                           GGS_bool & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRuleList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mHasTranslateFeature ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_nonterminalDeclarationListAST & outOperand2,
                                                         GGS_syntaxRuleListAST & outOperand3,
                                                         GGS_bool & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mHasTranslateFeature ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_nonterminalDeclarationListAST & outOperand2,
                                                        GGS_syntaxRuleListAST & outOperand3,
                                                        GGS_bool & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRuleList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mHasTranslateFeature ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::add_operation (const GGS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::plusAssignOperation (const GGS_galgas_33_SyntaxComponentListAST inList,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentListAST::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMImportedLexiqueFilePathAtIndex (GGS_lstring inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedLexiqueFilePath = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentListAST::getter_mImportedLexiqueFilePathAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedLexiqueFilePath ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMNonterminalDeclarationListAtIndex (GGS_nonterminalDeclarationListAST inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxComponentListAST::getter_mNonterminalDeclarationListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_nonterminalDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMRuleListAtIndex (GGS_syntaxRuleListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxComponentListAST::getter_mRuleListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMHasTranslateFeatureAtIndex (GGS_bool inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mHasTranslateFeature = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_SyntaxComponentListAST::getter_mHasTranslateFeatureAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mHasTranslateFeature ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgas_33_SyntaxComponentListAST::DownEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element DownEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST DownEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST DownEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasTranslateFeature ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgas_33_SyntaxComponentListAST::UpEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element UpEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST UpEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST UpEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasTranslateFeature ;
}




//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ("galgas3SyntaxComponentListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@prologueEpilogueList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_prologueEpilogueList : public CollectionElementPtr {
  public: GGS_prologueEpilogueList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_prologueEpilogueList (const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_prologueEpilogueList (const GGS_prologueEpilogueList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_prologueEpilogueList::CollectionElementPtr_prologueEpilogueList (const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                                                      const GGS_location & in_mEndOfInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_prologueEpilogueList::CollectionElementPtr_prologueEpilogueList (const GGS_prologueEpilogueList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_prologueEpilogueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_prologueEpilogueList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_prologueEpilogueList (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList::GGS_prologueEpilogueList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList::GGS_prologueEpilogueList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_prologueEpilogueList * p = (CollectionElementPtr_prologueEpilogueList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_prologueEpilogueList) ;
    const GGS_prologueEpilogueList_2E_element element (p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                          const GGS_location & in_mEndOfInstructionList
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_prologueEpilogueList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_prologueEpilogueList (in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_prologueEpilogueList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_prologueEpilogueList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prologueEpilogueList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::plusPlusAssignOperation (const GGS_prologueEpilogueList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::class_func_listWithValue (const GGS__5B_semanticInstructionAST_5D_ & inOperand0,
                                                                             const GGS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element element (inOperand0, inOperand1) ;
  GGS_prologueEpilogueList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::addAssignOperation (const GGS__5B_semanticInstructionAST_5D_ & inOperand0,
                                                   const GGS_location & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_append (const GGS__5B_semanticInstructionAST_5D_ inOperand0,
                                              const GGS_location inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_insertAtIndex (const GGS__5B_semanticInstructionAST_5D_ inOperand0,
                                                     const GGS_location inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_removeAtIndex (GGS__5B_semanticInstructionAST_5D_ & outOperand0,
                                                     GGS_location & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_popFirst (GGS__5B_semanticInstructionAST_5D_ & outOperand0,
                                                GGS_location & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_popLast (GGS__5B_semanticInstructionAST_5D_ & outOperand0,
                                               GGS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::method_first (GGS__5B_semanticInstructionAST_5D_ & outOperand0,
                                             GGS_location & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::method_last (GGS__5B_semanticInstructionAST_5D_ & outOperand0,
                                            GGS_location & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::add_operation (const GGS_prologueEpilogueList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::plusAssignOperation (const GGS_prologueEpilogueList inList,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_setMInstructionListAtIndex (GGS__5B_semanticInstructionAST_5D_ inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_prologueEpilogueList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_semanticInstructionAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_prologueEpilogueList::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

DownEnumerator_prologueEpilogueList::DownEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element DownEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ DownEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

UpEnumerator_prologueEpilogueList::UpEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element UpEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ UpEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @prologueEpilogueList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueList ("prologueEpilogueList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prologueEpilogueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@programRuleList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_programRuleList : public CollectionElementPtr {
  public: GGS_programRuleList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_programRuleList (const GGS_lstring & in_mSourceFileExtension,
                                                const GGS_lstring & in_mSourceFileHelp,
                                                const GGS_lstring & in_mSourceFileVariableName,
                                                const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                const GGS_lstring & in_mReferenceGrammar,
                                                const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                const GGS_location & in_mEndOfInstructionList
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_programRuleList (const GGS_programRuleList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_programRuleList::CollectionElementPtr_programRuleList (const GGS_lstring & in_mSourceFileExtension,
                                                                            const GGS_lstring & in_mSourceFileHelp,
                                                                            const GGS_lstring & in_mSourceFileVariableName,
                                                                            const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                                            const GGS_lstring & in_mReferenceGrammar,
                                                                            const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                                            const GGS_location & in_mEndOfInstructionList
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSourceFileExtension, in_mSourceFileHelp, in_mSourceFileVariableName, in_mSourceFileVariableNameIsUnused, in_mReferenceGrammar, in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_programRuleList::CollectionElementPtr_programRuleList (const GGS_programRuleList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSourceFileExtension, inElement.mProperty_mSourceFileHelp, inElement.mProperty_mSourceFileVariableName, inElement.mProperty_mSourceFileVariableNameIsUnused, inElement.mProperty_mReferenceGrammar, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_programRuleList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_programRuleList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_programRuleList (mObject.mProperty_mSourceFileExtension, mObject.mProperty_mSourceFileHelp, mObject.mProperty_mSourceFileVariableName, mObject.mProperty_mSourceFileVariableNameIsUnused, mObject.mProperty_mReferenceGrammar, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @programRuleList
//--------------------------------------------------------------------------------------------------

GGS_programRuleList::GGS_programRuleList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList::GGS_programRuleList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_programRuleList * p = (CollectionElementPtr_programRuleList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_programRuleList) ;
    const GGS_programRuleList_2E_element element (p->mObject.mProperty_mSourceFileExtension, p->mObject.mProperty_mSourceFileHelp, p->mObject.mProperty_mSourceFileVariableName, p->mObject.mProperty_mSourceFileVariableNameIsUnused, p->mObject.mProperty_mReferenceGrammar, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_lstring & in_mSourceFileExtension,
                                                     const GGS_lstring & in_mSourceFileHelp,
                                                     const GGS_lstring & in_mSourceFileVariableName,
                                                     const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                     const GGS_lstring & in_mReferenceGrammar,
                                                     const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_programRuleList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_programRuleList (in_mSourceFileExtension, in_mSourceFileHelp, in_mSourceFileVariableName, in_mSourceFileVariableNameIsUnused, in_mReferenceGrammar, in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_programRuleList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_programRuleList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileExtension:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileExtension.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileHelp:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileHelp.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileVariableName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileVariableName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileVariableNameIsUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReferenceGrammar:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReferenceGrammar.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programRuleList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::plusPlusAssignOperation (const GGS_programRuleList_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1,
                                                                   const GGS_lstring & inOperand2,
                                                                   const GGS_bool & inOperand3,
                                                                   const GGS_lstring & inOperand4,
                                                                   const GGS__5B_semanticInstructionAST_5D_ & inOperand5,
                                                                   const GGS_location & inOperand6
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  GGS_programRuleList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1,
                                              const GGS_lstring & inOperand2,
                                              const GGS_bool & inOperand3,
                                              const GGS_lstring & inOperand4,
                                              const GGS__5B_semanticInstructionAST_5D_ & inOperand5,
                                              const GGS_location & inOperand6
                                              COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         const GGS_lstring inOperand2,
                                         const GGS_bool inOperand3,
                                         const GGS_lstring inOperand4,
                                         const GGS__5B_semanticInstructionAST_5D_ inOperand5,
                                         const GGS_location inOperand6,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_lstring inOperand2,
                                                const GGS_bool inOperand3,
                                                const GGS_lstring inOperand4,
                                                const GGS__5B_semanticInstructionAST_5D_ inOperand5,
                                                const GGS_location inOperand6,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_lstring & outOperand2,
                                                GGS_bool & outOperand3,
                                                GGS_lstring & outOperand4,
                                                GGS__5B_semanticInstructionAST_5D_ & outOperand5,
                                                GGS_location & outOperand6,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           GGS_lstring & outOperand2,
                                           GGS_bool & outOperand3,
                                           GGS_lstring & outOperand4,
                                           GGS__5B_semanticInstructionAST_5D_ & outOperand5,
                                           GGS_location & outOperand6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          GGS_lstring & outOperand2,
                                          GGS_bool & outOperand3,
                                          GGS_lstring & outOperand4,
                                          GGS__5B_semanticInstructionAST_5D_ & outOperand5,
                                          GGS_location & outOperand6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        GGS_lstring & outOperand2,
                                        GGS_bool & outOperand3,
                                        GGS_lstring & outOperand4,
                                        GGS__5B_semanticInstructionAST_5D_ & outOperand5,
                                        GGS_location & outOperand6,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       GGS_lstring & outOperand2,
                                       GGS_bool & outOperand3,
                                       GGS_lstring & outOperand4,
                                       GGS__5B_semanticInstructionAST_5D_ & outOperand5,
                                       GGS_location & outOperand6,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::add_operation (const GGS_programRuleList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::plusAssignOperation (const GGS_programRuleList inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileExtensionAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileExtension = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mSourceFileExtensionAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileExtension ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileHelpAtIndex (GGS_lstring inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileHelp = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mSourceFileHelpAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileHelp ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileVariableNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mSourceFileVariableNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileVariableNameIsUnusedAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_programRuleList::getter_mSourceFileVariableNameIsUnusedAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMReferenceGrammarAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceGrammar = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_programRuleList::getter_mReferenceGrammarAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceGrammar ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMInstructionListAtIndex (GGS__5B_semanticInstructionAST_5D_ inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_programRuleList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS__5B_semanticInstructionAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_programRuleList::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @programRuleList
//--------------------------------------------------------------------------------------------------

DownEnumerator_programRuleList::DownEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element DownEnumerator_programRuleList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ DownEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @programRuleList
//--------------------------------------------------------------------------------------------------

UpEnumerator_programRuleList::UpEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element UpEnumerator_programRuleList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ UpEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @programRuleList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleList ("programRuleList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programRuleList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (void) :
mProperty_mDeclarationList (),
mProperty_implicitTypeDeclarationSet (),
mProperty_mSyntaxComponentList (),
mProperty_mSyntaxExtensions (),
mProperty_mGUIComponentList (),
mProperty_mPrologueDeclarationList (),
mProperty_mSourceRuleList (),
mProperty_mEpilogueDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (const GGS_galgasDeclarationAST & inSource) :
mProperty_mDeclarationList (inSource.mProperty_mDeclarationList),
mProperty_implicitTypeDeclarationSet (inSource.mProperty_implicitTypeDeclarationSet),
mProperty_mSyntaxComponentList (inSource.mProperty_mSyntaxComponentList),
mProperty_mSyntaxExtensions (inSource.mProperty_mSyntaxExtensions),
mProperty_mGUIComponentList (inSource.mProperty_mGUIComponentList),
mProperty_mPrologueDeclarationList (inSource.mProperty_mPrologueDeclarationList),
mProperty_mSourceRuleList (inSource.mProperty_mSourceRuleList),
mProperty_mEpilogueDeclarationList (inSource.mProperty_mEpilogueDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST & GGS_galgasDeclarationAST::operator = (const GGS_galgasDeclarationAST & inSource) {
  mProperty_mDeclarationList = inSource.mProperty_mDeclarationList ;
  mProperty_implicitTypeDeclarationSet = inSource.mProperty_implicitTypeDeclarationSet ;
  mProperty_mSyntaxComponentList = inSource.mProperty_mSyntaxComponentList ;
  mProperty_mSyntaxExtensions = inSource.mProperty_mSyntaxExtensions ;
  mProperty_mGUIComponentList = inSource.mProperty_mGUIComponentList ;
  mProperty_mPrologueDeclarationList = inSource.mProperty_mPrologueDeclarationList ;
  mProperty_mSourceRuleList = inSource.mProperty_mSourceRuleList ;
  mProperty_mEpilogueDeclarationList = inSource.mProperty_mEpilogueDeclarationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasDeclarationAST GGS_galgasDeclarationAST::init (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mDeclarationList = GGS__5B_semanticDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_implicitTypeDeclarationSet = GGS_stringset::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxComponentList = GGS_galgas_33_SyntaxComponentListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxExtensions = GGS_syntaxExtensions::init (inCompiler COMMA_HERE) ;
  mProperty_mGUIComponentList = GGS_galgasGUIComponentListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mPrologueDeclarationList = GGS_prologueEpilogueList::init (inCompiler COMMA_HERE) ;
  mProperty_mSourceRuleList = GGS_programRuleList::init (inCompiler COMMA_HERE) ;
  mProperty_mEpilogueDeclarationList = GGS_prologueEpilogueList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (const GGS__5B_semanticDeclarationAST_5D_ & inOperand0,
                                                    const GGS_stringset & inOperand1,
                                                    const GGS_galgas_33_SyntaxComponentListAST & inOperand2,
                                                    const GGS_syntaxExtensions & inOperand3,
                                                    const GGS_galgasGUIComponentListAST & inOperand4,
                                                    const GGS_prologueEpilogueList & inOperand5,
                                                    const GGS_programRuleList & inOperand6,
                                                    const GGS_prologueEpilogueList & inOperand7) :
mProperty_mDeclarationList (inOperand0),
mProperty_implicitTypeDeclarationSet (inOperand1),
mProperty_mSyntaxComponentList (inOperand2),
mProperty_mSyntaxExtensions (inOperand3),
mProperty_mGUIComponentList (inOperand4),
mProperty_mPrologueDeclarationList (inOperand5),
mProperty_mSourceRuleList (inOperand6),
mProperty_mEpilogueDeclarationList (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasDeclarationAST::isValid (void) const {
  return mProperty_mDeclarationList.isValid () && mProperty_implicitTypeDeclarationSet.isValid () && mProperty_mSyntaxComponentList.isValid () && mProperty_mSyntaxExtensions.isValid () && mProperty_mGUIComponentList.isValid () && mProperty_mPrologueDeclarationList.isValid () && mProperty_mSourceRuleList.isValid () && mProperty_mEpilogueDeclarationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::drop (void) {
  mProperty_mDeclarationList.drop () ;
  mProperty_implicitTypeDeclarationSet.drop () ;
  mProperty_mSyntaxComponentList.drop () ;
  mProperty_mSyntaxExtensions.drop () ;
  mProperty_mGUIComponentList.drop () ;
  mProperty_mPrologueDeclarationList.drop () ;
  mProperty_mSourceRuleList.drop () ;
  mProperty_mEpilogueDeclarationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_implicitTypeDeclarationSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxExtensions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGUIComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPrologueDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceRuleList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEpilogueDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ("galgasDeclarationAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                const GGS_lexiqueAnalysisContext in__5F_inLexiqueAnalysisContext,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaConditionCode (in__5F_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                  const GGS_string in_inScannerClassName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                  const GGS_string in_inScannerClassName,
                                                                  const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                       const GGS_string in_inScannerClassName,
                                                       const GGS_lexiqueAnalysisContext in__5F_inLexiqueAnalysisContext,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaCode (in_inScannerClassName, in__5F_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_galgasScanner_34_::cTokenFor_galgasScanner_34_ (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_floatValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasScanner_34_::Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                      const String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasScanner_34_::Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                      const String & inSourceString,
                                                      const String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasScanner_34__attributeError = "in an attribute name, a letter or a digit should follow the '#' character" ;

static const char * gLexicalMessage_galgasScanner_34__floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasScanner_34__hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgasScanner_34__internalError = "internal error" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgasScanner_34__undefinedAttribute = "undefined attribute" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 192)) {
    static const char * syntaxErrorMessageArray [192] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a float number",
        "a literal integer",
        "a character constant",
        "a terminal symbol ($...$)",
        "a comment",
        "a comment",
        "a type name (@...)",
        "the '\?selector:' delimitor",
        "the '\?' delimitor",
        "the '\?!selector:' delimitor",
        "the '\?!' delimitor",
        "the '!selector:' delimitor",
        "the '!' delimitor",
        "the '!\?selector:' delimitor",
        "the '!\?' delimitor",
        "the '<' delimitor",
        "the '<=' delimitor",
        "the '<<' delimitor",
        "a non terminal symbol <...>",
        "a character string constant \"...\"",
        "the 'abstract' keyword",
        "the 'after' keyword",
        "the 'as' keyword",
        "the 'before' keyword",
        "the 'between' keyword",
        "the 'block' keyword",
        "the 'boolset' keyword",
        "the 'case' keyword",
        "the 'class' keyword",
        "the 'default' keyword",
        "the 'dict' keyword",
        "the 'do' keyword",
        "the 'drop' keyword",
        "the 'else' keyword",
        "the 'elsif' keyword",
        "the 'end' keyword",
        "the 'enum' keyword",
        "the 'error' keyword",
        "the 'extension' keyword",
        "the 'extern' keyword",
        "the 'false' keyword",
        "the 'fileprivate' keyword",
        "the 'filewrapper' keyword",
        "the 'final' keyword",
        "the 'for' keyword",
        "the 'fixit' keyword",
        "the 'func' keyword",
        "the 'grammar' keyword",
        "the 'graph' keyword",
        "the 'guard' keyword",
        "the 'gui' keyword",
        "the 'if' keyword",
        "the 'in' keyword",
        "the 'indexing' keyword",
        "the 'init' keyword",
        "the 'is' keyword",
        "the 'json' keyword",
        "the 'label' keyword",
        "the 'let' keyword",
        "the 'lexique' keyword",
        "the 'list' keyword",
        "the 'log' keyword",
        "the 'loop' keyword",
        "the 'map' keyword",
        "the 'mod' keyword",
        "the 'mutating' keyword",
        "the 'nil' keyword",
        "the 'not' keyword",
        "the 'on' keyword",
        "the 'operator' keyword",
        "the 'option' keyword",
        "the 'or' keyword",
        "the 'override' keyword",
        "the 'package' keyword",
        "the 'parse' keyword",
        "the 'public' keyword",
        "the 'protected' keyword",
        "the 'private' keyword",
        "the 'proc' keyword",
        "the 'project' keyword",
        "the 'repeat' keyword",
        "the 'rewind' keyword",
        "the 'rule' keyword",
        "the 'select' keyword",
        "the 'self' keyword",
        "the 'send' keyword",
        "the 'sortedlist' keyword",
        "the 'spoil' keyword",
        "the 'super' keyword",
        "the 'struct' keyword",
        "the 'style' keyword",
        "the 'switch' keyword",
        "the 'syntax' keyword",
        "the 'tag' keyword",
        "the 'template' keyword",
        "the 'then' keyword",
        "the 'true' keyword",
        "the 'typealias' keyword",
        "the 'var' keyword",
        "the 'warning' keyword",
        "the 'weak' keyword",
        "the 'while' keyword",
        "the 'with' keyword",
        "the '#applicationBundleBase' keyword",
        "the '#clonable' keyword",
        "the '#codeblocks-linux32' keyword",
        "the '#codeblocks-linux64' keyword",
        "the '#codeblocks-windows' keyword",
        "the '#comparable' keyword",
        "the '#equatable' keyword",
        "the '#errorMessage' keyword",
        "the '#from' keyword",
        "the '#generatedInSeparateFile' keyword",
        "the '#initArgLabel' keyword",
        "the '#insertAfter' keyword",
        "the '#insertBefore' keyword",
        "the '#insertOrReplaceSetter' keyword",
        "the '#insertSetter' keyword",
        "the '#libpmAtPath' keyword",
        "the '#macCodeSign' keyword",
        "the '#makefile-macosx' keyword",
        "the '#makefile-unix' keyword",
        "the '#makefile-x86linux32-on-macosx' keyword",
        "the '#makefile-x86linux64-on-macosx' keyword",
        "the '#makefile-arm64-linux-on-macosx' keyword",
        "the '#makefile-win32-on-macosx' keyword",
        "the '#MacSwiftApp' keyword",
        "the '#nonAtomicSelection' keyword",
        "the '#once' keyword",
        "the '#preserved' keyword",
        "the '#quietOutputByDefault' keyword",
        "the '#replaceBy' keyword",
        "the '#remove' keyword",
        "the '#removeSetter' keyword",
        "the '#replaceSetter' keyword",
        "the '#searchMethod' keyword",
        "the '#searchSubscript' keyword",
        "the '#searchString' keyword",
        "the '#templateEndMark' keyword",
        "the '#templateReplacement' keyword",
        "the '#translate' keyword",
        "the '#unused' keyword",
        "the '#usefull' keyword",
        "the '*' delimitor",
        "the ',' delimitor",
        "the '+' delimitor",
        "the '&+' delimitor",
        "the '&-' delimitor",
        "the '&*' delimitor",
        "the '&/' delimitor",
        "the '>' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the ':>' delimitor",
        "the '-' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '->' delimitor",
        "the '==' delimitor",
        "the '=' delimitor",
        "the '&&' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '++=' delimitor",
        "the '.' delimitor",
        "the '@(' delimitor",
        "the '...' delimitor",
        "the '..<' delimitor",
        "the '+=' delimitor",
        "the '-=' delimitor",
        "the '*=' delimitor",
        "the '/=' delimitor",
        "the '&=' delimitor",
        "the '|=' delimitor",
        "the '^=' delimitor",
        "the '/' delimitor",
        "the '!=' delimitor",
        "the '>=' delimitor",
        "the '&' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '||' delimitor",
        "the '|' delimitor",
        "the '^' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '===' delimitor",
        "the '!==' delimitor",
        "the '\?^' delimitor",
        "the '!^' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D_ = {
  utf32 ('!'),
  utf32 ('='),
} ;

//--- Unicode string for '$!==$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D__3D_ = {
  utf32 ('!'),
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$!?$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3F_ = {
  utf32 ('!'),
  utf32 ('\?'),
} ;

//--- Unicode string for '$!^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__5E_ = {
  utf32 ('!'),
  utf32 ('^'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$&&$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__26_ = {
  utf32 ('&'),
  utf32 ('&'),
} ;

//--- Unicode string for '$&*$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2A_ = {
  utf32 ('&'),
  utf32 ('*'),
} ;

//--- Unicode string for '$&+$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2B_ = {
  utf32 ('&'),
  utf32 ('+'),
} ;

//--- Unicode string for '$&-$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2D_ = {
  utf32 ('&'),
  utf32 ('-'),
} ;

//--- Unicode string for '$&/$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2F_ = {
  utf32 ('&'),
  utf32 ('/'),
} ;

//--- Unicode string for '$&=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__3D_ = {
  utf32 ('&'),
  utf32 ('='),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$*=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A__3D_ = {
  utf32 ('*'),
  utf32 ('='),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B_ = {
  utf32 ('+'),
} ;

//--- Unicode string for '$++=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__2B__3D_ = {
  utf32 ('+'),
  utf32 ('+'),
  utf32 ('='),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__3D_ = {
  utf32 ('+'),
  utf32 ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D_ = {
  utf32 ('-'),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3D_ = {
  utf32 ('-'),
  utf32 ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3E_ = {
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$...$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__2E__2E_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('.'),
} ;

//--- Unicode string for '$..<$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__2E__3C_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('<'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F_ = {
  utf32 ('/'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__2F_ = {
  utf32 ('/'),
  utf32 ('/'),
} ;

//--- Unicode string for '$/=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__3D_ = {
  utf32 ('/'),
  utf32 ('='),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___30_x = {
  utf32 ('0'),
  utf32 ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$:>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A__3E_ = {
  utf32 (':'),
  utf32 ('>'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$===$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3D_ = {
  utf32 ('>'),
  utf32 ('='),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3E_ = {
  utf32 ('>'),
  utf32 ('>'),
} ;

//--- Unicode string for '$?!$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__21_ = {
  utf32 ('\?'),
  utf32 ('!'),
} ;

//--- Unicode string for '$?^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__5E_ = {
  utf32 ('\?'),
  utf32 ('^'),
} ;

//--- Unicode string for '$@($'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___40__28_ = {
  utf32 ('@'),
  utf32 ('('),
} ;

//--- Unicode string for '$MacSwiftApp$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__MacSwiftApp = {
  utf32 ('M'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('S'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('f'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('p'),
  utf32 ('p'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$\\$$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__24_ = {
  utf32 ('\\'),
  utf32 ('$'),
} ;

//--- Unicode string for '$\\\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__5C_ = {
  utf32 ('\\'),
  utf32 ('\\'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$^=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5E__3D_ = {
  utf32 ('^'),
  utf32 ('='),
} ;

//--- Unicode string for '$abstract$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__abstract = {
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$after$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__after = {
  utf32 ('a'),
  utf32 ('f'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$applicationBundleBase$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__applicationBundleBase = {
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('B'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('B'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$as$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__as = {
  utf32 ('a'),
  utf32 ('s'),
} ;

//--- Unicode string for '$before$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__before = {
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('e'),
} ;

//--- Unicode string for '$between$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__between = {
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('w'),
  utf32 ('e'),
  utf32 ('e'),
  utf32 ('n'),
} ;

//--- Unicode string for '$block$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__block = {
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
} ;

//--- Unicode string for '$boolset$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__boolset = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__case = {
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$class$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__class = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('s'),
} ;

//--- Unicode string for '$clonable$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__clonable = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$codeblocks-linux32$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_ = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('3'),
  utf32 ('2'),
} ;

//--- Unicode string for '$codeblocks-linux64$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_ = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('6'),
  utf32 ('4'),
} ;

//--- Unicode string for '$codeblocks-windows$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_windows = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('o'),
  utf32 ('w'),
  utf32 ('s'),
} ;

//--- Unicode string for '$comparable$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__comparable = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$default$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__default = {
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('t'),
} ;

//--- Unicode string for '$dict$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__dict = {
  utf32 ('d'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$do$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__do = {
  utf32 ('d'),
  utf32 ('o'),
} ;

//--- Unicode string for '$drop$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__drop = {
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__else = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$elsif$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__elsif = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$end$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__end = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__enum = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('m'),
} ;

//--- Unicode string for '$equatable$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__equatable = {
  utf32 ('e'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$error$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__error = {
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$errorMessage$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__errorMessage = {
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('M'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('a'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$extension$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extension = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extern = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('n'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__false = {
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$fileprivate$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fileprivate = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$filewrapper$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__filewrapper = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('w'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$final$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__final = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('a'),
  utf32 ('l'),
} ;

//--- Unicode string for '$fixit$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fixit = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('t'),
} ;

//--- Unicode string for '$for$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__for = {
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$from$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__from = {
  utf32 ('f'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('m'),
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__func = {
  utf32 ('f'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$generatedInSeparateFile$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__generatedInSeparateFile = {
  utf32 ('g'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
  utf32 ('I'),
  utf32 ('n'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('F'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$grammar$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__grammar = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('m'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('r'),
} ;

//--- Unicode string for '$graph$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__graph = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('h'),
} ;

//--- Unicode string for '$guard$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__guard = {
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('d'),
} ;

//--- Unicode string for '$gui$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__gui = {
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('i'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__if = {
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$in$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__in = {
  utf32 ('i'),
  utf32 ('n'),
} ;

//--- Unicode string for '$indexing$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__indexing = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$init$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__init = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('t'),
} ;

//--- Unicode string for '$initArgLabel$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__initArgLabel = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('r'),
  utf32 ('g'),
  utf32 ('L'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('l'),
} ;

//--- Unicode string for '$insertAfter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertAfter = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('f'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$insertBefore$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertBefore = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('B'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('e'),
} ;

//--- Unicode string for '$insertOrReplaceSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertOrReplaceSetter = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('O'),
  utf32 ('r'),
  utf32 ('R'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$insertSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertSetter = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$is$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__is = {
  utf32 ('i'),
  utf32 ('s'),
} ;

//--- Unicode string for '$json$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__json = {
  utf32 ('j'),
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$label$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__label = {
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('l'),
} ;

//--- Unicode string for '$let$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__let = {
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$lexique$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__lexique = {
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '$libpmAtPath$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__libpmAtPath = {
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('b'),
  utf32 ('p'),
  utf32 ('m'),
  utf32 ('A'),
  utf32 ('t'),
  utf32 ('P'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('h'),
} ;

//--- Unicode string for '$list$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__list = {
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$log$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__log = {
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('g'),
} ;

//--- Unicode string for '$loop$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__loop = {
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$macCodeSign$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__macCodeSign = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('i'),
  utf32 ('g'),
  utf32 ('n'),
} ;

//--- Unicode string for '$makefile-arm64-linux-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('m'),
  utf32 ('6'),
  utf32 ('4'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-unix$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_unix = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-win32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('3'),
  utf32 ('2'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-x86linux32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('x'),
  utf32 ('8'),
  utf32 ('6'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('3'),
  utf32 ('2'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-x86linux64-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('x'),
  utf32 ('8'),
  utf32 ('6'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('6'),
  utf32 ('4'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$map$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__map = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('p'),
} ;

//--- Unicode string for '$mod$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__mod = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('d'),
} ;

//--- Unicode string for '$mutating$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__mutating = {
  utf32 ('m'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$nil$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__nil = {
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('l'),
} ;

//--- Unicode string for '$nonAtomicSelection$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__nonAtomicSelection = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('A'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$not$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__not = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('t'),
} ;

//--- Unicode string for '$on$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__on = {
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$once$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__once = {
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('e'),
} ;

//--- Unicode string for '$operator$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__operator = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__option = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$or$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__or = {
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$override$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__override = {
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$package$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__package = {
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('a'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$parse$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__parse = {
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$preserved$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__preserved = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$private$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__private = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$proc$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__proc = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('c'),
} ;

//--- Unicode string for '$project$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__project = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('j'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$protected$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__protected = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$public$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__public = {
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$quietOutputByDefault$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__quietOutputByDefault = {
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('O'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('B'),
  utf32 ('y'),
  utf32 ('D'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('t'),
} ;

//--- Unicode string for '$remove$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__remove = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('e'),
} ;

//--- Unicode string for '$removeSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__removeSetter = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$repeat$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__repeat = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('t'),
} ;

//--- Unicode string for '$replaceBy$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__replaceBy = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('B'),
  utf32 ('y'),
} ;

//--- Unicode string for '$replaceSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__replaceSetter = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$rewind$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rewind = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$rule$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rule = {
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$searchMethod$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchMethod = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('M'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('h'),
  utf32 ('o'),
  utf32 ('d'),
} ;

//--- Unicode string for '$searchString$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchString = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('S'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$searchSubscript$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchSubscript = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('S'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('s'),
  utf32 ('c'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('p'),
  utf32 ('t'),
} ;

//--- Unicode string for '$select$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__select = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__self = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('f'),
} ;

//--- Unicode string for '$send$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__send = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$sortedlist$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__sortedlist = {
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$spoil$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__spoil = {
  utf32 ('s'),
  utf32 ('p'),
  utf32 ('o'),
  utf32 ('i'),
  utf32 ('l'),
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__struct = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$style$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__style = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$super$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__super = {
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__switch = {
  utf32 ('s'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('c'),
  utf32 ('h'),
} ;

//--- Unicode string for '$syntax$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__syntax = {
  utf32 ('s'),
  utf32 ('y'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('x'),
} ;

//--- Unicode string for '$tag$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__tag = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('g'),
} ;

//--- Unicode string for '$template$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__template = {
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$templateEndMark$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateEndMark = {
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('E'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('M'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('k'),
} ;

//--- Unicode string for '$templateReplacement$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateReplacement = {
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('R'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
} ;

//--- Unicode string for '$then$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__then = {
  utf32 ('t'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('n'),
} ;

//--- Unicode string for '$translate$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__translate = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__true = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '$typealias$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__typealias = {
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('a'),
  utf32 ('s'),
} ;

//--- Unicode string for '$unused$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__unused = {
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$usefull$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__usefull = {
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('l'),
} ;

//--- Unicode string for '$var$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__var = {
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('r'),
} ;

//--- Unicode string for '$warning$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__warning = {
  utf32 ('w'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$weak$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__weak = {
  utf32 ('w'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('k'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__while = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$with$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__with = {
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('h'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$|=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C__3D_ = {
  utf32 ('|'),
  utf32 ('='),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C__7C_ = {
  utf32 ('|'),
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7D_ = {
  utf32 ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7E_ = {
  utf32 ('~'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'attributeKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__attributeKeyWordList = 40 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__attributeKeyWordList [ktable_size_galgasScanner_34__attributeKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__from, Lexique_galgasScanner_34_::kToken__23_from),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__once, Lexique_galgasScanner_34_::kToken__23_once),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__remove, Lexique_galgasScanner_34_::kToken__23_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__unused, Lexique_galgasScanner_34_::kToken__23_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__usefull, Lexique_galgasScanner_34_::kToken__23_usefull),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__clonable, Lexique_galgasScanner_34_::kToken__23_clonable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__equatable, Lexique_galgasScanner_34_::kToken__23_equatable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__preserved, Lexique_galgasScanner_34_::kToken__23_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceBy, Lexique_galgasScanner_34_::kToken__23_replaceBy),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__translate, Lexique_galgasScanner_34_::kToken__23_translate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__comparable, Lexique_galgasScanner_34_::kToken__23_comparable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__MacSwiftApp, Lexique_galgasScanner_34_::kToken__23_MacSwiftApp),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertAfter, Lexique_galgasScanner_34_::kToken__23_insertAfter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__libpmAtPath, Lexique_galgasScanner_34_::kToken__23_libpmAtPath),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__macCodeSign, Lexique_galgasScanner_34_::kToken__23_macCodeSign),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__errorMessage, Lexique_galgasScanner_34_::kToken__23_errorMessage),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__initArgLabel, Lexique_galgasScanner_34_::kToken__23_initArgLabel),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertBefore, Lexique_galgasScanner_34_::kToken__23_insertBefore),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertSetter, Lexique_galgasScanner_34_::kToken__23_insertSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__removeSetter, Lexique_galgasScanner_34_::kToken__23_removeSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchMethod, Lexique_galgasScanner_34_::kToken__23_searchMethod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchString, Lexique_galgasScanner_34_::kToken__23_searchString),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_unix, Lexique_galgasScanner_34_::kToken__23_makefile_2D_unix),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceSetter, Lexique_galgasScanner_34_::kToken__23_replaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_macosx, Lexique_galgasScanner_34_::kToken__23_makefile_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchSubscript, Lexique_galgasScanner_34_::kToken__23_searchSubscript),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateEndMark, Lexique_galgasScanner_34_::kToken__23_templateEndMark),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_, Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_linux_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_, Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_linux_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_windows, Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_windows),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__nonAtomicSelection, Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateReplacement, Lexique_galgasScanner_34_::kToken__23_templateReplacement),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__quietOutputByDefault, Lexique_galgasScanner_34_::kToken__23_quietOutputByDefault),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__applicationBundleBase, Lexique_galgasScanner_34_::kToken__23_applicationBundleBase),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertOrReplaceSetter, Lexique_galgasScanner_34_::kToken__23_insertOrReplaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__generatedInSeparateFile, Lexique_galgasScanner_34_::kToken__23_generatedInSeparateFile),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx)
} ;

int32_t Lexique_galgasScanner_34_::search_into_attributeKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__attributeKeyWordList, ktable_size_galgasScanner_34__attributeKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasDelimitorsList = 47 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasDelimitorsList [ktable_size_galgasScanner_34__galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26_, Lexique_galgasScanner_34_::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___28_, Lexique_galgasScanner_34_::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___29_, Lexique_galgasScanner_34_::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A_, Lexique_galgasScanner_34_::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B_, Lexique_galgasScanner_34_::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2C_, Lexique_galgasScanner_34_::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D_, Lexique_galgasScanner_34_::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2E_, Lexique_galgasScanner_34_::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F_, Lexique_galgasScanner_34_::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A_, Lexique_galgasScanner_34_::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3B_, Lexique_galgasScanner_34_::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D_, Lexique_galgasScanner_34_::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E_, Lexique_galgasScanner_34_::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5B_, Lexique_galgasScanner_34_::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5D_, Lexique_galgasScanner_34_::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5E_, Lexique_galgasScanner_34_::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7B_, Lexique_galgasScanner_34_::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C_, Lexique_galgasScanner_34_::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7D_, Lexique_galgasScanner_34_::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7E_, Lexique_galgasScanner_34_::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D_, Lexique_galgasScanner_34_::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__5E_, Lexique_galgasScanner_34_::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__26_, Lexique_galgasScanner_34_::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2A_, Lexique_galgasScanner_34_::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2B_, Lexique_galgasScanner_34_::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2D_, Lexique_galgasScanner_34_::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2F_, Lexique_galgasScanner_34_::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__3D_, Lexique_galgasScanner_34_::kToken__26__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A__3D_, Lexique_galgasScanner_34_::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__3D_, Lexique_galgasScanner_34_::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3D_, Lexique_galgasScanner_34_::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3E_, Lexique_galgasScanner_34_::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F__3D_, Lexique_galgasScanner_34_::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A__3E_, Lexique_galgasScanner_34_::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D_, Lexique_galgasScanner_34_::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3D_, Lexique_galgasScanner_34_::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3E_, Lexique_galgasScanner_34_::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3F__5E_, Lexique_galgasScanner_34_::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___40__28_, Lexique_galgasScanner_34_::kToken__40__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5E__3D_, Lexique_galgasScanner_34_::kToken__5E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C__3D_, Lexique_galgasScanner_34_::kToken__7C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C__7C_, Lexique_galgasScanner_34_::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D__3D_, Lexique_galgasScanner_34_::kToken__21__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__2B__3D_, Lexique_galgasScanner_34_::kToken__2B__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2E__2E__2E_, Lexique_galgasScanner_34_::kToken__2E__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2E__2E__3C_, Lexique_galgasScanner_34_::kToken__2E__2E__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D__3D_, Lexique_galgasScanner_34_::kToken__3D__3D__3D_)
} ;

int32_t Lexique_galgasScanner_34_::search_into_galgasDelimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasDelimitorsList, ktable_size_galgasScanner_34__galgasDelimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasKeyWordList = 83 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasKeyWordList [ktable_size_galgasScanner_34__galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__as, Lexique_galgasScanner_34_::kToken_as),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__do, Lexique_galgasScanner_34_::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__if, Lexique_galgasScanner_34_::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__in, Lexique_galgasScanner_34_::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__is, Lexique_galgasScanner_34_::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__on, Lexique_galgasScanner_34_::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__or, Lexique_galgasScanner_34_::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__end, Lexique_galgasScanner_34_::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__for, Lexique_galgasScanner_34_::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__gui, Lexique_galgasScanner_34_::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__let, Lexique_galgasScanner_34_::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__log, Lexique_galgasScanner_34_::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__map, Lexique_galgasScanner_34_::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mod, Lexique_galgasScanner_34_::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__nil, Lexique_galgasScanner_34_::kToken_nil),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__not, Lexique_galgasScanner_34_::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__tag, Lexique_galgasScanner_34_::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__var, Lexique_galgasScanner_34_::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__case, Lexique_galgasScanner_34_::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__dict, Lexique_galgasScanner_34_::kToken_dict),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__drop, Lexique_galgasScanner_34_::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__else, Lexique_galgasScanner_34_::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__enum, Lexique_galgasScanner_34_::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__func, Lexique_galgasScanner_34_::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__init, Lexique_galgasScanner_34_::kToken_init),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__json, Lexique_galgasScanner_34_::kToken_json),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__list, Lexique_galgasScanner_34_::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__loop, Lexique_galgasScanner_34_::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__proc, Lexique_galgasScanner_34_::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rule, Lexique_galgasScanner_34_::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__self, Lexique_galgasScanner_34_::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__send, Lexique_galgasScanner_34_::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__then, Lexique_galgasScanner_34_::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__true, Lexique_galgasScanner_34_::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__weak, Lexique_galgasScanner_34_::kToken_weak),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__with, Lexique_galgasScanner_34_::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__after, Lexique_galgasScanner_34_::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__block, Lexique_galgasScanner_34_::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__class, Lexique_galgasScanner_34_::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__elsif, Lexique_galgasScanner_34_::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__error, Lexique_galgasScanner_34_::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__false, Lexique_galgasScanner_34_::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__final, Lexique_galgasScanner_34_::kToken_final),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fixit, Lexique_galgasScanner_34_::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__graph, Lexique_galgasScanner_34_::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__guard, Lexique_galgasScanner_34_::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__label, Lexique_galgasScanner_34_::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__parse, Lexique_galgasScanner_34_::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__spoil, Lexique_galgasScanner_34_::kToken_spoil),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__style, Lexique_galgasScanner_34_::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__super, Lexique_galgasScanner_34_::kToken_super),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__while, Lexique_galgasScanner_34_::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__before, Lexique_galgasScanner_34_::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extern, Lexique_galgasScanner_34_::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__option, Lexique_galgasScanner_34_::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__public, Lexique_galgasScanner_34_::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__repeat, Lexique_galgasScanner_34_::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rewind, Lexique_galgasScanner_34_::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__select, Lexique_galgasScanner_34_::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__struct, Lexique_galgasScanner_34_::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__switch, Lexique_galgasScanner_34_::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__syntax, Lexique_galgasScanner_34_::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__between, Lexique_galgasScanner_34_::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__boolset, Lexique_galgasScanner_34_::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__default, Lexique_galgasScanner_34_::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__grammar, Lexique_galgasScanner_34_::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__lexique, Lexique_galgasScanner_34_::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__package, Lexique_galgasScanner_34_::kToken_package),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__private, Lexique_galgasScanner_34_::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__project, Lexique_galgasScanner_34_::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__warning, Lexique_galgasScanner_34_::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__abstract, Lexique_galgasScanner_34_::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__indexing, Lexique_galgasScanner_34_::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mutating, Lexique_galgasScanner_34_::kToken_mutating),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__operator, Lexique_galgasScanner_34_::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__override, Lexique_galgasScanner_34_::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__template, Lexique_galgasScanner_34_::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extension, Lexique_galgasScanner_34_::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__protected, Lexique_galgasScanner_34_::kToken_protected),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__typealias, Lexique_galgasScanner_34_::kToken_typealias),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__sortedlist, Lexique_galgasScanner_34_::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fileprivate, Lexique_galgasScanner_34_::kToken_fileprivate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__filewrapper, Lexique_galgasScanner_34_::kToken_filewrapper)
} ;

int32_t Lexique_galgasScanner_34_::search_into_galgasKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasKeyWordList, ktable_size_galgasScanner_34__galgasKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgasScanner_34_ * ptr = (const cTokenFor_galgasScanner_34_ *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_double_2E_xxx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("double.xxx") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literalInt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literalInt") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__27_char_27_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("'char'") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendChar (ptr->mLexicalAttribute_charValue) ;
      break ;
    case kToken__24_terminal_24_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("$terminal$") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__40_type:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@type") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_non_5F_terminal_3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<non_terminal>") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_abstract:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("abstract") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_after:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("after") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_as:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("as") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_before:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("before") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_between:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("between") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_block:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("block") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_boolset:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("boolset") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_class:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("class") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_default:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("default") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_dict:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("dict") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_do:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("do") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_drop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("drop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_elsif:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("elsif") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_end:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("end") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_error:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("error") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extension:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extension") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_fileprivate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("fileprivate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_filewrapper:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("filewrapper") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_final:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("final") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_for:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("for") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_fixit:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("fixit") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_grammar:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("grammar") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_graph:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("graph") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_guard:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("guard") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_gui:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("gui") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_in:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("in") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_indexing:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("indexing") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_init:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("init") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_is:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("is") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_json:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("json") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_label:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("label") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_let:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("let") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_lexique:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("lexique") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_list:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("list") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_log:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("log") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_loop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("loop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_map:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("map") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mod:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mod") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mutating:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mutating") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nil:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nil") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_not:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("not") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_on:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("on") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_operator:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("operator") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_or:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("or") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_override:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("override") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_package:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("package") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_parse:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("parse") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_public:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("public") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_protected:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("protected") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_private:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("private") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_proc:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("proc") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_project:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("project") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_repeat:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("repeat") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rewind:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rewind") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rule:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rule") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_select:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("select") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_send:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("send") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sortedlist:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sortedlist") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_spoil:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("spoil") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_super:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("super") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_style:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("style") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_syntax:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("syntax") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_tag:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("tag") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_template:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("template") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_then:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("then") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_typealias:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("typealias") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_var:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("var") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_warning:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("warning") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_weak:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("weak") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_with:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("with") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_applicationBundleBase:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#applicationBundleBase") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_clonable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#clonable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_codeblocks_2D_linux_33__32_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#codeblocks-linux32") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_codeblocks_2D_linux_36__34_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#codeblocks-linux64") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_codeblocks_2D_windows:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#codeblocks-windows") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_comparable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#comparable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_equatable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#equatable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_errorMessage:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#errorMessage") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_from:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#from") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_generatedInSeparateFile:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#generatedInSeparateFile") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_initArgLabel:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#initArgLabel") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_insertAfter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#insertAfter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_insertBefore:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#insertBefore") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_insertOrReplaceSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#insertOrReplaceSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_insertSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#insertSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_libpmAtPath:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#libpmAtPath") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_macCodeSign:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#macCodeSign") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_unix:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-unix") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-x86linux32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-x86linux64-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-arm64-linux-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#makefile-win32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_MacSwiftApp:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#MacSwiftApp") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_nonAtomicSelection:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#nonAtomicSelection") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_once:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#once") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_preserved:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#preserved") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_quietOutputByDefault:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#quietOutputByDefault") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_replaceBy:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#replaceBy") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_remove:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#remove") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_removeSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#removeSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_replaceSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#replaceSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_searchMethod:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#searchMethod") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_searchSubscript:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#searchSubscript") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_searchString:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#searchString") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_templateEndMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#templateEndMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_templateReplacement:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#templateReplacement") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_translate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#translate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_unused:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#unused") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__23_usefull:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("#usefull") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__2B__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("++=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__40__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("...") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("..<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("===") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!==") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_galgasScanner_34_::internalParseLexicalToken (cTokenFor_galgasScanner_34_ & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigintValue = BigSigned () ;
  token.mLexicalAttribute_charValue = utf32 (0) ;
  token.mLexicalAttribute_floatValue = 0.0 ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___30_x, true)) {
      do {
        if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('.'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('.')) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_34__floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('-')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_attributeKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        lexicalError (gLexicalMessage_galgasScanner_34__undefinedAttribute COMMA_LINE_AND_SOURCE_FILE) ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\''))) {
      if (testForInputUTF32Char (utf32 ('\\'))) {
        if (testForInputUTF32Char (utf32 ('f'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\f')) ;
        }else if (testForInputUTF32Char (utf32 ('n'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\n')) ;
        }else if (testForInputUTF32Char (utf32 ('r'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\r')) ;
        }else if (testForInputUTF32Char (utf32 ('t'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\t')) ;
        }else if (testForInputUTF32Char (utf32 ('v'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\v')) ;
        }else if (testForInputUTF32Char (utf32 ('\\'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\\')) ;
        }else if (testForInputUTF32Char (utf32 ('0'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\0')) ;
        }else if (testForInputUTF32Char (utf32 ('\''))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\'')) ;
        }else if (testForInputUTF32Char (utf32 ('u'))) {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 ('U'))) {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (utf32 (' '), utf32 (65533))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (utf32 ('\''))) {
        token.mTokenCode = kToken__27_char_27_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (utf32 ('$'))) {
      if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
          }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
          }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
          }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (utf32 ('$'))) {
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__24_terminal_24_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__2F_, true)) {
      if (testForInputUTF32Char (utf32 ('!'))) {
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (1114111))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__2E__3C_, true)) {
      token.mTokenCode = kToken__2E__2E__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__2E__2E_, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__2B__3D_, true)) {
      token.mTokenCode = kToken__2B__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D__3D_, true)) {
      token.mTokenCode = kToken__21__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C__7C_, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C__3D_, true)) {
      token.mTokenCode = kToken__7C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5E__3D_, true)) {
      token.mTokenCode = kToken__5E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___40__28_, true)) {
      token.mTokenCode = kToken__40__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3F__5E_, true)) {
      token.mTokenCode = kToken__3F__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3E_, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A__3E_, true)) {
      token.mTokenCode = kToken__3A__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__3D_, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3D_, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__3D_, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A__3D_, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__3D_, true)) {
      token.mTokenCode = kToken__26__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2F_, true)) {
      token.mTokenCode = kToken__26__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2D_, true)) {
      token.mTokenCode = kToken__26__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2B_, true)) {
      token.mTokenCode = kToken__26__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2A_, true)) {
      token.mTokenCode = kToken__26__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__26_, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__5E_, true)) {
      token.mTokenCode = kToken__21__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('@'))) {
      if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_type ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3F__21_, true)) {
      const LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__3F__21_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
          token.mTokenCode = kToken__3F__21_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F__21_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('\?'))) {
      const LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__3F_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationMark ;
          token.mTokenCode = kToken__3F_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3F_, true)) {
      const LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__21__3F_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
          mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
          mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
          token.mTokenCode = kToken__21__3F_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__21__3F_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('!'))) {
      const LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__21_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
          mCurrentChar = currentCharForTag_onlyExclamationMark ;
          token.mTokenCode = kToken__21_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__21_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('<'))) {
      const LocationInSource currentLocationForTag_onlyInfDelimiter = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInfDelimiter = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInfDelimiter = mCurrentChar ;
      if (testForInputUTF32Char (utf32 ('='))) {
        token.mTokenCode = kToken__3C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (utf32 ('<'))) {
        token.mTokenCode = kToken__3C__3C_ ;
        enterToken (token) ;
      }else if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 ('>'))) {
          token.mTokenCode = kToken__3C_non_5F_terminal_3E_ ;
          enterToken (token) ;
        }else{
          mCurrentLocation = currentLocationForTag_onlyInfDelimiter ;
          mTokenEndLocation = endLocationForTag_onlyInfDelimiter ;
          mCurrentChar = currentCharForTag_onlyInfDelimiter ;
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 ('\\'))) {
          if (testForInputUTF32Char (utf32 ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\f')) ;
          }else if (testForInputUTF32Char (utf32 ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\n')) ;
          }else if (testForInputUTF32Char (utf32 ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\r')) ;
          }else if (testForInputUTF32Char (utf32 ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\t')) ;
          }else if (testForInputUTF32Char (utf32 ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\v')) ;
          }else if (testForInputUTF32Char (utf32 ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32Char (utf32 ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
          }else if (testForInputUTF32Char (utf32 ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\'')) ;
          }else if (testForInputUTF32Char (utf32 ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\?')) ;
          }else if (testForInputUTF32Char (utf32 ('u'))) {
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (utf32 ('U'))) {
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                          }else{
                            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_galgasScanner_34_::parseLexicalToken (void) {
  cTokenFor_galgasScanner_34_ token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_galgasScanner_34_::enterToken (cTokenFor_galgasScanner_34_ & ioToken) {
  cTokenFor_galgasScanner_34_ * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_galgasScanner_34_ ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned Lexique_galgasScanner_34_::attributeValue_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//--------------------------------------------------------------------------------------------------

utf32 Lexique_galgasScanner_34_::attributeValue_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

double Lexique_galgasScanner_34_::attributeValue_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::attributeValue_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_galgasScanner_34_::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lbigint Lexique_galgasScanner_34_::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GGS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar Lexique_galgasScanner_34_::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_char value (ptr->mLexicalAttribute_charValue) ;
  GGS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble Lexique_galgasScanner_34_::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_double value (ptr->mLexicalAttribute_floatValue) ;
  GGS_ldouble result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_galgasScanner_34_::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_galgasScanner_34_::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

 GGS_stringlist Lexique_galgasScanner_34_::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("double.xxx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literalInt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("'char'") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("$terminal$") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@type") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<non_terminal>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("abstract") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("after") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("as") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("before") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("between") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("block") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("boolset") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("class") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("default") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("dict") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("do") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("drop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("elsif") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("end") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("error") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extension") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fileprivate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("filewrapper") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("final") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("for") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fixit") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("func") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("grammar") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("graph") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("guard") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("gui") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("in") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("indexing") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("init") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("is") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("json") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("label") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("let") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("lexique") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("list") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("log") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("loop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("map") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mod") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mutating") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nil") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("not") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("on") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("operator") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("or") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("override") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("package") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("parse") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("public") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("protected") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("private") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("proc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("project") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("repeat") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rewind") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rule") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("select") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("self") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("send") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sortedlist") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("spoil") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("super") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("style") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("syntax") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tag") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("template") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("then") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("true") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("typealias") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("var") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("warning") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("weak") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("with") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#applicationBundleBase") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#clonable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#codeblocks-linux32") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#codeblocks-linux64") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#codeblocks-windows") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#comparable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#equatable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#errorMessage") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#from") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#generatedInSeparateFile") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#initArgLabel") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertAfter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertBefore") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertOrReplaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#libpmAtPath") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#macCodeSign") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-unix") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-arm64-linux-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#MacSwiftApp") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#nonAtomicSelection") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#once") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#preserved") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#quietOutputByDefault") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#replaceBy") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#remove") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#removeSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#replaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#searchMethod") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#searchSubscript") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#searchString") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#templateEndMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#templateReplacement") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#translate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#unused") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#usefull") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("++=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("...") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("..<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("===") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!^") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasScanner_34_ (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("galgasScanner4:attributeKeyWordList") ;
  ioList.appendObject ("galgasScanner4:galgasDelimitorsList") ;
  ioList.appendObject ("galgasScanner4:galgasKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasScanner_34_ (const String & inIdentifier,
                                                        bool & ioFound,
                                                        GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "galgasScanner4:attributeKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("from") ;
    ioList.appendObject ("once") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("usefull") ;
    ioList.appendObject ("clonable") ;
    ioList.appendObject ("equatable") ;
    ioList.appendObject ("preserved") ;
    ioList.appendObject ("replaceBy") ;
    ioList.appendObject ("translate") ;
    ioList.appendObject ("comparable") ;
    ioList.appendObject ("MacSwiftApp") ;
    ioList.appendObject ("insertAfter") ;
    ioList.appendObject ("libpmAtPath") ;
    ioList.appendObject ("macCodeSign") ;
    ioList.appendObject ("errorMessage") ;
    ioList.appendObject ("initArgLabel") ;
    ioList.appendObject ("insertBefore") ;
    ioList.appendObject ("insertSetter") ;
    ioList.appendObject ("removeSetter") ;
    ioList.appendObject ("searchMethod") ;
    ioList.appendObject ("searchString") ;
    ioList.appendObject ("makefile-unix") ;
    ioList.appendObject ("replaceSetter") ;
    ioList.appendObject ("makefile-macosx") ;
    ioList.appendObject ("searchSubscript") ;
    ioList.appendObject ("templateEndMark") ;
    ioList.appendObject ("codeblocks-linux32") ;
    ioList.appendObject ("codeblocks-linux64") ;
    ioList.appendObject ("codeblocks-windows") ;
    ioList.appendObject ("nonAtomicSelection") ;
    ioList.appendObject ("templateReplacement") ;
    ioList.appendObject ("quietOutputByDefault") ;
    ioList.appendObject ("applicationBundleBase") ;
    ioList.appendObject ("insertOrReplaceSetter") ;
    ioList.appendObject ("generatedInSeparateFile") ;
    ioList.appendObject ("makefile-win32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux64-on-macosx") ;
    ioList.appendObject ("makefile-arm64-linux-on-macosx") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasDelimitorsList") {
    ioFound = true ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("!^") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&*") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&-") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("&=") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("\?^") ;
    ioList.appendObject ("@(") ;
    ioList.appendObject ("^=") ;
    ioList.appendObject ("|=") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("!==") ;
    ioList.appendObject ("++=") ;
    ioList.appendObject ("...") ;
    ioList.appendObject ("..<") ;
    ioList.appendObject ("===") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("as") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("is") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("gui") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("log") ;
    ioList.appendObject ("map") ;
    ioList.appendObject ("mod") ;
    ioList.appendObject ("nil") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("tag") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("dict") ;
    ioList.appendObject ("drop") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("init") ;
    ioList.appendObject ("json") ;
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("weak") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("final") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("guard") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("spoil") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("super") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("rewind") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("grammar") ;
    ioList.appendObject ("lexique") ;
    ioList.appendObject ("package") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("project") ;
    ioList.appendObject ("warning") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("indexing") ;
    ioList.appendObject ("mutating") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("protected") ;
    ioList.appendObject ("typealias") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("fileprivate") ;
    ioList.appendObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_galgasScanner_34_
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasScanner_34_, getKeywordsForIdentifier_galgasScanner_34_) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_galgasScanner_34_::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [192] = {0,
    0 /* galgasScanner4_1_identifier */,
    7 /* galgasScanner4_1_double_2E_xxx */,
    6 /* galgasScanner4_1_literalInt */,
    8 /* galgasScanner4_1__27_char_27_ */,
    4 /* galgasScanner4_1__24_terminal_24_ */,
    12 /* galgasScanner4_1_comment */,
    12 /* galgasScanner4_1_commentMark */,
    10 /* galgasScanner4_1__40_type */,
    3 /* galgasScanner4_1__3F_selector_3A_ */,
    2 /* galgasScanner4_1__3F_ */,
    3 /* galgasScanner4_1__3F__21_selector_3A_ */,
    2 /* galgasScanner4_1__3F__21_ */,
    3 /* galgasScanner4_1__21_selector_3A_ */,
    2 /* galgasScanner4_1__21_ */,
    3 /* galgasScanner4_1__21__3F_selector_3A_ */,
    2 /* galgasScanner4_1__21__3F_ */,
    2 /* galgasScanner4_1__3C_ */,
    2 /* galgasScanner4_1__3C__3D_ */,
    2 /* galgasScanner4_1__3C__3C_ */,
    5 /* galgasScanner4_1__3C_non_5F_terminal_3E_ */,
    9 /* galgasScanner4_1__22_string_22_ */,
    1 /* galgasScanner4_1_abstract */,
    1 /* galgasScanner4_1_after */,
    1 /* galgasScanner4_1_as */,
    1 /* galgasScanner4_1_before */,
    1 /* galgasScanner4_1_between */,
    1 /* galgasScanner4_1_block */,
    1 /* galgasScanner4_1_boolset */,
    1 /* galgasScanner4_1_case */,
    1 /* galgasScanner4_1_class */,
    1 /* galgasScanner4_1_default */,
    1 /* galgasScanner4_1_dict */,
    1 /* galgasScanner4_1_do */,
    1 /* galgasScanner4_1_drop */,
    1 /* galgasScanner4_1_else */,
    1 /* galgasScanner4_1_elsif */,
    1 /* galgasScanner4_1_end */,
    1 /* galgasScanner4_1_enum */,
    1 /* galgasScanner4_1_error */,
    1 /* galgasScanner4_1_extension */,
    1 /* galgasScanner4_1_extern */,
    1 /* galgasScanner4_1_false */,
    1 /* galgasScanner4_1_fileprivate */,
    1 /* galgasScanner4_1_filewrapper */,
    1 /* galgasScanner4_1_final */,
    1 /* galgasScanner4_1_for */,
    1 /* galgasScanner4_1_fixit */,
    1 /* galgasScanner4_1_func */,
    1 /* galgasScanner4_1_grammar */,
    1 /* galgasScanner4_1_graph */,
    1 /* galgasScanner4_1_guard */,
    1 /* galgasScanner4_1_gui */,
    1 /* galgasScanner4_1_if */,
    1 /* galgasScanner4_1_in */,
    1 /* galgasScanner4_1_indexing */,
    1 /* galgasScanner4_1_init */,
    1 /* galgasScanner4_1_is */,
    1 /* galgasScanner4_1_json */,
    1 /* galgasScanner4_1_label */,
    1 /* galgasScanner4_1_let */,
    1 /* galgasScanner4_1_lexique */,
    1 /* galgasScanner4_1_list */,
    1 /* galgasScanner4_1_log */,
    1 /* galgasScanner4_1_loop */,
    1 /* galgasScanner4_1_map */,
    1 /* galgasScanner4_1_mod */,
    1 /* galgasScanner4_1_mutating */,
    1 /* galgasScanner4_1_nil */,
    1 /* galgasScanner4_1_not */,
    1 /* galgasScanner4_1_on */,
    1 /* galgasScanner4_1_operator */,
    1 /* galgasScanner4_1_option */,
    1 /* galgasScanner4_1_or */,
    1 /* galgasScanner4_1_override */,
    1 /* galgasScanner4_1_package */,
    1 /* galgasScanner4_1_parse */,
    1 /* galgasScanner4_1_public */,
    1 /* galgasScanner4_1_protected */,
    1 /* galgasScanner4_1_private */,
    1 /* galgasScanner4_1_proc */,
    1 /* galgasScanner4_1_project */,
    1 /* galgasScanner4_1_repeat */,
    1 /* galgasScanner4_1_rewind */,
    1 /* galgasScanner4_1_rule */,
    1 /* galgasScanner4_1_select */,
    1 /* galgasScanner4_1_self */,
    1 /* galgasScanner4_1_send */,
    1 /* galgasScanner4_1_sortedlist */,
    1 /* galgasScanner4_1_spoil */,
    1 /* galgasScanner4_1_super */,
    1 /* galgasScanner4_1_struct */,
    1 /* galgasScanner4_1_style */,
    1 /* galgasScanner4_1_switch */,
    1 /* galgasScanner4_1_syntax */,
    1 /* galgasScanner4_1_tag */,
    1 /* galgasScanner4_1_template */,
    1 /* galgasScanner4_1_then */,
    1 /* galgasScanner4_1_true */,
    1 /* galgasScanner4_1_typealias */,
    1 /* galgasScanner4_1_var */,
    1 /* galgasScanner4_1_warning */,
    1 /* galgasScanner4_1_weak */,
    1 /* galgasScanner4_1_while */,
    1 /* galgasScanner4_1_with */,
    11 /* galgasScanner4_1__23_applicationBundleBase */,
    11 /* galgasScanner4_1__23_clonable */,
    11 /* galgasScanner4_1__23_codeblocks_2D_linux_33__32_ */,
    11 /* galgasScanner4_1__23_codeblocks_2D_linux_36__34_ */,
    11 /* galgasScanner4_1__23_codeblocks_2D_windows */,
    11 /* galgasScanner4_1__23_comparable */,
    11 /* galgasScanner4_1__23_equatable */,
    11 /* galgasScanner4_1__23_errorMessage */,
    11 /* galgasScanner4_1__23_from */,
    11 /* galgasScanner4_1__23_generatedInSeparateFile */,
    11 /* galgasScanner4_1__23_initArgLabel */,
    11 /* galgasScanner4_1__23_insertAfter */,
    11 /* galgasScanner4_1__23_insertBefore */,
    11 /* galgasScanner4_1__23_insertOrReplaceSetter */,
    11 /* galgasScanner4_1__23_insertSetter */,
    11 /* galgasScanner4_1__23_libpmAtPath */,
    11 /* galgasScanner4_1__23_macCodeSign */,
    11 /* galgasScanner4_1__23_makefile_2D_macosx */,
    11 /* galgasScanner4_1__23_makefile_2D_unix */,
    11 /* galgasScanner4_1__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx */,
    11 /* galgasScanner4_1__23_makefile_2D_win_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__23_MacSwiftApp */,
    11 /* galgasScanner4_1__23_nonAtomicSelection */,
    11 /* galgasScanner4_1__23_once */,
    11 /* galgasScanner4_1__23_preserved */,
    11 /* galgasScanner4_1__23_quietOutputByDefault */,
    11 /* galgasScanner4_1__23_replaceBy */,
    11 /* galgasScanner4_1__23_remove */,
    11 /* galgasScanner4_1__23_removeSetter */,
    11 /* galgasScanner4_1__23_replaceSetter */,
    11 /* galgasScanner4_1__23_searchMethod */,
    11 /* galgasScanner4_1__23_searchSubscript */,
    11 /* galgasScanner4_1__23_searchString */,
    11 /* galgasScanner4_1__23_templateEndMark */,
    11 /* galgasScanner4_1__23_templateReplacement */,
    11 /* galgasScanner4_1__23_translate */,
    11 /* galgasScanner4_1__23_unused */,
    11 /* galgasScanner4_1__23_usefull */,
    2 /* galgasScanner4_1__2A_ */,
    2 /* galgasScanner4_1__2C_ */,
    2 /* galgasScanner4_1__2B_ */,
    2 /* galgasScanner4_1__26__2B_ */,
    2 /* galgasScanner4_1__26__2D_ */,
    2 /* galgasScanner4_1__26__2A_ */,
    2 /* galgasScanner4_1__26__2F_ */,
    2 /* galgasScanner4_1__3E_ */,
    2 /* galgasScanner4_1__3B_ */,
    2 /* galgasScanner4_1__3A_ */,
    2 /* galgasScanner4_1__3A__3E_ */,
    2 /* galgasScanner4_1__2D_ */,
    2 /* galgasScanner4_1__28_ */,
    2 /* galgasScanner4_1__29_ */,
    2 /* galgasScanner4_1__2D__3E_ */,
    2 /* galgasScanner4_1__3D__3D_ */,
    2 /* galgasScanner4_1__3D_ */,
    2 /* galgasScanner4_1__26__26_ */,
    2 /* galgasScanner4_1__5B_ */,
    2 /* galgasScanner4_1__5D_ */,
    2 /* galgasScanner4_1__2B__2B__3D_ */,
    2 /* galgasScanner4_1__2E_ */,
    2 /* galgasScanner4_1__40__28_ */,
    2 /* galgasScanner4_1__2E__2E__2E_ */,
    2 /* galgasScanner4_1__2E__2E__3C_ */,
    2 /* galgasScanner4_1__2B__3D_ */,
    2 /* galgasScanner4_1__2D__3D_ */,
    2 /* galgasScanner4_1__2A__3D_ */,
    2 /* galgasScanner4_1__2F__3D_ */,
    2 /* galgasScanner4_1__26__3D_ */,
    2 /* galgasScanner4_1__7C__3D_ */,
    2 /* galgasScanner4_1__5E__3D_ */,
    2 /* galgasScanner4_1__2F_ */,
    2 /* galgasScanner4_1__21__3D_ */,
    2 /* galgasScanner4_1__3E__3D_ */,
    2 /* galgasScanner4_1__26_ */,
    2 /* galgasScanner4_1__7B_ */,
    2 /* galgasScanner4_1__7D_ */,
    2 /* galgasScanner4_1__7C__7C_ */,
    2 /* galgasScanner4_1__7C_ */,
    2 /* galgasScanner4_1__5E_ */,
    2 /* galgasScanner4_1__3E__3E_ */,
    2 /* galgasScanner4_1__7E_ */,
    2 /* galgasScanner4_1__3D__3D__3D_ */,
    2 /* galgasScanner4_1__21__3D__3D_ */,
    2 /* galgasScanner4_1__3F__5E_ */,
    2 /* galgasScanner4_1__21__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 13) {
    static const char * kStyleArray [13] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "selectorStyle",
      "terminalStyle",
      "nonTerminalStyle",
      "integerStyle",
      "floatStyle",
      "characterStyle",
      "stringStyle",
      "typeNameStyle",
      "attributeStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForGeneration::objectCompare (const GGS_templateInstructionForGeneration & inOperand) const {
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

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateInstructionForGeneration::
templateInstructionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ("templateInstructionForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionAST::objectCompare (const GGS_templateInstructionAST & inOperand) const {
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

GGS_templateInstructionAST::GGS_templateInstructionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateInstructionAST::
templateInstructionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST::GGS_templateInstructionAST (const cPtr_templateInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionAST::cPtr_templateInstructionAST (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST ("templateInstructionAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionAST ;
}

//--------------------------------------------------------------------------------------------------
// @templateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateExpressionAST::objectCompare (const GGS_templateExpressionAST & inOperand) const {
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

GGS_templateExpressionAST::GGS_templateExpressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateExpressionAST::
templateExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST::GGS_templateExpressionAST (const cPtr_templateExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateExpressionAST::cPtr_templateExpressionAST (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateExpressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionAST ("templateExpressionAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateInstructionListAST : public CollectionElementPtr {
  public: GGS_templateInstructionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListAST::CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionAST & in_mInstruction
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListAST::CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateInstructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateInstructionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateInstructionListAST
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST::GGS_templateInstructionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST::GGS_templateInstructionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateInstructionListAST * p = (CollectionElementPtr_templateInstructionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateInstructionListAST) ;
    const GGS_templateInstructionListAST_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_templateInstructionAST & in_mInstruction
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateInstructionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateInstructionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateInstructionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::plusPlusAssignOperation (const GGS_templateInstructionListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::class_func_listWithValue (const GGS_templateInstructionAST & inOperand0
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element element (inOperand0) ;
  GGS_templateInstructionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::addAssignOperation (const GGS_templateInstructionAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_append (const GGS_templateInstructionAST inOperand0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_insertAtIndex (const GGS_templateInstructionAST inOperand0,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_removeAtIndex (GGS_templateInstructionAST & outOperand0,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_popFirst (GGS_templateInstructionAST & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_popLast (GGS_templateInstructionAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::method_first (GGS_templateInstructionAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::method_last (GGS_templateInstructionAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::add_operation (const GGS_templateInstructionListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::plusAssignOperation (const GGS_templateInstructionListAST inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_setMInstructionAtIndex (GGS_templateInstructionAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST GGS_templateInstructionListAST::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionListAST::DownEnumerator_templateInstructionListAST (const GGS_templateInstructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element DownEnumerator_templateInstructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST DownEnumerator_templateInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionListAST::UpEnumerator_templateInstructionListAST (const GGS_templateInstructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element UpEnumerator_templateInstructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST UpEnumerator_templateInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListAST ("templateInstructionListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionAST_2E_weak::objectCompare (const GGS_templateInstructionAST_2E_weak & inOperand) const {
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

GGS_templateInstructionAST_2E_weak::GGS_templateInstructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak & GGS_templateInstructionAST_2E_weak::operator = (const GGS_templateInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak::GGS_templateInstructionAST_2E_weak (const GGS_templateInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak GGS_templateInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST GGS_templateInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionAST * p = (cPtr_templateInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST GGS_templateInstructionAST_2E_weak::bang_templateInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionAST) ;
      result = GGS_templateInstructionAST ((cPtr_templateInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak ("templateInstructionAST.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateInstructionListForGeneration : public CollectionElementPtr {
  public: GGS_templateInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionForGeneration & in_mInstruction
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListForGeneration::CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionForGeneration & in_mInstruction
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListForGeneration::CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateInstructionListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration::GGS_templateInstructionListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration::GGS_templateInstructionListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateInstructionListForGeneration * p = (CollectionElementPtr_templateInstructionListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateInstructionListForGeneration) ;
    const GGS_templateInstructionListForGeneration_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_templateInstructionForGeneration & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateInstructionListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateInstructionListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::plusPlusAssignOperation (const GGS_templateInstructionListForGeneration_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::class_func_listWithValue (const GGS_templateInstructionForGeneration & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element element (inOperand0) ;
  GGS_templateInstructionListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::addAssignOperation (const GGS_templateInstructionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_append (const GGS_templateInstructionForGeneration inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_insertAtIndex (const GGS_templateInstructionForGeneration inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_removeAtIndex (GGS_templateInstructionForGeneration & outOperand0,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_popFirst (GGS_templateInstructionForGeneration & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_popLast (GGS_templateInstructionForGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::method_first (GGS_templateInstructionForGeneration & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::method_last (GGS_templateInstructionForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::add_operation (const GGS_templateInstructionListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::plusAssignOperation (const GGS_templateInstructionListForGeneration inList,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_setMInstructionAtIndex (GGS_templateInstructionForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionListForGeneration::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionListForGeneration::DownEnumerator_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element DownEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration DownEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionListForGeneration::UpEnumerator_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element UpEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration UpEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ("templateInstructionListForGeneration",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;
}

