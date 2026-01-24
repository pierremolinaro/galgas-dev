#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//  Map type @extensionGetterMapForType
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::GGS_extensionGetterMapForType (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::~ GGS_extensionGetterMapForType (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::GGS_extensionGetterMapForType (const GGS_extensionGetterMapForType & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType & GGS_extensionGetterMapForType::operator = (const GGS_extensionGetterMapForType & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForType::getter_hasKey (const GGS_string & inKey
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForType::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                              const GGS_uint & inLevel
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForType::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForType::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionGetterMapForType::getter_locationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionGetterMapForType::getter_keyList (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForType::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::performInsert (const GGS_extensionGetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>
GGS_extensionGetterMapForType::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionGetterMapForType::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>>
GGS_extensionGetterMapForType::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionGetterMapForType::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element_3F_ GGS_extensionGetterMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionGetterMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionGetterMapForType_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mResultTypeName = info->mProperty_mResultTypeName ;
      element.mProperty_mInputFormalParameterList = info->mProperty_mInputFormalParameterList ;
      element.mProperty_mQualifier = info->mProperty_mQualifier ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::class_func_mapWithMapToOverride (const GGS_extensionGetterMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_insertKey (GGS_lstring inLKey,
                                                      GGS_lstring inArgument0,
                                                      GGS_formalInputParameterListAST inArgument1,
                                                      GGS_methodQualifier inArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_extensionGetterMapForType_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' getter has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionGetterMapForType::getter_mResultTypeNameForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mResultTypeName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_extensionGetterMapForType::getter_mInputFormalParameterListForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInputFormalParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_extensionGetterMapForType::getter_mQualifierForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_methodQualifier result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mQualifier ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMResultTypeNameForKey (GGS_lstring inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mResultTypeName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMInputFormalParameterListForKey (GGS_formalInputParameterListAST inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInputFormalParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMQualifierForKey (GGS_methodQualifier inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mQualifier = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionGetterMapForType_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> & inArray,
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
    ioString.appendString ("mResultTypeName:") ;
    inArray (i COMMA_HERE)->mProperty_mResultTypeName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInputFormalParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mInputFormalParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mQualifier:") ;
    inArray (i COMMA_HERE)->mProperty_mQualifier.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> array = sortedInfoArray () ;
    GGS_extensionGetterMapForType_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionGetterMapForType_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionGetterMapForType
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionGetterMapForType::DownEnumerator_extensionGetterMapForType (const GGS_extensionGetterMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element DownEnumerator_extensionGetterMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionGetterMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionGetterMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST DownEnumerator_extensionGetterMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier DownEnumerator_extensionGetterMapForType::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionGetterMapForType
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionGetterMapForType::UpEnumerator_extensionGetterMapForType (const GGS_extensionGetterMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element UpEnumerator_extensionGetterMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionGetterMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionGetterMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST UpEnumerator_extensionGetterMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier UpEnumerator_extensionGetterMapForType::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionGetterMapForType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ("extensionGetterMapForType",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  const GGS_extensionGetterMapForType * p = (const GGS_extensionGetterMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionGetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::GGS_extensionGetterMapForBuildingContext (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::~ GGS_extensionGetterMapForBuildingContext (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::GGS_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext & GGS_extensionGetterMapForBuildingContext::operator = (const GGS_extensionGetterMapForBuildingContext & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForBuildingContext::getter_hasKey (const GGS_string & inKey
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForBuildingContext::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                         const GGS_uint & inLevel
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForBuildingContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForBuildingContext::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionGetterMapForBuildingContext::getter_locationForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionGetterMapForBuildingContext::getter_keyList (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForBuildingContext::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::performInsert (const GGS_extensionGetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForBuildingContext_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>
GGS_extensionGetterMapForBuildingContext::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionGetterMapForBuildingContext::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>>
GGS_extensionGetterMapForBuildingContext::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionGetterMapForBuildingContext::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element_3F_ GGS_extensionGetterMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionGetterMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionGetterMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExtensionGetterMapForType = info->mProperty_mExtensionGetterMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element GGS_extensionGetterMapForBuildingContext
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "internal error" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionGetterMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_insertKey (GGS_lstring inLKey,
                                                                 GGS_extensionGetterMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_extensionGetterMapForBuildingContext_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::method_searchKey (GGS_lstring inLKey,
                                                                 GGS_extensionGetterMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExtensionGetterMapForType ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_replaceKey (GGS_extensionGetterMapForBuildingContext_2E_element inElement,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "internal error" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForBuildingContext::getter_mExtensionGetterMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExtensionGetterMapForType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_setMExtensionGetterMapForTypeForKey (GGS_extensionGetterMapForType inValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExtensionGetterMapForType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionGetterMapForBuildingContext_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> & inArray,
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
    ioString.appendString ("mExtensionGetterMapForType:") ;
    inArray (i COMMA_HERE)->mProperty_mExtensionGetterMapForType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> array = sortedInfoArray () ;
    GGS_extensionGetterMapForBuildingContext_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionGetterMapForBuildingContext_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionGetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionGetterMapForBuildingContext::DownEnumerator_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element DownEnumerator_extensionGetterMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionGetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType DownEnumerator_extensionGetterMapForBuildingContext::current_mExtensionGetterMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionGetterMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionGetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionGetterMapForBuildingContext::UpEnumerator_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element UpEnumerator_extensionGetterMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionGetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType UpEnumerator_extensionGetterMapForBuildingContext::current_mExtensionGetterMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionGetterMapForType ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionGetterMapForBuildingContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ("extensionGetterMapForBuildingContext",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  const GGS_extensionGetterMapForBuildingContext * p = (const GGS_extensionGetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_keyRepresentation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @wrapperExtensionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::GGS_wrapperExtensionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::~ GGS_wrapperExtensionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::GGS_wrapperExtensionMap (const GGS_wrapperExtensionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap & GGS_wrapperExtensionMap::operator = (const GGS_wrapperExtensionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_wrapperExtensionMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_wrapperExtensionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_wrapperExtensionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_wrapperExtensionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_wrapperExtensionMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_wrapperExtensionMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperExtensionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_wrapperExtensionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::performInsert (const GGS_wrapperExtensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_wrapperExtensionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>
GGS_wrapperExtensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_wrapperExtensionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>>
GGS_wrapperExtensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_wrapperExtensionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element_3F_ GGS_wrapperExtensionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_wrapperExtensionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_wrapperExtensionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_wrapperExtensionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::class_func_mapWithMapToOverride (const GGS_wrapperExtensionMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_wrapperExtensionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_wrapperExtensionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::setter_insertKey (GGS_lstring inLKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_wrapperExtensionMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' extension has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_wrapperExtensionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> & inArray,
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> array = sortedInfoArray () ;
    GGS_wrapperExtensionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_wrapperExtensionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_wrapperExtensionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @wrapperExtensionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_wrapperExtensionMap::DownEnumerator_wrapperExtensionMap (const GGS_wrapperExtensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element DownEnumerator_wrapperExtensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_wrapperExtensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @wrapperExtensionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_wrapperExtensionMap::UpEnumerator_wrapperExtensionMap (const GGS_wrapperExtensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element UpEnumerator_wrapperExtensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_wrapperExtensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @wrapperExtensionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ("wrapperExtensionMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperExtensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperExtensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperExtensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  const GGS_wrapperExtensionMap * p = (const GGS_wrapperExtensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperExtensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@semanticTypePrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                      GGS_semanticDeclarationAST inArgument_0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' type is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_topologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                              GGS_lstringlist & outSortedKeyList,
                                                              GGS_semanticDeclarationListAST & outUnsortedList,
                                                              GGS_lstringlist & outUnsortedKeyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                                        GGS_lstringlist & outSortedKeyList,
                                                                        GGS_semanticDeclarationListAST & outUnsortedList,
                                                                        GGS_lstringlist & outUnsortedKeyList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_circularities (GGS_semanticDeclarationListAST & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                           const GGS_stringset & inKeysToExclude,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST GGS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inNodesToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_semanticTypePrecedenceGraph resultingGraph ;
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

//--------------------------------------------------------------------------------------------------
//     @semanticTypePrecedenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  const GGS_semanticTypePrecedenceGraph * p = (const GGS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (cPtr_semanticDeclarationAST * inObject,
                                               GGS_galgasDeclarationAST & io_ioDeclarations,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_addAssociatedElement (io_ioDeclarations, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_galgasQualifiedFeature_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_::GGS__5B_galgasQualifiedFeature_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_::GGS__5B_galgasQualifiedFeature_5D_ (const GGS__5B_galgasQualifiedFeature_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ & GGS__5B_galgasQualifiedFeature_5D_::operator = (const GGS__5B_galgasQualifiedFeature_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ GGS__5B_galgasQualifiedFeature_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_galgasQualifiedFeature_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_galgasQualifiedFeature_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::plusPlusAssignOperation (const GGS_galgasQualifiedFeature & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_galgasQualifiedFeature_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ GGS__5B_galgasQualifiedFeature_5D_::add_operation (const GGS__5B_galgasQualifiedFeature_5D_ & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_galgasQualifiedFeature_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::description (String & ioString,
                                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (", ") ;
  ioString.appendSigned (mSharedArray.count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count() > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::plusAssignOperation (const GGS__5B_galgasQualifiedFeature_5D_ inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::setter_append (const GGS_galgasQualifiedFeature inValue,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::setter_insertAtIndex (const GGS_galgasQualifiedFeature inValue,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::setter_removeAtIndex (GGS_galgasQualifiedFeature & outValue,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    outValue = mSharedArray (idx COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::setter_popFirst (GGS_galgasQualifiedFeature & outValue,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::setter_popLast (GGS_galgasQualifiedFeature & outValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::method_first (GGS_galgasQualifiedFeature & outValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::method_last (GGS_galgasQualifiedFeature & outValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS__5B_galgasQualifiedFeature_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_galgasQualifiedFeature result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_galgasQualifiedFeature_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_galgasQualifiedFeature_5D_::DownEnumerator__5B_galgasQualifiedFeature_5D_ (const GGS__5B_galgasQualifiedFeature_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature DownEnumerator__5B_galgasQualifiedFeature_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_galgasQualifiedFeature_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_galgasQualifiedFeature_5D_::UpEnumerator__5B_galgasQualifiedFeature_5D_ (const GGS__5B_galgasQualifiedFeature_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature UpEnumerator__5B_galgasQualifiedFeature_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[galgasQualifiedFeature] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgasQualifiedFeature_5D_ ("[galgasQualifiedFeature]",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_galgasQualifiedFeature_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_galgasQualifiedFeature_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_galgasQualifiedFeature_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_galgasQualifiedFeature_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ GGS__5B_galgasQualifiedFeature_5D_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS__5B_galgasQualifiedFeature_5D_ result ;
  const GGS__5B_galgasQualifiedFeature_5D_ * p = (const GGS__5B_galgasQualifiedFeature_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_galgasQualifiedFeature_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[galgasQualifiedFeature]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GGS_lbigint & outArgument_majorVersion,
                                                                                          GGS_lbigint & outArgument_minorVersion,
                                                                                          GGS_lbigint & outArgument_revisionVersion,
                                                                                          GGS_lstring & outArgument_targetName,
                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_majorVersion.drop () ; // Release 'out' argument
  outArgument_minorVersion.drop () ; // Release 'out' argument
  outArgument_revisionVersion.drop () ; // Release 'out' argument
  outArgument_targetName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  outArgument_majorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  outArgument_minorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  outArgument_revisionVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
  outArgument_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (const GGS_lstring constinArgument_inProjectSourceFilePath,
                                                                                                                GGS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  GGS_lbigint var_majorVersion_3244 ;
  GGS_lbigint var_minorVersion_3277 ;
  GGS_lbigint var_revisionVersion_3310 ;
  GGS_lstring var_targetName_3346 ;
  nt_project_5F_header_ (var_majorVersion_3244, var_minorVersion_3277, var_revisionVersion_3310, var_targetName_3346, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
  GGS_lstringlist var_generateFeatureList_3386 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS__5B_galgasQualifiedFeature_5D_ var_qualifiedFeatureList_3446 = GGS__5B_galgasQualifiedFeature_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 90)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("quietOutputByDefault").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 91))  COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 93)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("MacSwiftApp").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 94))  COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 96)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("makefile-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 97))  COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 99)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("makefile-unix").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 100))  COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 102)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("makefile-x86linux32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 103))  COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 105)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("makefile-x86linux64-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 106))  COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("makefile-arm64-linux-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 109))  COMMA_SOURCE_FILE ("galgasProject.galgas", 109)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("makefile-win32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 112))  COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("codeblocks-windows").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 115))  COMMA_SOURCE_FILE ("galgasProject.galgas", 115)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("codeblocks-linux32").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 118))  COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 120)) ;
      var_generateFeatureList_3386.addAssignOperation (GGS_string ("codeblocks-linux64").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 121))  COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
      GGS_lstring var_featureValue_4654 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 125)) ;
      var_qualifiedFeatureList_3446.plusPlusAssignOperation (GGS_galgasQualifiedFeature::init_21__21_ (GGS_string ("applicationBundleBase").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 126)), var_featureValue_4654, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
      GGS_lstring var_featureValue_4816 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 130)) ;
      var_qualifiedFeatureList_3446.plusPlusAssignOperation (GGS_galgasQualifiedFeature::init_21__21_ (GGS_string ("libpmAtPath").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 131)), var_featureValue_4816, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
      GGS_lstring var_featureValue_4968 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 135)) ;
      var_qualifiedFeatureList_3446.plusPlusAssignOperation (GGS_galgasQualifiedFeature::init_21__21_ (GGS_string ("macCodeSign").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 136)), var_featureValue_4968, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
  GGS_string var_sourceDirectory_5138 = constinArgument_inProjectSourceFilePath.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProject.galgas", 140)).add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 140)) ;
  GGS_stringlist var_extensionList_5243 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_extensionList_5243.addAssignOperation (GGS_string ("galgas")  COMMA_SOURCE_FILE ("galgasProject.galgas", 142)) ;
  var_extensionList_5243.addAssignOperation (GGS_string ("ggs")  COMMA_SOURCE_FILE ("galgasProject.galgas", 143)) ;
  GGS_stringlist var_projectSourceList_5344 = var_sourceDirectory_5138.getter_regularFilesWithExtensions (GGS_bool (true), var_extensionList_5243 COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
  GGS_string var_toolCppDirectory_5484 = var_sourceDirectory_5138.add_operation (GGS_string ("/tool-sources"), inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 146)) ;
  GGS_stringlist var_cppExtensionList_5546 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_cppExtensionList_5546.addAssignOperation (GGS_string ("cpp")  COMMA_SOURCE_FILE ("galgasProject.galgas", 148)) ;
  var_cppExtensionList_5546.addAssignOperation (GGS_string ("h")  COMMA_SOURCE_FILE ("galgasProject.galgas", 149)) ;
  GGS_stringlist var_toolCppSourceList_5651 = var_toolCppDirectory_5484.getter_regularFilesWithExtensions (GGS_bool (true), var_cppExtensionList_5546 COMMA_SOURCE_FILE ("galgasProject.galgas", 150)) ;
  outArgument_outProjectComponentAST = GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21__21_ (var_projectSourceList_5344, var_toolCppSourceList_5651, var_majorVersion_3244, var_minorVersion_3277, var_revisionVersion_3310, var_generateFeatureList_3386, var_qualifiedFeatureList_3446, var_targetName_3346, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProject.galgas", 161)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_project_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 90)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 93)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 96)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 99)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 102)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 105)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 120)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 125)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 130)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 135)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
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
mLexicalAttribute_identifierString (),
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

static const char * gLexicalMessage_galgasScanner_34__attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

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
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 193)) {
    static const char * syntaxErrorMessageArray [193] = {kEndOfSourceLexicalErrorMessage,
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
        "the 'unused' keyword",
        "the 'var' keyword",
        "the 'warning' keyword",
        "the 'weak' keyword",
        "the 'while' keyword",
        "the 'with' keyword",
        "the '%applicationBundleBase' keyword",
        "the '%clonable' keyword",
        "the '%codeblocks-linux32' keyword",
        "the '%codeblocks-linux64' keyword",
        "the '%codeblocks-windows' keyword",
        "the '%comparable' keyword",
        "the '%equatable' keyword",
        "the '%errorMessage' keyword",
        "the '%from' keyword",
        "the '%generatedInSeparateFile' keyword",
        "the '%initArgLabel' keyword",
        "the '%insertAfter' keyword",
        "the '%insertBefore' keyword",
        "the '%insertOrReplaceSetter' keyword",
        "the '%insertSetter' keyword",
        "the '%libpmAtPath' keyword",
        "the '%macCodeSign' keyword",
        "the '%makefile-macosx' keyword",
        "the '%makefile-unix' keyword",
        "the '%makefile-x86linux32-on-macosx' keyword",
        "the '%makefile-x86linux64-on-macosx' keyword",
        "the '%makefile-arm64-linux-on-macosx' keyword",
        "the '%makefile-win32-on-macosx' keyword",
        "the '%MacSwiftApp' keyword",
        "the '%nonAtomicSelection' keyword",
        "the '%once' keyword",
        "the '%preserved' keyword",
        "the '%quietOutputByDefault' keyword",
        "the '%replaceBy' keyword",
        "the '%remove' keyword",
        "the '%removeSetter' keyword",
        "the '%replaceSetter' keyword",
        "the '%searchMethod' keyword",
        "the '%searchSubscript' keyword",
        "the '%searchString' keyword",
        "the '%templateEndMark' keyword",
        "the '%templateReplacement' keyword",
        "the '%translate' keyword",
        "the '%usefull' keyword",
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
        "the '`' delimitor",
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

//--- Unicode string for '$`$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___60_ = {
  utf32 ('`'),
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

static const int32_t ktable_size_galgasScanner_34__attributeKeyWordList = 39 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__attributeKeyWordList [ktable_size_galgasScanner_34__attributeKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__from, Lexique_galgasScanner_34_::kToken__25_from),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__once, Lexique_galgasScanner_34_::kToken__25_once),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__remove, Lexique_galgasScanner_34_::kToken__25_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__usefull, Lexique_galgasScanner_34_::kToken__25_usefull),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__clonable, Lexique_galgasScanner_34_::kToken__25_clonable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__equatable, Lexique_galgasScanner_34_::kToken__25_equatable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__preserved, Lexique_galgasScanner_34_::kToken__25_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceBy, Lexique_galgasScanner_34_::kToken__25_replaceBy),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__translate, Lexique_galgasScanner_34_::kToken__25_translate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__comparable, Lexique_galgasScanner_34_::kToken__25_comparable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__MacSwiftApp, Lexique_galgasScanner_34_::kToken__25_MacSwiftApp),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertAfter, Lexique_galgasScanner_34_::kToken__25_insertAfter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__libpmAtPath, Lexique_galgasScanner_34_::kToken__25_libpmAtPath),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__macCodeSign, Lexique_galgasScanner_34_::kToken__25_macCodeSign),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__errorMessage, Lexique_galgasScanner_34_::kToken__25_errorMessage),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__initArgLabel, Lexique_galgasScanner_34_::kToken__25_initArgLabel),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertBefore, Lexique_galgasScanner_34_::kToken__25_insertBefore),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertSetter, Lexique_galgasScanner_34_::kToken__25_insertSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__removeSetter, Lexique_galgasScanner_34_::kToken__25_removeSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchMethod, Lexique_galgasScanner_34_::kToken__25_searchMethod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchString, Lexique_galgasScanner_34_::kToken__25_searchString),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_unix, Lexique_galgasScanner_34_::kToken__25_makefile_2D_unix),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceSetter, Lexique_galgasScanner_34_::kToken__25_replaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchSubscript, Lexique_galgasScanner_34_::kToken__25_searchSubscript),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateEndMark, Lexique_galgasScanner_34_::kToken__25_templateEndMark),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_windows, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_windows),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__nonAtomicSelection, Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateReplacement, Lexique_galgasScanner_34_::kToken__25_templateReplacement),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__quietOutputByDefault, Lexique_galgasScanner_34_::kToken__25_quietOutputByDefault),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__applicationBundleBase, Lexique_galgasScanner_34_::kToken__25_applicationBundleBase),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertOrReplaceSetter, Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__generatedInSeparateFile, Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx)
} ;

int32_t Lexique_galgasScanner_34_::search_into_attributeKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__attributeKeyWordList, ktable_size_galgasScanner_34__attributeKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasDelimitorsList = 48 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___60_, Lexique_galgasScanner_34_::kToken__60_),
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

static const int32_t ktable_size_galgasScanner_34__galgasKeyWordList = 84 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__unused, Lexique_galgasScanner_34_::kToken_unused),
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
    case kToken_unused:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("unused") ;
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
    case kToken__25_applicationBundleBase:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%applicationBundleBase") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_clonable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%clonable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_linux_33__32_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%codeblocks-linux32") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_linux_36__34_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%codeblocks-linux64") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_windows:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%codeblocks-windows") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_comparable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%comparable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_equatable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%equatable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_errorMessage:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%errorMessage") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_from:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%from") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_generatedInSeparateFile:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%generatedInSeparateFile") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_initArgLabel:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%initArgLabel") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertAfter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertAfter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertBefore:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertBefore") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertOrReplaceSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertOrReplaceSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_libpmAtPath:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%libpmAtPath") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_macCodeSign:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%macCodeSign") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_unix:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-unix") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-x86linux32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-x86linux64-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-arm64-linux-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-win32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_MacSwiftApp:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%MacSwiftApp") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_nonAtomicSelection:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%nonAtomicSelection") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_once:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%once") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_preserved:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%preserved") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_quietOutputByDefault:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%quietOutputByDefault") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_replaceBy:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%replaceBy") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_remove:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%remove") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_removeSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%removeSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_replaceSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%replaceSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_searchMethod:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%searchMethod") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_searchSubscript:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%searchSubscript") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_searchString:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%searchString") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_templateEndMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%templateEndMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_templateReplacement:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%templateReplacement") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_translate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%translate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_usefull:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%usefull") ;
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
    case kToken__60_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("`") ;
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
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForChar_isUnicodeLetter ()) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
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
    }else if (testForInputUTF32Char (utf32 ('%'))) {
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
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___60_, true)) {
      token.mTokenCode = kToken__60_ ;
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
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
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

String Lexique_galgasScanner_34_::attributeValue_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
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

GGS_lstring Lexique_galgasScanner_34_::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_identifierString) ;
  GGS_lstring result (value, currentLocation) ;
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
  result.addAssignOperation (GGS_string ("unused") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("var") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("warning") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("weak") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("with") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%applicationBundleBase") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%clonable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%codeblocks-linux32") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%codeblocks-linux64") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%codeblocks-windows") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%comparable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%equatable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%errorMessage") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%from") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%generatedInSeparateFile") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%initArgLabel") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertAfter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertBefore") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertOrReplaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%libpmAtPath") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%macCodeSign") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-unix") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-arm64-linux-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%MacSwiftApp") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%nonAtomicSelection") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%once") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%preserved") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%quietOutputByDefault") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%replaceBy") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%remove") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%removeSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%replaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%searchMethod") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%searchSubscript") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%searchString") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%templateEndMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%templateReplacement") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%translate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%usefull") COMMA_HERE) ;
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
  result.addAssignOperation (GGS_string ("`") COMMA_HERE) ;
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
    ioList.appendObject ("`") ;
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
    ioList.appendObject ("unused") ;
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
  static const uint32_t kTerminalSymbolStyles [193] = {0,
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
    1 /* galgasScanner4_1_unused */,
    1 /* galgasScanner4_1_var */,
    1 /* galgasScanner4_1_warning */,
    1 /* galgasScanner4_1_weak */,
    1 /* galgasScanner4_1_while */,
    1 /* galgasScanner4_1_with */,
    11 /* galgasScanner4_1__25_applicationBundleBase */,
    11 /* galgasScanner4_1__25_clonable */,
    11 /* galgasScanner4_1__25_codeblocks_2D_linux_33__32_ */,
    11 /* galgasScanner4_1__25_codeblocks_2D_linux_36__34_ */,
    11 /* galgasScanner4_1__25_codeblocks_2D_windows */,
    11 /* galgasScanner4_1__25_comparable */,
    11 /* galgasScanner4_1__25_equatable */,
    11 /* galgasScanner4_1__25_errorMessage */,
    11 /* galgasScanner4_1__25_from */,
    11 /* galgasScanner4_1__25_generatedInSeparateFile */,
    11 /* galgasScanner4_1__25_initArgLabel */,
    11 /* galgasScanner4_1__25_insertAfter */,
    11 /* galgasScanner4_1__25_insertBefore */,
    11 /* galgasScanner4_1__25_insertOrReplaceSetter */,
    11 /* galgasScanner4_1__25_insertSetter */,
    11 /* galgasScanner4_1__25_libpmAtPath */,
    11 /* galgasScanner4_1__25_macCodeSign */,
    11 /* galgasScanner4_1__25_makefile_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_unix */,
    11 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_MacSwiftApp */,
    11 /* galgasScanner4_1__25_nonAtomicSelection */,
    11 /* galgasScanner4_1__25_once */,
    11 /* galgasScanner4_1__25_preserved */,
    11 /* galgasScanner4_1__25_quietOutputByDefault */,
    11 /* galgasScanner4_1__25_replaceBy */,
    11 /* galgasScanner4_1__25_remove */,
    11 /* galgasScanner4_1__25_removeSetter */,
    11 /* galgasScanner4_1__25_replaceSetter */,
    11 /* galgasScanner4_1__25_searchMethod */,
    11 /* galgasScanner4_1__25_searchSubscript */,
    11 /* galgasScanner4_1__25_searchString */,
    11 /* galgasScanner4_1__25_templateEndMark */,
    11 /* galgasScanner4_1__25_templateReplacement */,
    11 /* galgasScanner4_1__25_translate */,
    11 /* galgasScanner4_1__25_usefull */,
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
    2 /* galgasScanner4_1__60_ */,
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
//'@usefulEntitiesGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph::GGS_usefulEntitiesGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_addNode (GGS_lstring inKey,
                                              GGS_lstring inArgument_0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_lstringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_topologicalSort (GGS_lstringlist & outSortedList,
                                                      GGS_lstringlist & outSortedKeyList,
                                                      GGS_lstringlist & outUnsortedList,
                                                      GGS_lstringlist & outUnsortedKeyList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_lstringlist (sortedList) ;
  outUnsortedList = GGS_lstringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_depthFirstTopologicalSort (GGS_lstringlist & outSortedList,
                                                                GGS_lstringlist & outSortedKeyList,
                                                                GGS_lstringlist & outUnsortedList,
                                                                GGS_lstringlist & outUnsortedKeyList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_lstringlist (sortedList) ;
  outUnsortedList = GGS_lstringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_circularities (GGS_lstringlist & outInfoList,
                                                    GGS_lstringlist & outKeyList
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoSuccessor (GGS_lstringlist & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoPredecessor (GGS_lstringlist & outInfoList,
                                                             GGS_lstringlist & outKeyList
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                           const GGS_stringset & inKeysToExclude,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_usefulEntitiesGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_usefulEntitiesGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                     const GGS_stringset & inNodesToExclude,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_usefulEntitiesGraph resultingGraph ;
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

//--------------------------------------------------------------------------------------------------
//     @usefulEntitiesGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ("usefulEntitiesGraph",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_usefulEntitiesGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_usefulEntitiesGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_usefulEntitiesGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_usefulEntitiesGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  const GGS_usefulEntitiesGraph * p = (const GGS_usefulEntitiesGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_usefulEntitiesGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("usefulEntitiesGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::GGS_uselessEntityLocationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::~ GGS_uselessEntityLocationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::GGS_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap & GGS_uselessEntityLocationMap::operator = (const GGS_uselessEntityLocationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uselessEntityLocationMap::getter_hasKey (const GGS_string & inKey
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uselessEntityLocationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                             const GGS_uint & inLevel
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uselessEntityLocationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uselessEntityLocationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_uselessEntityLocationMap::getter_locationForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_uselessEntityLocationMap::getter_keyList (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_uselessEntityLocationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::performInsert (const GGS_uselessEntityLocationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>
GGS_uselessEntityLocationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_uselessEntityLocationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>>
GGS_uselessEntityLocationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_uselessEntityLocationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_ GGS_uselessEntityLocationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uselessEntityLocationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_uselessEntityLocationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_uselessEntityLocationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mUnusedEntityName = info->mProperty_mUnusedEntityName ;
      element.mProperty_mLocation = info->mProperty_mLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::class_func_mapWithMapToOverride (const GGS_uselessEntityLocationMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uselessEntityLocationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_insertKey (GGS_lstring inLKey,
                                                     GGS_string inArgument0,
                                                     GGS_location inArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_uselessEntityLocationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "--- %K INTERNAL ERROR ---" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uselessEntityLocationMap::getter_mUnusedEntityNameForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUnusedEntityName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_uselessEntityLocationMap::getter_mLocationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLocation ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_setMUnusedEntityNameForKey (GGS_string inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUnusedEntityName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_setMLocationForKey (GGS_location inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_uselessEntityLocationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLocation = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_uselessEntityLocationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> & inArray,
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
    ioString.appendString ("mUnusedEntityName:") ;
    inArray (i COMMA_HERE)->mProperty_mUnusedEntityName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLocation:") ;
    inArray (i COMMA_HERE)->mProperty_mLocation.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> array = sortedInfoArray () ;
    GGS_uselessEntityLocationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_uselessEntityLocationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_uselessEntityLocationMap::DownEnumerator_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element DownEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_uselessEntityLocationMap::current_mUnusedEntityName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUnusedEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLocation ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_uselessEntityLocationMap::UpEnumerator_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element UpEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_uselessEntityLocationMap::current_mUnusedEntityName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUnusedEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLocation ;
}


//--------------------------------------------------------------------------------------------------
//     @uselessEntityLocationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ("uselessEntityLocationMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uselessEntityLocationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uselessEntityLocationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uselessEntityLocationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  const GGS_uselessEntityLocationMap * p = (const GGS_uselessEntityLocationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uselessEntityLocationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @predefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_predefinedTypeAST::objectCompare (const GGS_predefinedTypeAST & inOperand) const {
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

GGS_predefinedTypeAST::GGS_predefinedTypeAST (void) :
GGS_semanticDeclarationAST () {
}


void cPtr_predefinedTypeAST::
predefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                            const GGS_string & in_mPredefinedTypeName,
                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST::GGS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_predefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_predefinedTypeAST::readProperty_mPredefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @predefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_predefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @predefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypeAST ("predefinedTypeAST",
                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_predefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_predefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_predefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST GGS_predefinedTypeAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_predefinedTypeAST result ;
  const GGS_predefinedTypeAST * p = (const GGS_predefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_predefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_predefinedTypeAST_2E_weak::objectCompare (const GGS_predefinedTypeAST_2E_weak & inOperand) const {
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

GGS_predefinedTypeAST_2E_weak::GGS_predefinedTypeAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST_2E_weak & GGS_predefinedTypeAST_2E_weak::operator = (const GGS_predefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST_2E_weak::GGS_predefinedTypeAST_2E_weak (const GGS_predefinedTypeAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST_2E_weak GGS_predefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_predefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST GGS_predefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_predefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_predefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST GGS_predefinedTypeAST_2E_weak::bang_predefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_predefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_predefinedTypeAST) ;
      result = GGS_predefinedTypeAST ((cPtr_predefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @predefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak ("predefinedTypeAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_predefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_predefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_predefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST_2E_weak GGS_predefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_predefinedTypeAST_2E_weak result ;
  const GGS_predefinedTypeAST_2E_weak * p = (const GGS_predefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_predefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@insertSetterListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertSetterListAST : public cCollectionElement {
  public: GGS_insertSetterListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_insertSetterListAST (const GGS_lstring & in_mInsertMethodName,
                                                  const GGS_lstring & in_mErrorMessage,
                                                  const GGS_lstring & in_mShadowErrorMessage
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertSetterListAST (const GGS_insertSetterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertSetterListAST::cCollectionElement_insertSetterListAST (const GGS_lstring & in_mInsertMethodName,
                                                                                const GGS_lstring & in_mErrorMessage,
                                                                                const GGS_lstring & in_mShadowErrorMessage
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertMethodName, in_mErrorMessage, in_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertSetterListAST::cCollectionElement_insertSetterListAST (const GGS_insertSetterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertMethodName, inElement.mProperty_mErrorMessage, inElement.mProperty_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_insertSetterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertSetterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_insertSetterListAST (mObject.mProperty_mInsertMethodName, mObject.mProperty_mErrorMessage, mObject.mProperty_mShadowErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @insertSetterListAST
//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST::GGS_insertSetterListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST::GGS_insertSetterListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    const GGS_insertSetterListAST_2E_element element (p->mObject.mProperty_mInsertMethodName, p->mObject.mProperty_mErrorMessage, p->mObject.mProperty_mShadowErrorMessage) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_lstring & in_mInsertMethodName,
                                                         const GGS_lstring & in_mErrorMessage,
                                                         const GGS_lstring & in_mShadowErrorMessage
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_insertSetterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertSetterListAST (in_mInsertMethodName, in_mErrorMessage, in_mShadowErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_insertSetterListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_insertSetterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::description (String & ioString,
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
      ioString.appendString ("mInsertMethodName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInsertMethodName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mErrorMessage:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mErrorMessage.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mShadowErrorMessage:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mShadowErrorMessage.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertSetterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::plusPlusAssignOperation (const GGS_insertSetterListAST_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                           const GGS_lstring & inOperand1,
                                                                           const GGS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_insertSetterListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_insertSetterListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                  const GGS_lstring & inOperand1,
                                                  const GGS_lstring & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  const GGS_insertSetterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_append (const GGS_lstring inOperand0,
                                             const GGS_lstring inOperand1,
                                             const GGS_lstring inOperand2,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  const GGS_insertSetterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_lstring inOperand2,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_insertSetterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_insertSetterListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_lstring & outOperand2,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInsertMethodName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mErrorMessage ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mShadowErrorMessage ;
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

void GGS_insertSetterListAST::setter_popFirst (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               GGS_lstring & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInsertMethodName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorMessage ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mShadowErrorMessage ;
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

void GGS_insertSetterListAST::setter_popLast (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_lstring & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInsertMethodName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorMessage ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mShadowErrorMessage ;
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

void GGS_insertSetterListAST::method_first (GGS_lstring & outOperand0,
                                            GGS_lstring & outOperand1,
                                            GGS_lstring & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInsertMethodName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorMessage ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mShadowErrorMessage ;
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

void GGS_insertSetterListAST::method_last (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           GGS_lstring & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInsertMethodName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorMessage ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mShadowErrorMessage ;
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

GGS_insertSetterListAST GGS_insertSetterListAST::add_operation (const GGS_insertSetterListAST & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_insertSetterListAST result ;
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

GGS_insertSetterListAST GGS_insertSetterListAST::subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_insertSetterListAST result ;
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

GGS_insertSetterListAST GGS_insertSetterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_insertSetterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_insertSetterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_insertSetterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::plusAssignOperation (const GGS_insertSetterListAST inList,
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

void GGS_insertSetterListAST::setter_setMInsertMethodNameAtIndex (GGS_lstring inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInsertMethodName = inOperand ;
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
  
GGS_lstring GGS_insertSetterListAST::getter_mInsertMethodNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInsertMethodName ;
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

void GGS_insertSetterListAST::setter_setMErrorMessageAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorMessage = inOperand ;
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
  
GGS_lstring GGS_insertSetterListAST::getter_mErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorMessage ;
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

void GGS_insertSetterListAST::setter_setMShadowErrorMessageAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mShadowErrorMessage = inOperand ;
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
  
GGS_lstring GGS_insertSetterListAST::getter_mShadowErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mShadowErrorMessage ;
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
// Down Enumerator for @insertSetterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_insertSetterListAST::DownEnumerator_insertSetterListAST (const GGS_insertSetterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element DownEnumerator_insertSetterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertSetterListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInsertMethodName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertSetterListAST::current_mErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertSetterListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mShadowErrorMessage ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @insertSetterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_insertSetterListAST::UpEnumerator_insertSetterListAST (const GGS_insertSetterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element UpEnumerator_insertSetterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertSetterListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInsertMethodName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertSetterListAST::current_mErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertSetterListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mShadowErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//     @insertSetterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertSetterListAST ("insertSetterListAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertSetterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertSetterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertSetterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertSetterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_insertSetterListAST result ;
  const GGS_insertSetterListAST * p = (const GGS_insertSetterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertSetterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertSetterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@mapAccessorListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mapAccessorListAST : public cCollectionElement {
  public: GGS_mapAccessorListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_mapAccessorListAST (const GGS_lstring & in_mName,
                                                 const GGS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapAccessorListAST (const GGS_mapAccessorListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapAccessorListAST::cCollectionElement_mapAccessorListAST (const GGS_lstring & in_mName,
                                                                              const GGS_lstring & in_mErrorMessage
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapAccessorListAST::cCollectionElement_mapAccessorListAST (const GGS_mapAccessorListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mapAccessorListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapAccessorListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mapAccessorListAST (mObject.mProperty_mName, mObject.mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @mapAccessorListAST
//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST::GGS_mapAccessorListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST::GGS_mapAccessorListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    const GGS_mapAccessorListAST_2E_element element (p->mObject.mProperty_mName, p->mObject.mProperty_mErrorMessage) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_lstring & in_mName,
                                                        const GGS_lstring & in_mErrorMessage
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapAccessorListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapAccessorListAST (in_mName, in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_mapAccessorListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_mapAccessorListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::description (String & ioString,
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
      ioString.appendString ("mName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mErrorMessage:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mErrorMessage.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mapAccessorListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::plusPlusAssignOperation (const GGS_mapAccessorListAST_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                         const GGS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_mapAccessorListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_mapAccessorListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                 const GGS_lstring & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  const GGS_mapAccessorListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_append (const GGS_lstring inOperand0,
                                            const GGS_lstring inOperand1,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_mapAccessorListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                   const GGS_lstring inOperand1,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_mapAccessorListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_mapAccessorListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mErrorMessage ;
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

void GGS_mapAccessorListAST::setter_popFirst (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorMessage ;
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

void GGS_mapAccessorListAST::setter_popLast (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorMessage ;
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

void GGS_mapAccessorListAST::method_first (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mErrorMessage ;
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

void GGS_mapAccessorListAST::method_last (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mErrorMessage ;
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

GGS_mapAccessorListAST GGS_mapAccessorListAST::add_operation (const GGS_mapAccessorListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result ;
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

GGS_mapAccessorListAST GGS_mapAccessorListAST::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result ;
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

GGS_mapAccessorListAST GGS_mapAccessorListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::plusAssignOperation (const GGS_mapAccessorListAST inList,
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

void GGS_mapAccessorListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mName = inOperand ;
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
  
GGS_lstring GGS_mapAccessorListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mName ;
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

void GGS_mapAccessorListAST::setter_setMErrorMessageAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorMessage = inOperand ;
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
  
GGS_lstring GGS_mapAccessorListAST::getter_mErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorMessage ;
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
// Down Enumerator for @mapAccessorListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_mapAccessorListAST::DownEnumerator_mapAccessorListAST (const GGS_mapAccessorListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element DownEnumerator_mapAccessorListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_mapAccessorListAST::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_mapAccessorListAST::current_mErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorMessage ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @mapAccessorListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_mapAccessorListAST::UpEnumerator_mapAccessorListAST (const GGS_mapAccessorListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element UpEnumerator_mapAccessorListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_mapAccessorListAST::current_mName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_mapAccessorListAST::current_mErrorMessage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//     @mapAccessorListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapAccessorListAST ("mapAccessorListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapAccessorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAccessorListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapAccessorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapAccessorListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_mapAccessorListAST result ;
  const GGS_mapAccessorListAST * p = (const GGS_mapAccessorListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapAccessorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAccessorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@insertOrReplaceDeclarationListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertOrReplaceDeclarationListAST : public cCollectionElement {
  public: GGS_insertOrReplaceDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_insertOrReplaceDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertOrReplaceDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_insertOrReplaceDeclarationListAST (mObject.mProperty_mInsertOrReplaceDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @insertOrReplaceDeclarationListAST
//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST::GGS_insertOrReplaceDeclarationListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST::GGS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    const GGS_insertOrReplaceDeclarationListAST_2E_element element (p->mObject.mProperty_mInsertOrReplaceDeclarationLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_insertOrReplaceDeclarationListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_insertOrReplaceDeclarationListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::description (String & ioString,
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
      ioString.appendString ("mInsertOrReplaceDeclarationLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::plusPlusAssignOperation (const GGS_insertOrReplaceDeclarationListAST_2E_element & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::class_func_listWithValue (const GGS_location & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_insertOrReplaceDeclarationListAST_2E_element element (inOperand0) ;
  GGS_insertOrReplaceDeclarationListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::addAssignOperation (const GGS_location & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  const GGS_insertOrReplaceDeclarationListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_append (const GGS_location inOperand0,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  const GGS_insertOrReplaceDeclarationListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_insertAtIndex (const GGS_location inOperand0,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_insertOrReplaceDeclarationListAST_2E_element newElement (inOperand0) ;
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

void GGS_insertOrReplaceDeclarationListAST::setter_removeAtIndex (GGS_location & outOperand0,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInsertOrReplaceDeclarationLocation ;
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

void GGS_insertOrReplaceDeclarationListAST::setter_popFirst (GGS_location & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInsertOrReplaceDeclarationLocation ;
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

void GGS_insertOrReplaceDeclarationListAST::setter_popLast (GGS_location & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInsertOrReplaceDeclarationLocation ;
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

void GGS_insertOrReplaceDeclarationListAST::method_first (GGS_location & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInsertOrReplaceDeclarationLocation ;
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

void GGS_insertOrReplaceDeclarationListAST::method_last (GGS_location & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInsertOrReplaceDeclarationLocation ;
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

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::add_operation (const GGS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result ;
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

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::subList (const int32_t inStart,
                                                                                      const int32_t inLength,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result ;
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

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::plusAssignOperation (const GGS_insertOrReplaceDeclarationListAST inList,
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

void GGS_insertOrReplaceDeclarationListAST::setter_setMInsertOrReplaceDeclarationLocationAtIndex (GGS_location inOperand,
                                                                                                  GGS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInsertOrReplaceDeclarationLocation = inOperand ;
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
  
GGS_location GGS_insertOrReplaceDeclarationListAST::getter_mInsertOrReplaceDeclarationLocationAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInsertOrReplaceDeclarationLocation ;
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
// Down Enumerator for @insertOrReplaceDeclarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_insertOrReplaceDeclarationListAST::DownEnumerator_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element DownEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInsertOrReplaceDeclarationLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @insertOrReplaceDeclarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_insertOrReplaceDeclarationListAST::UpEnumerator_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element UpEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInsertOrReplaceDeclarationLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @insertOrReplaceDeclarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ("insertOrReplaceDeclarationListAST",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertOrReplaceDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertOrReplaceDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertOrReplaceDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST result ;
  const GGS_insertOrReplaceDeclarationListAST * p = (const GGS_insertOrReplaceDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertOrReplaceDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @insertMethodMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::GGS_insertMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::~ GGS_insertMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::GGS_insertMethodMap (const GGS_insertMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap & GGS_insertMethodMap::operator = (const GGS_insertMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_insertMethodMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_insertMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_insertMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_insertMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_insertMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_insertMethodMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_insertMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::performInsert (const GGS_insertMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_insertMethodMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>
GGS_insertMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_insertMethodMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>>
GGS_insertMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_insertMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element_3F_ GGS_insertMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_insertMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_insertMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_insertMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::class_func_mapWithMapToOverride (const GGS_insertMethodMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_insertMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_insertMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_insertMethodMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' insert setter is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_insertMethodMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> & inArray,
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_insertMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_insertMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_insertMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @insertMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_insertMethodMap::DownEnumerator_insertMethodMap (const GGS_insertMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element DownEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @insertMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_insertMethodMap::UpEnumerator_insertMethodMap (const GGS_insertMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element UpEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @insertMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  const GGS_insertMethodMap * p = (const GGS_insertMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @searchMethodMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::GGS_searchMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::~ GGS_searchMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::GGS_searchMethodMap (const GGS_searchMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap & GGS_searchMethodMap::operator = (const GGS_searchMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_searchMethodMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_searchMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_searchMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_searchMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_searchMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_searchMethodMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_searchMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_searchMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::performInsert (const GGS_searchMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_searchMethodMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>
GGS_searchMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_searchMethodMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>>
GGS_searchMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_searchMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element_3F_ GGS_searchMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_searchMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_searchMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_searchMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::class_func_mapWithMapToOverride (const GGS_searchMethodMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_searchMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_searchMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_searchMethodMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' search method is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_searchMethodMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> & inArray,
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_searchMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_searchMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_searchMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @searchMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_searchMethodMap::DownEnumerator_searchMethodMap (const GGS_searchMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element DownEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @searchMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_searchMethodMap::UpEnumerator_searchMethodMap (const GGS_searchMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element UpEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @searchMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_searchMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_searchMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  const GGS_searchMethodMap * p = (const GGS_searchMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_searchMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@propertyInCollectionListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_propertyInCollectionListAST : public cCollectionElement {
  public: GGS_propertyInCollectionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_propertyInCollectionListAST (const GGS_propertyMutability & in_mutability,
                                                          const GGS_lstring & in_typeName,
                                                          const GGS_lstring & in_name,
                                                          const GGS_AccessControlAST & in_accessControl,
                                                          const GGS_bool & in_hasSelector,
                                                          const GGS_propertyInCollectionInitializationAST & in_initialization
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyInCollectionListAST (const GGS_propertyInCollectionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyInCollectionListAST::cCollectionElement_propertyInCollectionListAST (const GGS_propertyMutability & in_mutability,
                                                                                                const GGS_lstring & in_typeName,
                                                                                                const GGS_lstring & in_name,
                                                                                                const GGS_AccessControlAST & in_accessControl,
                                                                                                const GGS_bool & in_hasSelector,
                                                                                                const GGS_propertyInCollectionInitializationAST & in_initialization
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mutability, in_typeName, in_name, in_accessControl, in_hasSelector, in_initialization) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyInCollectionListAST::cCollectionElement_propertyInCollectionListAST (const GGS_propertyInCollectionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mutability, inElement.mProperty_typeName, inElement.mProperty_name, inElement.mProperty_accessControl, inElement.mProperty_hasSelector, inElement.mProperty_initialization) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyInCollectionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyInCollectionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyInCollectionListAST (mObject.mProperty_mutability, mObject.mProperty_typeName, mObject.mProperty_name, mObject.mProperty_accessControl, mObject.mProperty_hasSelector, mObject.mProperty_initialization COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @propertyInCollectionListAST
//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST::GGS_propertyInCollectionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST::GGS_propertyInCollectionListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_propertyInCollectionListAST * p = (cCollectionElement_propertyInCollectionListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_propertyInCollectionListAST) ;
    const GGS_propertyInCollectionListAST_2E_element element (p->mObject.mProperty_mutability, p->mObject.mProperty_typeName, p->mObject.mProperty_name, p->mObject.mProperty_accessControl, p->mObject.mProperty_hasSelector, p->mObject.mProperty_initialization) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_propertyMutability & in_mutability,
                                                                 const GGS_lstring & in_typeName,
                                                                 const GGS_lstring & in_name,
                                                                 const GGS_AccessControlAST & in_accessControl,
                                                                 const GGS_bool & in_hasSelector,
                                                                 const GGS_propertyInCollectionInitializationAST & in_initialization
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyInCollectionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyInCollectionListAST (in_mutability, in_typeName, in_name, in_accessControl, in_hasSelector, in_initialization COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyInCollectionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_propertyInCollectionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::description (String & ioString,
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
      ioString.appendString ("mutability:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mutability.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("typeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_typeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("name:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_name.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("accessControl:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_accessControl.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("hasSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_hasSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("initialization:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_initialization.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::plusPlusAssignOperation (const GGS_propertyInCollectionListAST_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::class_func_listWithValue (const GGS_propertyMutability & inOperand0,
                                                                                           const GGS_lstring & inOperand1,
                                                                                           const GGS_lstring & inOperand2,
                                                                                           const GGS_AccessControlAST & inOperand3,
                                                                                           const GGS_bool & inOperand4,
                                                                                           const GGS_propertyInCollectionInitializationAST & inOperand5
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_propertyInCollectionListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  GGS_propertyInCollectionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::addAssignOperation (const GGS_propertyMutability & inOperand0,
                                                          const GGS_lstring & inOperand1,
                                                          const GGS_lstring & inOperand2,
                                                          const GGS_AccessControlAST & inOperand3,
                                                          const GGS_bool & inOperand4,
                                                          const GGS_propertyInCollectionInitializationAST & inOperand5
                                                          COMMA_LOCATION_ARGS) {
  const GGS_propertyInCollectionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::setter_append (const GGS_propertyMutability inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     const GGS_lstring inOperand2,
                                                     const GGS_AccessControlAST inOperand3,
                                                     const GGS_bool inOperand4,
                                                     const GGS_propertyInCollectionInitializationAST inOperand5,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_propertyInCollectionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::setter_insertAtIndex (const GGS_propertyMutability inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_lstring inOperand2,
                                                            const GGS_AccessControlAST inOperand3,
                                                            const GGS_bool inOperand4,
                                                            const GGS_propertyInCollectionInitializationAST inOperand5,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_propertyInCollectionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
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

void GGS_propertyInCollectionListAST::setter_removeAtIndex (GGS_propertyMutability & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_lstring & outOperand2,
                                                            GGS_AccessControlAST & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            GGS_propertyInCollectionInitializationAST & outOperand5,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mutability ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_typeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_name ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_accessControl ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_hasSelector ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_initialization ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::setter_popFirst (GGS_propertyMutability & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_lstring & outOperand2,
                                                       GGS_AccessControlAST & outOperand3,
                                                       GGS_bool & outOperand4,
                                                       GGS_propertyInCollectionInitializationAST & outOperand5,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mutability ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_typeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_name ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_accessControl ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_hasSelector ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_initialization ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::setter_popLast (GGS_propertyMutability & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_lstring & outOperand2,
                                                      GGS_AccessControlAST & outOperand3,
                                                      GGS_bool & outOperand4,
                                                      GGS_propertyInCollectionInitializationAST & outOperand5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mutability ;
      outOperand1 = mArray.lastObject (HERE).mProperty_typeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_name ;
      outOperand3 = mArray.lastObject (HERE).mProperty_accessControl ;
      outOperand4 = mArray.lastObject (HERE).mProperty_hasSelector ;
      outOperand5 = mArray.lastObject (HERE).mProperty_initialization ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::method_first (GGS_propertyMutability & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_lstring & outOperand2,
                                                    GGS_AccessControlAST & outOperand3,
                                                    GGS_bool & outOperand4,
                                                    GGS_propertyInCollectionInitializationAST & outOperand5,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mutability ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_typeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_name ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_accessControl ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_hasSelector ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_initialization ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::method_last (GGS_propertyMutability & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_lstring & outOperand2,
                                                   GGS_AccessControlAST & outOperand3,
                                                   GGS_bool & outOperand4,
                                                   GGS_propertyInCollectionInitializationAST & outOperand5,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mutability ;
      outOperand1 = mArray.lastObject (HERE).mProperty_typeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_name ;
      outOperand3 = mArray.lastObject (HERE).mProperty_accessControl ;
      outOperand4 = mArray.lastObject (HERE).mProperty_hasSelector ;
      outOperand5 = mArray.lastObject (HERE).mProperty_initialization ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::add_operation (const GGS_propertyInCollectionListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyInCollectionListAST result ;
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

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionListAST result ;
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

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST::plusAssignOperation (const GGS_propertyInCollectionListAST inList,
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

void GGS_propertyInCollectionListAST::setter_setMutabilityAtIndex (GGS_propertyMutability inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mutability = inOperand ;
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
  
GGS_propertyMutability GGS_propertyInCollectionListAST::getter_mutabilityAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_propertyMutability result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mutability ;
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

void GGS_propertyInCollectionListAST::setter_setTypeNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_typeName = inOperand ;
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
  
GGS_lstring GGS_propertyInCollectionListAST::getter_typeNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_typeName ;
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

void GGS_propertyInCollectionListAST::setter_setNameAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_name = inOperand ;
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
  
GGS_lstring GGS_propertyInCollectionListAST::getter_nameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_name ;
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

void GGS_propertyInCollectionListAST::setter_setAccessControlAtIndex (GGS_AccessControlAST inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_accessControl = inOperand ;
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
  
GGS_AccessControlAST GGS_propertyInCollectionListAST::getter_accessControlAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_AccessControlAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_accessControl ;
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

void GGS_propertyInCollectionListAST::setter_setHasSelectorAtIndex (GGS_bool inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_hasSelector = inOperand ;
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
  
GGS_bool GGS_propertyInCollectionListAST::getter_hasSelectorAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_hasSelector ;
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

void GGS_propertyInCollectionListAST::setter_setInitializationAtIndex (GGS_propertyInCollectionInitializationAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_initialization = inOperand ;
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
  
GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionListAST::getter_initializationAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionInitializationAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_initialization ;
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
// Down Enumerator for @propertyInCollectionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyInCollectionListAST::DownEnumerator_propertyInCollectionListAST (const GGS_propertyInCollectionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element DownEnumerator_propertyInCollectionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMutability DownEnumerator_propertyInCollectionListAST::current_mutability (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mutability ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyInCollectionListAST::current_typeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyInCollectionListAST::current_name (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST DownEnumerator_propertyInCollectionListAST::current_accessControl (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_accessControl ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_propertyInCollectionListAST::current_hasSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_hasSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST DownEnumerator_propertyInCollectionListAST::current_initialization (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_initialization ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @propertyInCollectionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyInCollectionListAST::UpEnumerator_propertyInCollectionListAST (const GGS_propertyInCollectionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element UpEnumerator_propertyInCollectionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMutability UpEnumerator_propertyInCollectionListAST::current_mutability (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mutability ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyInCollectionListAST::current_typeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyInCollectionListAST::current_name (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST UpEnumerator_propertyInCollectionListAST::current_accessControl (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_accessControl ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_propertyInCollectionListAST::current_hasSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_hasSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST UpEnumerator_propertyInCollectionListAST::current_initialization (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_initialization ;
}




//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ("propertyInCollectionListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyInCollectionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyInCollectionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_propertyInCollectionListAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST result ;
  const GGS_propertyInCollectionListAST * p = (const GGS_propertyInCollectionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyInCollectionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapDeclarationAST_2E_weak::objectCompare (const GGS_mapDeclarationAST_2E_weak & inOperand) const {
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

GGS_mapDeclarationAST_2E_weak::GGS_mapDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak & GGS_mapDeclarationAST_2E_weak::operator = (const GGS_mapDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak::GGS_mapDeclarationAST_2E_weak (const GGS_mapDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak GGS_mapDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_mapDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_mapDeclarationAST result ;
  if (isValid ()) {
    const cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_mapDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST_2E_weak::bang_mapDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_mapDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapDeclarationAST) ;
      result = GGS_mapDeclarationAST ((cPtr_mapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @mapDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST_2E_weak ("mapDeclarationAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak GGS_mapDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_mapDeclarationAST_2E_weak result ;
  const GGS_mapDeclarationAST_2E_weak * p = (const GGS_mapDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapTypeForGeneration_2E_weak::objectCompare (const GGS_mapTypeForGeneration_2E_weak & inOperand) const {
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

GGS_mapTypeForGeneration_2E_weak::GGS_mapTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak & GGS_mapTypeForGeneration_2E_weak::operator = (const GGS_mapTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak::GGS_mapTypeForGeneration_2E_weak (const GGS_mapTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak GGS_mapTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_mapTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_mapTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_mapTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration_2E_weak::bang_mapTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_mapTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapTypeForGeneration) ;
      result = GGS_mapTypeForGeneration ((cPtr_mapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @mapTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration_2E_weak ("mapTypeForGeneration.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak GGS_mapTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_mapTypeForGeneration_2E_weak result ;
  const GGS_mapTypeForGeneration_2E_weak * p = (const GGS_mapTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyMutability
//--------------------------------------------------------------------------------------------------

GGS_propertyMutability::GGS_propertyMutability (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyMutability GGS_propertyMutability::class_func_constantProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyMutability result ;
  result.mEnum = Enumeration::enum_constantProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMutability GGS_propertyMutability::class_func_mutableProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyMutability result ;
  result.mEnum = Enumeration::enum_mutableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMutability GGS_propertyMutability::class_func_weakProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyMutability result ;
  result.mEnum = Enumeration::enum_weakProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyMutability [4] = {
  "(not built)",
  "constantProperty",
  "mutableProperty",
  "weakProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMutability::getter_isConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMutability::getter_isMutableProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mutableProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMutability::getter_isWeakProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_weakProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMutability::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @propertyMutability: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyMutability [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyMutability generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMutability ("propertyMutability",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMutability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMutability ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMutability::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMutability (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMutability GGS_propertyMutability::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyMutability result ;
  const GGS_propertyMutability * p = (const GGS_propertyMutability *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMutability *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMutability", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@propertyInCollectionListAST buildPropertyInitializationCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildPropertyInitializationCode (const GGS_propertyInCollectionListAST inObject,
                                                      const GGS_lstring constinArgument_inTypeNameForUsefulness,
                                                      const GGS_semanticContext constinArgument_inSemanticContext,
                                                      const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      GGS_stringset & outArgument_outUnusedVariableCppNameSet,
                                                      GGS_string & outArgument_outInitializationCode,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnusedVariableCppNameSet.drop () ; // Release 'out' argument
  outArgument_outInitializationCode.drop () ; // Release 'out' argument
  outArgument_outInitializationCode = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_8703 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_temporaryVariableIndex_8746 = GGS_uint (uint32_t (0U)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 240)) ;
  temp_0.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 240))  COMMA_SOURCE_FILE ("declaration-property.galgas", 240)) ;
  outArgument_outUnusedVariableCppNameSet = temp_0 ;
  const GGS_propertyInCollectionListAST temp_1 = inObject ;
  UpEnumerator_propertyInCollectionListAST enumerator_8884 (temp_1) ;
  while (enumerator_8884.hasCurrentObject ()) {
    switch (enumerator_8884.current_initialization (HERE).enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      {
        GGS_semanticExpressionAST extractedValue_8973_expressionAST_0 ;
        enumerator_8884.current_initialization (HERE).getAssociatedValuesFor_some (extractedValue_8973_expressionAST_0) ;
        GGS_localVarManager var_variableMap_9002 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
        GGS_analysisContext var_analysisContext_9065 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("declaration-property.galgas", 250)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
        GGS_unifiedTypeMapEntry var_propertyType_9289 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8884.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 253)) ;
        GGS_semanticExpressionForGeneration var_expression_9660 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_8973_expressionAST_0.ptr (), constinArgument_inTypeNameForUsefulness, ioArgument_ioUsefulEntitiesGraph, var_propertyType_9289, var_analysisContext_9065, ioArgument_ioTypeMap, var_variableMap_9002, var_expression_9660, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 254)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_propertyType_9289, var_expression_9660.readProperty_mResultType (), enumerator_8884.current_name (HERE).readProperty_location (), var_expression_9660, inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas", 264)) ;
        }
        GGS_string var_sourceVar_10093 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_9660.ptr (), outArgument_outInitializationCode, var_inclusionSet_8703, var_temporaryVariableIndex_8746, outArgument_outUnusedVariableCppNameSet, var_sourceVar_10093, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 270)) ;
        outArgument_outInitializationCode.plusAssignOperation(GGS_string ("  mProperty_").add_operation (enumerator_8884.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-property.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas", 277)) ;
        outArgument_outInitializationCode.plusAssignOperation(GGS_string (" = ").add_operation (var_sourceVar_10093, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 278)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas", 278)) ;
      }
      break ;
    }
    enumerator_8884.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_formalInputParameterListAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_::GGS__5B_formalInputParameterListAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_::GGS__5B_formalInputParameterListAST_5D_ (const GGS__5B_formalInputParameterListAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ & GGS__5B_formalInputParameterListAST_5D_::operator = (const GGS__5B_formalInputParameterListAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ GGS__5B_formalInputParameterListAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalInputParameterListAST_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_formalInputParameterListAST_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::plusPlusAssignOperation (const GGS_formalInputParameterListAST & inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_formalInputParameterListAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ GGS__5B_formalInputParameterListAST_5D_::add_operation (const GGS__5B_formalInputParameterListAST_5D_ & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::description (String & ioString,
                                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (", ") ;
  ioString.appendSigned (mSharedArray.count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count() > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::plusAssignOperation (const GGS__5B_formalInputParameterListAST_5D_ inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::setter_append (const GGS_formalInputParameterListAST inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::setter_insertAtIndex (const GGS_formalInputParameterListAST inValue,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::setter_removeAtIndex (GGS_formalInputParameterListAST & outValue,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    outValue = mSharedArray (idx COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::setter_popFirst (GGS_formalInputParameterListAST & outValue,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::setter_popLast (GGS_formalInputParameterListAST & outValue,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::method_first (GGS_formalInputParameterListAST & outValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_formalInputParameterListAST_5D_::method_last (GGS_formalInputParameterListAST & outValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS__5B_formalInputParameterListAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_formalInputParameterListAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_formalInputParameterListAST_5D_::DownEnumerator__5B_formalInputParameterListAST_5D_ (const GGS__5B_formalInputParameterListAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST DownEnumerator__5B_formalInputParameterListAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_formalInputParameterListAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_formalInputParameterListAST_5D_::UpEnumerator__5B_formalInputParameterListAST_5D_ (const GGS__5B_formalInputParameterListAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST UpEnumerator__5B_formalInputParameterListAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[formalInputParameterListAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalInputParameterListAST_5D_ ("[formalInputParameterListAST]",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_formalInputParameterListAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_formalInputParameterListAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_formalInputParameterListAST_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_formalInputParameterListAST_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ GGS__5B_formalInputParameterListAST_5D_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS__5B_formalInputParameterListAST_5D_ result ;
  const GGS__5B_formalInputParameterListAST_5D_ * p = (const GGS__5B_formalInputParameterListAST_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_formalInputParameterListAST_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[formalInputParameterListAST]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dataPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dataPredefinedTypeAST::objectCompare (const GGS_dataPredefinedTypeAST & inOperand) const {
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

GGS_dataPredefinedTypeAST::GGS_dataPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dataPredefinedTypeAST GGS_dataPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_dataPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_dataPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->dataPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_dataPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::
dataPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST::GGS_dataPredefinedTypeAST (const cPtr_dataPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dataPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @dataPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dataPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

void cPtr_dataPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@dataPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dataPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dataPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dataPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dataPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST ("dataPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dataPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dataPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dataPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST GGS_dataPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_dataPredefinedTypeAST result ;
  const GGS_dataPredefinedTypeAST * p = (const GGS_dataPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dataPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dataPredefinedTypeAST_2E_weak::objectCompare (const GGS_dataPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_dataPredefinedTypeAST_2E_weak::GGS_dataPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST_2E_weak & GGS_dataPredefinedTypeAST_2E_weak::operator = (const GGS_dataPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST_2E_weak::GGS_dataPredefinedTypeAST_2E_weak (const GGS_dataPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST_2E_weak GGS_dataPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dataPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST GGS_dataPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_dataPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_dataPredefinedTypeAST * p = (cPtr_dataPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_dataPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST GGS_dataPredefinedTypeAST_2E_weak::bang_dataPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dataPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dataPredefinedTypeAST) ;
      result = GGS_dataPredefinedTypeAST ((cPtr_dataPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dataPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2E_weak ("dataPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dataPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dataPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dataPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST_2E_weak GGS_dataPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_dataPredefinedTypeAST_2E_weak result ;
  const GGS_dataPredefinedTypeAST_2E_weak * p = (const GGS_dataPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dataPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @charPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_charPredefinedTypeAST::objectCompare (const GGS_charPredefinedTypeAST & inOperand) const {
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

GGS_charPredefinedTypeAST::GGS_charPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_charPredefinedTypeAST GGS_charPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_charPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_charPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->charPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_charPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::
charPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST::GGS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_charPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @charPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_charPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

void cPtr_charPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@charPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_charPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_charPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_charPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @charPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST ("charPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_charPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_charPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_charPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST GGS_charPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_charPredefinedTypeAST result ;
  const GGS_charPredefinedTypeAST * p = (const GGS_charPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_charPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_charPredefinedTypeAST_2E_weak::objectCompare (const GGS_charPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_charPredefinedTypeAST_2E_weak::GGS_charPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST_2E_weak & GGS_charPredefinedTypeAST_2E_weak::operator = (const GGS_charPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST_2E_weak::GGS_charPredefinedTypeAST_2E_weak (const GGS_charPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST_2E_weak GGS_charPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_charPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST GGS_charPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_charPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_charPredefinedTypeAST * p = (cPtr_charPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_charPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST GGS_charPredefinedTypeAST_2E_weak::bang_charPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_charPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_charPredefinedTypeAST) ;
      result = GGS_charPredefinedTypeAST ((cPtr_charPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @charPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST_2E_weak ("charPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_charPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_charPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_charPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST_2E_weak GGS_charPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_charPredefinedTypeAST_2E_weak result ;
  const GGS_charPredefinedTypeAST_2E_weak * p = (const GGS_charPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_charPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listDeclarationAST_2E_weak::objectCompare (const GGS_listDeclarationAST_2E_weak & inOperand) const {
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

GGS_listDeclarationAST_2E_weak::GGS_listDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak & GGS_listDeclarationAST_2E_weak::operator = (const GGS_listDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak::GGS_listDeclarationAST_2E_weak (const GGS_listDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak GGS_listDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_listDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_listDeclarationAST result ;
  if (isValid ()) {
    const cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_listDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST_2E_weak::bang_listDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_listDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listDeclarationAST) ;
      result = GGS_listDeclarationAST ((cPtr_listDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @listDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST_2E_weak ("listDeclarationAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak GGS_listDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_listDeclarationAST_2E_weak result ;
  const GGS_listDeclarationAST_2E_weak * p = (const GGS_listDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listTypeForGeneration::objectCompare (const GGS_listTypeForGeneration & inOperand) const {
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

GGS_listTypeForGeneration::GGS_listTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                  const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                  const GGS_typedPropertyList & in_mTypedAttributeList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_listTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_listTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->listTypeForGeneration_init_21__21__21_ (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList, inCompiler) ;
  const GGS_listTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::
listTypeForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                        Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration::GGS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_listTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_listTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_listTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

void cPtr_listTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@listTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_listTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListElementTypeIndex.printNonNullClassInstanceProperties ("mListElementTypeIndex") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @listTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration ("listTypeForGeneration",
                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_listTypeForGeneration result ;
  const GGS_listTypeForGeneration * p = (const GGS_listTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listTypeForGeneration_2E_weak::objectCompare (const GGS_listTypeForGeneration_2E_weak & inOperand) const {
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

GGS_listTypeForGeneration_2E_weak::GGS_listTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak & GGS_listTypeForGeneration_2E_weak::operator = (const GGS_listTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak::GGS_listTypeForGeneration_2E_weak (const GGS_listTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak GGS_listTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_listTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_listTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_listTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration_2E_weak::bang_listTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_listTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listTypeForGeneration) ;
      result = GGS_listTypeForGeneration ((cPtr_listTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @listTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration_2E_weak ("listTypeForGeneration.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak GGS_listTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_listTypeForGeneration_2E_weak result ;
  const GGS_listTypeForGeneration_2E_weak * p = (const GGS_listTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @timerPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_timerPredefinedTypeAST::objectCompare (const GGS_timerPredefinedTypeAST & inOperand) const {
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

GGS_timerPredefinedTypeAST::GGS_timerPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_timerPredefinedTypeAST GGS_timerPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_timerPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_timerPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->timerPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_timerPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::
timerPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                 const GGS_string & in_mPredefinedTypeName,
                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST::GGS_timerPredefinedTypeAST (const cPtr_timerPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_timerPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @timerPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                          const GGS_string & in_mPredefinedTypeName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_timerPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

void cPtr_timerPredefinedTypeAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@timerPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_timerPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_timerPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_timerPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @timerPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST ("timerPredefinedTypeAST",
                                                                           & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_timerPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_timerPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_timerPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST GGS_timerPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_timerPredefinedTypeAST result ;
  const GGS_timerPredefinedTypeAST * p = (const GGS_timerPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_timerPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_timerPredefinedTypeAST_2E_weak::objectCompare (const GGS_timerPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_timerPredefinedTypeAST_2E_weak::GGS_timerPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST_2E_weak & GGS_timerPredefinedTypeAST_2E_weak::operator = (const GGS_timerPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST_2E_weak::GGS_timerPredefinedTypeAST_2E_weak (const GGS_timerPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST_2E_weak GGS_timerPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_timerPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST GGS_timerPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_timerPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_timerPredefinedTypeAST * p = (cPtr_timerPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_timerPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST GGS_timerPredefinedTypeAST_2E_weak::bang_timerPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_timerPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_timerPredefinedTypeAST) ;
      result = GGS_timerPredefinedTypeAST ((cPtr_timerPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @timerPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2E_weak ("timerPredefinedTypeAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_timerPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_timerPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_timerPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST_2E_weak GGS_timerPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_timerPredefinedTypeAST_2E_weak result ;
  const GGS_timerPredefinedTypeAST_2E_weak * p = (const GGS_timerPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_timerPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sintPredefinedTypeAST::objectCompare (const GGS_sintPredefinedTypeAST & inOperand) const {
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

GGS_sintPredefinedTypeAST::GGS_sintPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sintPredefinedTypeAST GGS_sintPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_sintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->sintPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_sintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::
sintPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST::GGS_sintPredefinedTypeAST (const cPtr_sintPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @sintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

void cPtr_sintPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@sintPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sintPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sintPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST ("sintPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST GGS_sintPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_sintPredefinedTypeAST result ;
  const GGS_sintPredefinedTypeAST * p = (const GGS_sintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sintPredefinedTypeAST_2E_weak::objectCompare (const GGS_sintPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_sintPredefinedTypeAST_2E_weak::GGS_sintPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST_2E_weak & GGS_sintPredefinedTypeAST_2E_weak::operator = (const GGS_sintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST_2E_weak::GGS_sintPredefinedTypeAST_2E_weak (const GGS_sintPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST_2E_weak GGS_sintPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sintPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST GGS_sintPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_sintPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_sintPredefinedTypeAST * p = (cPtr_sintPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_sintPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST GGS_sintPredefinedTypeAST_2E_weak::bang_sintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sintPredefinedTypeAST) ;
      result = GGS_sintPredefinedTypeAST ((cPtr_sintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sintPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2E_weak ("sintPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sintPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sintPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sintPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST_2E_weak GGS_sintPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_sintPredefinedTypeAST_2E_weak result ;
  const GGS_sintPredefinedTypeAST_2E_weak * p = (const GGS_sintPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sintPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sintPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictDeclarationAST_2E_weak::objectCompare (const GGS_dictDeclarationAST_2E_weak & inOperand) const {
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

GGS_dictDeclarationAST_2E_weak::GGS_dictDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak & GGS_dictDeclarationAST_2E_weak::operator = (const GGS_dictDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak::GGS_dictDeclarationAST_2E_weak (const GGS_dictDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak GGS_dictDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dictDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_dictDeclarationAST result ;
  if (isValid ()) {
    const cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_dictDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST_2E_weak::bang_dictDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dictDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictDeclarationAST) ;
      result = GGS_dictDeclarationAST ((cPtr_dictDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dictDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST_2E_weak ("dictDeclarationAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak GGS_dictDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_dictDeclarationAST_2E_weak result ;
  const GGS_dictDeclarationAST_2E_weak * p = (const GGS_dictDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictTypeForGeneration_2E_weak::objectCompare (const GGS_dictTypeForGeneration_2E_weak & inOperand) const {
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

GGS_dictTypeForGeneration_2E_weak::GGS_dictTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak & GGS_dictTypeForGeneration_2E_weak::operator = (const GGS_dictTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak::GGS_dictTypeForGeneration_2E_weak (const GGS_dictTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak GGS_dictTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dictTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_dictTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_dictTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration_2E_weak::bang_dictTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dictTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictTypeForGeneration) ;
      result = GGS_dictTypeForGeneration ((cPtr_dictTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dictTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration_2E_weak ("dictTypeForGeneration.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak GGS_dictTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_dictTypeForGeneration_2E_weak result ;
  const GGS_dictTypeForGeneration_2E_weak * p = (const GGS_dictTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @applicationPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_applicationPredefinedTypeAST::objectCompare (const GGS_applicationPredefinedTypeAST & inOperand) const {
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

GGS_applicationPredefinedTypeAST::GGS_applicationPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_applicationPredefinedTypeAST GGS_applicationPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_applicationPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_applicationPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->applicationPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_applicationPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::
applicationPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                       const GGS_string & in_mPredefinedTypeName,
                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST::GGS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @applicationPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_string & in_mPredefinedTypeName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_applicationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

void cPtr_applicationPredefinedTypeAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@applicationPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_applicationPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_applicationPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_applicationPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @applicationPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ("applicationPredefinedTypeAST",
                                                                                 & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_applicationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_applicationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_applicationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST GGS_applicationPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_applicationPredefinedTypeAST result ;
  const GGS_applicationPredefinedTypeAST * p = (const GGS_applicationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_applicationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_applicationPredefinedTypeAST_2E_weak::objectCompare (const GGS_applicationPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_applicationPredefinedTypeAST_2E_weak::GGS_applicationPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST_2E_weak & GGS_applicationPredefinedTypeAST_2E_weak::operator = (const GGS_applicationPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST_2E_weak::GGS_applicationPredefinedTypeAST_2E_weak (const GGS_applicationPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST_2E_weak GGS_applicationPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_applicationPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST GGS_applicationPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_applicationPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_applicationPredefinedTypeAST * p = (cPtr_applicationPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_applicationPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST GGS_applicationPredefinedTypeAST_2E_weak::bang_applicationPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_applicationPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_applicationPredefinedTypeAST) ;
      result = GGS_applicationPredefinedTypeAST ((cPtr_applicationPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @applicationPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2E_weak ("applicationPredefinedTypeAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_applicationPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_applicationPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_applicationPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST_2E_weak GGS_applicationPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_applicationPredefinedTypeAST_2E_weak result ;
  const GGS_applicationPredefinedTypeAST_2E_weak * p = (const GGS_applicationPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_applicationPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bigintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigintPredefinedTypeAST::objectCompare (const GGS_bigintPredefinedTypeAST & inOperand) const {
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

GGS_bigintPredefinedTypeAST::GGS_bigintPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bigintPredefinedTypeAST GGS_bigintPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_bigintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_bigintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->bigintPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_bigintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::
bigintPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_string & in_mPredefinedTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST::GGS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bigintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @bigintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                            const GGS_string & in_mPredefinedTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bigintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

void cPtr_bigintPredefinedTypeAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@bigintPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bigintPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bigintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bigintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bigintPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ("bigintPredefinedTypeAST",
                                                                            & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bigintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bigintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bigintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST GGS_bigintPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_bigintPredefinedTypeAST result ;
  const GGS_bigintPredefinedTypeAST * p = (const GGS_bigintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bigintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigintPredefinedTypeAST_2E_weak::objectCompare (const GGS_bigintPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_bigintPredefinedTypeAST_2E_weak::GGS_bigintPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST_2E_weak & GGS_bigintPredefinedTypeAST_2E_weak::operator = (const GGS_bigintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST_2E_weak::GGS_bigintPredefinedTypeAST_2E_weak (const GGS_bigintPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST_2E_weak GGS_bigintPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bigintPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST GGS_bigintPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_bigintPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_bigintPredefinedTypeAST * p = (cPtr_bigintPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_bigintPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST GGS_bigintPredefinedTypeAST_2E_weak::bang_bigintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bigintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bigintPredefinedTypeAST) ;
      result = GGS_bigintPredefinedTypeAST ((cPtr_bigintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bigintPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2E_weak ("bigintPredefinedTypeAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bigintPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bigintPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bigintPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST_2E_weak GGS_bigintPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_bigintPredefinedTypeAST_2E_weak result ;
  const GGS_bigintPredefinedTypeAST_2E_weak * p = (const GGS_bigintPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bigintPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @uintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uintPredefinedTypeAST::objectCompare (const GGS_uintPredefinedTypeAST & inOperand) const {
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

GGS_uintPredefinedTypeAST::GGS_uintPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_uintPredefinedTypeAST GGS_uintPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_uintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_uintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->uintPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_uintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::
uintPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST::GGS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @uintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_uintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

void cPtr_uintPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@uintPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_uintPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_uintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_uintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @uintPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ("uintPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST GGS_uintPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_uintPredefinedTypeAST result ;
  const GGS_uintPredefinedTypeAST * p = (const GGS_uintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uintPredefinedTypeAST_2E_weak::objectCompare (const GGS_uintPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_uintPredefinedTypeAST_2E_weak::GGS_uintPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST_2E_weak & GGS_uintPredefinedTypeAST_2E_weak::operator = (const GGS_uintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST_2E_weak::GGS_uintPredefinedTypeAST_2E_weak (const GGS_uintPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST_2E_weak GGS_uintPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_uintPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST GGS_uintPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_uintPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_uintPredefinedTypeAST * p = (cPtr_uintPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_uintPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST GGS_uintPredefinedTypeAST_2E_weak::bang_uintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_uintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uintPredefinedTypeAST) ;
      result = GGS_uintPredefinedTypeAST ((cPtr_uintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @uintPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2E_weak ("uintPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uintPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uintPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uintPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST_2E_weak GGS_uintPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_uintPredefinedTypeAST_2E_weak result ;
  const GGS_uintPredefinedTypeAST_2E_weak * p = (const GGS_uintPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uintPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum cPtr_predefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum result_result ; // Returned variable
  result_result = GGS_typeKindEnum::class_func_otherType (SOURCE_FILE ("declaration-predefined-type.galgas", 35)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  if (nullptr != inObject) {
    result = inObject->getter_typeKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@predefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_cppDeclarationString (const cPtr_predefinedTypeAST * inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_cppDeclarationString (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_predefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  result_result = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ callExtensionGetter_initializers (const cPtr_predefinedTypeAST * inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS__5B_formalInputParameterListAST_5D_ result ;
  if (nullptr != inObject) {
    result = inObject->getter_initializers (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@predefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                         GGS_classFunctionMap & outArgument_outClassFunctionMap,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassFunctionMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassFunctionMap (cPtr_predefinedTypeAST * inObject,
                                              GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                              GGS_classFunctionMap & out_outClassFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outClassFunctionMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getClassFunctionMap (io_ioUnifiedTypeMap, out_outClassFunctionMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@predefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                  GGS_getterMap & outArgument_outGetterMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGetterMap = GGS_getterMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getGetterMap (cPtr_predefinedTypeAST * inObject,
                                       GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GGS_getterMap & out_outGetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outGetterMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getGetterMap (io_ioUnifiedTypeMap, out_outGetterMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@predefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                  GGS_setterMap & outArgument_outSetterMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getSetterMap (cPtr_predefinedTypeAST * inObject,
                                       GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GGS_setterMap & out_outSetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outSetterMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getSetterMap (io_ioUnifiedTypeMap, out_outSetterMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@predefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                          GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getInstanceMethodMap (cPtr_predefinedTypeAST * inObject,
                                               GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               GGS_instanceMethodMap & out_outInstanceMethodMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outInstanceMethodMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getInstanceMethodMap (io_ioUnifiedTypeMap, out_outInstanceMethodMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@predefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                       GGS_classMethodMap & outArgument_outClassMethodMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassMethodMap (cPtr_predefinedTypeAST * inObject,
                                            GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GGS_classMethodMap & out_outClassMethodMap,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outClassMethodMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getClassMethodMap (io_ioUnifiedTypeMap, out_outClassMethodMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_predefinedTypeAST::getter_getSupportedOperatorFlags (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_outFlags ; // Returned variable
  result_outFlags = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
//---
  return result_outFlags ;
}



//--------------------------------------------------------------------------------------------------

GGS_typeFeatures callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typeFeatures result ;
  if (nullptr != inObject) {
    result = inObject->getter_getSupportedOperatorFlags (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_predefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_supportsCollectionValue (const cPtr_predefinedTypeAST * inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_supportsCollectionValue (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@predefinedTypeAST getAddAssignArgumentList'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getAddAssignArgumentList (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                              GGS_functionSignature & outArgument_outAddAssignArgumentList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAddAssignArgumentList = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getAddAssignArgumentList (cPtr_predefinedTypeAST * inObject,
                                                   GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   GGS_functionSignature & out_outAddAssignArgumentList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  out_outAddAssignArgumentList.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getAddAssignArgumentList (io_ioUnifiedTypeMap, out_outAddAssignArgumentList, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@predefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                        GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                        GGS_string & outArgument_outEnumeratedType,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumeratedType = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getEnumerationList (cPtr_predefinedTypeAST * inObject,
                                             GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             GGS_enumerationDescriptorList & out_outEnumerationList,
                                             GGS_string & out_outEnumeratedType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outEnumerationList.drop () ;
  out_outEnumeratedType.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getEnumerationList (io_ioUnifiedTypeMap, out_outEnumerationList, out_outEnumeratedType, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @binarysetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST::objectCompare (const GGS_binarysetPredefinedTypeAST & inOperand) const {
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

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binarysetPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_binarysetPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->binarysetPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_binarysetPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::
binarysetPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                     const GGS_string & in_mPredefinedTypeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @binarysetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@binarysetPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binarysetPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binarysetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST result ;
  const GGS_binarysetPredefinedTypeAST * p = (const GGS_binarysetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binarysetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST_2E_weak::objectCompare (const GGS_binarysetPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak & GGS_binarysetPredefinedTypeAST_2E_weak::operator = (const GGS_binarysetPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (const GGS_binarysetPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak GGS_binarysetPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_binarysetPredefinedTypeAST * p = (cPtr_binarysetPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_binarysetPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::bang_binarysetPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binarysetPredefinedTypeAST) ;
      result = GGS_binarysetPredefinedTypeAST ((cPtr_binarysetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ("binarysetPredefinedTypeAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binarysetPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binarysetPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak GGS_binarysetPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST_2E_weak result ;
  const GGS_binarysetPredefinedTypeAST_2E_weak * p = (const GGS_binarysetPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binarysetPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @doublePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_doublePredefinedTypeAST::objectCompare (const GGS_doublePredefinedTypeAST & inOperand) const {
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

GGS_doublePredefinedTypeAST::GGS_doublePredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_doublePredefinedTypeAST GGS_doublePredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_doublePredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_doublePredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->doublePredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_doublePredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::
doublePredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_string & in_mPredefinedTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST::GGS_doublePredefinedTypeAST (const cPtr_doublePredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doublePredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @doublePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                            const GGS_string & in_mPredefinedTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_doublePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

void cPtr_doublePredefinedTypeAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@doublePredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_doublePredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_doublePredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_doublePredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @doublePredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST ("doublePredefinedTypeAST",
                                                                            & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_doublePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_doublePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_doublePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST GGS_doublePredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_doublePredefinedTypeAST result ;
  const GGS_doublePredefinedTypeAST * p = (const GGS_doublePredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_doublePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doublePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_doublePredefinedTypeAST_2E_weak::objectCompare (const GGS_doublePredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_doublePredefinedTypeAST_2E_weak::GGS_doublePredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST_2E_weak & GGS_doublePredefinedTypeAST_2E_weak::operator = (const GGS_doublePredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST_2E_weak::GGS_doublePredefinedTypeAST_2E_weak (const GGS_doublePredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST_2E_weak GGS_doublePredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_doublePredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST GGS_doublePredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_doublePredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_doublePredefinedTypeAST * p = (cPtr_doublePredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_doublePredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST GGS_doublePredefinedTypeAST_2E_weak::bang_doublePredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_doublePredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_doublePredefinedTypeAST) ;
      result = GGS_doublePredefinedTypeAST ((cPtr_doublePredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @doublePredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2E_weak ("doublePredefinedTypeAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_doublePredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_doublePredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_doublePredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST_2E_weak GGS_doublePredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_doublePredefinedTypeAST_2E_weak result ;
  const GGS_doublePredefinedTypeAST_2E_weak * p = (const GGS_doublePredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_doublePredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doublePredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeDeclarationAST_2E_weak::objectCompare (const GGS_arrayTypeDeclarationAST_2E_weak & inOperand) const {
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

GGS_arrayTypeDeclarationAST_2E_weak::GGS_arrayTypeDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST_2E_weak & GGS_arrayTypeDeclarationAST_2E_weak::operator = (const GGS_arrayTypeDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST_2E_weak::GGS_arrayTypeDeclarationAST_2E_weak (const GGS_arrayTypeDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST_2E_weak GGS_arrayTypeDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayTypeDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_arrayTypeDeclarationAST result ;
  if (isValid ()) {
    const cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayTypeDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST_2E_weak::bang_arrayTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayTypeDeclarationAST) ;
      result = GGS_arrayTypeDeclarationAST ((cPtr_arrayTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayTypeDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST_2E_weak ("arrayTypeDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST_2E_weak GGS_arrayTypeDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_arrayTypeDeclarationAST_2E_weak result ;
  const GGS_arrayTypeDeclarationAST_2E_weak * p = (const GGS_arrayTypeDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeForGeneration::objectCompare (const GGS_arrayTypeForGeneration & inOperand) const {
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

GGS_arrayTypeForGeneration::GGS_arrayTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
              const GGS_unifiedTypeMapEntry & in_elementType,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->arrayTypeForGeneration_init_21__21_ (in_mSelfTypeEntry, in_elementType, inCompiler) ;
  const GGS_arrayTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::
arrayTypeForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                     const GGS_unifiedTypeMapEntry & in_elementType,
                                     Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_elementType = in_elementType ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration::GGS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_arrayTypeForGeneration::readProperty_elementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_elementType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_elementType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GGS_unifiedTypeMapEntry & in_elementType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_elementType () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_elementType = in_elementType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

void cPtr_arrayTypeForGeneration::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_elementType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_elementType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_elementType.printNonNullClassInstanceProperties ("elementType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ("arrayTypeForGeneration",
                                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_arrayTypeForGeneration result ;
  const GGS_arrayTypeForGeneration * p = (const GGS_arrayTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeForGeneration_2E_weak::objectCompare (const GGS_arrayTypeForGeneration_2E_weak & inOperand) const {
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

GGS_arrayTypeForGeneration_2E_weak::GGS_arrayTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak & GGS_arrayTypeForGeneration_2E_weak::operator = (const GGS_arrayTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak::GGS_arrayTypeForGeneration_2E_weak (const GGS_arrayTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak GGS_arrayTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_arrayTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration_2E_weak::bang_arrayTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayTypeForGeneration) ;
      result = GGS_arrayTypeForGeneration ((cPtr_arrayTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration_2E_weak ("arrayTypeForGeneration.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak GGS_arrayTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_arrayTypeForGeneration_2E_weak result ;
  const GGS_arrayTypeForGeneration_2E_weak * p = (const GGS_arrayTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@typeNameFormalParameterNameList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_typeNameFormalParameterNameList : public cCollectionElement {
  public: GGS_typeNameFormalParameterNameList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_typeNameFormalParameterNameList (const GGS_lstring & in_mFormalSelector,
                                                              const GGS_lstring & in_mFormalParameterTypeName,
                                                              const GGS_lstring & in_mFormalParameterName
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typeNameFormalParameterNameList (const GGS_typeNameFormalParameterNameList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GGS_lstring & in_mFormalSelector,
                                                                                                        const GGS_lstring & in_mFormalParameterTypeName,
                                                                                                        const GGS_lstring & in_mFormalParameterName
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalParameterTypeName, in_mFormalParameterName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeNameFormalParameterNameList::cCollectionElement_typeNameFormalParameterNameList (const GGS_typeNameFormalParameterNameList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalParameterTypeName, inElement.mProperty_mFormalParameterName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_typeNameFormalParameterNameList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typeNameFormalParameterNameList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_typeNameFormalParameterNameList (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalParameterTypeName, mObject.mProperty_mFormalParameterName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @typeNameFormalParameterNameList
//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList::GGS_typeNameFormalParameterNameList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList::GGS_typeNameFormalParameterNameList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_typeNameFormalParameterNameList * p = (cCollectionElement_typeNameFormalParameterNameList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_typeNameFormalParameterNameList) ;
    const GGS_typeNameFormalParameterNameList_2E_element element (p->mObject.mProperty_mFormalSelector, p->mObject.mProperty_mFormalParameterTypeName, p->mObject.mProperty_mFormalParameterName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GGS_lstring & in_mFormalSelector,
                                                                     const GGS_lstring & in_mFormalParameterTypeName,
                                                                     const GGS_lstring & in_mFormalParameterName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_typeNameFormalParameterNameList * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeNameFormalParameterNameList (in_mFormalSelector, in_mFormalParameterTypeName, in_mFormalParameterName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typeNameFormalParameterNameList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_typeNameFormalParameterNameList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList::description (String & ioString,
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
      ioString.appendString ("mFormalSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalParameterTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalParameterTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalParameterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalParameterName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeNameFormalParameterNameList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList::plusPlusAssignOperation (const GGS_typeNameFormalParameterNameList_2E_element & inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                   const GGS_lstring & inOperand1,
                                                                                                   const GGS_lstring & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_typeNameFormalParameterNameList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_typeNameFormalParameterNameList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList::addAssignOperation (const GGS_lstring & inOperand0,
                                                              const GGS_lstring & inOperand1,
                                                              const GGS_lstring & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  const GGS_typeNameFormalParameterNameList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList::setter_append (const GGS_lstring inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_lstring inOperand2,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  const GGS_typeNameFormalParameterNameList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                const GGS_lstring inOperand1,
                                                                const GGS_lstring inOperand2,
                                                                const GGS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  const GGS_typeNameFormalParameterNameList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_typeNameFormalParameterNameList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                GGS_lstring & outOperand1,
                                                                GGS_lstring & outOperand2,
                                                                const GGS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalParameterTypeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalParameterName ;
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

void GGS_typeNameFormalParameterNameList::setter_popFirst (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_lstring & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalParameterTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalParameterName ;
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

void GGS_typeNameFormalParameterNameList::setter_popLast (GGS_lstring & outOperand0,
                                                          GGS_lstring & outOperand1,
                                                          GGS_lstring & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalParameterTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalParameterName ;
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

void GGS_typeNameFormalParameterNameList::method_first (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_lstring & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalParameterTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalParameterName ;
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

void GGS_typeNameFormalParameterNameList::method_last (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_lstring & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalParameterTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalParameterName ;
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

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::add_operation (const GGS_typeNameFormalParameterNameList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeNameFormalParameterNameList result ;
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

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::subList (const int32_t inStart,
                                                                                  const int32_t inLength,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_typeNameFormalParameterNameList result ;
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

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_typeNameFormalParameterNameList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeNameFormalParameterNameList::plusAssignOperation (const GGS_typeNameFormalParameterNameList inList,
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

void GGS_typeNameFormalParameterNameList::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalSelector = inOperand ;
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
  
GGS_lstring GGS_typeNameFormalParameterNameList::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalSelector ;
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

void GGS_typeNameFormalParameterNameList::setter_setMFormalParameterTypeNameAtIndex (GGS_lstring inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterTypeName = inOperand ;
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
  
GGS_lstring GGS_typeNameFormalParameterNameList::getter_mFormalParameterTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterTypeName ;
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

void GGS_typeNameFormalParameterNameList::setter_setMFormalParameterNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterName = inOperand ;
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
  
GGS_lstring GGS_typeNameFormalParameterNameList::getter_mFormalParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalParameterName ;
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
// Down Enumerator for @typeNameFormalParameterNameList
//--------------------------------------------------------------------------------------------------

DownEnumerator_typeNameFormalParameterNameList::DownEnumerator_typeNameFormalParameterNameList (const GGS_typeNameFormalParameterNameList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element DownEnumerator_typeNameFormalParameterNameList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typeNameFormalParameterNameList::current_mFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typeNameFormalParameterNameList::current_mFormalParameterTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typeNameFormalParameterNameList::current_mFormalParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @typeNameFormalParameterNameList
//--------------------------------------------------------------------------------------------------

UpEnumerator_typeNameFormalParameterNameList::UpEnumerator_typeNameFormalParameterNameList (const GGS_typeNameFormalParameterNameList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList_2E_element UpEnumerator_typeNameFormalParameterNameList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typeNameFormalParameterNameList::current_mFormalSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typeNameFormalParameterNameList::current_mFormalParameterTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typeNameFormalParameterNameList::current_mFormalParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalParameterName ;
}




//--------------------------------------------------------------------------------------------------
//     @typeNameFormalParameterNameList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ("typeNameFormalParameterNameList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeNameFormalParameterNameList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeNameFormalParameterNameList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeNameFormalParameterNameList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList GGS_typeNameFormalParameterNameList::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeNameFormalParameterNameList result ;
  const GGS_typeNameFormalParameterNameList * p = (const GGS_typeNameFormalParameterNameList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeNameFormalParameterNameList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@externTypeConstructorList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeConstructorList : public cCollectionElement {
  public: GGS_externTypeConstructorList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeConstructorList (const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeConstructorList (const GGS_externTypeConstructorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeConstructorList::cCollectionElement_externTypeConstructorList (const GGS_externTypeConstructorList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeConstructorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeConstructorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeConstructorList (mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externTypeConstructorList
//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList::GGS_externTypeConstructorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList::GGS_externTypeConstructorList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_externTypeConstructorList * p = (cCollectionElement_externTypeConstructorList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_externTypeConstructorList) ;
    const GGS_externTypeConstructorList_2E_element element (p->mObject.mProperty_mParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeConstructorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeConstructorList (in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externTypeConstructorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_externTypeConstructorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::description (String & ioString,
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
      ioString.appendString ("mParameterList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeConstructorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeConstructorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::plusPlusAssignOperation (const GGS_externTypeConstructorList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeConstructorList::class_func_listWithValue (const GGS_typeNameFormalParameterNameList & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_externTypeConstructorList_2E_element element (inOperand0) ;
  GGS_externTypeConstructorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::addAssignOperation (const GGS_typeNameFormalParameterNameList & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_externTypeConstructorList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::setter_append (const GGS_typeNameFormalParameterNameList inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_externTypeConstructorList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::setter_insertAtIndex (const GGS_typeNameFormalParameterNameList inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_externTypeConstructorList_2E_element newElement (inOperand0) ;
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

void GGS_externTypeConstructorList::setter_removeAtIndex (GGS_typeNameFormalParameterNameList & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterList ;
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

void GGS_externTypeConstructorList::setter_popFirst (GGS_typeNameFormalParameterNameList & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterList ;
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

void GGS_externTypeConstructorList::setter_popLast (GGS_typeNameFormalParameterNameList & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterList ;
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

void GGS_externTypeConstructorList::method_first (GGS_typeNameFormalParameterNameList & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterList ;
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

void GGS_externTypeConstructorList::method_last (GGS_typeNameFormalParameterNameList & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterList ;
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

GGS_externTypeConstructorList GGS_externTypeConstructorList::add_operation (const GGS_externTypeConstructorList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externTypeConstructorList result ;
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

GGS_externTypeConstructorList GGS_externTypeConstructorList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_externTypeConstructorList result ;
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

GGS_externTypeConstructorList GGS_externTypeConstructorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_externTypeConstructorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeConstructorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_externTypeConstructorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeConstructorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_externTypeConstructorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList::plusAssignOperation (const GGS_externTypeConstructorList inList,
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

void GGS_externTypeConstructorList::setter_setMParameterListAtIndex (GGS_typeNameFormalParameterNameList inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterList = inOperand ;
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
  
GGS_typeNameFormalParameterNameList GGS_externTypeConstructorList::getter_mParameterListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterList ;
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
// Down Enumerator for @externTypeConstructorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_externTypeConstructorList::DownEnumerator_externTypeConstructorList (const GGS_externTypeConstructorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element DownEnumerator_externTypeConstructorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList DownEnumerator_externTypeConstructorList::current_mParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @externTypeConstructorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_externTypeConstructorList::UpEnumerator_externTypeConstructorList (const GGS_externTypeConstructorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element UpEnumerator_externTypeConstructorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList UpEnumerator_externTypeConstructorList::current_mParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//     @externTypeConstructorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeConstructorList ("externTypeConstructorList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeConstructorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeConstructorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeConstructorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeConstructorList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_externTypeConstructorList result ;
  const GGS_externTypeConstructorList * p = (const GGS_externTypeConstructorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeConstructorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@externTypeGetterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externTypeGetterList : public cCollectionElement {
  public: GGS_externTypeGetterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_externTypeGetterList (const GGS_lstring & in_mGetterName,
                                                   const GGS_lstring & in_mResultTypeName,
                                                   const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externTypeGetterList (const GGS_externTypeGetterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GGS_lstring & in_mGetterName,
                                                                                  const GGS_lstring & in_mResultTypeName,
                                                                                  const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGetterName, in_mResultTypeName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externTypeGetterList::cCollectionElement_externTypeGetterList (const GGS_externTypeGetterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGetterName, inElement.mProperty_mResultTypeName, inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externTypeGetterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externTypeGetterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externTypeGetterList (mObject.mProperty_mGetterName, mObject.mProperty_mResultTypeName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externTypeGetterList
//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList::GGS_externTypeGetterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList::GGS_externTypeGetterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_externTypeGetterList * p = (cCollectionElement_externTypeGetterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_externTypeGetterList) ;
    const GGS_externTypeGetterList_2E_element element (p->mObject.mProperty_mGetterName, p->mObject.mProperty_mResultTypeName, p->mObject.mProperty_mParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_lstring & in_mGetterName,
                                                          const GGS_lstring & in_mResultTypeName,
                                                          const GGS_typeNameFormalParameterNameList & in_mParameterList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externTypeGetterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externTypeGetterList (in_mGetterName, in_mResultTypeName, in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externTypeGetterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_externTypeGetterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::description (String & ioString,
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
      ioString.appendString ("mGetterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGetterName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mResultTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mResultTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeGetterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeGetterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::plusPlusAssignOperation (const GGS_externTypeGetterList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeGetterList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                             const GGS_lstring & inOperand1,
                                                                             const GGS_typeNameFormalParameterNameList & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_externTypeGetterList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_externTypeGetterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::addAssignOperation (const GGS_lstring & inOperand0,
                                                   const GGS_lstring & inOperand1,
                                                   const GGS_typeNameFormalParameterNameList & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_externTypeGetterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::setter_append (const GGS_lstring inOperand0,
                                              const GGS_lstring inOperand1,
                                              const GGS_typeNameFormalParameterNameList inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_externTypeGetterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     const GGS_typeNameFormalParameterNameList inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_externTypeGetterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_externTypeGetterList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_typeNameFormalParameterNameList & outOperand2,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGetterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mResultTypeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mParameterList ;
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

void GGS_externTypeGetterList::setter_popFirst (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_typeNameFormalParameterNameList & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGetterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mResultTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameterList ;
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

void GGS_externTypeGetterList::setter_popLast (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               GGS_typeNameFormalParameterNameList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGetterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mResultTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameterList ;
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

void GGS_externTypeGetterList::method_first (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_typeNameFormalParameterNameList & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGetterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mResultTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameterList ;
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

void GGS_externTypeGetterList::method_last (GGS_lstring & outOperand0,
                                            GGS_lstring & outOperand1,
                                            GGS_typeNameFormalParameterNameList & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGetterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mResultTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameterList ;
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

GGS_externTypeGetterList GGS_externTypeGetterList::add_operation (const GGS_externTypeGetterList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externTypeGetterList result ;
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

GGS_externTypeGetterList GGS_externTypeGetterList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeGetterList result ;
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

GGS_externTypeGetterList GGS_externTypeGetterList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeGetterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeGetterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_externTypeGetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeGetterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_externTypeGetterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeGetterList::plusAssignOperation (const GGS_externTypeGetterList inList,
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

void GGS_externTypeGetterList::setter_setMGetterNameAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGetterName = inOperand ;
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
  
GGS_lstring GGS_externTypeGetterList::getter_mGetterNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGetterName ;
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

void GGS_externTypeGetterList::setter_setMResultTypeNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mResultTypeName = inOperand ;
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
  
GGS_lstring GGS_externTypeGetterList::getter_mResultTypeNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mResultTypeName ;
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

void GGS_externTypeGetterList::setter_setMParameterListAtIndex (GGS_typeNameFormalParameterNameList inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterList = inOperand ;
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
  
GGS_typeNameFormalParameterNameList GGS_externTypeGetterList::getter_mParameterListAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_typeNameFormalParameterNameList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterList ;
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
// Down Enumerator for @externTypeGetterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_externTypeGetterList::DownEnumerator_externTypeGetterList (const GGS_externTypeGetterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList_2E_element DownEnumerator_externTypeGetterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externTypeGetterList::current_mGetterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externTypeGetterList::current_mResultTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList DownEnumerator_externTypeGetterList::current_mParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @externTypeGetterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_externTypeGetterList::UpEnumerator_externTypeGetterList (const GGS_externTypeGetterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList_2E_element UpEnumerator_externTypeGetterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externTypeGetterList::current_mGetterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externTypeGetterList::current_mResultTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeNameFormalParameterNameList UpEnumerator_externTypeGetterList::current_mParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//     @externTypeGetterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeGetterList ("externTypeGetterList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeGetterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeGetterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeGetterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeGetterList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_externTypeGetterList result ;
  const GGS_externTypeGetterList * p = (const GGS_externTypeGetterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeGetterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

